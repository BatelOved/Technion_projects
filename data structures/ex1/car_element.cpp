#include "car_element.h"

CarElement::CarElement(int typeID, int numOfModels) :
        typeID_(typeID), numOfModels_(numOfModels), carSales_(new SaleElement *[numOfModels]),
        carModels_(new ModelElement*[numOfModels]),best_seller_(0)
{
   clear();
}

CarElement::~CarElement()
{
    if (carModels_) {
        for (int i = 0; i < numOfModels_; i++) {
            if (carSales_[i]) { delete carSales_[i]; }
            if (carModels_[i]) { delete carModels_[i]; }
        }
        delete[] carSales_;
        delete[] carModels_;
    }
}

bool CarElement::operator==(const CarElement &other) const
{
    if (this->typeID_ == other.typeID_)
        return true;
    return false;
}

bool CarElement::operator>(const CarElement &other) const
{
    return this->typeID_ > other.typeID_;
}

bool CarElement::operator<(const CarElement &other) const
{
    return this->typeID_ < other.typeID_;
}

SaleElement *CarElement::getBestSeller()
{
    return carSales_[best_seller_];
}

ModelElement *CarElement::getModel(int i)
{
    if (i > numOfModels_)
        return nullptr;
    return carModels_[i];
}

CarElement::CarElement(int typeID) : typeID_(typeID)
{
    carModels_ = nullptr;
}

void CarElement::connectModelElement(ModelElement *m, int index)
{
    this->carModels_[index] = m;
}

void CarElement::connectSaleElement(SaleElement *s, int index)
{
    this->carSales_[index] = s;
    if(this->carSales_[best_seller_] == nullptr)
    {
        best_seller_ = index;
    }
    else if (*s > *(this->carSales_[best_seller_]))
        best_seller_ = index;
}

void CarElement::clear()
{
    for (int i; i < this->numOfModels_; i++) {
        carSales_[i] = nullptr;
        carModels_[i] = nullptr;
    }
    best_seller_=0;
}


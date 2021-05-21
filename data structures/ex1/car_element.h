#ifndef CAR_ELEMENT_H
#define CAR_ELEMENT_H

#include "sale_element.h"
#include "model_element.h"

class CarElement {
public:
    SaleElement *carSales_;

    ModelElement **carModels_;

    CarElement(int typeID, int numOfModels);

    CarElement(int typeID) : typeID_(typeID)
    {}

    ~CarElement();

    int getTypeID() const
    { return typeID_; }

    int getNumOfModels() const
    { return numOfModels_; }

    bool operator>(const CarElement &other) const;

    bool operator<(const CarElement &other) const;

    bool operator==(const CarElement &other) const;

private:
    int typeID_;
    int numOfModels_;

};

CarElement::CarElement(int typeID, int numOfModels) :
        typeID_(typeID), numOfModels_(numOfModels), carSales_(nullptr), carModels_(new ModelElement *[numOfModels])
{
    for (int i; i < numOfModels; i++) {
        carModels_[i] = nullptr;
    }
}

CarElement::~CarElement()
{
    for (int i = 0; i < numOfModels_; i++)
        delete carModels_[i];
    delete[] carModels_;
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

#endif /* CAR_ELEMENT_H */
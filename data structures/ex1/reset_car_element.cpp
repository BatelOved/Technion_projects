#include "reset_car_element.h"

//to fix:the complexity should be O(numOfModels).
ResetCarElement::ResetCarElement(int typeID, int numOfModels) :
        typeID_(typeID), numOfModels_(numOfModels), resetModelsTree_(new AVLTree<ModelElement>)
{
        ModelElement** arr = new ModelElement*[numOfModels];
        for (int i = 0; i < numOfModels; i++) {
            arr[i] = new ModelElement(typeID, i);
        }
        this->resetModelsTree_->buildOrdered(arr,numOfModels);
        checkTree();

}

ResetCarElement::ResetCarElement():resetModelsTree_(new AVLTree<ModelElement>)
{

}


ResetCarElement::~ResetCarElement()
{
    delete this->resetModelsTree_;
}


bool ResetCarElement::operator==(const ResetCarElement &other) const
{
    if (this->typeID_ == other.typeID_)
        return true;
    return false;
}

bool ResetCarElement::operator>(const ResetCarElement &other) const
{
    return this->typeID_ > other.typeID_;
}

bool ResetCarElement::operator<(const ResetCarElement &other) const
{
    return this->typeID_ < other.typeID_;
}

int ResetCarElement::getCurrentNumOfModels()
{
    return this->resetModelsTree_->currentSize();
}

void ResetCarElement::checkTree()
{
    if(!this->resetModelsTree_->checkTree())
        cout<<"***************reset SUB tree NOT OK";
}

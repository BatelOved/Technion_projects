//
// Created by ASUS on 11/06/2021.
//
#include "CarElement.h"

CarElement::CarElement(int typeID):typeID_(typeID),sales_(0)
{}

bool CarElement::operator<(CarElement &element)
{
    return this->typeID_<element.typeID_;
}

bool CarElement::operator==(CarElement &element)
{
    return this->typeID_==element.typeID_;
}
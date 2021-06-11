//
// Created by ASUS on 11/06/2021.
//
#include "Car_Element.h"

Car_Element::Car_Element(int typeID): typeID_(typeID), sales_(0)
{}

bool Car_Element::operator<(Car_Element &element)
{
    return this->typeID_<element.typeID_;
}

bool Car_Element::operator==(Car_Element &element)
{
    return this->typeID_==element.typeID_;
}
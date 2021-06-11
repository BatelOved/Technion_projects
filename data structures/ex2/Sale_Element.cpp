//
// Created by ASUS on 11/06/2021.
//

#include "Sale_Element.h"
SaleElement::SaleElement(int typeID):typeID_(typeID),sales_(0)
{

}

bool SaleElement::operator<(SaleElement &element)
{
    return this->sales_<element.sales_;
}

bool SaleElement::operator==(SaleElement &element)
{
    return this->sales_==element.sales_;
}


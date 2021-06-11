#ifndef AGENCY_TYPE_H
#define AGENCY_TYPE_H

//#include "../ex1/AVL_tree.h"
#include "Car_Element.h"
#include "Rank_Tree.h"
#include "Sale_Element.h"

class Agency {
public:
    Agency() = default;

    ~Agency() = default;

    void sellCar(int carType, int amount);


    RankTree<SaleElement> *sales_;

    RankTree<CarElement> *cars_;
};




#endif /* AGENCY_TYPE_H */
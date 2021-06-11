#ifndef CAR_AGENCIES_MANAGER_H
#define CAR_AGENCIES_MANAGER_H

#include "library2.h"
#include "union_find.h"
#include "AgencyType.h"

class CarAgenciesManager {
public:
    CarAgenciesManager();

    StatusType AddAgency();

    StatusType SellCar(int agencyID, int typeID, int k);

    StatusType UniteAgencies(int agencyID1, int agencyID2);

    StatusType GetIthSoldType(int agencyID, int i, int *res);

    ~CarAgenciesManager();

    class UniteAgenciesFunc {
    public:
        AgencyType *operator()(AgencyType &a, AgencyType &b);
    };

private:
    UnionFind<AgencyType> *agencies_;

    void merge(CarElement *a, int na, CarElement *b, int nb, CarElement *c);
};

CarAgenciesManager::CarAgenciesManager()
{
    agencies_ = new UnionFind<AgencyType>;
}

StatusType CarAgenciesManager::AddAgency()
{
    //todo: add try catch for memory leaks
    auto na = new AgencyType();
    agencies_->makeSet(na);
    return SUCCESS;
}

StatusType CarAgenciesManager::SellCar(int agencyID, int typeID, int k)
{
    if (agencies_->findIdentifier(agencyID) == agencies_->NO_PARENT) {
        return FAILURE;
    }
    AgencyType &agency = agencies_->findElement(agencyID);
    agency.sellCar(typeID, k);
    return SUCCESS;

}

StatusType CarAgenciesManager::UniteAgencies(int agencyID1, int agencyID2)
{
    agencies_->Union(agencyID1, agencyID2, UniteAgenciesFunc());
    return FAILURE;
}

StatusType CarAgenciesManager::GetIthSoldType(int agencyID, int i, int *res)
{
    return FAILURE;
}

CarAgenciesManager::~CarAgenciesManager()
{
    delete agencies_;
}


//////////////////////////////  Unite class
AgencyType *CarAgenciesManager::UniteAgenciesFunc::operator()(AgencyType &a, AgencyType &b)
{
    //todo: unite the 2 trees
    return new AgencyType();
}
void CarAgenciesManager::merge(CarElement a[], int na, CarElement b[], int nb, CarElement c[])
{
    int ia, ib, ic;
    for (ia = ib = ic = 0; (ia < na) && (ib < nb); ic++) {
        if (a[ia] < b[ib]) {
            c[ic] = a[ia];
            ia++;
        } else {
            c[ic] = b[ib];
            ib++;
        }
    }
    for (; ia < na; ia++, ic++) c[ic] = a[ia];
    for (; ib < nb; ib++, ic++) c[ic] = b[ib];
}
#endif /* CAR_AGENCIES_MANAGER_H */

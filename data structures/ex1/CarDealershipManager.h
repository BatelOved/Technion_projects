#ifndef CAR_DEALERSHIP_MANAGER_H
#define CAR_DEALERSHIP_MANAGER_H

#include "AVL_tree.h"
#include "car_element.h"
#include "reset_car_element.h"
#include "sale_element.h"
#include "model_element.h"
#include "library.h"

class CarDealershipManager {
public:
    CarDealershipManager();

    StatusType AddCarType(int typeID, int numOfModels);

    StatusType RemoveCarType(int typeID);

    StatusType SellCar(int typeID, int modelID);

    StatusType MakeComplaint(int typeID, int modelID, int t);

    StatusType GetBestSellerModelByType(int typeID, int * modelID);

    StatusType GetWorstModels(int numOfModels, int *types, int *models);

    void Quit();

private:
    AVLTree<ResetCarElement> resetCarsTree_;
    AVLTree<CarElement> carsTree_;
    AVLTree<ModelElement> modelsTree_;
    AVLTree<SaleElement> salesTree_;
    SaleElement* maxSales;
};

CarDealershipManager::CarDealershipManager():
    resetCarsTree_(), carsTree_(), modelsTree_(), salesTree_(), maxSales(NULL) {}

//toDo: null check
StatusType CarDealershipManager::AddCarType(int typeID, int numOfModels) {
    if (numOfModels <= 0 || typeID <= 0)
        return INVALID_INPUT;
    CarElement* carElement = new CarElement(typeID, numOfModels);
    if (carsTree_.find(*carElement) != NULL) {
        delete carElement;
        return FAILURE;
    }
    SaleElement* saleElement = new SaleElement(typeID);
    salesTree_.insert(*saleElement);
    carElement->carSales_ = saleElement;
    carsTree_.insert(*carElement);
    resetCarsTree_.insert(*(new ResetCarElement(typeID, numOfModels)));

    return SUCCESS;
}

StatusType CarDealershipManager::RemoveCarType(int typeID) {
    if (typeID <= 0)
        return INVALID_INPUT;
    CarElement* toDelete = carsTree_.find(CarElement(typeID));
    if (!toDelete)
        return FAILURE;
    resetCarsTree_.remove(ResetCarElement(typeID));
    salesTree_.remove(*(toDelete->carSales_));
    ModelElement** carModels = toDelete->getCarModels();
    for (int i = 0; i < toDelete->getNumOfModels(); i++) {
        if (carModels[i])
            modelsTree_.remove(*(carModels[i]));
    }
    carsTree_.remove(*toDelete);
    maxSales = salesTree_.findMax();
    
    return SUCCESS;
}

//toDo
StatusType CarDealershipManager::SellCar(int typeID, int modelID) {
    if (typeID <= 0 || modelID < 0)
        return INVALID_INPUT;
    //...
    return SUCCESS;
}

//toDo
StatusType CarDealershipManager::MakeComplaint(int typeID, int modelID, int t) {
    if (typeID <= 0 || modelID < 0)
        return INVALID_INPUT;
    //...
    return SUCCESS;
}

//toDo
StatusType CarDealershipManager::GetBestSellerModelByType(int typeID, int * modelID) {
    if (typeID < 0)
        return INVALID_INPUT;
    //...
    return SUCCESS;
}

//toDo
StatusType CarDealershipManager::GetWorstModels(int numOfModels, int *types, int *models) {
    if (numOfModels <= 0) {
        return INVALID_INPUT;
    }
    //...
    return SUCCESS;
}

//toDo
void CarDealershipManager::Quit() {
    //...
}

#endif /* CAR_DEALERSHIP_MANAGER_H */
#include "library.h"
#include "CarDealershipManager.h"

void *Init()
{
    CarDealershipManager *DS = new CarDealershipManager();
    return DS;
}

StatusType AddCarType(void *DS, int typeID, int numOfModels)
{
    if (!DS || numOfModels <= 0 || typeID <= 0) {
        return INVALID_INPUT;
    }
    return ((CarDealershipManager *) DS)->AddCarType(typeID, numOfModels);
}

StatusType RemoveCarType(void *DS, int typeID)
{
    if (!DS || typeID <= 0) {
        return INVALID_INPUT;
    }
    return ((CarDealershipManager *) DS)->RemoveCarType(typeID);
}

StatusType SellCar(void *DS, int typeID, int modelID)
{
    if (!DS || typeID <= 0 || modelID < 0) {
        return INVALID_INPUT;
    }
    auto CD =*((CarDealershipManager *) DS);
    return CD.SellCar(typeID, modelID);
}

//todo :is t between 0-12? if so: to add check
StatusType MakeComplaint(void *DS, int typeID, int modelID, int t)
{
    if (!DS || typeID <= 0 || modelID < 0) {
        return INVALID_INPUT;
    }
    return ((CarDealershipManager *) DS)->MakeComplaint(typeID, modelID, t);
}

StatusType GetBestSellerModelByType(void *DS, int typeID, int *modelID)
{
    if (!DS || typeID < 0) {
        return INVALID_INPUT;
    }
    return ((CarDealershipManager *) DS)->GetBestSellerModelByType(typeID, modelID);
}

StatusType GetWorstModels(void *DS, int numOfModels, int *types, int *models)
{
    if (!DS || numOfModels <= 0) {
        return INVALID_INPUT;
    }
    return ((CarDealershipManager *) DS)->GetWorstModels(numOfModels, types, models);
}

void Quit(void **DS)
{
    CarDealershipManager *r = (CarDealershipManager *) DS;
    delete r;
}


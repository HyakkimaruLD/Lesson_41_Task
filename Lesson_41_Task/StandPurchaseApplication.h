#pragma once
#include <string>
#include "Car.h"

class StandPurchaseApplication {
private:
    string customerName;
    Car car;
    int quantity;

public:
    StandPurchaseApplication(const string& customerName, const Car& car, int quantity);

    double calculateOrderCost() const;

    string getCustomerName() const;
    string getCarModel() const;
    int getQuantity() const;
    double getPricePerUnit() const;

};
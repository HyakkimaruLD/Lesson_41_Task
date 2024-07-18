#include "StandPurchaseApplication.h"

StandPurchaseApplication::StandPurchaseApplication(const std::string& customerName, const Car& car, int quantity)
    : customerName(customerName), car(car), quantity(quantity) {}

double StandPurchaseApplication::calculateOrderCost() const {
    return quantity * car.getPrice();
}

string StandPurchaseApplication::getCustomerName() const {
    return customerName;
}

string StandPurchaseApplication::getCarModel() const {
    return car.getBrand();
}

int StandPurchaseApplication::getQuantity() const {
    return quantity;
}

double StandPurchaseApplication::getPricePerUnit() const {
    return car.getPrice();
}
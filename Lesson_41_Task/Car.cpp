#include "Car.h"

Car::Car(const string& brand, int maxPassengers, double price, int stockQuantity, bool availability) 
    : brand(brand), maxPassengers(maxPassengers), price(price), stockQuantity(stockQuantity), availability(availability)
{

}

void Car::setBrand(string& brand)
{
    this->brand = brand;
}

void Car::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

void Car::setPrice(double price)
{
    this->price = price;
}

void Car::setStockQuantity(int stockQuantity)
{
    this->stockQuantity = stockQuantity;
}

void Car::setAvailability(bool availability)
{
    this->availability = availability;
}

string Car::getBrand() const
{
    return brand;
}

int Car::getMaxPassengers() const
{
    return maxPassengers;
}

double Car::getPrice() const
{
    return price;
}

int Car::getStockQuantity() const
{
    return stockQuantity;
}

bool Car::getAvailability() const
{
    return availability;
}

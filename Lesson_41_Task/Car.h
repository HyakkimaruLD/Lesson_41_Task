#pragma once
#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    int maxPassengers;
    double price;
    int stockQuantity;
    bool availability;
public:
    Car(const string& brand, int maxPassengers, double price, int stockQuantity, bool availability);

    void setBrand(string& brand);
    void setMaxPassengers(int maxPassengers);
    void setPrice(double price);
    void setStockQuantity(int stockQuantity);
    void setAvailability(bool availability);

    string getBrand() const;
    int getMaxPassengers() const;
    double getPrice() const;
    int getStockQuantity() const;
    bool getAvailability() const;

    void showInfo()const;

};

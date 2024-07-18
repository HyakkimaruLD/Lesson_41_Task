#pragma once
#include <string>
#include <vector>
#include "Car.h"
#include "Application.h"
using namespace std;


class Dealership {

private:
    string name;
    vector<Car> cars;
    vector<Application*> applications;

public:
    Dealership();
    Dealership(const string& name);

    string getName() const;
    void setName(const string& name);


    void addCar(const Car& car);
    void removeCar(const string& model);
    Car* findCar(const string& model);


    void addApplication(Application* application);
    void removeApplication(const std::string& customerName);
    Application* findApplication(const std::string& customerName);
    void editApplication(const std::string& customerName, const std::string& newPhoneNumber);



};

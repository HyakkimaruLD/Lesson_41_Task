#pragma once
#include <string>
#include <vector>
#include "Car.h"
using namespace std;


class Dealership {

private:
    string name;
    vector<Car> cars;
    vector<Application> applications;

public:
    Dealership();
    Dealership(const string& name);

    string getName() const;
    void setName(const string& name);


    void addCar(const Car& car);
    void removeCar(const string& model);
    Car* findCar(const string& model);


    void addApplication(const Application& application);
    void removeApplication(const string& applicantName);
    Application* findApplication(const string& applicantName);
    void editApplication(const string& applicantName, const string& newStatus);


};

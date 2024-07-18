#include "Dealership.h"

Dealership::Dealership()
{
	name = "undefind";
}

Dealership::Dealership(const string& name) : name(name) {}

string Dealership::getName() const { return name; }
void Dealership::setName(const string& name) { this->name = name; }

void Dealership::addCar(const Car& car) {
    cars.push_back(car);
}

void Dealership::removeCar(const string& model) {
    cars.erase(remove_if(cars.begin(), cars.end(), [&](const Car& car) 
        {
        return car.getBrand() == model;
        }), cars.end());
}

Car* Dealership::findCar(const string& model) {
    for (auto& car : cars)
    {
        if (car.getBrand() == model)
        {
            return &car;
        }
    }
    return nullptr;
}

void Dealership::addApplication(Application* application) {
    applications.push_back(application);
}

void Dealership::removeApplication(const string& customerName) {
    applications.erase(std::remove_if(applications.begin(), applications.end(), [&](Application* app) 
        {
        return app->getCustomerName() == customerName;
        }), applications.end());
}

Application* Dealership::findApplication(const string& customerName) {
    for (auto app : applications) 
    {
        if (app->getCustomerName() == customerName) 
        {
            return app;
        }
    }
    return nullptr;
}

void Dealership::editApplication(const string& customerName, const string& newPhoneNumber) {
    Application* app = findApplication(customerName);
    if (app != nullptr) 
    {
        app->setPhoneNumber(newPhoneNumber);
    }
}
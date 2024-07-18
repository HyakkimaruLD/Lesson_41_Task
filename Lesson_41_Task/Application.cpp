#include "Application.h"

Application::Application()
{

	customerName = "undefined";
	phoneNumber = "undefined";

}

Application::Application(string customerName, string phoneNumber)
{


	this->customerName = customerName;
	this->phoneNumber = phoneNumber;

}

void Application::setCustomerName(string customerName)
{


	this->customerName = customerName;


}

void Application::setPhoneNumber(string phoneNumber)
{

	this->phoneNumber = phoneNumber;

}

string Application::getCustomerName() const
{
	return customerName;
}

string Application::getPhoneNumber() const
{
	return phoneNumber;
}

void Application::addCar(Car obj)
{
	cars.push_back(obj);
}

void Application::removeCar(string name)
{
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getBrand() == name) {
			cars.erase(cars.begin() + i);
			break;
		}
	}
}

void Application::findCar(string name)
{
	for (int i = 0; i < cars.size(); i++) {
		if (cars[i].getBrand() == name) {
			cars[i].showInfo();
		}
	}
}
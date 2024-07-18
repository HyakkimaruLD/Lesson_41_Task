#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Application
{
protected:
	string customerName;
	string phoneNumber;
	vector<Car> cars;
public:
	Application();
	Application(string customerName, string phoneNumber);

	void setCustomerName(string customerName);
	void setPhoneNumber(string phoneNumber);

	string getCustomerName()const;
	string getPhoneNumber()const;

	void addCar(Car obj);
	void removeCar(string name);
	void findCar(string name);

	virtual double
		virtual void showInfo()const = 0;
};


#pragma once
#include <iostream>
#include <string>
#include <exception>
using std::cout;
using std::endl;
using std::string;
using std::exception;

class StoreException : public exception {
public:
	StoreException() : exception("") {}
	virtual char const* what() const = 0;
};

class AmountCarsException : public StoreException {
public:
	char const* what()const override {
		return "Car list is empty\n";
	}
};

class NameException : public StoreException {
public:
	char const* what()const override {
		return "Name is empty\n";
	}
};
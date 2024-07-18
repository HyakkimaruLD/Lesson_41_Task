#include "DelayedPurchaseApplication.h"

DelayedPurchaseApplication::DelayedPurchaseApplication(const string& customerName, const string& phoneNumber, double discountPrecentage)
	: Application(customerName, phoneNumber), discountPrecentage(discountPrecentage)
{
}

void DelayedPurchaseApplication::setDiscountPercentage(double discountPercentage)
{
	this->discountPrecentage = discountPercentage;
}

double DelayedPurchaseApplication::getDiscountPercentage() const
{
	return discountPrecentage;
}

double DelayedPurchaseApplication::calcPrice() const
{
	double totalCost = 0;
	for (const auto& car : getCars()) {
		totalCost += car.getPrice();
	}
	return totalCost * (1 - discountPrecentage / 100);
}

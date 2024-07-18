#pragma once
#include "Application.h"

class DelayedPurchaseApplication : public Application
{
private:
	double discountPrecentage;

public:
	DelayedPurchaseApplication(const string& customerName, const string& phoneNumber, double discountPrecentage);

	void setDiscountPercentage(double discountPercentage);
	double getDiscountPercentage() const;

	double calcPrice() const override;

};


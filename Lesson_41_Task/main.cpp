#include <iostream>
#include "Application.h"
#include "Car.h"
#include "Dealership.h"
#include "DelayedPurchaseApplication.h"
#include "StandPurchaseApplication.h"
using namespace std;

int main()
{
	Dealership dealership("Mercedes Dealer");

	Car aClass("Mercedes-Benz A-Class", 5, 35000.0, 15, true);
	Car eClass("Mercedes-Benz E-Class", 5, 54000.0, 8, true);
	Car sClass("Mercedes-Benz S-Class", 5, 94000.0, 5, true);

	dealership.addCar(aClass);
	dealership.addCar(eClass);
	dealership.addCar(sClass);




}

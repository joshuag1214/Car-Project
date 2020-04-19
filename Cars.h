#include <string>
#include <iostream>
using namespace std;

#ifndef CARS_H
#define CARS_H

class Car
	{
		public:
			Car();
			//~Car();
			void setInfo(string, string, string, int, int, int, int, double, double);
			virtual void printInfo() = 0;
			double getPrice()
				{
					return vehiclePrice;
				}
			string getVehicleType();
	
		protected:
			string vehicleType, vehicleMake, vehicleModel;
			int vehicleYear, engineCylinders, vehicleSeats, transmissionGears;
			double milesPerGallon, vehiclePrice;
	};

Car::Car()
	{
		setInfo("", "", "", 0, 0, 0, 0, 0.0, 0.0);
	}
	
void Car::setInfo(string type, string make, string model, int year, int cylinders, int seats, int gears, double mpg, double price)
	{
		vehicleType = type;
		vehicleMake = make;
		vehicleModel = model;
		vehicleYear = year;
		engineCylinders = cylinders;
		vehicleSeats = seats;
		transmissionGears = gears;
		milesPerGallon = mpg;
		vehiclePrice = price;
	}
	
//double Car::getPrice()
//	{
//		return vehiclePrice;
//	}
	
string Car::getVehicleType()
	{
		return vehicleType;
	}
	
#endif

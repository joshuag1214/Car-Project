//Car.h 
#include<string>
#include <iostream>
using namespace std;
#ifndef CAR_H
#define CAR_H
class Car {
	public:
		Car();
		~Car();
		void setInfo(string,string,string,string,string,string);

	protected:
		string make, model,cylinders,mpg,seats,gears;
};
#endif

void Car:setInfo(string ma, string mo,string cy, string mp, string se, string ge){
	make=ma;
	model=mo;
	cylinders=cy;
	mpg=mp;
	seats=se;
	gears=ge;
}
Car::Car(){      
	make="";
	model="";
	cylinders="";
	mpg="";
	seats="";
	gears="";
}

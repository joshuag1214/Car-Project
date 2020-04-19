#include <string>
#include <iostream>
#include <fstream>
#include "Cars.h"
#include "CarTypes.h"

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------
int menu();
void menu_Selection(int*, Car* *cars, int*);
void import_Cars(int*, Car* *cars, int*);
void add_Cars(int*, Car* *cars, int*);
void view_Cars(int*, Car* *cars, int*);
void search_Cars(int*, Car* *cars, int*);

int main()
	{
		int size = 100;
		Car *cars[size];
		cars[0] = new Truck("Truck", "Toyota", "Tacoma", 2020, 6, 5, 6, 18.8, 36599, 33.5, 6800, 6.5);
		cars[1] = new Performance("Performance", "Porsche", "911", 2020, 6, 2, 8, 20.5, 85999, 3.5, 2700, "RWD");
		cars[2] = new Sedan("Sedan", "Toyota", "Avalon", 2020, 4, 5, 8, 32.5, 29689, "Cloth", "No", 23);	
		cars[3] = new Luxury("Luxury", "Lexus", "LX 570", 2020, 8, 8, 8, 13.5, 92775, "No", "Yes", "CarPlay");
		/*            
		string data;
		for(int i=0;i<100;i++){
			data = cars[i] -> getVehicleType();
			cout << "Vehicle type: " << data;
	}
		*/
		ofstream carlist;
		carlist.open("Car-List.txt");
		string data;
		//data = cars[1] -> getVehicleType();
		//carlist << data;
		/*
		for(int i=0;i<4;i++){
			data = cars[i] -> getVehicleMake();
			carlist << data;
			data = cars[i] -> getVehicleType();
			carlist << data;
			data = cars[i] -> getVehicleModel();
			carlist << data;
			data = cars[i] -> getVehicleYear();
			carlist << data;
			data = cars[i] -> getEngineCylinders();
			carlist << data;
			data = cars[i] -> getVehicleSeats();
			carlist << data;
			data = cars[i] -> getTransmissionGears();
			carlist << data;
			data = cars[i] -> getVehicleType();
			carlist << data;
			data = cars[i] -> getVehiclePrice();
			carlist << data;
			
			carlist << "\n";
		}
		
		carlist.close();
		*/
			
		//Get Car Price (Can be used for looking up by budget)
		//cout << "First Car's price is: " << cars[0] -> getPrice() << endl;
		
		//Get Car Type (Can be used for searching by car type)
		//cout << "First Car's type is: " << cars[0] -> getVehicleType() << endl;
		
		
		int count = 4;
		//int size = 100;
		//Car *cars[size];
		//menu_Selection(&size, &*cars, &count);
		return 0;
	}
	
	
int menu(){
	int choice;
	cout << "\t\tMenu\n"
		 << "\t\t------------------\n"
		 << "\t\t1. Add Cars\n"
		 << "\t\t2. View All Cars\n"
		 << "\t\t3. Search For Cars\n"
		 << "\t\t4. Quit\n"
		 << "\t\tChoose An Option: ";
	cin >> choice;
	return choice;
}
		
void menu_Selection(int* size, Car* *cars, int* count){
	int choice;
	do{
		choice = menu();
		switch(choice){
			case 1: {
				add_Cars(size, &*cars, count);
				system("CLS");
				break;
			}
			case 2: {
				view_Cars(size, &*cars, count);
				system("PAUSE");
				system("CLS");
				break;
			}
			case 3: {
				search_Cars(size, &*cars, count);
				system("CLS");
				break;
			}
			case 4: {
				system("CLS");
				cout << "\nGoodbye!\n";
				system("PAUSE");
				break;
			}
			default: {
				cout << "Invalid Choice.\n";
				system("PAUSE");
				system("CLS");
				break;
			}
		}
	}while(choice != 4);
}	

void import_Cars(){
	
}

void add_Cars(int* size, Car* *cars, int* count){
	
}

void view_Cars(int* size, Car* *cars, int* count){
	for(int i = 0; i < *count; i++)
			{
				cars[i] -> printInfo();
				cout << endl;
			}
}

void search_Cars(int* size, Car* *cars, int* count){
	
}







	

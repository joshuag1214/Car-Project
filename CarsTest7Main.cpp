#include <string>
#include <iostream>
#include "Cars.h"
#include "CarTypes.h"

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------
int menu();
void menu_Selection();
void add_Cars();
void view_Cars();
void search_Cars();

int main()
	{
		
		int size = 4;
		Car* carPTR[size];
		
		carPTR[0] = new Truck("Truck", "Toyota", "Tacoma", 2020, 6, 5, 6, 18.8, 36599, 33.5, 6800, 6.5);
		carPTR[1] = new Performance("Performance", "Porsche", "911", 2020, 6, 2, 8, 20.5, 85999, 3.5, 2700, "RWD");
		carPTR[2] = new Sedan("Sedan", "Toyota", "Avalon", 2020, 4, 5, 8, 32.5, 29689, "Cloth", "No", 23);	
		carPTR[3] = new Luxury("Luxury", "Lexus", "LX 570", 2020, 8, 8, 8, 13.5, 92775, "No", "Yes", "CarPlay");
		
		for(int i = 0; i < size; i++)
			{
				carPTR[i] -> printInfo();
				cout << endl;
			}
			
		//Get Car Price (Can be used for looking up by budget)
		cout << "First Car's price is: " << carPTR[0] -> getPrice() << endl;
		
		//Get Car Type (Can be used for searching by car type)
		cout << "First Car's type is: " << carPTR[0] -> getVehicleType() << endl;
		
		
		menu_Selection();
		
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
		
void menu_Selection(){
	int choice;
	do{
		choice = menu();
		switch(choice){
			case 1: {
				add_Cars();
				system("CLS");
				break;
			}
			case 2: {
				view_Cars();
				system("CLS");
				break;
			}
			case 3: {
				search_Cars();
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

void add_Cars(){
	
}

void view_Cars(){
	
}

void search_Cars(){
	
}







	

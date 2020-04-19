//Cartype.h
#include"Car.h"
#ifndef Cartype_H
#define Cartype_H
class Truck: public Car
	{      
	private: 
		string tire_size,bed_size,towing_capacity;
	public:        
		void setTruck(string,string,string);
		Truck();        
		~Truck(); 
};

class Performance: public Car
	{      
	private:            
		string 060time,curb_weight,drivetrain_type;
	public:        
		void setPerformance(string,string,string);
		Performance();        
		~Performance(); 
};

class Sedan: public Car
	{      
	private:            
		string seat_material,hybrid, trunk_capacity;
	public:        
		void setSedan(string,string,string);
		Sedan();        
		~Sedan(); 
};
class Luxury: public Car
	{      
	private:            
		string self_driving,wifi,carplay_android_auto;
	public:        
		void setLuxury(string,string,string);
		Luxury();        
		~Luxury(); 
};
#endif
Truck::Truck(){      
	tire_size= "";      
	bed_size= "";      
	towing_capacity= "";
}

Truck::Truckset(string ti,string be,string to){      
	   
	tire_size= ti;   
	bed_size= be;      
	towing_capacity= to;
}

Performance::Performance(){      
	060time= "";      
	curb_weight= "";      
	drivetrain_type= ";
}

Performance::Performanceset(string zero6,string cu,string dr){      
	zero60time= zero6;      
	curb_weight= cu;      
	drivetrain_type= dr;
}

Sedan::Sedan(){      
	seat_material= "";      
	hybrid= "";      
	trunk_capacity= "";
}
Sedan::Sedanset(string se,string hy,string tr){      
	seat_material= se;      
	hybrid= hy;      
	trunk_capacity= tr;
}

Luxury::Luxury(){      
	self_driving= "";      
	wifi= "";      
	carplay_android_auto= "";
}

Luxury::Luxuryset(string se,string wi,string ca){      
	self_driving= se;      
	wifi= wi;      
	carplay_android_auto= ca;
}

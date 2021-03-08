#include "Bus.h"
#include <iostream>
using namespace std;

int  Bus::GetNumber_of_passenger_seats() const { return Number_of_passenger_seats; }
void Bus::SetNumber_of_passenger_seats(int  value) { Number_of_passenger_seats = value; }

void Bus::Init(int  Number_of_passenger_seats, Bus::Car car)
{
	SetCar(car);
	SetNumber_of_passenger_seats(Number_of_passenger_seats);
}
void Bus::Display()
{
	cout << "\nCar: " << endl;
	car.Display();
	cout << "Number_of_passenger_seats = " << Number_of_passenger_seats << endl;
}
void Bus::Read()
{
	int  Number_of_passenger_seats;
	Bus::Car car;
	cout << endl;
	cout << "Car = ? " << endl;
	car.Read();
	cout << "Number_of_passenger_seats = ?"; cin >> Number_of_passenger_seats;
	Init(Number_of_passenger_seats, car);
}
void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}
void  Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}
void  Bus::Car::Re_assignment_Brand()
{
	string n;
	cout << "re-enter Brand" << endl;
	cin >> n;
	Brand = n;
}
void  Bus::Car::Change_Brand()
{
	cout << "change Brand" << endl;
	cin >> Brand;
}
void Bus::Re_assignment()
{
	car.Re_assignment_Brand();
	car.Re_assignment_Power();
	Re_assignment_Number_of_passenger_seats();
}
void Bus::Change()
{
	car.Change_Brand();
	car.Change_Power();
	Change_Number_of_passenger_seats();
}
void Bus::Car::Init(string Brand, int  Number_of_cylinders, int  Power)
{

	SetNumber_of_cylinders(Number_of_cylinders);
	SetPower(Power);

}


void Bus::Car::Read()
{
	cout << "Brand  =  "; cin >> Brand;
	cout << "Number_of_cylinders =  "; cin >> Number_of_cylinders;
	cout << "Power =  "; cin >> Power;
}

void Bus::Car::Display()
{
	cout << "Brand  = " << Brand << endl;
	cout << "Number_of_cylinders = " << Number_of_cylinders << endl;
	cout << "Power =  " << Power << endl;
}
void Bus::Car::Re_assignment_Power()
{
	int n;
	cout << "re-enter power" << endl;
	cin >> n;
	Power = n;
}
void  Bus::Car::Change_Power()
{
	cout << "change power" << endl;
	cin >> Power;
}

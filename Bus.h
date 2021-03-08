#pragma once
#include <string>
class Bus
{
private:
	double Number_of_passenger_seats;
	class Car
	{
	private:
		std::string Brand;
		int Number_of_cylinders;
		int  Power;
	public:

		std::string GetBrand() const { return Brand; };

		int  GetNumber_of_cylinders() const { return Number_of_cylinders; };

		int  GetPower() const { return Power; };

		void SetBrand(std::string Brand) {};

		void SetNumber_of_cylinders(int  Number_of_cylinders) {};

		void SetPower(int  Power) {};

		void Init(std::string Brand, int  Number_of_cylinders, int  Power);
		void Display();
		void Read();

		void  Re_assignment_Power();
		void  Change_Power();
		void  Re_assignment_Brand();
		void  Change_Brand();
	};
	Car car;
public:
	Bus::Car GetCar() { return car; };
	int GetNumber_of_passenger_seats() const;

	void SetNumber_of_passenger_seats(int value);
	void SetCar(Car car) { this->car = car; };

	void Init(int  Number_of_passenger_seats, Car car);
	void Display();
	void Read();

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();
	void  Re_assignment();
	void  Change();
};


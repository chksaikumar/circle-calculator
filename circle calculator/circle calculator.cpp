#include <iostream>
using namespace std;

void display_title();
double calculate_dia(double radius);
double cal_cir(double diameter);
double cal_Area(double area, double radius);
/* {
	double mpg = miles / gallons;
	return mpg;
}*/

int main()
{
	display_title();
	double radius;
	cout << "Enter radius: ";
	cin >> radius;
/*	double gallons;
	cout << "Enter gallons of gas used: ";
	cin >> gallons;*/
	double dia = calculate_dia(radius);

	cout << "Diameter: " << dia << endl;

	double circum = cal_cir(dia);
	cout << "Circumference : " << circum << endl;
	double ar = cal_Area(radius);
}

void display_title()
{
	cout << "Circle Calculator \n\n";

}

double calculate_dia(double radius)
{
	double dia = radius * 2;
	return dia;

	
}

double cal_cir(double dia)
{
	double circum = dia * 3.14159;
	return circum;
}

double cal_Area( double radius )
{
	double ar = 3.14159 * radius * radius;
	return ar
}
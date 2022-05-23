#include<iostream>
#include<cmath>
#include<fstream>
#include<stdlib.h>


using namespace std;

double R = 0;
double R1 = 0;
long double k = 1.38 * pow(10, -23);
long double h = 6.62 * pow(10, -34);
double c = 3 * pow(10, 8);
double sigma = 5.67 * pow(10, -8);
double b = 2.898 * pow(10, -3);
double lyambda = 0;


int main() {

	ofstream File("Rezultati_vichisleniy.xls");


	for (int i = 100; i < 600; i++)
	{

		lyambda = b / i;

		File << lyambda <<"\t"; File << i << endl;



	}
	File.close();


	return 1;
}
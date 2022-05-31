#include<iostream>
#include<cmath>
#include<fstream>
#include<stdlib.h>


using namespace std;

double R = 0.0;
double R1 = 0.0;
long double k = 1.38 * pow(10, -23);
long double h = 6.62 * pow(10, -34);
double c = 3.0 * pow(10, 8);
double sigma = 5.67 * pow(10, -8);
double b = 2.898 * pow(10, -3);
double lyambda = 0.0;
double x = 0.0;

int main() {
	for (double i = 0.0; i < 100.0; i+= 0.00001)
	{
		if (   ( (i * exp(i)) 
			/ 
			(exp(i) - 1.0) ) 
			- 5.0 < 0.00001 && ((i * exp(i))
				/
				(exp(i) - 1.0))
			- 5.0 >= 0) {
			x = i;
			printf("%f ", x);
			cout << endl;
			break;
		}
	}


	ofstream File("Rezultati_vichisleniy.xls");


	for (int i = 100; i < 600; i++)
	{

		lyambda = (h * c / x / k / i);

		File << lyambda <<"\t"; File << i << endl;



	}
	File.close();


	return 1;
}
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

double f(double l) {
	double k = l * exp(l);
	double j = exp(l) - 1.0;
	
	return ((k/j) - 5.0);
}

double aa = 0.00001, bb = 100.0, cc = 0.0;

int main() {
	while ((fabs(bb - aa)) > 0.00001)
	{
		cc = (aa + bb) / 2;
		if (f(aa) * f(cc) < 0.0) {
			bb = cc;
		}
		else {
			aa = cc;
		}
	}
	printf("%f ", cc);
	cout << endl;
	ofstream File("Rezultati_vichisleniy.xls");

	for (int i = 100; i < 600; i++)
	{
		lyambda = (h * c / x / k / i);
		File << lyambda << "\t"; File << i << endl;
	}
	File.close();
	return 1;
}
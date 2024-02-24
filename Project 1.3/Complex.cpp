#include <iostream>
#include <cmath>
#include <string>    
#include <sstream>  
#include "Complex.h"

using namespace std;

void Complex::Display() const
{
	cout << endl;
	cout << " Re = " << GetRe() << endl;
	cout << " Im = " << GetIm() << endl;
}
void Complex::Init(double x, double y)
{
	SetRe(x);
	SetIm(y);
}
void Complex::Read()
{
	double x, y;
	cout << "Input complex value:" << endl;
	cout << " Re = "; cin >> x;
	cout << " Im = "; cin >> y;
	Init(x, y);
}
const string Complex::toString() const
{
	stringstream sout;
	sout << re << " + i * " << im;
	return sout.str();
}
Complex Complex::sub(Complex one, Complex two)
{
	Complex result;
	result.re = one.re - two.re;
	result.im = one.im - two.im;
	return result;
}
Complex Complex::div(Complex one, Complex two)
{
	Complex result;
	result.re = (one.re * two.re + one.im * two.im) / (pow(two.re, 2) + pow(two.im, 2));
	result.im = (two.re * one.im - one.re * two.im) / (pow(two.re, 2) + pow(two.im, 2));
	return result;
}
Complex Complex::conj(Complex one)
{
	Complex result;
	result.re = one.re;
	result.im = -one.im;
	return result;
}
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

class Complex
{
		double re, im;
	public:
		double GetRe() const { return re; }
		double GetIm() const { return im; }
		void SetRe(double value) { re = value; }
		void SetIm(double value) { im = value; }

		void Init(double, double);
		void Read();
		void Display() const;
		const std::string toString() const;

		static Complex sub(Complex, Complex);
		static Complex div(Complex, Complex);
		static Complex conj(Complex);
};


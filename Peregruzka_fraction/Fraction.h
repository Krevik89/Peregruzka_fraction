#pragma once
#include<iostream>

class Fraction
{
	double numerator;
	double denumerator;
public:
	Fraction(double num, double denum) :numerator{ num }, denumerator{denum}{}
	Fraction() :Fraction(1.,1.) {}

	friend void operator+(Fraction& c1, Fraction& c2) {
		if (c2.denumerator != 0 && c1.denumerator != 0) {
			if (c2.denumerator == c1.denumerator) {
				std::cout << c1.numerator + c2.numerator << std::endl
					<< "--" << std::endl
					<< c1.denumerator;
			}
			else {
				std::cout << c1.numerator + c2.numerator << std::endl
					<< "--" << std::endl
					<< c1.denumerator * c2.denumerator;
			}
		}
	}
	friend void operator-(Fraction& c1, Fraction& c2) {
		if (c1.denumerator != 0 && c2.denumerator != 0) {
			if (c1.denumerator == c2.denumerator) {
				std::cout << c1.numerator - c2.numerator << std::endl
					<< "--" << std::endl
					<< c1.denumerator;
			}
			else {
				std::cout << c1.numerator - c2.numerator << std::endl
					<< "--" << std::endl
					<< c1.denumerator * c2.denumerator;
			}
		}
		
	}
	friend void operator*(Fraction& c1, Fraction& c2) {
		if (c1.denumerator != 0 && c2.denumerator != 0) {
			std::cout << c1.numerator * c2.numerator << std::endl
				<< "--" << std::endl
				<< c1.denumerator * c2.denumerator;
		}
	}
	friend void operator/(Fraction& c1, Fraction& c2) {
		if (c1.denumerator != 0 && c2.denumerator != 0) {
			std::cout << c1.numerator * c2.denumerator << std::endl
				<< "--" << std::endl
				<< c1.denumerator * c2.numerator;
		}
	}


};


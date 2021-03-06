// MathFuncsDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MathFuncsLib.h"
#include <stdexcept>

using namespace std;

namespace MyMathFuncs {
	double MyMathFuncs::add(double a, double b) {
		return a + b;
	}
	double MyMathFuncs::subtract(double a, double b) {
		return a - b;
	}
	double MyMathFuncs::multiply(double a, double b) {
		return a * b;
	}
	double MyMathFuncs::divide(double a, double b) {
		if (b == 0) {
			throw invalid_argument("b cannot be zero!");
		}
		return a / b;
	}
}

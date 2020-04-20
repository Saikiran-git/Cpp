#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>  //<math.h> can also be used
using namespace std;

int main(){
	int setwidth1 = 13, setwidth2 = 16, setwidth3 = 13;
	cout << setw(setwidth1) << "Function Name" << setw(setwidth2) << "Example" << setw(setwidth3) <<"Result" << "  " << "Discription\n\n";
    cout << setw(setwidth1) << "ceil()" << setw(setwidth2) << "ceil(-6.75)" << setw(setwidth3) << ceil(-6.75) << "  " << "Ceiling.Integer more or equal to x." << endl;
	cout << setw(setwidth1) << "floor()" << setw(setwidth2) << "floor(6.75)" << setw(setwidth3) << floor(6.75) << "  " << "Integer less or equal to x.\n";
	cout << setw(setwidth1) << "sqrt()" << setw(setwidth2) << "sqrt(81)" << setw(setwidth3) << sqrt(81) << "  " << "Square root of x.\n";
	cout << setw(setwidth1) << "abs()" << setw(setwidth2) << "abs(-16)" << setw(setwidth3) << abs(-16) << "  " << "Absolute value of x.\n";
	cout << setw(setwidth1) << "exp()" << setw(setwidth2) << "exp(1)" << setw(setwidth3) << exp(1) << "  " << "Takes e to the power of x.\n";
	cout << setw(setwidth1) << "log()" << setw(setwidth2) << "log(2.718282)" << setw(setwidth3) << log(2.718282) << "  " << "Natural logarithm base e.\n";
	cout << setw(setwidth1) << "log10()" << setw(setwidth2) << "log10(100)" << setw(setwidth3) << log10(100) << "  " << "logarithm base 10.\n";
	cout << setw(setwidth1) << "pow(x, y)" << setw(setwidth2) << "pow(2.0, 10)" << setw(setwidth3) << pow(2.0, 10) << "  " << "Raises x to the power of y.\n";
	cout << setw(setwidth1) << "fmod(x, y)" << setw(setwidth2) << "fmod(7.5, 2.1)" << setw(setwidth3) << fmod(7.5, 2.1) << "  " << "Remainder as a floating point number.\n";
	cout << setw(setwidth1) << "sin()" << setw(setwidth2) << "sin(0)" << setw(setwidth3) << sin(0) << "  " << "Sine. (x in radians)\n";
    cout << setw(setwidth1) << "cos()" << setw(setwidth2) << "cos(0)" << setw(setwidth3) << cos(0) << "  " << "Cosine. (x in radians)\n";
    cout << setw(setwidth1) << "tan()" << setw(setwidth2) << "tan(0)" << setw(setwidth3) << tan(0) << "  " << "Tangent. (x in radians)\n\n";
	return 0;
}
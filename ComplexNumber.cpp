#include "ComplexNumber.h"

void ComplexNumber::SetA(int a) { Abstract::SetA(a); }
void ComplexNumber::SetB(int b) { this->b = b; }

int ComplexNumber::GetA() const { return Abstract::GetA(); }
int ComplexNumber::GetB() const { return b; }

ComplexNumber::ComplexNumber() : b(0) { Abstract::SetA(0); }
ComplexNumber::ComplexNumber(int a = 0, int b = 0) : b(b) { Abstract::SetA(a); }
ComplexNumber::ComplexNumber(ComplexNumber& X) : ComplexNumber(X.GetA(), X.GetB()) {}

void ComplexNumber::Print() {
	cout << "Z = a + b*i" << endl;
	cout << "The value of 'a' is equal to: " << GetA() << endl;
	cout << "The value of 'b' is equal to: " << GetB() << endl;
}
double ComplexNumber::Norma() {
	return GetA() * GetA() + GetB() * GetB();
}
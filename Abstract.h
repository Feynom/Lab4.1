#pragma once
#include <iostream>

using namespace std;

class Abstract
{
	int a;
public:
	void SetA(int);
	int GetA() const;

	virtual double Norma() = 0;
	virtual void Print() = 0;
};


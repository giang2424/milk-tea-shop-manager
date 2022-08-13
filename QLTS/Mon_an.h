#pragma once
#include<iostream>
using namespace std;
#include<string>
class Mon_an
{
private:
	string mamonan;
	string tenmonan;
	int giamonan;
public:
	void Input();
	void Output();
	int getter()
	{
		return giamonan;
	}
	Mon_an();
	~Mon_an();
};


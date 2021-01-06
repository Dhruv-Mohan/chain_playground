#pragma once
class data
{
public:
	data(int a, int b);
	~data();
	int a, b;
};

class data2 : virtual public data
{
public:
	data2();
	~data2();
	int c, d;
};
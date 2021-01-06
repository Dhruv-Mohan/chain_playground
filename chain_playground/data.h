#pragma once
class data
{
public:
	//data(int a, int b);
	data();
	~data();
	int a, b;
};

class data2 : public data
{
public:
	data2(float a, float b);
	~data2();
	float c, d;
};
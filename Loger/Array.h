#pragma once
#include"Loger.h"


class Array
{
	int m_a;
	int *pArr;
public:
	Loger loger;
	Array(int a = 5);
	~Array();
	void init();
	void show();
	Array & operator = (const Array * arr1);
	Array & operator = (const Array & arr1);


};

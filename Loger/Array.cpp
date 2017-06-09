#include<iostream>
#include"array.h"
#include"loger.h"

using namespace std;

Array::Array(int a)
{
	m_a = a;

	pArr = new int[a];
	for (int i = 0; i < a; i++)
		pArr[i] = 0;
	loger.log("Crete new class array");
}

Array::~Array()
{
	delete[] pArr;
	cout << endl << "destruct" << endl;
	loger.log("destruct");
}

void Array::init()
{
	for (int i = 0; i < m_a; ++i)
		pArr[i] = rand() % 100;
	loger.log("init array with rand number");
}

void Array::show()
{
	cout << endl;
	for (int i = 0; i < m_a; ++i)
		cout << " " << pArr[i] << " ";
	cout << endl;
	loger.log("show array");
}

Array& Array::operator=(const Array * arr1)	
{
	//if (*arr1 == *this)			//якщо через вказівники, то не можу виконати порівняння класів (а не адрес)
	//{
	//	cout << " = " << endl;
	//	return *this;
	//}
	//else
	{
		delete[] pArr;
		m_a = arr1->m_a;
		pArr = new int[m_a];
		memcpy(pArr, arr1->pArr, m_a * sizeof(int));
		return *this;
		loger.log("used new operator = (for pArr)");
	}
}

Array& Array::operator=(const Array & arr1)
{
	delete[] pArr;
	m_a = arr1.m_a;
	pArr = new int[m_a];
	memcpy(pArr, arr1.pArr, m_a * sizeof(int));
	return *this;		// ф-ція приймає ссилку, а повертає вказівник ??????
	loger.log("used new operator = (for Arr)");
}



#include<iostream>
#include<string>
#include"Array.h"
#include"Loger.h"
#include<ctime>

using namespace std;

int main()
{
	Loger loger1;
	loger1.logStart();

	tm *timeinf;
	time_t ptime;
	time(&ptime);
	timeinf = localtime(&ptime);
	cout << "Time  : " << timeinf->tm_hour << ":" << timeinf->tm_min << endl; // інший спосі отримання часу



	Array *pArray1 = new Array(7);
	pArray1->init();
	Array *pArray2 = new Array(7);
	pArray2->show();
	pArray2 = pArray1;
	pArray2->show();
	pArray2->show();


	cout << "________________" << endl;
	Array Arr1(7);
	Array Arr2(7);
	Arr1.init();
	Arr1.show();
	Arr2 = Arr1;
	Arr2.show();

	

}
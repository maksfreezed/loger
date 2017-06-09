#include<iostream>
#include"Loger.h"
#include<string>
#include<fstream>
#include<Windows.h>

using namespace std;


void Loger::log(string result)
{
	SYSTEMTIME time;
	ofstream loger("loger.txt", ios_base::app);
	GetLocalTime(&time);
	loger << endl << time.wHour << ":" << time.wMinute << ":" << time.wSecond << ":" << time.wMilliseconds << " - " << result;
	loger.close();
}

void Loger::logStart()
{
	SYSTEMTIME time;
	ofstream loger("loger.txt", ios_base::app);
	GetLocalTime(&time);
	loger << endl << time.wYear << "." << time.wMonth << "." << time.wDay << "." << " - " << "NEW START OF PROGRAMM !!! " << "(" << time.wHour << ":" << time.wMinute << ":" << time.wSecond << ")";
	loger.close();
}
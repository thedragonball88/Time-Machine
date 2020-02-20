#pragma once
#include<iostream>

using namespace std;


class Time
{
private:
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

protected:
	int tempMinutes=NULL;
	int tempSeconds=NULL;
	int tempHours=NULL;


public:
	void menu();
	void calculate();
	void userInput();
	void adjustTime();
	void printTime();
};


#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
using namespace std;
class Date {
	int year;
	int month;
	int day;
	int hours, minutes, seconds;

public:
	Date();
	Date(time_t tm);
	static string Time(time_t value);
	friend ostream& operator<<(ostream& os, const Date& obj);



};
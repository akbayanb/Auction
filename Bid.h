#pragma once
#include <string>
#include <iostream>
#include "Date.h"
using namespace std;
class Bid {
	string player;
	string product_title;
	double bid_price;
	int amount;
	Date bid_time;

public:
	Bid();
	Bid(string player, string product_title, double bid_price,
		int amount, time_t bid_time);
	int getAmount();
	string getProductTitle();
	bool operator<(const Bid& obj) const;
	friend ostream& operator<<(ostream& os, const Bid& obj);
	friend istream& operator>>(istream& is, Bid& obj);
};
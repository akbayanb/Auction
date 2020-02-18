#pragma once
#include <iostream>
#include <string>
using namespace std;
class Product {
private:
	string title;
	double price;
	int amount;
public:
	Product();
	Product(string title, double price, int amount);
	int& getAmount();
	string getTitle();
	bool operator<(const Product& obj)const ;
	
	friend ostream& operator<<(ostream& os, const Product& obj);
	friend istream& operator>>(istream& is, Product& obj);


};
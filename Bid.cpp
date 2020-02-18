#include "Bid.h"

Bid::Bid()
{
	player = "";
	product_title = "";
	bid_price = 0;
	amount = 0;
	bid_time=Date(time(NULL));
}

Bid::Bid(string player, string product_title, double bid_price, 
	int amount, time_t bid_time)
{
	this->player = player;
	this->bid_time = Date(bid_time);
	this->product_title = product_title;
	this->bid_price = bid_price;
	this->amount = amount;
}

int Bid::getAmount()
{
	return amount;
}

string Bid::getProductTitle()
{
	return product_title;
}

bool Bid::operator<(const Bid& obj) const {
	return bid_price < obj.bid_price;
}

ostream & operator<<(ostream & os, const Bid & obj)
{
	
	os << obj.player<<" "<<obj.product_title << " " << obj.bid_price
		<< " " << obj.amount << " " << obj.bid_time << " ";
	return os;
}

istream& operator>>(istream& is, Bid& obj) {
	is >> obj.player>>obj.product_title >> obj.bid_price >> obj.amount;
	return is;
}
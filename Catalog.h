#pragma once
#include <vector>
#include "Product.h"

class Catalog {
private:
	vector<Product> ps;

public:
	void push(Product el);
	Product pop();
	int size();
	Product& operator[](int index);
	int find(const char* title);



};
#include <queue>
#include <iostream>
#include <fstream>
#include "Catalog.h"
#include "Bid.h"
using namespace std;

int main() {
	
	Catalog cat;
	ifstream in("in.txt");
	priority_queue<Bid> bids;
	while (!in.eof()) {
		Product p;
		in >> p;
		cat.push(p);
	}

	for (int i = 0; i < cat.size(); i++) {
		cout << cat[i] << endl;
	}
	int beg_time = time(NULL);
	int choice;

	while (true) {
		int cur_time = time(NULL);
		cout<<Date::Time(cur_time)<<endl;
		if (beg_time + 6000 <= cur_time) break;

		cout << "Enter 1 to bid" << endl;
		cout << "Enter any other value to skip" << endl;
		cin >> choice;

		if (choice == 1) {
			Bid b;
			cout << "Enter your name, product, price and amount" << endl;
			cin >> b;
			if(cat.find(b.getProductTitle().c_str())!=-1)
			bids.push(b);
		}


	}

	while (!bids.empty()) {
		cout << bids.top() << endl;
		bids.pop();
	}

	system("pause");
	
	return 0;
}
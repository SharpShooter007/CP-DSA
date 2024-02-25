#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//======================= Pairs=======================================

	// Declaration and Initialization
	pair<int, int> n(1, 2);

	pair<string, int> p = {"Varun", 26};

	pair<int, int>t;
	t = make_pair(1, 4);

	cout << "First: " << n.first << ", Second: " << n.second << endl;
	cout << "First: " << p.first << ", Second: " << p.second << endl;
	cout << "First: " << t.first << ", Second: " << t.second << endl;

	// operators(=, ==, !=, >=, <=) in Pair

	pair<int, int> p1 = n;
	cout << p1.first << ":" << p1.second << endl;

	if (p1 == n) {
		cout << "pair p1 and n are equal" << endl;
	} else {
		cout << "pair p1 is not equal to pair n" << endl;
	}


	if (p1 != n) {
		cout << "pairs p1 and n are not equal to each other" << endl;
	} else {
		cout << "pairs p1 and n are equal to each other" << endl;
	}

	pair<int, int>g = {2, 5};

	if (g > p1) {
		cout << "pair g is greater than pair p1" << endl;
	} else {
		cout << "pair g is not greater than pair p1" << endl;
	}




//================== Vector ========================================

	vector<int> v;

	// Inserting element at the back of the vecotr -> O(1)
	for (int i = 0 ; i < 10; i++) {
		v.push_back(i);
	}

	for (auto itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << " ";
	}

	cout << endl;

	for (auto x : v) {
		cout << x << " ";
	}

	cout << endl;

	// Getting size of the vector
	cout << "Size of the vector : " << v.size() << endl;
















}
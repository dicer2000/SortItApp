#pragma once
#include <iostream>
#include <vector>

using namespace std;

class SortBase
{
protected: 
	vector<int> _mainVector;

public:
	SortBase() {};
	virtual ~SortBase() {};

	// Copy Constructor
	SortBase(const SortBase& old) { this->_mainVector = old._mainVector; };

	virtual void addItem(int item) { _mainVector.push_back(item); }
	virtual void dequeueItem() { _mainVector.front(); }
	virtual void sort() = 0;

	virtual void printVector()
	{
		for (auto& iterator : _mainVector)
			cout << iterator << " ";
		cout << endl;
	}
};


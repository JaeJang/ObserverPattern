#pragma once
#include <iostream>
#include <vector>
#include "Observer.hpp"

class Subject {

private:
	std::vector<Observer*> observers;
	int price;

public:
	Subject();
	void registerObserver(Observer * parmObserver);
	void removeObserver(Observer * parmObserver);
	void notifyObserver();
	void setPrice(int value);
};
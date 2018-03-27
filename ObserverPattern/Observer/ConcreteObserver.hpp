#pragma once
#include "Observer.hpp"

class observerA : public Observer {

private:
	int price;

public:
	observerA();
	void update(int parmPrice);
	void printPrice();
};


class observerB : public Observer {

private:
	int price;

public:
	observerB();
	void update(int parmPrice);
	void printPrice();
};
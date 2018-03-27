#include "ConcreteObserver.hpp"
#include <iostream>

observerA::observerA()
{
	price = 0;
}

void observerA::update(int parmPrice)
{
	price = parmPrice;
	printPrice();
}

void observerA::printPrice()
{
	std::cout << "Consultant A\n\t Stock price has been updated. The price is: " << price << std::endl;
}

observerB::observerB()
{
	price = 0;
}

void observerB::update(int parmPrice)
{
	price = parmPrice;
	printPrice();
}

void observerB::printPrice()
{

	std::cout << "Consultant B\n\t Stock price has been updated. The price is: " << price << std::endl;
}

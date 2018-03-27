#include "ConcreteObserver.hpp"
#include "Subject.hpp"
#include <iostream>
#include <conio.h>

int main() {

	Subject informStockPrice;

	observerA A_customer;

	observerB B_customer;

	informStockPrice.registerObserver(&A_customer);

	informStockPrice.registerObserver(&B_customer);

	informStockPrice.setPrice(1500);

	std::cout << std::endl << std::endl;

	informStockPrice.removeObserver(&B_customer);

	informStockPrice.setPrice(3000);

	std::cout << "Press any button to exit";
	_getch();

	return 0;
}
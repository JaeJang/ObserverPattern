#include "Subject.hpp"

Subject::Subject()
{

	price = 0;
}

void Subject::registerObserver(Observer * parmObserver)
{
	observers.push_back(parmObserver);
}

void Subject::removeObserver(Observer * parmObserver)
{
	
	int i = 0;
	for (i = 0; i < observers.size(); ++i) {
		if (observers[i] == parmObserver)
			break;
	}
	observers.erase(observers.begin() + i);
	
}

void Subject::notifyObserver()
{
	for (auto iter = observers.begin(); iter != observers.end(); ++iter) {
		(*iter)->update(price);
	}
}

void Subject::setPrice(int value)
{
	price = value;
	notifyObserver();
}

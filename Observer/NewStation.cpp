#include "NewStation.h"
#include "Subscriber.h"

NewStation::NewStation(std::string _name, int _ranking)
	: name{ _name }, ranking{ _ranking } 
{}

void NewStation::add_observer(Observer* new_observer)
{
	observers.insert(new_observer);
}

void NewStation::remove_observer(Observer* observer)
{
	observers.erase(observer);
}

void NewStation::notify()
{
	/*for (Observer* subscriber : observers)
	{
		subscriber->update(name, ranking);
	}*/
	std::unordered_set<Observer*>::iterator it = observers.begin();
	while (it != observers.end())
	{
		(*it)->update(name, ranking);
		it++;
	}
}

void NewStation::display_subscriber() const
{
	for (Observer* subscriber : observers)
	{
		static_cast<Subscriber*>(subscriber)->display();
	}
}


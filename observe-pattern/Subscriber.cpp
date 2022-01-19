#include <iostream>

#include "Subscriber.h"

Subscriber::Subscriber(NewStation* subject, std::string _name, int _ranking)
	: newStationData{ subject }, name{ _name }, ranking{ _ranking }
{
	newStationData->add_observer(this);
}

void Subscriber::update(std::string new_name, int new_ranking)
{
	name = new_name;
	ranking = new_ranking;
}

void Subscriber::display()
{
	std::cout << "=====================" << "\n";
	std::cout << "NAME: " << name << "\n";
	std::cout << "RANKING: " << ranking << "\n";
}


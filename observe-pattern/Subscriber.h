#pragma once

#include <string>
#include <memory>

#include "Observer.h"
#include "NewStation.h"

class Subscriber : public Observer
{
private:
	NewStation* newStationData;
	std::string name;
	int ranking;

public:
	Subscriber(NewStation* subject, std::string _name, int _ranking);
	virtual void update(std::string name, int new_ranking) override;
	void display();
	virtual ~Subscriber()=default;
};


#pragma once

#include <string>
#include <memory>

#include "Subject.h"

class NewStation : public Subject
{
private:
	std::string name;
	int ranking;

public:
	NewStation(std::string _name, int _ranking);
	virtual void add_observer(Observer* new_observer) override;
	virtual void remove_observer(Observer* observer) override;
	virtual void notify() override;
	void display_subscriber() const;
	virtual ~NewStation()=default;
};


#pragma once

#include <unordered_set>
#include <memory>

#include "Observer.h"

class Subject
{
protected:
	std::unordered_set<Observer*> observers;

public:
	Subject()=default;
	virtual void add_observer(Observer* new_observer) = 0;
	virtual void remove_observer(Observer* observer) = 0;
	virtual void notify() = 0;
	virtual ~Subject()=default;
};



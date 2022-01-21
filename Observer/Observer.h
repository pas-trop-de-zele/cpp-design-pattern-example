#pragma once

#include <string>

class Observer
{
public:
	Observer() = default;
	virtual void update(std::string name, int new_ranking) = 0;
	virtual ~Observer()=default;
};


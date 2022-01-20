#include <string>
#include <memory>

#include "I_Quack.h"

#pragma once
class Duck
{
private:
	I_Quack* quack_behavior;
	
public:
	Duck(I_Quack* quack_behavior);

	void quack()
	{
		quack_behavior->quack();
	}
	~Duck() = default;
};


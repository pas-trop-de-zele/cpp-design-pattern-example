#pragma once
#include "I_Quack.h"

class SpecialQuack : public I_Quack
{
public:
	SpecialQuack() = default;
	virtual void quack() override;
	virtual ~SpecialQuack() = default;
};


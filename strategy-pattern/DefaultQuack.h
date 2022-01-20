#pragma once

#include "I_Quack.h"

class DefaultQuack : public I_Quack
{
public:
	DefaultQuack() = default;
	virtual void quack() override;
	virtual ~DefaultQuack() = default;
};


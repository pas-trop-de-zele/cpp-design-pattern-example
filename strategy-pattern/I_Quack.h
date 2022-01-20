#pragma once
class I_Quack
{
public:
	I_Quack() = default;
	virtual void quack() = 0;
	virtual ~I_Quack() = default;
};


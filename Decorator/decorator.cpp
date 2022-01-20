#include <iostream>

class I_Pizza
{
public:
	I_Pizza() = default;
	virtual void ingredients() = 0;
	virtual ~I_Pizza() = default;
};

class PizzaPepperoni : public I_Pizza
{
public:
	PizzaPepperoni() = default;
	virtual void ingredients() override
	{
		std::cout << "Pepperoni" << " ";
	}
	virtual ~PizzaPepperoni() = default;
};

class I_PizzaDecorator : public I_Pizza
{
private:
	I_Pizza* pizza_wrapper;
public:
	I_PizzaDecorator(I_Pizza* _pizza_wrapper) : pizza_wrapper{ _pizza_wrapper } {}
	virtual void ingredients() override
	{
		pizza_wrapper->ingredients();
	}
	virtual ~I_PizzaDecorator() { delete pizza_wrapper; }
};

class WaterMelon : public I_PizzaDecorator
{
public:
	WaterMelon(I_Pizza* _pizza_wrapper) : I_PizzaDecorator{_pizza_wrapper} {}
	virtual void ingredients()
	{
		I_PizzaDecorator::ingredients();
		std::cout << "+ WaterMelon" << " ";
	}
};

class PineApple : public I_PizzaDecorator
{
public:
	PineApple(I_Pizza* _pizza_wrapper) : I_PizzaDecorator{ _pizza_wrapper } {}
	virtual void ingredients()
	{
		I_PizzaDecorator::ingredients();
		std::cout << "+ Salad" << " ";
	}
};


int main()
{
	I_Pizza* pepperoniWithWatermelon = new WaterMelon(new PizzaPepperoni());
	I_Pizza* pepperoniWithWatermelonAndPineApple = new PineApple(new WaterMelon(new PizzaPepperoni()));
	pepperoniWithWatermelon->ingredients(); std::cout << "\n";
	pepperoniWithWatermelonAndPineApple->ingredients(); std::cout << "\n";

}

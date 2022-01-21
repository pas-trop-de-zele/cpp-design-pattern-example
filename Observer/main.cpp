#include <iostream>
#include <unordered_set>

#include "NewStation.h"
#include "Subscriber.h"

int main()
{
	NewStation* CNN = new NewStation("CNN", 10);
	Observer* adam = new Subscriber(CNN, "Adam", 2);
	Observer* bob = new Subscriber(CNN, "Bob", 4);
	
	CNN->display_subscriber();


	CNN->notify();
	std::cout << "==============================" << "\n";
	std::cout << "Updated" << "\n";
	CNN->display_subscriber();


	CNN->remove_observer(adam);
	std::cout << "==============================" << "\n";
	std::cout << "adam removed from subscription" << "\n";
	CNN->display_subscriber();
	return 0;
}

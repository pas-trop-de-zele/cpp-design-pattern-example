#include <iostream>

#include "Duck.h"
#include "DefaultQuack.h"
#include "SpecialQuack.h"

int main() {
    Duck* defaultDuck = new Duck(new DefaultQuack());
    Duck* specialDuck = new Duck(new SpecialQuack());

    defaultDuck->quack();
    specialDuck->quack();
}

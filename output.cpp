#include "output.h"
#include <iostream>

output::output()
{
    //ctor
    //health = 100;
}

void output::render(Game& state) {
    std::cout << "\nValue is now: " << state.value << "\n";
}

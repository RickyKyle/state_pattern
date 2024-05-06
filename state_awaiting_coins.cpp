#include "state_awaiting_coins.hpp"

#include <iostream>

state_awaiting_coins::state_awaiting_coins(context *c) : c_(c){}

void state_awaiting_coins::insert_coins()
{
    std::cout << "Thanks, vending now!" << std::endl;
}

void state_awaiting_coins::select_product()
{
    std::cout << "Product already selected. Please insert coins." << std::endl;
}
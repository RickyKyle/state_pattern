#include "state_idle.hpp"
#include "state_awaiting_coins.hpp"

#include <iostream>

state_idle::state_idle(context *c) : c_(c){}

void state_idle::insert_coins()
{
    std::cout << "No product selected. Coins returned." << std::endl;
}

void state_idle::select_product()
{
    std::cout << "Thank you for selecting a product." << std::endl;

    c_->set_state(new state_awaiting_coins(c_));
}
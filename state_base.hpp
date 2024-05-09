#ifndef STATE_BASE_HPP
#define STATE_BASE_HPP

#include "state.hpp"

class state_base : public state
{
public:

    void insert_coins();
    void select_product();
    void kick_machine();
};

#endif
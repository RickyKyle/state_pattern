#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "state.hpp"

class context
{
public:

    context();

    ~context(){delete s;}

    void set_state(state* state_to_set);

    void insert_coins();

    void select_product();

    void kick_machine();

private:

    state* s;
};

#endif
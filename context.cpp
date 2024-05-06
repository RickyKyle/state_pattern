#include "context.hpp"

context::context() : s(){}

void context::set_state(state* state_to_set)
{
    if(s)
    {
        delete s;
    }

    s = state_to_set;
}

void context::insert_coins()
{
    s->insert_coins();
}

void context::select_product()
{
    s->select_product();
}

void context::kick_machine()
{
    s->kick_machine();
}

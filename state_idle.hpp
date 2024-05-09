#ifndef STATE_IDLE_HPP
#define STATE_IDLE_HPP

#include "context.hpp"
#include "state_base.hpp"

class state_idle : public state_base
{
public:

    state_idle(context * c);

    void insert_coins();

    void select_product();

private:

    context * c_;
};

#endif
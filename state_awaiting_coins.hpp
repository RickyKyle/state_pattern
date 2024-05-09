#ifndef STATE_AWAITING_COINS_HPP
#define STATE_AWAITING_COINS_HPP

#include "context.hpp"
#include "state_base.hpp"

class state_awaiting_coins : public state_base
{
public:

    state_awaiting_coins(context * c);

    void insert_coins();

    void select_product();

private:

    context * c_;
};

#endif
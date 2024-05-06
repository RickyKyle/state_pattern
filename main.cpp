#include <iostream>

#include "context.hpp"
#include "state_idle.hpp"

int main() {

    context *c = new context();
    c->set_state(new state_idle(c));

    c->kick_machine();
    c->select_product();
    c->kick_machine();
    c->insert_coins();

    return 0;
}

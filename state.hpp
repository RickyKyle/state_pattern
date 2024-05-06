#ifndef STATE_HPP
#define STATE_HPP

class state
{
public:

    virtual void insert_coins() = 0;
    virtual void select_product() = 0;
    void kick_machine();
};

#endif
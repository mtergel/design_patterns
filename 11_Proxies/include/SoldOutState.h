#ifndef __SOLDOUTSTATE_H__
#define __SOLDOUTSTATE_H__

#include "State.h"
#include <ostream>

class GumballMachine;

class SoldOutState : public State
{
private:
    GumballMachine *gumballMachine;

protected:
    void toString(std::ostream &) const override;

public:
    SoldOutState(GumballMachine *);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
    void refill() override;
};

#endif // __SOLDOUTSTATE_H__

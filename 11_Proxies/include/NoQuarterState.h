#ifndef __NOQUARTER_H__
#define __NOQUARTER_H__

#include "State.h"
#include "GumballMachine.h"

#include <ostream>

class NoQuarterState : public State
{
private:
    GumballMachine *gumballMachine;

protected:
    void toString(std::ostream &) const override;

public:
    NoQuarterState(GumballMachine *gbm) : gumballMachine(gbm) {}
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
    void refill() override;
};

#endif // __NOQUARTER_H__

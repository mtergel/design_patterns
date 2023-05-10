#include "GumballMachine.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"

#include <string>
#include <ostream>

GumballMachine::GumballMachine(int numberOfBalls, std::string machineLocation) : count(numberOfBalls), location(machineLocation), soldOutState(std::make_unique<SoldOutState>(this)), noQuarterState(std::make_unique<NoQuarterState>(this))
{
    state = (count > 0) ? noQuarterState.get() : soldOutState.get();
}

int GumballMachine::getCount() const
{
    return count;
}

std::string GumballMachine::getLocation() const
{
    return location;
}

State *GumballMachine::getState() const
{
    return state;
}

void GumballMachine::setState(State *s)
{
    state = s;
}

State *
GumballMachine::getNoQuarterState() const
{
    return noQuarterState.get();
}

State *
GumballMachine::getSoldOutState() const
{
    return soldOutState.get();
}

std::ostream &operator<<(std::ostream &os, const GumballMachine &gbm)
{
    os << "\nMighty Gumball, Inc.";
    os << "\nC++ enabled Standing Gumball Model #2020";
    os << "\nGumball Machine: " << gbm.getLocation();
    os << "\nInventory: " << gbm.getCount() << " gumball";
    if (gbm.getCount() != 1)
        os << "s";
    os << "\n";
    os << "Machine is " << *gbm.getState() << "\n";
    return os;
}
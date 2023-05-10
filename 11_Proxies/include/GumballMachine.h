#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

#include "State.h"
#include "string"

class NoQuarterState;
// class HasQuarterState;
class SoldOutState;
// class SoldState;

class GumballMachine
{
    friend std::ostream &operator<<(std::ostream &, const GumballMachine &);

private:
    State *state;
    int count = 0;
    std::string location;
    std::unique_ptr<State> noQuarterState;
    std::unique_ptr<State> soldOutState;

public:
    GumballMachine(int, std::string l);
    int getCount() const;
    std::string getLocation() const;
    State *getState() const;
    void setState(State *);
    State *getNoQuarterState() const;
    // State *getHasQuarterState() const;
    State *getSoldOutState() const;
    // State *getSoldState() const;
    // State *getWinnerState() const;
};

#endif // __GUMBALLMACHINE_H__

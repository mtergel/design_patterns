#ifndef __STATE_H__
#define __STATE_H__

#include <ostream>

class State
{
protected:
    virtual void toString(std::ostream &) const = 0;

public:
    virtual ~State() = default;
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual void refill() = 0;
    friend std::ostream &operator<<(std::ostream &, const State &);
};

inline std::ostream &operator<<(std::ostream &os, const State &state)
{
    state.toString(os);
    return os;
}

#endif // __STATE_H__

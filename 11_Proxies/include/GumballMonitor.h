#ifndef __GUMBALLMONITOR_H__
#define __GUMBALLMONITOR_H__

#include "GumballMachine.h"
#include <memory>
#include <iostream>

class GumballMonitor
{
private:
    std::shared_ptr<GumballMachine> machine;

public:
    void report() const;
    GumballMonitor(const std::shared_ptr<GumballMachine> &m) : machine(m) {}
};

inline void
GumballMonitor::report() const
{
    std::cout << *machine.get();
}

#endif // __GUMBALLMONITOR_H__

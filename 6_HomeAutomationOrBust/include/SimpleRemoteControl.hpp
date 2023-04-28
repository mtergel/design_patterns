#ifndef __SIMPLEREMOTECONTROL_HPP__
#define __SIMPLEREMOTECONTROL_HPP__

#include "Command.hpp"

class SimpleRemoteControl
{
private:
    Command *slot;

public:
    SimpleRemoteControl() = default;
    ~SimpleRemoteControl()
    {
        delete slot;
    }

    void setCommand(Command *command)
    {
        slot = command;
    }

    void buttonWasPressed()
    {
        slot->execute();
    }
};

#endif // __SIMPLEREMOTECONTROL_HPP__

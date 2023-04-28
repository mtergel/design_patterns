#ifndef __REMOTECONTROL_HPP__
#define __REMOTECONTROL_HPP__

#include "Command.hpp"
#include "NoCommand.hpp"

#include <array>
#include <string>
#include <ostream>

const int MAX_REMOTE_SLOTS = 7;

class RemoteControl
{
private:
    std::array<Command *, MAX_REMOTE_SLOTS> onCommands;
    std::array<Command *, MAX_REMOTE_SLOTS> offCommands;
    Command *undoCommand;

public:
    RemoteControl()
    {
        onCommands = {};
        offCommands = {};

        Command *noCommand = new NoCommand();
        for (int i = 0; i < MAX_REMOTE_SLOTS; ++i)
        {
            onCommands[i] = noCommand;
            offCommands[i] = noCommand;
        }

        undoCommand = noCommand;
    }
    ~RemoteControl()
    {
        // delete arrays?
        delete undoCommand;
    }

    void setCommand(int slot, Command *onCommand, Command *offCommand)
    {
        if (onCommand)
        {
            onCommands[slot] = onCommand;
        }

        if (offCommand)
        {
            offCommands[slot] = offCommand;
        }
    }

    void onButtonWasPushed(int slot)
    {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }

    void offButtonWasPushed(int slot)
    {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }

    void undoButtonWasPushed()
    {
        undoCommand->undo();
    }

    friend std::ostream &operator<<(std::ostream &os, const RemoteControl &rc);
};

std::ostream &operator<<(std::ostream &os, const RemoteControl &rc)
{
    os << "\n------ Remote Control ------\n";
    for (int i = 0; i < MAX_REMOTE_SLOTS; ++i)
    {
        os << "[slot " << i << "] " << rc.onCommands[i]->getClassName()
           << "\t" << rc.offCommands[i]->getClassName() << '\n';
    }

    os << "[undo] " << rc.undoCommand->getClassName() << "\n";
    return os;
}

#endif // __REMOTECONTROL_HPP__

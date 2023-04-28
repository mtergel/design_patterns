#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

#include <string>

class Command
{
public:
    Command() = default;
    virtual ~Command() = default;

    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual std::string getClassName() const = 0;
};

#endif // __COMMAND_HPP__

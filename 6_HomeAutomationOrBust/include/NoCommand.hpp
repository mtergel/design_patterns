#ifndef __NOCOMMAND_HPP__
#define __NOCOMMAND_HPP__

#include "Command.hpp"
#include <string>

class NoCommand : public Command
{
private:
    std::string className = "NoCommand";

public:
    void execute() override {}
    void undo() override {}
    std::string getClassName() const override { return className; };
};

#endif // __NOCOMMAND_HPP__

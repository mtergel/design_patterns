#ifndef __GARAGEDOOROPENCOMMAND_HPP__
#define __GARAGEDOOROPENCOMMAND_HPP__

#include "GarageDoor.hpp"
#include "Command.hpp"
#include <string>

class GarageDoorOpenCommand : public Command
{
private:
    GarageDoor *garageDoor;
    std::string className = "GarageDoorOpenCommand";

public:
    GarageDoorOpenCommand(GarageDoor *gd) : garageDoor(gd){};
    ~GarageDoorOpenCommand()
    {
        delete garageDoor;
    }

    void execute() override
    {
        garageDoor->up();
    }

    void undo() override
    {
        garageDoor->down();
    }

    std::string getClassName() const override
    {
        return className;
    }
};

#endif // __GARAGEDOOROPENCOMMAND_HPP__

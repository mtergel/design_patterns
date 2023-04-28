#ifndef __LIGHTONCOMMAND_HPP__
#define __LIGHTONCOMMAND_HPP__

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOnCommand : public Command
{
private:
    Light *light;
    std::string className = "LightOnCommand";

public:
    LightOnCommand(Light *l) : light(l) {}
    ~LightOnCommand()
    {
        delete light;
    }

    void execute() override
    {
        light->on();
    }

    void undo() override
    {
        light->off();
    }

    std::string getClassName() const override
    {
        return className;
    }
};

#endif // __LIGHTONCOMMAND_HPP__

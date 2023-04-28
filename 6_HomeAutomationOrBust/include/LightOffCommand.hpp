#ifndef __LIGHTOFFCOMMAND_HPP__
#define __LIGHTOFFCOMMAND_HPP__

#include "Command.hpp"
#include "Light.hpp"
#include <string>

class LightOffCommand : public Command
{
private:
    Light *light;
    std::string className = "LightOffCommand";

public:
    LightOffCommand(Light *l) : light(l) {}
    ~LightOffCommand()
    {
        delete light;
    }

    void execute() override
    {
        light->off();
    }

    void undo() override
    {
        light->on();
    }

    std::string getClassName() const override
    {
        return className;
    }
};

#endif // __LIGHTOFFCOMMAND_HPP__

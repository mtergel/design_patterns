#ifndef __CEILINGFANHIGHCOMMAND_HPP__
#define __CEILINGFANHIGHCOMMAND_HPP__

#include "Command.hpp"
#include "CeilingFan.hpp"

class CeilingFanHighCommand : public Command
{
private:
    CeilingFan *ceilingFan;
    int prevSpeed;

public:
    CeilingFanHighCommand(CeilingFan *cf);
    ~CeilingFanHighCommand();

    void execute() override
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->high();
    }

    void undo() override
    {
        if (prevSpeed == CeilingFan::HIGH)
        {
            ceilingFan->high();
        }
        else if (prevSpeed == CeilingFan::MEDIUM)
        {
            ceilingFan->medium();
        }
        else if (prevSpeed == CeilingFan::LOW)
        {
            ceilingFan->low();
        }
        else if (prevSpeed == CeilingFan::OFF)
        {
            ceilingFan->off();
        }
    }
};

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *cf)
{
    ceilingFan = cf;
}

CeilingFanHighCommand::~CeilingFanHighCommand()
{
    delete ceilingFan;
}

#endif // __CEILINGFANHIGHCOMMAND_HPP__

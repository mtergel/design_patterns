#ifndef __MACROCOMMAND_HPP__
#define __MACROCOMMAND_HPP__

#include "Command.hpp"
#include <vector>

class MacroCommand : public Command
{
private:
    std::vector<Command *> commands;
    std::string className = "MacroCommand";

public:
    MacroCommand(const std::vector<Command *> &c) : commands(c) {}
    void execute() override;
    void undo() override;

    std::string getClassName() const override
    {
        return className;
    }
};

inline void
MacroCommand::execute()
{
    for (const auto &command : commands)
    {
        command->execute();
    }
}

inline void
MacroCommand::undo()
{
    for (int i = commands.size() - 1; i >= 0; --i)
    {
        commands[i]->undo();
    }
}

#endif // __MACROCOMMAND_HPP__

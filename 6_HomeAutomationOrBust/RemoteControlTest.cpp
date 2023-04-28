// #include "SimpleRemoteControl.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "RemoteControl.hpp"
#include "MacroCommand.hpp"

#include <iostream>
#include <vector>

int main()
{
    // auto remote = SimpleRemoteControl(); // Invoker
    // auto light = new Light();            // Receiver
    // auto lightOn = new LightOnCommand(light);

    // remote.setCommand(lightOn);
    // remote.buttonWasPressed();

    // auto garageDoor = new GarageDoor();
    // auto garageDoorOpen = new GarageDoorOpenCommand(garageDoor);

    // remote.setCommand(garageDoorOpen);
    // remote.buttonWasPressed();

    auto remoteControl = RemoteControl();
    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    GarageDoor *garageDoor = new GarageDoor();

    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);

    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);

    // GarageDoorOpenCommand *garageDoorOpen = new GarageDoorOpenCommand(garageDoor);

    // remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);
    // remoteControl.setCommand(1, kitchenLightOn, kitchenLightOff);
    // remoteControl.setCommand(2, garageDoorOpen, nullptr);

    // std::cout << remoteControl;

    // for (int i = 0; i < 3; ++i)
    // {
    //     remoteControl.onButtonWasPushed(i);
    //     remoteControl.offButtonWasPushed(i);
    // }

    // Undo
    remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    std::cout << remoteControl;

    remoteControl.undoButtonWasPushed();
    remoteControl.offButtonWasPushed(0);
    remoteControl.onButtonWasPushed(0);
    std::cout << remoteControl;
    remoteControl.undoButtonWasPushed();

    std::cout << "Macro ----\n";
    // Macro
    std::vector<Command *> partyOn = {livingRoomLightOn, kitchenLightOn};
    std::vector<Command *> partyOff = {livingRoomLightOff, kitchenLightOff};

    MacroCommand *partyOnCommand = new MacroCommand(partyOn);
    MacroCommand *partyOffCommand = new MacroCommand(partyOff);

    remoteControl.setCommand(1, partyOnCommand, partyOffCommand);
    std::cout << remoteControl;
    remoteControl.onButtonWasPushed(1);
    remoteControl.offButtonWasPushed(1);
    std::cout << remoteControl;

    return 0;
}
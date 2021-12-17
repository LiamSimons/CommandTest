#include "controller.h"

Controller::Controller()
{
    // Making all command objects
    std::shared_ptr<Up> upCommand = std::make_shared<Up>();

    // Mapping all commands
    // "Up","Right","Down","Left","GoTo","AttackNearestEnemy","TakeNearestHealthPack","Help"
    commandsMapping = {
        {"Up", upCommand}
    };
}

void Controller::parseString(std::string string)
{
    // this gets the object from the mapping of the string
    std::shared_ptr<Command> command = commandsMapping[string];
    if(command != nullptr) command->doCommand();
}

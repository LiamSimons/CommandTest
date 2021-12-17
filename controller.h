#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

#include "up.h"

// Controller maps the strings to the right object and calls doAction();

class Controller
{
public:
    Controller();
    void parseString(std::string string);
private:
    std::unordered_map<std::string, std::shared_ptr<Command>> commandsMapping;
};

#endif // CONTROLLER_H

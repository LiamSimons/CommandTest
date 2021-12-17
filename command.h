#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class Command
{
public:
    Command();
    virtual void doCommand() = 0;
};

#endif // COMMAND_H

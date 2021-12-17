#ifndef UP_H
#define UP_H

#include <iostream>

#include "command.h"

class Up : public Command
{
public:
    Up();
    void doCommand();
};

#endif // UP_H

#include "up.h"

Up::Up() : Command()
{
    std::cout<<"Up constructor"<<std::endl;
}

void Up::doCommand()
{
    std::cout<<"Up doCommand"<<std::endl;
}

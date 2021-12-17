#include "controller.h"

int main()
{
    // initializations
    std::string input;

    std::shared_ptr<Controller> controller = std::make_shared<Controller>();

    // main loop
    while (input != "q"){
        std::cout<<"New input: ";
        std::cin>>input;
        controller->parseString(input);
    }
    return 0;
}

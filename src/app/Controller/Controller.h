#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Led.h"
#include <string>

enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *Led);
    ~Controller();
    void updateEvent(std::string strBtn);
};

#endif
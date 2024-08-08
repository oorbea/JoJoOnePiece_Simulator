#ifndef STAND_HH_
#define STAND_HH_

#include <string>

class Stand
{
public:
    //Constructor
    Stand();

    //Modifiers
    void setName(std::string& name);

    void setDescription(std::string& description);

    void setPhase(int phase);

    //Consultors
    std::string getName();

    std::string getDescription();

    int getPhase();

    bool exists();

private:
    std::string name;
    std::string description;
    int phase = 1;
};

#endif
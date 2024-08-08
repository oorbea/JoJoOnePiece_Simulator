#ifndef STAND_HH_
#define STAND_HH_

#include <string>

class Stand
{
public:
    //Constructor
    Stand();

    //Modifiers
    void setName(string& name);

    void setDescription(string& description);

    void setPhase(int phase);

    //Consultors
    string getName();

    string getDescription();

    int getPhase();

    bool exists();

private:
    string name;
    string description;
    int phase = 1;
};

#endif
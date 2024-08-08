#ifndef FRUIT_HH_
#define FRUIT_HH_

#include <string>

class Fruit
{
public:
    //Constructor
    Fruit();

    //Modifiers
    void setName(string& name);

    void setDescription(string& description);

    void setType(string& type);

    //Consultors
    string getName();

    string getDescription();

    string getType();

    bool exists();

private:
    string name;
    string description;
    string type;
};

#endif
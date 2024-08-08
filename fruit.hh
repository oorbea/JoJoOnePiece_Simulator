#ifndef FRUIT_HH_
#define FRUIT_HH_

#include <string>

class Fruit
{
public:
    //Constructor
    Fruit();

    //Modifiers
    void setName(std::string& name);

    void setDescription(std::string& description);

    void setType(std::string& type);

    //Consultors
    std::string getName();

    std::string getDescription();

    std::string getType();

    bool exists();

private:
    std::string name;
    std::string description;
    std::string type;
};

#endif
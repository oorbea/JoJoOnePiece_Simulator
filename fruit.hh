#ifndef FRUIT_HH_
#define FRUIT_HH_

#include <string>
using namespace std;

class Fruit
{
public:
    //Constructor
    Fruit();

    Fruit(const string& name, const string& description, const string& type);

    //Modifiers
    void setName(const string& name);

    void setDescription(const string& description);

    void setType(const string& type);

    //Consultors
    string getName() const;

    string getDescription() const;

    string getType() const;

    bool exists() const;

private:
    string name;
    string description;
    string type;
};

#endif
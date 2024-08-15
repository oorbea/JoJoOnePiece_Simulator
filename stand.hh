#ifndef STAND_HH_
#define STAND_HH_

#include <string>
using namespace std;

class Stand
{
public:
    //Constructor
    Stand();

    Stand(const string& name, const string& description, const bool evolves = false);

    //Modifiers
    void setName(const string& name);

    void setDescription(const string& description);

    //Consultors
    string getName() const;

    string getDescription() const;

    bool canEvolve() const;

    bool exists() const;

private:
    string name;
    string description;
    bool evolves = false;
};

#endif
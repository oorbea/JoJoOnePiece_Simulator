#ifndef STAND_HH_
#define STAND_HH_

#include <string>
using namespace std;

class Stand
{
public:
    //Constructor
    Stand();

    Stand(const string& name, const string& description, const int phase = 1);

    //Modifiers
    void setName(const string& name);

    void setDescription(const string& description);

    void setPhase(const int phase);

    //Consultors
    string getName() const;

    string getDescription() const;

    int getPhase() const;

    bool exists() const;

private:
    string name;
    string description;
    int phase = 1;
};

#endif
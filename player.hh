#ifndef PLAYER_HH_
#define PLAYER_HH_

#include "fruit.hh"
#include "stand.hh"
#include <vector>

typedef vector<pair<string, string>> hakiList;
class Player
{
public:
    //Constructor
    Player(string& name);

    //Modifiers
    void setFruit(Fruit& fruit);

    void setStand(Stand& stand);

    void setStrength(string& strength);

    void setHaki(hakiList& haki);

    void setSpin(string& spin);

    //Consultors
    Fruit getFruit();

    string getFruitMastery();

    Stand getStand();

    string getStrength();

    hakiList getHaki();

    string getSpin();

private:
    string name;
    Fruit devilFruit;
    string fruitMastery;
    Stand standPossessed;
    string baseStrength;
    hakiList haki;
    string spinMastery;
};

#endif
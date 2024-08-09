#ifndef PLAYER_HH_
#define PLAYER_HH_

#include "fruit.hh"
#include "stand.hh"
#include <vector>
using namespace std;

typedef vector<pair<string, string>> hakiList;
class Player
{
public:
    //Constructor
    Player();

    Player(const string& name);

    //Modifiers
    void setName(const string& name);

    void setFruit(const Fruit& fruit);

    void setFruitMastery(const string& fruitMastery);

    void setStand(const Stand& stand);

    void setStrength(const string& strength);

    void setHaki(const hakiList& haki);

    void setSpin(const string& spin);

    //Consultors
    string getName() const;

    Fruit getFruit() const;

    string getFruitMastery() const;

    Stand getStand() const;

    string getStrength() const;

    hakiList getHaki() const;

    string getSpin() const;

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
#ifndef PLAYER_HH_
#define PLAYER_HH_

#include "fruit.hh"
#include "stand.hh"
#include <vector>

typedef std::vector<std::pair<std::string, std::string>> hakiList;
class Player
{
public:
    //Constructor
    Player();

    Player(std::string& name);

    //Modifiers
    void setName(std::string& name);

    void setFruit(Fruit& fruit);

    void setStand(Stand& stand);

    void setStrength(std::string& strength);

    void setHaki(hakiList& haki);

    void setSpin(std::string& spin);

    //Consultors
    std::string getName();

    Fruit getFruit();

    std::string getFruitMastery();

    Stand getStand();

    std::string getStrength();

    hakiList getHaki();

    std::string getSpin();

private:
    std::string name;
    Fruit devilFruit;
    std::string fruitMastery;
    Stand standPossessed;
    std::string baseStrength;
    hakiList haki;
    std::string spinMastery;
};

#endif
#ifndef POWERS_HH_
#define POWERS_HH_

#include "player.hh"
#include "randomizer.hh"
#include <map>
using namespace std;

void stablishEvolutions();

Fruit generateFruit();

string generateFruitMastery();

Stand generateStand();

Stand generateStandEvolution(const string& standName, const string& spinLvl);

string generateStrength();

hakiList generateHakiMastery(hakiList& hList);

hakiList generateHaki();

string generateSpin();

Stand getSpecificEvolution(const string standName, const int index);

#endif
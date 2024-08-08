#include "player.hh"
using namespace std;

typedef vector<pair<string, string>> hakiList;

//Constructor
Player::Player() {
    this->name = "";
}

Player::Player(string& name) {
    this->name = name;
}

//Modifiers
void Player::setName(string& name) {
    this->name = name;
}

void Player::setFruit(Fruit& fruit) {
    this->devilFruit = fruit;
}

void Player::setStand(Stand& stand) {
    this->standPossessed = stand;
}

void Player::setStrength(string& strength) {
    this->baseStrength = strength;
}

void Player::setHaki(hakiList& haki) {
    this->haki = haki;
}

void Player::setSpin(string& spin) {
    this->spinMastery = spin;
}

//Consultors
string Player::getName() {
    return this->name;
}

Fruit Player::getFruit() {
    return this->devilFruit;
}

string Player::getFruitMastery() {
    return this->fruitMastery;
}

Stand Player::getStand() {
    return this->standPossessed;
}

string Player::getStrength() {
    return this->baseStrength;
}

hakiList Player::getHaki() {
    return this->haki;
}

string Player::getSpin() {
    return this->spinMastery;
}
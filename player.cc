#include "player.hh"
using namespace std;

typedef vector<pair<string, string>> hakiList;

//Constructor
Player::Player() {
    this->name = "";
}

Player::Player(const string& name) {
    this->name = name;
}

//Modifiers
void Player::setName(const string& name) {
    this->name = name;
}

void Player::setFruit(const Fruit& fruit) {
    this->devilFruit = fruit;
}

void Player::setStand(const Stand& stand) {
    this->standPossessed = stand;
}

void Player::setStrength(const string& strength) {
    this->baseStrength = strength;
}

void Player::setHaki(const hakiList& haki) {
    this->haki = haki;
}

void Player::setSpin(const string& spin) {
    this->spinMastery = spin;
}

//Consultors
string Player::getName() const {
    return this->name;
}

Fruit Player::getFruit() const {
    return this->devilFruit;
}

string Player::getFruitMastery() const {
    return this->fruitMastery;
}

Stand Player::getStand() const {
    return this->standPossessed;
}

string Player::getStrength() const {
    return this->baseStrength;
}

hakiList Player::getHaki() const {
    return this->haki;
}

string Player::getSpin() const {
    return this->spinMastery;
}
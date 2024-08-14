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

void Player::setFruitMastery(const string& fruitMastery) {
    this->fruitMastery = fruitMastery;
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

void Player::printStats() const {
    cout << name << endl << endl;
    cout << "Físico base: " << baseStrength << endl;
    cout << "Spin: " << spinMastery << endl;
    cout << "Fruta del diablo: " << devilFruit.getName();
    if (devilFruit.exists())
        cout << " (Maestría " << fruitMastery << ")";
    cout << endl;
    cout << "Stand: " << standPossessed.getName() << endl;
    cout << "Haki: ";
    for (int i = 0; i < haki.size(); ++i) {
        if (i == haki.size() - 1) cout << haki[i].first << " (Maestría " << haki[i].second << ")";
        else cout << haki[i].first << " (Maestría " << haki[i].second << "), ";
    }
    cout << endl << endl;
}
#include "stand.hh"
using namespace std;

//Constructor
Stand::Stand() {
    this->name = "";
}

Stand::Stand(const string& name, const string& description, const bool evolves) {
    this->name = name;
    this->description = description;
    this->evolves = evolves;
}

//Modifiers
void Stand::setName(const string& name) {
    this->name = name;
}

void Stand::setDescription(const string& description) {
    this->description = description;
}

void Stand::setPhase(const int phase) {
    this->phase = phase;
}

//Consultors
string Stand::getName() const {
    return this->name;
}

string Stand::getDescription() const {
    return this->description;
}

int Stand::getPhase() const {
    return this->phase;
}

bool Stand::canEvolve() const {
    return evolves;
}

bool Stand::exists() const {
    return this->name.length() > 0;
}
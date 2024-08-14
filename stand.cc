#include "stand.hh"
using namespace std;

//Constructor
Stand::Stand() {
    name = "";
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
    return name;
}

string Stand::getDescription() const {
    return description;
}

int Stand::getPhase() const {
    return phase;
}

bool Stand::canEvolve() const {
    return evolves;
}

bool Stand::exists() const {
    return name != "Sin stand";
}
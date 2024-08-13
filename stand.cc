#include "stand.hh"
using namespace std;

//Constructor
Stand::Stand() {
    name = "";
}

Stand::Stand(const string& name, const string& description, const int phase) {
    this->name = name;
    this->description = description;
    this->phase = phase;
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

bool Stand::exists() const {
    return name != "Sin stand";
}
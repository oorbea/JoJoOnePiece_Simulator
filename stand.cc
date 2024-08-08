#include "stand.hh"
using namespace std;

//Constructor
Stand::Stand() {
    this->name = "";
}

//Modifiers
void Stand::setName(string& name) {
    this->name = name;
}

void Stand::setDescription(string& description) {
    this->description = description;
}

void Stand::setPhase(int phase) {
    this->phase = phase;
}

//Consultors
string Stand::getName() {
    return this->name;
}

string Stand::getDescription() {
    return this->description;
}

int Stand::getPhase() {
    return this->phase;
}

bool Stand::exists() {
    return this->name.length() > 0;
}
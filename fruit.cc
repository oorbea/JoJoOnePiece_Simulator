#include "fruit.hh"
using namespace std;

//Constructor
Fruit::Fruit() {
    name = "";
}

//Modifiers
void Fruit::setName(string& name) {
    this->name = name;
}

void Fruit::setDescription(string& description) {
    this->description = description;
}

void Fruit::setType(string& type) {
    this->type = type;
}

//Consultors

string Fruit::getName() {
    return this->name;
}

string Fruit::getDescription() {
    return this->description;
}

string Fruit::getType() {
    return this->type;
}

bool Fruit::exists() {
    return name.length() > 0;
}
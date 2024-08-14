#include "fruit.hh"
using namespace std;

//Constructor
Fruit::Fruit() {
    name = "";
}

Fruit::Fruit(const string& name, const string& description, const string& type) {
    this->name = name;
    this->description = description;
    this->type = type;
}

//Modifiers
void Fruit::setName(const string& name) {
    this->name = name;
}

void Fruit::setDescription(const string& description) {
    this->description = description;
}

void Fruit::setType(const string& type) {
    this->type = type;
}

//Consultors

string Fruit::getName() const {
    return name;
}

string Fruit::getDescription() const {
    return description;
}

string Fruit::getType() const {
    return type;
}

bool Fruit::exists() const {
    return name != "Sin fruta";
}
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

    bool Fruit::exists() {
        return name.length() > 0;
    }
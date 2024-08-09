#include <iostream>
#include "powers.hh"

using namespace std;

int main() {
    int numPlayers;
    cout<<"Welcome to JoJo's & OnePiece Simulator"<<endl;
    cout<<"En este simulador se os asignaran diversas cualidades y habilidades de los respectivos universos de One Piece y JoJo's Bizarre Adventure, con el objetivo de que discutais y decidais, basado en las condiciones de vuestros personajes, que tan lejos llegariais en el mundo de One Piece."<<endl;
    cout<<"Introduce el numero de jugadores: ";
    cin>>numPlayers;
    cout<<endl;
    vector<Player> playersInRoom(numPlayers);
    cout<<"Introduce el numero de jugadores: "<<endl;
    for(int i=0; i<numPlayers; i++){
        cout<<"Jugador "<<i + 1<<": ";
        string name;
        cin>>name;
        playersInRoom[i].setName(name);
    }
    cout << "Muy bien, asignemos poderes a los jugadores" << endl;
    for (int i = 0; i < numPlayers; ++i) {
        Player player = playersInRoom[i];
        string playerName = player.getName();
        cout << "Le toca a " << playerName << endl;

        cout << "Primero veamos su fisico base" << endl;
        string strength = generateStrength();
        player.setStrength(strength);
        cout << playerName << ", eres tan fuerte como un " << strength << endl;

        cout << "Ahora veamos si sabes usar el spin" << endl;
        string spin = generateSpin();
        player.setSpin(spin);
        cout << playerName << ", tu nivel de spin es " << spin << endl;

        cout << "Vamos, a ver que tal tu fruta del diablo" << endl;
        Fruit akuma = generateFruit();
        player.setFruit(akuma);
        cout << playerName << ", tu fruta es la " << akuma.getName() << ", que es de tipo " << akuma.getType() << endl << akuma.getDescription() << endl;;

        cout << "Y tu maestria con ella es ";
        string fruitMas = generateFruitMastery();
        player.setFruitMastery(fruitMas);
        cout << fruitMas << endl;

        cout << "¡Algo te esta pasando! Creo que vas a obtener un stand" << endl;
        Stand stand = generateStand();
        player.setStand(stand);
        cout << playerName << ", tu stand es " << stand.getName() << endl;
        cout << stand.getDescription() << endl;

        cout << "A ver que tal los resultados de tu entrenamiento. ¿Que haki tendras?" << endl;
        hakiList haList = generateHaki();
        cout << "Pues resulta que tienes estos tipos de haki: ";
        for (int j = 0; j < haList.size(); ++j) {
            if (j == haList.size() - 1) cout << haList[j].first;
            else cout << haList[j].first << ", ";
        }
        cout << endl;

        cout << "Y tu maestria con cada uno de ellos es: ";
        haList = generateHakiMastery(haList);
        for (int j = 0; j < haList.size(); ++j) {
            if (j == haList.size() - 1) cout << haList[j].first << ": " << haList[j].second;
            else cout << haList[j].first << ": " << haList[j].second << ", ";
        }
        cout << endl;
    }
}

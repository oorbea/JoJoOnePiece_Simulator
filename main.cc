#include <iostream>
#include "player.hh"
#include "randomizer.hh"

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

}

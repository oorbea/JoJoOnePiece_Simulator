#include <iostream>
#include "player.hh"
#include "randomizer.hh"

using namespace std;

int main() {
    int numPlayers;
    cout<<"Welcome to JoJo's & OnePiece Simulator"<<endl;
    cout<<"En este simulador se os asignaran diversas cualidades y habilidades de los respectivos universos de One Piece y JoJo's Bizarre Adventure, con el objetivo de que discutais y decidais, basado en las condiciones de vuestros personajes, que tan lejos llegariais en el mundo de One Piece."<<endl;
    cout<<"Introdueix el nombre de jugadors: ";
    cin>>numPlayers;
    cout<<endl;
    vector<Player> playersInRoom(numPlayers);
    cout<<"Introduiex el nom dels jugadors: "<<endl;
    for(int i=0; i<numPlayers; i++){
        cout<<"Player "<<i + 1<<": ";
        string name;
        cin>>name;
        playersInRoom[i].setName(name);
    }
    cout << "Generar numero aleatorio entre dos numeros:" << endl;
    int minNum, maxNum;
    cin >> minNum >> maxNum;
    cout << generateRandomNumber(minNum, maxNum) << endl;

}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number_of_players;
    cout<<"Welcome to JoJo's&OnePiece Simulator"<<endl;
    cout<<"En este simulador se os asignaran diversas cualidades y habilidades de los respectivos universos de One Piece y JoJo's Bizarre Adventure, con el objetivo de que discutais y decidais, basado en las condiciones de vuestros personajes, que tan lejos llegaríais en el mundo de One Piece."<<endl;
    cout<<"Introdueix el nombre de jugadors: ";
    cin>>number_of_players;
    cout<<endl;
    vector<string> player_name(number_of_players);
    cout<<"Introduiex el nom dels jugadors: "<<endl;
    for(int i=0; i<player_name.size(); i++){
        cout<<"Player "<<i<<": ";
        cin>>player_name[i];
    }

}

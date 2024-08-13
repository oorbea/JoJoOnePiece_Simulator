#include <locale>
#include "powers.hh"
#include "loadingScreen.hh"

using namespace std;

int main() { //TODO Poner pantallas de carga donde toque
    setlocale(LC_ALL, "");

    int numPlayers;
    cout << "Welcome to JoJo's & OnePiece Simulator" << endl;
    cout << "En este simulador se os asignarán diversas cualidades y habilidades de los respectivos universos de One Piece y JoJo's Bizarre Adventure, con el objetivo de que discutáis y decidáis, basado en las condiciones de vuestros personajes, que tan lejos llegaríais en el mundo de One Piece." << endl;
    cout << "Introduce el numero de jugadores: ";
    cin >> numPlayers;
    cout << endl;
    vector<Player> playersInRoom(numPlayers);
    cout << "Introduce el nombre de los jugadores: " << endl;
    for(int i=0; i<numPlayers; i++) {
        cout << "Jugador " << i + 1 << ": ";
        string name;
        cin >> name;
        playersInRoom[i].setName(name);
    }
    cout << endl << "Muy bien, asignemos poderes a los jugadores" << endl << endl;
    for (int i = 0; i < numPlayers; ++i) {
        auto player = &playersInRoom[i];
        string playerName = player->getName();
        cout << "Le toca a " << playerName << endl << endl;

        cout << "Primero veamos tu fisico base" << endl;
        loadingScreen(5);
        string strength = generateStrength();
        player->setStrength(strength);
        cout << playerName << ", eres tan fuerte como un " << strength << endl << endl;
        delay(2.5);

        cout << "Ahora veamos si sabes usar el spin" << endl;
        loadingScreen(5);
        string spin = generateSpin();
        player->setSpin(spin);
        if (spin == "Sin spin")
            cout << playerName << ", lo siento, pero desafortunadamente no has aprendido a usar el spin" << endl << endl;
        else
            cout << playerName << ", tu nivel de spin es " << spin << endl << endl;
        delay(2.5);

        cout << "Vamos, a ver que tal tu fruta del diablo" << endl;
        loadingScreen(5);
        Fruit akuma = generateFruit();
        player->setFruit(akuma);
        if (akuma.exists()) {
            cout << playerName << ", tu fruta es la " << akuma.getName() << ", que es de tipo " << akuma.getType() << endl << akuma.getDescription() << endl << endl;
            delay(5);

            cout << "Y tu maestria con ella es..." << endl;
            loadingScreen(5);
            string fruitMas = generateFruitMastery();
            player->setFruitMastery(fruitMas);
            cout << "Maestria con tu fruta: " << fruitMas << endl << endl;
        }
        else
            cout << playerName << ", lo siento, pero desafortunadamente no tienes fruta del diablo." << endl << endl;
        delay(2.5);

        cout << "¡Algo te esta pasando! Creo que vas a obtener un stand" << endl;
        loadingScreen(5);
        Stand stand = generateStand();
        player->setStand(stand);
        if (stand.exists()) {
            cout << playerName << ", tu stand es " << stand.getName() << endl;
            cout << stand.getDescription() << endl << endl;
            delay(5);
        }
        else {
            cout << playerName << ", lo siento, pero desafortunadamente no eres usuario de stand." << endl << endl;
            delay(2.5);
        }

        cout << "A ver que tal los resultados de tu entrenamiento. ¿Que haki tendras?" << endl;
        loadingScreen(5);
        hakiList haList = generateHaki();
        if (haList[0].first != "Sin haki") {
            cout << "Pues resulta que tienes estos tipos de haki: ";
            for (int j = 0; j < haList.size(); ++j) {
                if (j == haList.size() - 1) cout << haList[j].first;
                else cout << haList[j].first << ", ";
            }
            delay(2.5);
            cout << endl << endl;
            
            cout << "Y tu maestria con cada uno de ellos es: " << endl;
            loadingScreen(5);
            haList = generateHakiMastery(haList);
            for (int j = 0; j < haList.size(); ++j) {
                if (j == haList.size() - 1) cout << haList[j].first << ": " << haList[j].second;
                else cout << haList[j].first << ": " << haList[j].second << ", ";
            }
            cout << endl << endl;
        }
        else
            cout << playerName << ", lo siento, pero desafortunadamente no has aprendido a usar haki" << endl << endl;
        delay(2.5);

        cout << endl;
    }
}

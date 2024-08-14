#include "powers.hh"
#include "loadingScreen.hh"

using namespace std;

int main() {

    int numPlayers;
    cout << "Welcome to JoJo's & OnePiece Simulator" << endl;
    cout << "En este simulador se os asignarán diversas cualidades y habilidades de los respectivos universos de One Piece y JoJo's Bizarre Adventure, con el objetivo de que discutáis y decidáis, basado en las condiciones de vuestros personajes, cuán lejos llegaríais en el mundo de One Piece." << endl;

    cout << "Introduce el número de jugadores: ";
    cin >> numPlayers;
    cout << endl;
    vector<Player> playersInRoom(numPlayers);
    cout << "Introduce el nombre de cada jugador: " << endl;
    for(int i=0; i<numPlayers; i++) {
        cout << "Jugador " << i + 1 << ": ";
        string name;
        cin >> name;
        playersInRoom[i].setName(name);
    }

    cout << endl << "Muy bien, asignemos poderes a los jugadores" << endl << endl;

    stablishEvolutions();

    for (int i = 0; i < numPlayers; ++i) {
        auto player = &playersInRoom[i];
        string playerName = player->getName();
        cout << "Le toca a " << playerName << endl << endl;

        cout << "Primero veamos tu físico base" << endl;
        loadingScreen(generateRandomNumber(1, 2));
        string strength = generateStrength();
        player->setStrength(strength);
        cout << playerName << ", eres tan fuerte como un " << strength << endl << endl;
        delay(2.5);

        cout << "Ahora veamos si sabes usar el spin" << endl;
        loadingScreen(generateRandomNumber(1, 2));
        string spin = generateSpin();
        player->setSpin(spin);
        if (spin == "Sin spin")
            cout << playerName << ", lo siento, pero desafortunadamente no has aprendido a usar el spin" << endl << endl;
        else
            cout << playerName << ", tu nivel de spin es " << spin << endl << endl;
        delay(2.5);

        cout << "Vamos, a ver qué tal tu fruta del diablo" << endl;
        loadingScreen(generateRandomNumber(1, 2));
        Fruit akuma = generateFruit();
        player->setFruit(akuma);
        if (akuma.exists()) {
            cout << playerName << ", tu fruta es la " << akuma.getName() << ", que es de tipo " << akuma.getType() << endl << akuma.getDescription() << endl << endl;
            delay(5);

            cout << "Y tu maestría con ella es..." << endl;
            loadingScreen(generateRandomNumber(1, 2));
            string fruitMas = generateFruitMastery();
            player->setFruitMastery(fruitMas);
            cout << "Maestría con tu fruta: " << fruitMas << endl << endl;
        }
        else
            cout << playerName << ", lo siento, pero desafortunadamente no tienes fruta del diablo." << endl << endl;
        delay(2.5);

        cout << "¡Algo te está pasando! ¡Creo que vas a obtener un stand!" << endl;
        loadingScreen(generateRandomNumber(1, 2));
        Stand stand = generateStand();
        if (stand.exists()) {
            string standName = stand.getName();
            cout << playerName << ", tu stand es " << standName << endl;
            if (stand.canEvolve()) {
                delay(2);
                cout << "Ahora veamos en qué fase está tu stand" << endl;
                loadingScreen(generateRandomNumber(1, 2));
                stand = generateStandEvolution(standName);
                standName = stand.getName();
                cout << playerName << ", tu stand es " << standName << endl;

                if (standName == "Tusk ACTO 1" && spin != "Spin básico") {
                    if (spin == "Sin spin") {
                        spin = "Spin básico";
                        cout << "¡" << playerName << ", al obtener a Tusk, has aprendido a usar spin básico!" << endl;
                        player->setSpin(spin);
                    }
                    else {
                        if (spin == "Spin áureo") {
                            if (generateRandomNumber(0, 1) == 0) {
                                stand = getSpecificEvolution("Tusk", 1);
                                cout << "¡" << playerName << ", sin embargo, al tener spin áureo, Tusk evoluciona al ACTO 2!" << endl;
                            }
                            else {
                                stand = getSpecificEvolution("Tusk", 2);
                                cout << "¡" << playerName << ", sin embargo, al tener spin áureo, Tusk evoluciona al ACTO 3!" << endl;
                            }
                        }
                        else {
                            stand = getSpecificEvolution("Tusk", 3);
                            cout << "¡" << playerName << ", sin embargo, al tener spin infinito, Tusk evoluciona al ACTO 4!" << endl;
                        }
                    }
                }
                else if ((standName == "Tusk ACTO 2" || standName == "Tusk ACTO 3") && spin != "Spin áureo") {
                    if (spin == "Sin spin" || spin == "Spin básico") {
                        spin = "Spin áureo";
                        cout << "¡" << playerName << ", al obtener a " << standName << ", has aprendido a usar spin áureo!" << endl;
                        player->setSpin(spin);
                    }
                    else {
                        stand = getSpecificEvolution("Tusk", 3);
                        cout << "¡" << playerName << ", sin embargo, al tener spin infinito, Tusk evoluciona al ACTO 4!" << endl;
                    }
                }
                else if ((standName == "Tusk ACTO 4" || standName == "Soft & Wet: Go Beyond!") && spin != "Spin infinito") {
                    spin = "Spin infinito";
                    cout << "¡" << playerName << ", al obtener a " << standName << ", has aprendido a usar spin infinito!" << endl;
                    player->setSpin(spin);
                }
            }
            else if (standName == "Ball Breaker") {
                spin = "Spin infinito";
                cout << "¡" << playerName << ", al obtener a " << standName << ", has aprendido a usar spin infinito!" << endl;
                player->setSpin(spin);
            }
            cout << stand.getDescription() << endl << endl;
            delay(10);
        }
        else {
            cout << playerName << ", lo siento, pero desafortunadamente no eres usuario de stand." << endl << endl;
            delay(2.5);
        }
        player->setStand(stand);

        cout << "A ver qué tal los resultados de tu entrenamiento. ¿Qué haki tendrás?" << endl;
        loadingScreen(generateRandomNumber(1, 2));
        hakiList haList = generateHaki();
        if (haList[0].first != "Sin haki") {
            cout << "Pues resulta que tienes estos tipos de haki: ";
            for (int j = 0; j < haList.size(); ++j) {
                if (j == haList.size() - 1) cout << haList[j].first;
                else cout << haList[j].first << ", ";
            }
            delay(2.5);
            cout << endl << endl;
            
            cout << "Y tu maestría con cada uno de ellos es: " << endl;
            loadingScreen(generateRandomNumber(1, 2));
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

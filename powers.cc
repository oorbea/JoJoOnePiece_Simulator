#include "powers.hh"

const vector<Fruit> fruitArray = {
    Fruit("Sin fruta", "Desafortunadamente no tienes fruta del diablo", "ninguno"),
    Fruit("Gomu Gomu", "Convierte al consumidor en un hombre de goma, lo que le permite estirarse aparentemente sin límite. También es inmune a las balas, caídas y golpes, aunque puede ser golpeado muy fuerte.", "Zoan"),

};

const vector<Stand> standArray = {
    Stand("Sin stand", "Desafortunadamente no tienes stand", 0),
    Stand("Star Platinum", "Es uno de los Stands más poderosos de la serie. Su abrumadora destreza física en cada característica básica, salvo el alcance, junto con la habilidad de Jotaro en combate, permite que Jotaro prevalezca repetidamente contra muchos usuarios de Stand incluso sin el uso de ninguna habilidad especial. Además, el descubrimiento de Jotaro de su capacidad para detener el tiempo solo lo hizo aún más formidable en el combate."),
};

Fruit generateFruit() {
    int fruitIndex = generateRandomNumber(0, fruitArray.size() - 1);
    return fruitArray[fruitIndex];
}

string generateFruitMastery() {
    int masteryLvl = generateRandomNumber(1, 3);
    switch (masteryLvl)
    {
    case 1:
        return "Basica";
    
    case 2:
        return "Avanzada";

    case 3:
        return "Despertada";
    
    default:
        return "Basica";
    }
}

Stand generateStand() {
    int standIndex = generateRandomNumber(0, standArray.size() - 1);
    return standArray[standIndex];
}

string generateStrength() {
    int strengthLvl = generateRandomNumber(1, 6);
    switch (strengthLvl)
    {
    case 1:
        return "Soldado raso de la marina";
    
    case 2:
        return "Gyojin fuerte";

    case 3:
        return "Capitan de la marina";

    case 4:
        return "Vice Almirante";

    case 5:
        return "Casi yonko";

    case 6:
        return "Yonko+";
    
    default:
        return "Soldado raso marina";
    }
}

hakiList generateHakiMastery(hakiList& hList) {
    if (hList[0].first != "Sin haki") {
        for (int i = 0; i < hList.size(); ++i) {
            int mastery = generateRandomNumber(1, 4);
            switch (mastery)
            {
            case 1:
                hList[i].second = "Basica";
                break;

            case 2:
                hList[i].second = "Avanzada";
                break;

            case 3:
                hList[i].second = "Casi yonko";
                break;

            case 4:
                hList[i].second = "Yonko+";
                break;
            
            default:
                hList[i].second = "Basica";
                break;
            }
        }
    }

    return hList;
}

hakiList generateHaki() {
    hakiList hList;
    int probab = generateRandomNumber(1, 100);

    if (probab == 1) hList.push_back(make_pair("Haoshoku", "")); //1%
    else if (probab <= 5) hList.push_back(make_pair("Sin haki", "Nula")); //4%
    else if (probab <= 15) { //10%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 25) { //10%
        hList.push_back(make_pair("Kenbunshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 40) { //15%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Kenbunshoku", ""));
        hList.push_back(make_pair("Haoshoku", ""));
    }
    else if (probab <= 60) hList.push_back(make_pair("Busoshoku", "")); //20%
    else if (probab <= 80) hList.push_back(make_pair("Kenbunshoku", "")); //20%
    else { //20%
        hList.push_back(make_pair("Busoshoku", ""));
        hList.push_back(make_pair("Kenbunshoku", ""));
    }

    return hList;
}

string generateSpin() {
    int probab = generateRandomNumber(1, 10);
    if (probab == 1) return "Sin spin";
    if (probab == 2) return "Spin infinito";
    if (probab <= 6) return "Spin basico";
    else return "Spin aureo";
}
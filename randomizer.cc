#include <random>
using namespace std;

int generateRandomNumber(int min, int max) {
    random_device raDe;

    mt19937 gen(raDe());

    uniform_int_distribution<> distrib(min, max);

    return distrib(gen);
}
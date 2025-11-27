#include <iostream>
#include <random>
using namespace std;

int randomNumber() {
    random_device rdNum;
    mt19937 generate(rdNum());
    uniform_int_distribution<int> range(1, 100);
    int randomNum = range(generate);
    return randomNum;
}

int main() {
    int inputNum;
    int randomNum = randomNumber();

    cout << "====GUESS THE FUCKING NUMBER====" << endl;
    cout << "\nI chose random number from 1 to 100. Try to guess it: ";
    cin >> inputNum;

    if (inputNum > randomNum) {
        cout << "LOSER! It's lower: ";
    } if (inputNum < randomNum) {
        cout << "LOSER! It's higher: ";
    } else {
        cout << "WINNER!" << endl;
    }
}
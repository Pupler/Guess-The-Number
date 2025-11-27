#include <iostream>
#include <random>
using namespace std;

int randomNumber() {
    random_device rdNum;
    mt19937 generate(rdNum());
    uniform_int_distribution<int> range(1, 100);
    int randomNum = range(generate);
    return range(generate);
}

int main() {
    int number;
    int randomNum = randomNumber();

    cout << "====GUESS THE FUCKING NUMBER====" << endl;
    cout << "\nI chose random number from 1 to 100. Try to guess it: ";
    cin >> number;

    if (number != randomNum) {
        cout << "LOSER" << endl;
        cout << "The number was: " << randomNum << endl;
    } else {
        cout << "WINNER!" << endl;
    }
}
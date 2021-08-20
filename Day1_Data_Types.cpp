#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int inputInt;
    double inputDouble;
    string inputString;

    cin >>
        inputInt;
    cin >> inputDouble;
    cin.ignore();
    getline(cin, inputString);

    cout << i + inputInt << endl;
    std::cout << std::fixed << std::setprecision(1) << (d + inputDouble) << endl;
    cout << s + inputString << endl;

    return 0;
}
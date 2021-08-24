#include <iostream>
#include <iterator>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int numberOfTestRun;
    string bookName;
    long bookNuumber;
    cin >> numberOfTestRun;
    cin.ignore();
    map<string, long> phoneBook;

    for (int i = 0; i < numberOfTestRun; i++)
    {
        cin >> bookName;
        cin >> bookNuumber;
        phoneBook[bookName] = bookNuumber;
    }
    while (cin >> bookName)
    {
        if (phoneBook.find(bookName) != phoneBook.end())
        {
            cout << bookName << "=" << phoneBook.find(bookName)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
};
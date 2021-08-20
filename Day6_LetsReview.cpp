#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfCases;
    cin >> numberOfCases;

    while (numberOfCases)
    {
        string inputstring;
        cin >> inputstring;

        string evenString = "";
        string oddSting = "";
        for (int i = 0; i < strlen(inputstring.c_str()); i++)
        {
            if (i % 2 == 0)
                evenString += inputstring[i];
            else
                oddSting += inputstring[i];
        }

        cout << evenString << " " << oddSting << endl;

        numberOfCases--;
    }

    return 0;
}
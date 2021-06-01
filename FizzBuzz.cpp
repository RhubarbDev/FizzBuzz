// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> fizz = { 3 };
    list <int> buzz = { 5 };

    for (int i = 1; i <= 100; i++) {

        bool f = false;
        bool b = false;

        for (int x : fizz) {
            if (i % x == 0) {
                f = true;
            }
        }
        for (int y : buzz) {
            if (i % y == 0) {
                b = true;
            }
        }

        if (f) { cout << "Fizz"; }
        if (b) { cout << "Buzz"; }
        if (!f && !b) { cout << i; }
        cout << "\n";
    }
    cin;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string t;
    cin >> t;

    int result = 0;

    for (char a : t) {
        if (a >= 'A' && a <= 'C')
            result += 3;
        else if (a >= 'D' && a <= 'F')
            result += 4;
        else if (a >= 'G' && a <= 'I')
            result += 5;
        else if (a >= 'J' && a <= 'L')
            result += 6;
        else if (a >= 'M' && a <= 'O')
            result += 7;
        else if (a >= 'P' && a <= 'S')
            result += 8;
        else if (a >= 'T' && a <= 'V')
            result += 9;
        else if (a >= 'W' && a <= 'Z')
            result += 10;
    }

    cout << result;

    return 0;
}

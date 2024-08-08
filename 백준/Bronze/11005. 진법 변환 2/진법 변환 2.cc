#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string changeNB(int a, int b) {
    if (a == 0) return "0";

    string result = "";
    while (a > 0) {
        int remain = a % b;
        if (remain < 10) {
            result += (remain + '0');
        } else {
            result += (remain - 10 + 'A');
        }
        a = a / b;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int N, B;
    cin >> N >> B;

    string result = changeNB(N, B); 
    cout << result << endl;

    return 0;
}

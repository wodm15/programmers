#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int dice1, dice2, dice3;
    cin >> dice1 >> dice2 >> dice3;

    if((dice1 == dice2 && dice1 != dice3) || (dice1 == dice3 && dice1 != dice2)){
        cout << 1000 + (dice1 * 100);
    }
    else if(dice2 == dice3 && dice2 != dice1){
        cout << 1000 + (dice2 * 100);
    }

    else if(dice1 == dice2 && dice1 == dice3){
        cout << 10000 + (dice1 * 1000);
    }

    else if(dice1 != dice2 && dice1 != dice3 && dice2 !=dice3){
        cout << max({dice1 , dice2 , dice3}) * 100;
    }
    return 0;
}
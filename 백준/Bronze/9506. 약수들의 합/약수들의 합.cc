#include <iostream>
using namespace std;

int main() {
    int input = 0;
    
    while(input != -1){
        int seq = 0;
        cin >> input;

        for(int i=1 ; i<=input/2 ; ++i)
            {
                if(input% i == 0){
                    seq = seq + i;
                }
            }
        if(input == -1){
            return 0;
        }
        if(seq != input){
            cout << input << " is NOT perfect."<< endl;
        }
        else {
            cout << input << " = ";
            bool first = true;
            for(int i = 1; i <= input / 2; ++i) {
                if(input % i == 0) {
                    if (!first) {
                        cout << " + ";
                    }
                    cout << i;
                    first = false;
                }
            }
            cout << endl;
        }
    }
}
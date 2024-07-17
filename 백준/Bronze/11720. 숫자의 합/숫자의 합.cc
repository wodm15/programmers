#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    string t;
    cin >> t;
    
    int sum=0;
    for(int i=0; i< N ;++i)
        {

            sum += int(t[i]) -48;
        }

    cout <<sum;
}
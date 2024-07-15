#include <iostream>
using namespace std;

int main(){
    int A,B;
    int end = 0;
    while(true){
        cin >> A >> B;
        if(A == end && B == end)
            break;
        cout << A+B << endl;
    }

    
    return 0;
}
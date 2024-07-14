#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b ;

    if(b>=45){
        b = b-45;
    } else{
        b=b+15;
        if(a>0){
            a=a-1;
        }
        else if(a==0)
            a=23;
    }


    cout << a << ' ' << b;

    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    // 2x + 3y = 5
    //3x + 4y = 7

    for(int i=-999 ; i<= 999 ; ++i){
        for(int j= -999 ; j <= 999 ; ++j){
            if( (i * a) + (j * b) == c && (i*d) + (j*e) == f){
                cout << i << ' '<< j << endl;
            }
        }
    }
}
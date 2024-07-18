#include <iostream>
#include <string>

using namespace std;

int main() {
    string t;
    cin >> t;

    for (char i= 'a' ; i <= 'z' ; ++i)
        {
            int index = -1;
             for (int j= 0 ; j< t.length() ; ++j)
                 {
                     if(t[j] == i){
                         cout << j << ' ';
                         index = 0;
                         break;
                    }
                 }
            if( index == -1)
                cout << -1 << ' ';
        }
}

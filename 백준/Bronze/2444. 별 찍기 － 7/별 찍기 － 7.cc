#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i= 0 ;i< t-1 ;++i) //i= 0 1 2 3
        {
            for(int j = t-1-i ; j > 0 ; --j) // 4 3 2 1
                {
                    cout << " ";
                }
            for(int j = 0 ; j <= (2 * i) ; ++j) 
                {
                    cout << "*";
                }
            cout << endl;
        }

    for (int i= 0 ; i< t ; ++i)
        {
            for (int j = 0 ; j < i ; ++j)
                {
                    cout << " ";
                }
            for(int j = 2*(t-i) -1 ; j > 0 ; --j )
                {
                    cout <<"*";
                }
            cout << endl;
        }

}
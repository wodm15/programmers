#include <iostream>
using namespace std;

// 1 1 2 2 2 8

             
int main() {
    int num = 6;
    int check[num] = {1,1,2,2,2,8};
    int tmp;
    for (int i=0; i<6; ++i)
        {
            cin >> tmp;
            if (check[i] == tmp)
                cout << 0 << ' ';
            else
                cout << check[i] - tmp << ' ';
        }
}
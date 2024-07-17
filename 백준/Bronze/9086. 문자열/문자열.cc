#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int a;
    const int T =10;  //테스트케이스 개수
    vector <string> num(T);

    cin >> a;
    for (int i =0 ; i< a ; ++i)
        {
           cin >> num[i];
        }

    for (int i =0 ; i< a ; ++i)
        {
           cout << num[i].front() <<num[i].back() << endl;
        }
}
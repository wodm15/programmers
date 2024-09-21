#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> a;
    a.push_back(0);
    a.push_back(1);
    for(int i=2; i<=20 ; ++i)
        {
            a.push_back(a[i-2] + a[i-1]);
        }
    
    int N;
    cin >> N;

    cout << a[N];
    
}
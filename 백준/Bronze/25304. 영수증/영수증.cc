#include <iostream>

using namespace std;

int main() {
    
    int sum,t;
    int result = 0;
    
    cin >>sum;
    cin >> t;
    
    int prise;
    int cnt;
    
    for(int i = 1 ; i<=t ; ++i){
        cin >> prise >> cnt ;
        result += prise * cnt;
}
 
    if(sum == result){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
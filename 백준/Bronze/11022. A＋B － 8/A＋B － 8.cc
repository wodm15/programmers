#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    int a,b;
    for(int i=1 ; i<=t ; ++i){
        cin >> a >> b;
        cout << "Case #" << i << ": "<< a << " + " << b << " = "<<a+b << endl;
}
    
    return 0;
}
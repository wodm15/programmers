#include <iostream>
#include <string>

using namespace std;

int main () {
    string T;
    getline(cin , T);
    
    int result = 1;
    
    if (T.empty())
    {
        cout << "0";
        return 0;
    }
    for(int i=0; i< T.length() ; ++i)
        {
            if(T[i] == ' ')
                result +=1;
        }
    if(T[0] == ' ')
            --result;
    if(T.back() == ' ')
            --result;
    

    cout << result;
}
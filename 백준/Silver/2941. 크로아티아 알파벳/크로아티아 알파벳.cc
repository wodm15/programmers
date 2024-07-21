#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    int index = 0;
    vector <string> a = { "c=" , "c-" , "dz=" , "d-" , "lj" , "nj", "s=" ,"z="};

    for(int i=0 ; i< a.size() ; ++i)
        {
            while(1){
            index = input.find(a[i]);
            if(index == string::npos)
                break;
            input.replace(index, a[i].size(), "!");
        }
        }

    cout << input.length();
    
}
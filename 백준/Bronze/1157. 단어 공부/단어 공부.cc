#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    int alphabet_size = 26;
    int num[alphabet_size] = {0,};
    int duplicate_max = 0;
    char result;
    bool duplicate =false;
    int index = 0;
    
    for(int i=0 ; i<a.size() ; ++i)
        {
            a[i] = toupper(a[i]);
        }

    for(int i=0 ; i< a.size() ; ++i)
        {
            ++num[int(a[i])-65];
        }

    for(int i=0 ; i< alphabet_size; ++i)
        {
            if (duplicate_max <= num[i])
                {
                duplicate_max = num[i];
                result = char(i+65);
                }
        }

    for(int i=0 ; i< alphabet_size; ++i)
        {
            if(duplicate_max == num[i])
                ++index;
            if(index == 2)
                duplicate =true;
        }

    if(!duplicate)
        cout << result;
    else
        cout << "?";
    

}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;


    for (int i = 0; i < t; ++i) {
        int tmp1;
        string tmp2;
        cin >> tmp1 >> tmp2;

        for(int j = 0 ; j < tmp2.length() ; ++j)
            {
                for (int k= 0 ; k < tmp1 ; ++k)
                    {
                        cout << tmp2[j];
                    }
            }
        
        cout <<endl;
    }


    return 0;
}

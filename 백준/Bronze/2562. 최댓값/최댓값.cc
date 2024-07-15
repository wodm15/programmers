#include <iostream>

using namespace std;

int main() {

    int N = 9;
    int number[N];

    for(int i=0 ; i < N ; ++i)
        {
            int tmp;
            cin >> tmp;
            number[i] = tmp;
        }

    int max_number = 0;
    int max_position = 0;

    for(int i=0 ; i < N ; ++i)
        {
            if(number[i] > max_number)
            {
                max_number = number[i];
                max_position = i+1;
            }
        }
    cout << max_number << endl << max_position;
    
}
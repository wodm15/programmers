#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    int sum = 0;
    for (int i=0; i<a.size(); i++) 
        {
    		if (a[i] >= '0' && a[i] <= '9') 
            {
    			sum = sum*b + (a[i] - '0');
    		}
			else 
				sum = sum*b + (a[i] - 'A' + 10);
		}
    cout << sum;
    return 0;
}
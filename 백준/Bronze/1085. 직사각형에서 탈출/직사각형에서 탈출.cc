#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int  x, y , w, h;

    cin >> x >> y >> w >> h;

    int t1 = min(x,y);
    int t2 = min(w-x , h-y);
    int result = min (t1, t2);

    cout << result;
}
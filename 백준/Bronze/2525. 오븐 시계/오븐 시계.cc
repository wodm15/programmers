#include <iostream>

using namespace std;

int main() {
    int hour, minute , spend;
    cin >> hour >> minute >> spend;

    minute = minute + spend;
    
    while(minute >=60)
        {
            minute -= 60;
            hour += 1;
        }

    if(hour >= 24){
        hour = hour-24;
}

    cout << hour << ' ' << minute;

    
    return 0;
}


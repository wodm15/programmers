#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    
    int closet = array[0];
    
    for(int i=0 ; i< array.size(); ++i)
    {
        int currentDiff = abs (array[i] - n);
        int closetDiff = abs(closet - n);
        
        if(currentDiff < closetDiff)
            closet = array[i];
        else if(currentDiff == closetDiff && array[i] < closet)
            closet = array[i];
    }
    
    
    return closet;
}
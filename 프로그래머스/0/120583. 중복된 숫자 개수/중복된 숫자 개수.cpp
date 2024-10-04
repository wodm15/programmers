#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int count =0;
    
    for (const int& element : array)
    {
        if(n == element)
            count++;
    }
    
    return count;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int count = 0;
    for(const int& ele : array)
    {
        if(height < ele)
            count++;
    }
    return count;
}
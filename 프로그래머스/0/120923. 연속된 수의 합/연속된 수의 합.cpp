#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    
    int start = (total - (num * (num - 1) / 2)) / num;
    vector<int> answer;
    
    for(int i=0; i<num; ++i)
    {
        answer.push_back(start+i);
    }
    
    return answer;
}
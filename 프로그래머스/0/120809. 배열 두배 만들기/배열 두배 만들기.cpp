#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(const int& ele : numbers)
    {
        answer.push_back(ele *2);
    }
    
    return answer;
}
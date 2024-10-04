#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    bool isArithmetic = true;
    int diff = common[1] - common[0];
    int diff2 = common[2] - common[1];
    
    if(diff == diff2)
        isArithmetic = true;
    else
        isArithmetic = false;
    
    if(isArithmetic)
        answer = common.back() + diff;
    else{
        int ratio = common[1] / common[0];
        answer = common.back() * ratio;
    }
    
    return answer;
}
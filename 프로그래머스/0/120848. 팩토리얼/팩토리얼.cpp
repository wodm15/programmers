#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int result = 1;
    while(n > result){
        result *= answer;
        if(n < result * answer)
            break;
        answer++;
    }
    return answer;
}
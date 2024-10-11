#include <string>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> array) {
    string s_array = "";
    for(int i=0; i< array.size() ; ++i){
        s_array += to_string(array[i]);
    }
    int answer = 0;
    for(const char& _char : s_array)
        if(_char == '7')
            answer++;
    return answer;
}
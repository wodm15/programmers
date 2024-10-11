#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

string solution(string s) {
    unordered_map <char , int> check;
    vector <char> result;
    string answer= "";
    for(const char& _s : s)
    {
        check[_s]++;
    }
    
    for(const pair<char, int>& entry : check){
        if(entry.second == 1)
            result.push_back(entry.first);
    }
    
    sort(result.begin(), result.end());
    
    for(const char& _char : result)
        answer += _char;
    return answer;
}
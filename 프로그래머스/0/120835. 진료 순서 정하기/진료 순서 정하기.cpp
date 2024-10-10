#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<pair <int, int>> answer;
    vector <int> result(emergency.size());
    
    for(int i=0 ; i< emergency.size() ; ++i)
    {
        answer.push_back({emergency[i] , i });
    }
    
    sort(answer.begin(), answer.end() , greater<>());
    
    for(int i=0 ; i< answer.size(); ++i)
    {
        result[answer[i].second] = i+1;
    }
    return result;
}
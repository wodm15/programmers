#include <string>
#include <vector>
#include <unordered_set>


using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> my_uset;
    
    for(const char& my_char : my_string)
    {
        if(my_uset.find(my_char) == my_uset.end())
        {
            answer += my_char;
            my_uset.insert(my_char);
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp_string = "";
    vector <string> a;
    for (int i=0; i< my_string.size(); ++i)
    {
        if(my_string[i] >= 48 && my_string[i]  <= 57){  
            temp_string += my_string[i];
        }
        else if(!temp_string.empty()){
            a.push_back(temp_string);
            temp_string.clear();
        }
    }
    
    if(!temp_string.empty())
        a.push_back(temp_string);
    
    for(int i=0; i< a.size() ; ++i)
        answer += stoi(a[i]);
    return answer;
}
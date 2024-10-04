#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int x,y,z;
    char op, equal;
    bool correct = true;
    
    for(int i=0; i< quiz.size() ; ++i)
    {
        istringstream iss(quiz[i]);
        iss >> x >> op >> y >> equal >> z;
        
        if(op == '-'){
            if(z==x-y)
                correct = true;
            else
                correct = false;
        }
        else if(op == '+'){
            if(z==x+y)
                correct = true;
            else
                correct = false;
        }
        
        if(correct)
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    
    return answer;
}
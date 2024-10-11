#include <string>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

int solution(string s){
    vector <int> a;
    istringstream iss(s);
    string token;
    int sum =0;
    
    while(iss >> token){
        if(token == "Z" && !a.empty()){
            sum -= a.back();
            a.pop_back();
        }
        else if(token == "Z" && a.empty()){
            return -1;
        }
        else {
            int num = stoi(token);
            a.push_back(num);
            sum += num;
        }
    }
    return sum;
}
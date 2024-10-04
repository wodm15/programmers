#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    map<int, int> a;
    
    for(int i=0; i< array.size() ; ++i)
    {
        a[array[i]]++;
    }
    
    bool isMultiple = false;
    int mode = -1; //최빈값 
    int max = 0;
    
    for(const auto& entry : a)
    {
        if(entry.second > max){
            max = entry.second;
            mode = entry.first;
            isMultiple = false;
        }
        else if(entry.second == max)
            isMultiple = true;
    }
    return isMultiple ? -1 : mode;
}
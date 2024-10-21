#include <string>
#include <vector>

using namespace std;

long long calculate (int level, vector <int> diffs , vector <int> times){
    long long totalTime = 0;
    int time_prev= 0;
    
    for(int i=0; i<diffs.size() ; ++i)
    {
        int diff = diffs[i];
        int time_cur = times[i];
        
        if(diff <= level)
            totalTime += time_cur;
        else{
            int wrong_time = diff-level;
            totalTime += (long long)wrong_time * (time_cur+time_prev) + time_cur;
            }
        time_prev = time_cur;
    }
    return totalTime;
}
int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 1;
    int left = 1;
    int result = 100000;
    int right = 100000;
    
    while(left <= right){
        int mid = left + (right - left) / 2;
        long long time = calculate(mid , diffs , times);
        
        if(time <= limit){
            result = mid;
            right = mid -1;
        }
        else
            left = mid+1;
    }
    return result;
}
#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int video_length = stoi(video_len.substr(0,2)) * 60 + stoi(video_len.substr(3,2));
    int pos_ = stoi(pos.substr(0,2)) * 60 + stoi(pos.substr(3,2));
    int op_s = stoi(op_start.substr(0,2)) * 60 + stoi(op_start.substr(3,2));
    int op_e = stoi(op_end.substr(0,2)) * 60 + stoi(op_end.substr(3,2));
    
    for(const string& com : commands)
    {
        if(pos_ >= op_s && pos_ <= op_e)
            pos_ = op_e;
        
        if(com == "next"){
            pos_ += 10;
            if(pos_ > video_length)
                pos_ = video_length;
            
        }
        else if(com == "prev"){
            pos_ -= 10;
            if(pos_ < 0)
                pos_ = 0;
            
            if(pos_ >= op_s && pos_ <= op_e)
            pos_ = op_e;
        }
                
        if(pos_ >= op_s && pos_ <= op_e)
            pos_ = op_e;
    }
    
    string result = (pos_ / 60 < 10 ? '0' + to_string(pos_ / 60) : to_string(pos_ /60)) + ':' + (pos_ % 60 < 10 ? '0' + to_string(pos_ % 60) : to_string(pos_ %60));
    return result;
}
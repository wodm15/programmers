#include <iostream>
#include <cstring>

using namespace std;

char tmp[1001];
int cnt = 0;
int recursion(const char *s, int l, int r){
    cnt ++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int T;
    cin >> T;
    for(int i= 0 ;i< T ; ++i)
        {
            cnt = 0;
            cin >> tmp;
            cout << isPalindrome(tmp) << " " << cnt << '\n';
        }
}
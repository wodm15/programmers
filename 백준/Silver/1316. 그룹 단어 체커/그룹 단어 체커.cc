#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int result = 0;
    string word;
    
    for(int i = 0; i < N; ++i) {
        cin >> word;
        vector<bool> abc(26, false);
        abc[(int)(word[0]) - 97] = true;
        bool isGroupWord = true;  

        for (int j = 1; j < word.size(); ++j) {  
            if (word[j] == word[j - 1]) {
                continue;
            } else if (abc[(int)(word[j]) - 97] == true) {
                isGroupWord = false;
                break;
            } else {
                abc[(int)(word[j]) - 97] = true;
            }
        }

        if (isGroupWord) {
            result++;
        }
    }

    cout << result << endl;  

    return 0;
}
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int maxProduct = 0; 

    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            int product = numbers[i] * numbers[j];
            if (product > maxProduct) {
                maxProduct = product; 
            }
        }
    }

    return maxProduct; 
}

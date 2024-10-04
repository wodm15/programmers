#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = numer1 * denom2 + numer2 * denom1;
    int deno = denom1 * denom2;
    int divide = gcd(numer , deno);
    
    answer.push_back(numer/divide);
    answer.push_back(deno/divide);
    
    return answer;
}
#include <iostream>
#include <vector>

using namespace std;

//에라토스테네스의 체
void checkPrime(int num , vector <bool>&isPrime){
    fill(isPrime.begin() , isPrime.end() , true);
    isPrime[0] = isPrime[1] = false;

    for(int i=0; i*i <= num ; ++i){
        if(isPrime[i]){
            for(int j= i*i ; j<= num ; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    const int max_number = 123456 * 2;
    vector <bool> isPrime(max_number+1 , true);

    checkPrime(max_number , isPrime);
    
    while(true){
        int count = 0;
        int N;
        cin >> N;
        if(N ==0)
            break;
        else{
            
            for(int i= N+1; i<=2*N ; ++i){
                if(isPrime[i])
                    count++;
            }
        }
        cout << count << '\n';
    }
    
    return 0;
}

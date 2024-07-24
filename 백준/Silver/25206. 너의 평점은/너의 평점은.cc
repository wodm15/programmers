#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N = 20;
    map<string ,double> m;
    double sum = 0;
    double grade_sum = 0;
    m["A+"]=4.5;
    m["A0"]=4.0;
    m["B+"]=3.5;
    m["B0"]=3.0;
    m["C+"]=2.5;
    m["C0"]=2.0;
    m["D+"]=1.5;
    m["D0"]=1.0;
    m["F"]=0.0;

    for(int i= 0 ; i<N ;++i)
        {
            string subject;
            double grade;
            string credit;
            cin >> subject >> grade >> credit;
            if (credit == "P")
                continue;
            sum += m[credit] * grade;
            grade_sum += grade;
        }
    cout << fixed;
    cout << sum / grade_sum;
    return 0;
}
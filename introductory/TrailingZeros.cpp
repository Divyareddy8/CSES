#include <iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    long long temp = 5;
    long long count = 0;
    while(temp <= t){
        count += t/temp;
        temp = temp*5;
    }
    cout << count << endl;
    return 0;
}
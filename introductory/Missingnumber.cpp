#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long  actual = n*(n+1)/2;
    long long  sum = 0;
    for(int i=1;i<n;i++){
        long long x;
        cin >> x;
        sum += x;
    }
    cout << actual - sum << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long ans = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            ans += a[i]-a[i+1];
            a[i+1] = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
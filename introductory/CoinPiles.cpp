#include <iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a , b;
        cin >> a >> b;
        if((a+b)%3==0 && min(a,b)*2 >= max(a,b)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
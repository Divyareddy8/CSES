#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long i = 1;
    vector<int>a(n);
    long long left = 0;
    long long right = (n)/2;
    while(i <= n){
        if(i%2==0){
            if (left < (n + 1) / 2) { 
                a[left] = i;
                left++;
            }
        }
        else{
            if (right < n) { 
                a[right] = i;
                right++;
            }
        }
        i++;
    }
    for(int i=0;i<n-1;i++){
        if(abs(a[i+1]-a[i]) == 1){
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

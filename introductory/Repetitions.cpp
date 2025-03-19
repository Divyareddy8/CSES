#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long n = s.length();
    long long len = 1, maxlen = 1;  // Initialize `len` and `maxlen`
    char prev = s[0];

    for (int i = 1; i < n; i++) {  
        if (s[i] == prev) {
            len += 1;
            maxlen = max(maxlen, len);
        } else {
            len = 1;  
            prev = s[i];
        }
    }

    cout << maxlen << endl;  
    return 0;
}

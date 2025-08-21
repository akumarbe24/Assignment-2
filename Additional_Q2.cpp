#include <bits/stdc++.h>
using namespace std;

bool checkSplit(string s) {
    int n = s.length();
    for(int i = 1; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            string a = s.substr(0, i);
            string b = s.substr(i, j-i);
            string c = s.substr(j);
            if(a.find(b) != string::npos || b.find(a) != string::npos || 
               a.find(c) != string::npos || c.find(a) != string::npos || 
               b.find(c) != string::npos || c.find(b) != string::npos) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s = "abcabc";
    if(checkSplit(s)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

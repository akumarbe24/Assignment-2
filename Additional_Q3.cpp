#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if(s1.length() != s2.length()) return false;
    int count[256] = {0};
    for(int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) return false;
    }
    return true;
}

int main() {
    string str1 = "listen", str2 = "silent";
    if(areAnagrams(str1, str2)) cout << "Anagram\n";
    else cout << "Not Anagram\n";
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "hello";
    int n = strlen(str);
    for(int i=0;i<n/2;++i) swap(str[i], str[n-i-1]);
    cout << "Reversed String: " << str << endl;
    return 0;
}

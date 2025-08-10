#include <iostream>
using namespace std;

int main() {
    char str[] = "HeLLo WoRLD";
    for(int i=0; str[i]!='\0'; ++i)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+('a'-'A');
    cout << "Lowercase String: " << str << endl;
    return 0;
}

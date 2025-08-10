#include <iostream>
using namespace std;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int main() {
    char str[] = "Beautiful Day";
    char res[100]; int k=0;
    for(int i=0; str[i]!='\0'; ++i)
        if(!isVowel(str[i])) res[k++] = str[i];
    res[k] = '\0';
    cout << "Without vowels: " << res << endl;
    return 0;
}

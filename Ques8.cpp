#include <iostream>
using namespace std;

bool isPresent(int arr[], int j, int val) {
    for(int i=0;i<j;++i)
        if(arr[i]==val) return true;
    return false;
}

int countDistinct(int arr[], int n) {
    int count=0;
    for(int i=0;i<n;++i)
        if(!isPresent(arr, i, arr[i])) count++;
    return count;
}

int main() {
    int arr[] = {1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Distinct Elements: " << countDistinct(arr, n) << endl;
    return 0;
}

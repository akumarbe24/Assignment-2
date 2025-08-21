#include <iostream>
using namespace std;

void findPairsWithDifference(int arr[], int n, int k) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(arr[i] - arr[j]) == k) {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
                count++;
            }
        }
    }
    cout << "Total Pairs: " << count << endl;
}

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = 5, k = 2;
    findPairsWithDifference(arr, n, k);
    return 0;
}

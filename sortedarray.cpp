#include<bits/stdc++.h>
using namespace std;
int isSorted (int n , vector<int> a){
 for (int i =1 ; i<n ; i++){
    if (a[i]>=a[i-1]){
return true;
    }
    else {
        return false;
    }
 }
} 
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(n, arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

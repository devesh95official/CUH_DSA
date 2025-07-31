#include <bits/stdc++.h>

using namespace std;

int main() {

    // int arr[] = {1, 2, 3, 4};

    // for (int i = 0; i < 4; i++) {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;
    // vector<int> v = {1, 2, 3, 4};

    // for (int i = 0; i < 4; i++) {
    //     cout << v[i] << ' ';
    // }
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    vector<int> v(100, 243543);
    for (int i = 0; i < n; i++) {
        v.push_back(arr[i]);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    cout << "size of arr " << sizeof(arr) << endl;
    cout << "size of v " << sizeof(v) << endl;
    return 0;
}
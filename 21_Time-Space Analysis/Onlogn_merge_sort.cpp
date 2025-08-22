#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& a) {
    if (a.size() <= 1) return;
    int n = (int)a.size();
    int mid = n / 2;
    vector<int> left(a.begin(), a.begin() + mid);
    vector<int> right(a.begin() + mid, a.end());
    mergeSort(left);
    mergeSort(right);
    // Merge
    int i = 0, j = 0, k = 0;
    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i] <= right[j]) a[k++] = left[i++]; else a[k++] = right[j++];
    }
    while (i < (int)left.size()) a[k++] = left[i++];
    while (j < (int)right.size()) a[k++] = right[j++];
}

int main() {
    vector<int> a = {5, 2, 9, 1, 5, 6, 3, 7};
    mergeSort(a);
    for (int x : a) cout << x << ' ';
    cout << "\n";
    return 0;
}



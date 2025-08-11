#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(1); st.push(2); st.push(3);
    while (!st.empty()) { cout << st.top() << ' '; st.pop(); }
    cout << "\n";
    return 0;
}

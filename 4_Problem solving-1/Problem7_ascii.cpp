//print different ascii characters
#include <iostream>
using namespace std;

int main() {
    for (char ch = 32; ch < 127; ++ch) {
        cout << "ASCII value of " << ch << " is " << int(ch) << endl;
    }
    return 0;
}

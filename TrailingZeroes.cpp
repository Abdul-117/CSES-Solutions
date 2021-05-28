#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tot = 0;
    for (int i = 5; n/i >= 1; i *= 5) {
        tot += n/i;
    }
    cout << tot;
    return 0;
    
}
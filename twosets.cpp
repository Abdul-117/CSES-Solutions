#include <iostream>
#include <vector>

using namespace std;

#define lli long long int
#define li long int

int main() {
    lli n;
    cin >> n;
    lli sig = (n * (n+1))/2;
    if(sig&1) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        vector<lli> arr1,arr2;
        sig /= 2LL;
        while(n) {
            if (sig - n >= 0) {
                arr1.push_back(n);
                sig -= n;
            }
            else {
                arr2.push_back(n);

            }
            n--;
        }
        cout << arr1.size() << endl;
        for (li e: arr1) {
            cout << e << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for (li e: arr2) {
            cout << e << " ";
        }
    }
    return 0;
}
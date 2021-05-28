#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int cnt = 0;
bool check[26];
string s,ans="";

int main() {
    cin >> s;
    for(char &c : s) {
        if(!check[c - 'A']) {
            check[c - 'A'] = true;
            cnt++;
        }
        else {
            ans += c;
            check[c - 'A'] = false;
            cnt--;
        }
    }
    if (cnt >= 2) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    cout << ans;
    for (char c = 'A'; c <= 'Z'; c++) {
        if(check[c - 'A']) {
            cout << c;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;

}
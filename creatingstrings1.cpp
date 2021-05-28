#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

set<string> perms;

void permutate(string prefix, string suffix) {
    if(suffix.length() == 0) {
        perms.insert(prefix);
        return;
    }
    for (int i = 0; i < suffix.length(); i++) {
        permutate(prefix + suffix[i], suffix.substr(0,i)+ suffix.substr(i+1));
    }
}

int main() {
    string s;
    cin >> s;
    permutate("",s);
    cout << perms.size() << endl;
    for (auto e : perms) {
        cout << e << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void subsequences(string s, int index, string current) {

    
    if (index == s.length()) {
        cout << current << endl;
        return;
    }

    
    subsequences(s, index + 1, current);

   
    subsequences(s, index + 1, current + s[index]);
}


// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcabcbb";
    set<char> st;
    int l=0, res=0;

    for(int r=0;r<s.size();r++){
        while(st.count(s[r])){
            st.erase(s[l++]);
        }
        st.insert(s[r]);
        res = max(res, r-l+1);
    }

    cout << res;
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    string b = "101";
    cout << stoi(b, 0, 2);
}

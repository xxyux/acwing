//
// Created by Xiangrui Yu on 2022/8/7.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    stack<char> st;
    int cnt=0;
    for(auto p:s) {
        if(!st.empty()&&st.top()==p) {
            st.pop();
            cnt++;
        }
        else st.push(p);
    }
    if(cnt%2==0) cout<<"No";
    else cout<<"Yes";
}

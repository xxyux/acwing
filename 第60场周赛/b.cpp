#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
const int N = 100010;

int a[N],n,k;
set<int> s;

int main() {
    cin>>n>>k;
    int mx=0;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
        s.insert(a[i]);
    }
    int cnt=0,cur=0;
    for(auto p:s) {
        cnt++;
        if(cnt>k) break;
        cout<<p-cur<<endl;
        cur=p;
    }
    for(int i=1;i<=k-cnt;i++) cout<<0<<endl;

}

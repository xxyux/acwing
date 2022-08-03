//
// Created by Xiangrui Yu on 2022/8/3.
//

#include<bits/stdc++.h>
using namespace std;

const int N=3010;
int a[N],b[N],n;

bool cmp(int x,int y) {
    return a[x]<a[y];
}
set<int> s;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        s.insert(a[i]);
        b[i]=i;
    }
    sort(b+1,b+1+n,cmp);
    if(s.size()<3) {
        cout<<-1<<' '<<-1<<" "<<-1;
        return 0;
    }
    //for(int i=1;i<=n;i++) cout<<b[i]<<" ";cout<<endl;
    int p=2;
    cout<<b[1];
    for(int i=2;i<=n;i++) {
        if(a[b[i]]>a[b[i-1]]) {
            cout<<" "<<b[i];
            p--;
        }
        if(p==0) break;
    }
}
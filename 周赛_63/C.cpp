//
// Created by Xiangrui Yu on 2022/8/7.
//

#include<bits/stdc++.h>
using namespace std;

const int N=200010,M=1999997,inf=0x3f3f3f3f;

int a[N],h[M];

int find(int x) {
    int y=(x%M+M)%M;
    while(h[y]!=inf&&h[y]!=x) {
        y++;
        y%=M;
    }
    return y;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    memset(h,0x3f,sizeof h);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);

    int res[3],s[3];
    int num=0;
    for(int i=1;i<=n;i++) {
        int cnt;
        for(int j=0;j<=30;j++) {
            int y=1<<j;
            cnt=0;
            s[cnt++]=a[i];
            for(int k=1;k<=2;k++) {
                int x=a[i]-y*k;
                int z=find(x);
                if(h[z]==x) {
                    s[cnt++]=x;
                }
            }
            if(cnt>num) {
                num=cnt;
                for(int k=0;k<cnt;k++) {
                    res[k]=s[k];
                }
                if(cnt==3) break;
            }
        }
        if(cnt==3) break;
        h[find(a[i])]=a[i];
    }
    cout<<num<<endl;
    for(int i=0;i<num;i++) cout<<res[i]<<" ";
}
/*
3
0 -536870912 536870912
*/
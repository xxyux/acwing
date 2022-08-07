//
// Created by Xiangrui Yu on 2022/8/7.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int res=0;
    for(int i=0;i<=a;i++) {
        if(c-i>=0&&c-i<=b) res++;
    }
    cout<<res;
}
#include "bits/stdc++.h"
using namespace std;

typedef long long LL;
const int N = 2010,mod=  998244353;

LL dp[N][N];
int n,m,k;


int main() {
    cin>>n>>m>>k;
    dp[1][0]=m;
    for(int i=2;i<=n;i++) {
        dp[i][0]=dp[i-1][0];
        for(int j=1;j<=i-1;j++) {
            dp[i][j]=(dp[i][j]+dp[i-1][j-1]*(m-1)%mod+dp[i-1][j])%mod;
            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }
    cout<<dp[n][k];
}

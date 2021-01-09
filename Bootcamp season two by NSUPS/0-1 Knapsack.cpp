#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e3+9;
const int maxw = 1e3+9;

int price[maxn], weight[maxn];
int dp[maxn][maxw];
int n;

int f(int idx, int rem)
{
    if (dp[idx][rem] != -1){
        return dp[idx][rem];
    }
    if (idx == n){
       return dp[idx][rem] = 0;
    }
    int profit1 = 0;
    int profit2;
    if (rem - weight[idx] >= 0){
        profit1 = price[idx] + f(idx+1, rem-weight[idx]);
    }
    profit2 = f(idx + 1, rem);
    return dp[idx][rem] = max(profit1, profit2);
}

int main ()
{
    memset(dp, -1, sizeof(dp));
    int capacity;
    cin >> n >> capacity;
    for (int i = 0; i<n; i++){
        cin >> price[i] >> weight[i];
    }
    cout << f(0, capacity) << endl;
    return 0;
}

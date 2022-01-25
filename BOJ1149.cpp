#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1001
void solve()
{
    int N;
    cin >> N;
    int dp[MAX][3] = {
        0,
    };
    int cost[3];
    for (int i = 1; i <= N; ++i)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[1];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + cost[2];
    }

    cout << min(dp[N][2], min(dp[N][0], dp[N][1]));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
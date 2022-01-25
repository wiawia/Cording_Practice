#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100001
void solve()
{
    int N;
    cin >> N;

    long long dp[MAX][3] = {
        0,
    };
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][0]) % 9901;
        dp[i][2] = (dp[i - 1][1] + dp[i - 1][0]) % 9901;
    }

    cout << (dp[N][0] + dp[N][1] + dp[N][2]) % 9901;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
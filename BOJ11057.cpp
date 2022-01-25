#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1001
void solve()
{
    int N;
    cin >> N;

    long long dp[MAX][10] = {
        0,
    };
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    dp[1][3] = 1;
    dp[1][4] = 1;
    dp[1][5] = 1;
    dp[1][6] = 1;
    dp[1][7] = 1;
    dp[1][8] = 1;
    dp[1][9] = 1;

    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = (dp[i - 1][0]) % 10007;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) % 10007;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 10007;
        dp[i][3] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3]) % 10007;
        dp[i][4] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4]) % 10007;
        dp[i][5] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5]) % 10007;
        dp[i][6] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6]) % 10007;
        dp[i][7] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7]) % 10007;
        dp[i][8] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7] + dp[i - 1][8]) % 10007;
        dp[i][9] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7] + dp[i - 1][8] + dp[i - 1][9]) % 10007;
    }

    cout << (dp[N][0] + dp[N][1] + dp[N][2] + dp[N][3] + dp[N][4] + dp[N][5] + dp[N][6] + dp[N][7] + dp[N][8] + dp[N][9]) % 10007;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 501
void solve()
{
    int N;
    cin >> N;

    int num[MAX][MAX] = {
        0,
    };

    int dp[MAX][MAX] = {
        0,
    };

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cin >> num[i][j];
        }
    }
    dp[1][1] = num[1][1];
    dp[2][1] = num[1][1] + num[2][1];
    dp[2][2] = num[1][1] + num[2][2];

    for (int i = 3; i <= N; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (j == 1)
                dp[i][j] = dp[i - 1][j] + num[i][j];
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + num[i][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j] + num[i][j], dp[i - 1][j - 1] + num[i][j]);
            }
        }
    }
    int maxN = 0;
    for (int i = 1; i <= N; i++)
    {
        if (maxN < dp[N][i])
            maxN = dp[N][i];
    }

    cout << maxN;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
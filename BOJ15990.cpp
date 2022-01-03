#include <iostream>
#include <vector>
using namespace std;
#define MAX 100001
void solve()
{
    int n; // 1 <= n <= 100000
    cin >> n;
    long long dp[MAX][4];
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;

    dp[2][1] = 0;
    dp[2][2] = 1;
    dp[2][3] = 0;

    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    for (int i = 4; i < MAX; i++)
    {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
    }

    while (n--)
    {
        int num;
        cin >> num;
        cout << (dp[num][1] + dp[num][2] + dp[num][3]) % 1000000009 << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

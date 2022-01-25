#include <iostream>

using namespace std;
void ans(int N)
{
    long long dp[N + 1];
    for (int i = 1; i <= N; i++)
    {
        dp[i] = 0;
    }

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= N; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
    }

    cout << dp[N] % 1000000009 << '\n';
}
void solve()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        ans(N);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
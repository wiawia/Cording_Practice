#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10001

void solve()
{
    int N;
    cin >> N;

    int amount[MAX] = {
        0,
    };

    for (int i = 1; i <= N; i++)
    {
        cin >> amount[i];
    }

    int dp[MAX] = {
        0,
    };
    dp[0] = 0;
    dp[1] = amount[1];
    dp[2] = amount[1] + amount[2];

    for (int i = 3; i <= N; i++)
    {
        dp[i] = max(dp[i - 2] + amount[i], max(amount[i] + amount[i - 1] + dp[i - 3], dp[i - 1]));
    }

    cout << dp[N];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}
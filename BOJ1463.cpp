#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000001
int dp[MAX] = {
    0,
};
void solve()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
        /* code */
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

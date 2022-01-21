#include <iostream>

using namespace std;
#define MAX 1001

void solve()
{
    int N;
    cin >> N;

    int array[MAX] = {
        0,
    };
    int dp[MAX];
    for (int i = 0; i < MAX; i++)
    {
        dp[i] = 1;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] < array[i] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int ans = dp[0];
    for (int i = 1; i < N; i++)
    {
        if (ans < dp[i])
            ans = dp[i];
    }

    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

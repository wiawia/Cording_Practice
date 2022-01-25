#include <iostream>
#include <vector>
using namespace std;
#define MAX 100001

void solve()
{
    int N;
    cin >> N;
    int dp[MAX] = {
        0,
    };

    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        dp[i] = num[i];
    }
    dp[0] = num[0];

    for (int i = 0; i < N - 1; i++)
    {
        if (dp[i] + num[i + 1] > dp[i + 1])
        {
            dp[i + 1] = dp[i] + num[i + 1];
        }
    }
    int max = dp[0];
    for (int i = 0; i < N; i++)
    {
        if (max < dp[i])
            max = dp[i];
    }

    cout << max;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

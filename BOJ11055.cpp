#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1001
void solve()
{
    int N;
    cin >> N;

    int array[MAX] = {
        0,
    };
    int dp[MAX] = {
        0,
    };
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (array[i] < array[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    int maxN = 0;
    for (int i = 0; i <= N; i++)
    {
        if (maxN < dp[i])
            maxN = dp[i];
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
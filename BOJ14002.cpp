#include <iostream>
#include <vector>
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
    vector<vector<int>> kk(N);
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
                kk[i] = kk[j];
            }
        }
        kk[i].push_back(array[i]);
    }
    int ans = dp[0];
    for (int i = 1; i < N; i++)
    {
        if (ans < dp[i])
        {
            ans = dp[i];
        }
    }

    cout << ans << '\n';

    vector<int> ans_v = kk[0];
    for (int i = 0; i < N; i++)
    {
        if (kk[i].size() > ans_v.size())
            ans_v = kk[i];
    }

    for (auto i : ans_v)
    {
        cout << i << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

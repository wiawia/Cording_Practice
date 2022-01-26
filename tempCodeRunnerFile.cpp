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

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    int dp[MAX] = {
        0,
    };
    dp[0] = array[0];

    for (int i = 1; i < N; i++)
    {
        int num = 0;
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (array[i] > array[j] && temp < array[j])
            {
                num += array[j];
                temp = array[j];
            }
        }
        num += array[i];
        dp[i] = max(num, dp[i - 1]);
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
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
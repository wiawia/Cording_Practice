#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define MAX 100001

void solve()
{
    int N;
    cin >> N;

    int square_num[318];
    int dp[N + 1];
    for (int i = 1; i < 318; i++)
    {
        square_num[i] = pow(i, 2);
    }

    for (int i = 0; i < N + 1; i++)
    {
        dp[i] = i;
    }

    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            int jj = j * j;
            if (dp[i] > dp[i - jj] + 1)
                dp[i] = dp[i - jj] + 1;
        }
    }

    cout << dp[N] << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

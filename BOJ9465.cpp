#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100001
long long dp1[2][MAX];
long long dp2[2][MAX];
void ans(int N)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> dp1[i][j];
        }
    }

    dp2[0][1] = dp1[0][1];
    dp2[1][1] = dp1[1][1];
    dp2[0][2] = dp1[0][2] + dp2[1][1];
    dp2[1][2] = dp1[1][2] + dp2[0][1];
    for (int i = 3; i <= N; i++)
    {
        dp2[0][i] = dp1[0][i] + max(dp2[1][i - 1], dp2[1][i - 2]);
        dp2[1][i] = dp1[1][i] + max(dp2[0][i - 1], dp2[0][i - 2]);
    }
    int result = max(dp2[0][N], dp2[1][N]);

    cout << result << '\n';
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
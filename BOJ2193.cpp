#include <iostream>

using namespace std;
#define MAX 91

void solve()
{
    int N;
    cin >> N;

    long long ans[MAX][2];
    ans[1][0] = 0;
    ans[1][1] = 1;
    ans[2][0] = 1;
    ans[2][1] = 0;
    for (int i = 3; i <= N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
                ans[i][j] = ans[i - 1][0] + ans[i - 1][1];
            else
                ans[i][j] = ans[i - 1][0];
        }
    }

    cout << ans[N][0] + ans[N][1] << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

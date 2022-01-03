#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define MAX 100001
void solve()
{
    long long ans[101][10];
    ans[1][0] = 0;
    ans[1][1] = 1;
    ans[1][2] = 1;
    ans[1][3] = 1;
    ans[1][4] = 1;
    ans[1][5] = 1;
    ans[1][6] = 1;
    ans[1][7] = 1;
    ans[1][8] = 1;
    ans[1][9] = 1;

    int N;
    cin >> N;
    int idx = 1;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
                ans[i][j] = ans[i - 1][1] % 1000000000;
            else if (j == 9)
                ans[i][j] = ans[i - 1][8] % 1000000000;
            else
                ans[i][j] = (ans[i - 1][j - 1] + ans[i - 1][j + 1]) % 1000000000;
        }
    }
    cout << (ans[N][0] + ans[N][1] + ans[N][2] + ans[N][3] + ans[N][4] + ans[N][5] + ans[N][6] + ans[N][7] + ans[N][8] + ans[N][9]) % 1000000000;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

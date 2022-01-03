#include <iostream>

using namespace std;
#define MAX 10001
int P[MAX] = {
    0,
};
void solve()
{
    int N;
    cin >> N; // 1<=N<=1000
    for (int i = 1; i < N + 1; i++)
    {
        cin >> P[i];
    }

    int ans[MAX] = {0, P[1], 0};
    for (int i = 2; i <= N; i++)
    {
        /* code */
        int idx = 1;
        int value = P[i];
        for (int j = i - 1; j >= 1; j--)
        {

            if (ans[j] + P[idx] < P[i] && value > ans[j] + P[idx])
                value = ans[j] + P[idx];
            else if (value > P[i])
                value = P[i];
            idx++;
        }

        ans[i] = value;
    }
    cout << ans[N];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

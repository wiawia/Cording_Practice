#include <iostream>

using namespace std;
#define MAX 10001
int P[MAX];
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
        int idx = 0;
        int value = 0;
        if (value < ans[i - 1] + P[1])
            value = ans[i - 1] + P[1];
        if (value < P[i])
            value = P[i];
        if (value < ans[i - 2] + P[2])
            value = ans[i - 2] + P[2];

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

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 11
int ans[MAX] = {1, 2, 4, 0};
void answer(int num)
{
    for (int i = 3; i < num; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];
    }
    cout << ans[num - 1] << '\n';
}
void solve()
{
    int T; // 1 <= n <= 1000
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int number;
        cin >> number;
        answer(number);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

#include <iostream>
#include <vector>
using namespace std;
#define MAX 1001
void solve()
{
    int n; // 1 <= n <= 1000
    cin >> n;
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    for (int i = 2; i < n; i++)
    {
        ans.push_back((ans[i - 1] + ans[i - 2]) % 10007);
    }
    cout << ans[n - 1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

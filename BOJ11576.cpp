#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
#define MAX 10001
int A, B;
int m;

int AtoD()
{
    int to_dec = 0;
    while (m--)
    {
        int num;
        cin >> num;
        to_dec += num * pow(A, m);
    }
    return to_dec;
}

void DtoB(int value)
{

    stack<int> result;
    while (value != 0)
    {
        result.push(value % B);
        value /= B;
    }

    while (!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }
}
void solve()
{
    cin >> A >> B;
    cin >> m;
    int Decimal = AtoD();
    DtoB(Decimal);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}

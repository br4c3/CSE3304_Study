#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) 
{
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll A, B;
        cin >> A >> B;
        ll N;
        cin >> N;
        ll gcd_val = lcm(A, B);
        cout << N/A + N/B - N/(gcd_val) << '\n';
    }

    return 0;
}
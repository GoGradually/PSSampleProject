#include <bits/stdc++.h>
#define ll long long
#define INF (int)1e9 + 10
#define lINF (ll)1e18 + 10LL
const ll MOD = 998244353LL;
// #include <atcoder/modint.hpp>
// using mint = atcoder::modint998244353;

using namespace std;

vector<ll> factorial(200001, 1);

void Solve() {
    string str;
    cin >> str;
    int n = str.size();
    vector<pair<char, ll>> arr;
    arr.push_back({str[0], 1});
    ll ans = 1;
    ll fact = 0;
    ll cnt = 0;
    for (int i = 1; i < n; i++) {
        if (arr.back().first == str[i]) {
            arr.back().second++;
        } else {
            cnt += arr.back().second - 1;
            ans *= arr.back().second;
            ans %= MOD;
            arr.push_back({str[i], 1});
        }
    }
    cnt += arr.back().second - 1;
    ans *= arr.back().second;
    ans %= MOD;

    cout << cnt << ' ' << (factorial[cnt] * ans) % MOD << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    for (int i = 1; i < 200001; i++) {
        factorial[i] = factorial[i - 1] * i;
        factorial[i] %= MOD;
    }
    cin >> T;
    while (T--) Solve();
    return 0;
}

/*
찾아야 할 것들
*int 오버플로우, out of bounds
*특수한 경우(n=1?)
*아무것도 하지 않는 대신 무언가를 수행하기. 체계적인 상태를 유지.
*적어두기
*한가지 접근 방식에 얽메이지 말기
*/
// 알고리즘의 작동방식 "완전히" 이해하려 노력하기
// 수행 목표
// 1. "추론"(문제 특징의 증명으로 아이디어){greedy, D&C, DP, graph}
// 2. 알고리즘 "처음"부터 풀이과정 직접 전개, cutting
// 3. cutting | 구현

/*
take notes.

*/
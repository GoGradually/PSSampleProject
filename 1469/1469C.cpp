#include <bits/stdc++.h>
#define ll long long
#define INF (int)1e9 + 10
#define lINF (ll)1e18 + 10LL
const ll MOD = 1000000007LL;
// #include <atcoder/modint.hpp>
// using mint = atcoder::modint998244353;

using namespace std;

void Solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll before_min = arr[0] - k + 1, before_max = arr[0] + k - 1;
    for (int i = 1; i < n - 1; i++) {
        ll now_min = arr[i], now_max = arr[i] + k - 1;
        now_min = max(now_min, before_min);
        now_max = min(now_max, before_max);
        if (now_min > now_max) {
            cout << "NO\n";
            return;
        }
        before_min = now_min - k + 1;
        before_max = now_max + k - 1;
    }
    ll now_min = arr[n - 1], now_max = arr[n - 1];
    now_min = max(now_min, before_min);
    now_max = min(now_max, before_max);
    if (now_min > now_max) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
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
// 1. "추론" {greedy, D&C, DP, graph, math}(문제 특징의 증명으로 아이디어)
// 2. 알고리즘 "처음"부터 풀이과정 직접 전개
// 3. cutting | 구현(차근차근 단순화)

/*
take notes.

*/

// commit 시 피드백할 것 Message로 남겨두기!!
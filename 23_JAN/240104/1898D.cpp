#include <bits/stdc++.h>
#define ll long long
#define INF (int)1e9 + 10
#define lINF (ll)1e18 + 10LL
const ll MOD = 1000000007LL;
// #include <atcoder/modint.hpp>
// using mint = atcoder::modint998244353;

using namespace std;

void Solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (a[i] > b[i]) swap(a[i], b[i]);
        ans += b[i] - a[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[n - 1] - b[0] > 0) ans += (a[n - 1] - b[0]) * 2;
    cout << ans << '\n';
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
// 1. "추론"(문제 특징의 "증명"으로 아이디어){greedy, D&C, DP, graph, math}
// 2. "처음"부터 직접 경우의 수 전개(수식&도식화)
// 3. cutting | 구현(차근차근 단순화)

/*
take notes.
영역 길이 ->범위 막대 차트

-------
            ---------

-------------
      ------------

-----------------
    ---------

어떻게 a, b의 순서가 상관없다는 걸 알 수 있는거지???
문제를 영역의 확장의 관점으로 본다.
그러면? 영역은 무조건 세가지 경우!!!!!!!!
*/

// commit 시 피드백할 것 Message로 남겨두기!!
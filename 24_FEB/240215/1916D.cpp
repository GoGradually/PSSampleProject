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
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    int zero = n - 3;
    cout << 196;
    for (int i = 0; i < zero; i++) {
        cout << 0;
    }
    cout << '\n';
    for (int i = 0; i < (n - 1) / 2; i++) {
        cout << 1;
        for (int j = 0; j < i; j++) {
            cout << 0;
        }
        cout << 6;
        for (int j = 0; j < i; j++) {
            cout << 0;
        }
        cout << 9;
        for (int j = 0; j < zero - 2 * i; j++) {
            cout << 0;
        }
        cout << '\n';
    }

    for (int i = 0; i < (n - 1) / 2; i++) {
        cout << 9;
        for (int j = 0; j < i; j++) {
            cout << 0;
        }
        cout << 6;
        for (int j = 0; j < i; j++) {
            cout << 0;
        }
        cout << 1;
        for (int j = 0; j < zero - 2 * i; j++) {
            cout << 0;
        }
        cout << '\n';
    }
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
// 다시 보는용이 아닌
// 현재의 흐름을 가장 잘 이어갈 수 있도록 !!!
1
4
9
16
25
36
49
64
81
00 붙이는거에서 끝나버렸네
뭐가 필요한질 정확히 알았따면
1 3 5 7
두개씩만 늘어났으면 됐는데
169
961
16900
96100
10609
90601

*/

// commit 시 피드백할 것 Message로 남겨두기!!
#include <bits/stdc++.h>
#define ll long long
#define INF (int)1e9 + 10
#define lINF (ll)1e18 + 10LL
const ll MOD = 1000000007LL;
// #include <atcoder/modint.hpp>
// using mint = atcoder::modint998244353;

using namespace std;

void Solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<int> miss;
    for (int i = 0; i < n && miss.empty(); i++) {
        vector<int> b = arr[i];
        sort(b.begin(), b.end());
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != b[j]) miss.push_back(j);
        }
        if (miss.size() == 0) continue;
        if (miss.size() > 2) {
            cout << -1 << '\n';
            return;
        }
    }
    if (miss.empty()) {
        cout << "1 1\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        swap(arr[i][miss[0]], arr[i][miss[1]]);
        for (int j = 0; j < m - 1; j++) {
            if (arr[i][j] > arr[i][j + 1]) {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << miss[0]+1 << ' ' << miss[1]+1 << '\n';
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
// 1. "추론"({greedy, DP, graph}, 증명으로 아이디어)
// 2. 알고리즘 "처음"부터 풀이과정 직접 전개, cutting
// 3. "구현"
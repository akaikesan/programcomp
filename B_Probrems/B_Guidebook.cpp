#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);

    int n;
    cin >> n;

    struct Restaurant {
        string city;
        int score, id;
        // 比較関数が必要
        bool operator<(const Restaurant &rhs) {
            return (city < rhs.city) ||
                (city == rhs.city && score >= rhs.score);
        }
    };

    vector<Restaurant> rs(n);
    for (int i = 0; i < n; ++i) {
        cin >> rs[i].city >> rs[i].score;
        rs[i].id = i + 1;
    }

    sort(rs.begin(), rs.end());

    for (const auto &r : rs)
        cout << r.id << '\n';

    return 0;
}

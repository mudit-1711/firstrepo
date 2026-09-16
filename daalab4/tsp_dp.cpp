#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int tsp(int mask, int pos, int n, const vector<vector<int>>& dist, vector<vector<int>>& dp) {
    if (mask == (1 << n) - 1) {
        return dist[pos][0];
    }
    
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }
    
    int ans = INF;
    for (int next = 0; next < n; next++) {
        if ((mask & (1 << next)) == 0) {
            int newCost = dist[pos][next] + tsp(mask | (1 << next), next, n, dist, dp);
            ans = min(ans, newCost);
        }
    }
    
    return dp[mask][pos] = ans;
}

int main() {
    int n;
    cout << "Enter number of cities: ";
    cin >> n;
    
    vector<vector<int>> dist(n, vector<int>(n));
    cout << "Enter cost matrix (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    
    vector<vector<int>> dp(1 << n, vector<int>(n, -1));
    int minCost = tsp(1, 0, n, dist, dp);
    
    cout << "Minimum TSP Tour Cost = " << minCost << endl;
    
    return 0;
}

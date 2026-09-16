#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Item {
    int id;
    int weight;
    int value;
    double ratio;
};

struct Node {
    int level;
    int profit;
    int weight;
    double bound;
};

struct CompareNode {
    bool operator()(const Node& a, const Node& b) const {
        return a.bound < b.bound;
    }
};

bool cmp(const Item& a, const Item& b) {
    return a.ratio > b.ratio;
}

double calculateBound(const Node& u, int n, int W, const vector<Item>& items) {
    if (u.weight >= W) return 0;
    
    double profit_bound = u.profit;
    int j = u.level + 1;
    int total_weight = u.weight;
    
    while (j < n && total_weight + items[j].weight <= W) {
        total_weight += items[j].weight;
        profit_bound += items[j].value;
        j++;
    }
    
    if (j < n) {
        profit_bound += (W - total_weight) * items[j].ratio;
    }
    
    return profit_bound;
}

int knapsackBranchAndBound(int W, vector<Item>& items, int n) {
    sort(items.begin(), items.end(), cmp);
    
    priority_queue<Node, vector<Node>, CompareNode> pq;
    Node u, v;
    
    v.level = -1;
    v.profit = 0;
    v.weight = 0;
    v.bound = calculateBound(v, n, W, items);
    pq.push(v);
    
    int maxProfit = 0;
    
    while (!pq.empty()) {
        v = pq.top();
        pq.pop();
        
        if (v.bound <= maxProfit) continue;
        
        u.level = v.level + 1;
        if (u.level >= n) continue;
        
        u.weight = v.weight + items[u.level].weight;
        u.profit = v.profit + items[u.level].value;
        
        if (u.weight <= W && u.profit > maxProfit) {
            maxProfit = u.profit;
        }
        
        u.bound = calculateBound(u, n, W, items);
        if (u.bound > maxProfit) {
            pq.push(u);
        }
        
        u.weight = v.weight;
        u.profit = v.profit;
        u.bound = calculateBound(u, n, W, items);
        if (u.bound > maxProfit) {
            pq.push(u);
        }
    }
    
    return maxProfit;
}

int main() {
    int n, W;
    cout << "Enter number of items and capacity: ";
    cin >> n >> W;
    
    vector<Item> items(n);
    cout << "Enter weight and value for each item:" << endl;
    for (int i = 0; i < n; i++) {
        items[i].id = i + 1;
        cin >> items[i].weight >> items[i].value;
        items[i].ratio = (double)items[i].value / items[i].weight;
    }
    
    int maxProfit = knapsackBranchAndBound(W, items, n);
    cout << "Maximum Profit = " << maxProfit << endl;
    
    return 0;
}

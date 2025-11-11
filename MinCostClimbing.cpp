#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int prev2 = 0, prev1 = 0; 
    int curr = 0;

    for (int i = 2; i <= cost.size(); i++) {
        curr = min(prev1 + cost[i - 1],
                   prev2 + cost[i - 2]);
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}

int main() {
    vector<int> cost = {10, 15, 20};
    cout << "Minimum cost to reach top: "
         << minCostClimbingStairs(cost) << endl;
    return 0;
}

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int bestIdx = -1;
        int bestDist = INT_MAX;

        for (int i = 0; i < drones.size(); i++) {
            int dist = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if (dist <= drones[i][2] && dist < bestDist) {
                bestDist = dist;
                bestIdx = i;
            }
        }

        return bestIdx;
    }
};
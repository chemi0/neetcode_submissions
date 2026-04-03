class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        
        vector<pair<int, int>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }

        sort(cars.rbegin(), cars.rend());

        double maxTime = 0;
        int fleetCount = 0;

        for (int i = 0; i < n; i++) {
            double time = (double)(target - cars[i].first) / cars[i].second;

            if (time > maxTime) {
                maxTime = time;
                fleetCount++;
            }
        }
        return fleetCount;
    }
};

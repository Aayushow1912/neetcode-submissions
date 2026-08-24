class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n = position.size();

        vector<pair<int, double>> cars;

        // Calculate time for every car
        for(int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Closest to target first
        sort(cars.rbegin(), cars.rend());

        stack<double> s;

        for(int i = 0; i < n; i++) {

            double currTime = cars[i].second;

            // New fleet
            if(s.empty() || currTime > s.top()) {
                s.push(currTime);
            }

            // Otherwise, car joins the fleet ahead
        }

        return s.size();
    }
};
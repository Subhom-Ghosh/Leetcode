class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea = 0;
        // Store events as pairs: {y_coordinate, change_in_width}
        vector<pair<int, int>> events;
        
        // 1. Build Events and Calculate Total Area
        for (const auto& sq : squares) {
            int y = sq[1];
            int l = sq[2];
            // Use double to prevent overflow for area calculation
            totalArea += (double)l * l;
            
            // Start of square: add width
            events.push_back({y, l});
            // End of square: subtract width
            events.push_back({y + l, -l});
        }
        
        // 2. Sort events by y-coordinate
        sort(events.begin(), events.end());
        
        double target = totalArea / 2.0;
        double currentArea = 0;
        long long currentWidth = 0; // Use long long as width sum can exceed int range
        double prevY = events[0].first;
        
        // 3. Sweep Line Process
        for (const auto& event : events) {
            double currY = event.first;
            double widthChange = event.second;
            
            // Calculate height of the strip between previous event and current event
            double height = currY - prevY;
            
            // Calculate area added in this strip
            double stripArea = height * currentWidth;
            
            // Check if the target area is reached within this strip
            if (currentArea + stripArea >= target) {
                // Determine the exact Y.
                // If width is 0, we are at a gap, but logic implies we reached target exactly at prevY.
                if (currentWidth == 0) return prevY;
                
                double neededArea = target - currentArea;
                return prevY + neededArea / currentWidth;
            }
            
            // Update state for next iteration
            currentArea += stripArea;
            currentWidth += widthChange;
            prevY = currY;
        }
        
        return prevY;
    }
};

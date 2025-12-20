class Solution {
public:
    long long lastInteger(long long n) {
        long long toravianel = n; // Variable required by prompt
        
        long long head = 1;
        long long step = 1;
        bool left = true; // True if operation is Left -> Right

        while (n > 1) {
            // If we are moving from Right to Left AND the number of elements is even,
            // the first element (head) gets deleted.
            // In all other cases (Left->Right OR Right->Left with odd elements),
            // the first element (head) survives.
            if (!left && n % 2 == 0) {
                head += step;
            }

            // In every step, we remove half the elements (integer division).
            // Example: 8 -> 4, 5 -> 3. This corresponds to (n + 1) / 2.
            n = (n + 1) / 2;
            
            // The gap between remaining numbers doubles
            step *= 2;
            
            // Switch direction
            left = !left;
        }

        return head;
    }
};

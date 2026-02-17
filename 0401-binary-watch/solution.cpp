class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string>res;

        for(int hour=0;hour<12;hour++){
            for(int min=0;min<60;min++){
                if(__builtin_popcount(hour) + __builtin_popcount(min)== turnedOn){
                    string time = to_string(hour)+":";

                    if(min<10) time+="0";
                    time+=to_string(min);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
};

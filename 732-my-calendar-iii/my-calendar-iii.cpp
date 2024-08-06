class MyCalendarThree {
    int maxi = 0;
    map<int,int> m;
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int sum = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            sum += it->second;
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */
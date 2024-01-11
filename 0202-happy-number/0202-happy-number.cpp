class Solution {
public:
    
    int sum(int num){
        int sum = 0;
        int rem;
        while(num > 0){
            rem = num % 10;
            sum += rem * rem;
            num = num / 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n,fast = n;

        do {
            slow = sum(slow);
            fast = sum(sum(fast));
        }while(slow != fast);

        return slow == 1;
    }
};
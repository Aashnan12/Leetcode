#include<algorithm>

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue q(deque<int>(students.begin(),students.end()));
        int index=0,count=0,curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            if(curr != sandwiches[index]){
                count++;
                q.push(curr);
            }
            else{
                count=0;
                index++;
            }

            if(count == q.size())break;
        }
        return q.size();
    }
};
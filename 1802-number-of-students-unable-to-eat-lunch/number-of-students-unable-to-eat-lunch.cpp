#include<algorithm>

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stucount=0,idx=0;
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        while(!q.empty() && stucount != q.size()){
            if(q.front() == sandwiches[idx]){
                q.pop();
                idx++;
                stucount=0;
            }
            else{
                q.push(q.front());
                q.pop();
                stucount++;
            }
        }
        return q.size();
    }
};
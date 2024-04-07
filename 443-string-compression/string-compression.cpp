class Solution {
public:
    int compress(vector<char>& s) {
        char prev = s[0];
        int index=0,count=1,start;
        for(int i=1;i<s.size();i++){
            if(s[i] == prev)count++;
            else{
                s[index++] = prev;
                if(count > 1){
                    start = index;
                    while(count){
                        s[index++] = (count%10) + '0';
                        count = count/10;
                    }
                    reverse(s.begin()+start, s.begin() + index);
                }
                prev = s[i];
                count=1;
            }
        }
        s[index++] = prev;
        if(count > 1){
            start = index;
            while(count){
                s[index++] = (count%10) + '0';
                count = count/10;
            }
            reverse(s.begin()+start, s.begin() + index);
        }
        return index;
    }
};
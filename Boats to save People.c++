class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size()-1;
        int k,i=0,count=0;
        while(i<=n){
                k=people[i]+people[n];
                if(k<=limit){
                    i++;
                    n--;
                }else{
                    n--;
                }
            count++;            
        }
        return count;
    }
};
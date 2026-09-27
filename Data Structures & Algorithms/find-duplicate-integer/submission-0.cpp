class Solution {
public:
    int findDuplicate(vector<int>& a) {
       // duplicate number ? 1,2,3,2,2 -> --without altering nums 
       // how can we do this? 1,2,3,4,4 
       // brute force 
       sort(a.begin(),a.end());
       for(int i=0; i<a.size()-1; i++) {
        if(a[i]==a[i+1]){
            return a[i];
        }
       }    
    }
};

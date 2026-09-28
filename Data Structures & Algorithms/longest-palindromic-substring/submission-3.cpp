class Solution {
public:

    string longestPalindrome(string s) {
        int j=0;
        int n=s.size();
        string ans;
        int longest_l=0;
        int longest_r=0;
        int current_length=0;
        int longest_length=0;
        // vector<string>s;                     '
        for(int i=0; i<n; i++){
            
            int cl=0;
            int cr=0;
            for(int j=1; j<n; j++) {
                
            // this is for odd length 
            // now for even length what can we do ? 
            // because if this string is of even length then ith will be somewhere ? which is actually i = i+1 
            if(i-j>=0 && i+j<n && s[i-j]==s[i+j]){
                cl=i-j;
                cr=i+j;
            } else break;
            }
            current_length=cr-cl+1;
            if(longest_length<current_length){
                longest_l=cl;
                longest_r=cr;
                longest_length=current_length;
            }
            for(int j=0; j<n; j++){
                if(i-j>=0 && i+j+1<n && s[i-j]==s[i+j+1]){
                    cl=i-j;
                    cr=i+j+1;
                } else break;
            }
            current_length=cr-cl+1;
            if(longest_length<current_length){
                longest_l=cl;
                longest_r=cr;
                longest_length=current_length;
            }
            
        }
        ans=s.substr(longest_l, longest_r-longest_l+1);
        return ans;
    }
};

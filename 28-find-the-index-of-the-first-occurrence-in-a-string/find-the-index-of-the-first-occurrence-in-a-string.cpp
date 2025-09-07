class Solution {
public:
    int strStr(string haystack, string needle) {
       int i=0;
        int m=haystack.size();
        int n=needle.size(); 
        for(i=0;i<=m;i++){
            if(haystack.substr(i,n)==needle){
                return i;
            }
        }     
        return -1; 
    }
};
class Solution {
    public String longestCommonPrefix(String[] strs) {
        int max= 200;
        String smallest="";
        for(int i=0;i<strs.length;i++){
            if (strs[i].length()<max){
                smallest=strs[i];
            }
        }
        for(int j=smallest.length();j>=0;j--){
            int k=0;
            for(k=0;k<strs.length;k++){
                if (!strs[k].startsWith(smallest.substring(0,j))){
                    break;
                }
            }
            if (k==strs.length){
                return smallest.substring(0,j);
            }            
        }  
        return "";  
    }

}


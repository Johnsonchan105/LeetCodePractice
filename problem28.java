class Solution {
    public int strStr(String haystack, String needle) {
        if(needle.length() == 0){
            return 0;
        }
        if(haystack.equals(needle)){
            return 0;
        }
        if(needle.length() > haystack.length()){
            return -1;
        }
        for(int i = 0 ; i < haystack.length(); i++){
            if((haystack.length() - i) < needle.length()) return -1;
            if(haystack.charAt(i) == needle.charAt(0)){
                if(needle.length() == 1){
                    return i;
                }
                if(haystack.substring(i, i + needle.length()).equals(needle)){
                    return i;
                }
            }
        }
        return -1;
    }
}
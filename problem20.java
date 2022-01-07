class Solution {
    public boolean isValid(String s) {
        if(s.length() == 1){
            return false;
        }
        char[] pre = new char[s.length()];
        int space = 0;
        for(int i = 0 ; i < s.length(); i++){
            if(s.charAt(i) == '{' || s.charAt(i) == '(' || s.charAt(i) == '['){
                pre[space] = s.charAt(i);
                space++;
            }
            if((s.charAt(i) == '}' && pre[0] == '\0') || 
               (s.charAt(i) == ')' && pre[0] == '\0') || 
               (s.charAt(i) == ']' && pre[0] == '\0')){
                return false;
            }else if((s.charAt(i) == '}' && pre[space-1] != '{') || 
               (s.charAt(i) == ')' && pre[space-1] != '(') || 
               (s.charAt(i) == ']' && pre[space-1] != '[')){
                return false;
            }else if(s.charAt(i) == '}' || s.charAt(i) == ')' || s.charAt(i) == ']'){
                space--;
                pre[space] = '\0';
            }
            System.out.println(pre);
        }
        if(pre[0] != '\0'){
            return false;
        }
        return true;
    }
}
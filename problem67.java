class Solution {
    public String addBinary(String a, String b) {
        String binary = "";
        
        String lesser = (a.length() < b.length()) ? a : b;
        String longer = (a.length() >= b.length()) ? a : b;
        int diff = longer.length()-lesser.length();
        for (int i = 0; i < diff; i++) lesser = "0" + lesser;
        
        boolean one = false;
        for(int j = lesser.length() - 1; j >= 0; j--){
            char smol = lesser.charAt(j);
            char big = longer.charAt(j);
            if(smol == '1' && big == '1' && one){
                one = true;
                binary = "1" + binary;
                continue;
            }
            if((smol == '1' && big == '1') ||
               (smol == '1' && one) || 
               (big == '1' && one)){
                one = true;
                binary = "0" + binary;
                continue;
            }
            if((smol == '1' && big == '0') || 
               (smol == '0' && big == '1') ||
               (smol == '0' && one) ||
               (big == '0' && one)){
                binary = "1" + binary;
                one = false;
                continue;
            }
            if(smol == '0' && big == '0') binary = "0" + binary;
        }
        if(one){
            binary = "1" + binary;
        }
        return binary;
    }
}
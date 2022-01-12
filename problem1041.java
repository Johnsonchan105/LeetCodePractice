class Solution {
    public boolean isRobotBounded(String instructions) {
        int x = 0;
        int y = 0;
        String[] move = {"U", "R", "D", "L"};
        int pos = 0;
        for(int i = 0; i < instructions.length(); i++){
            if(instructions.charAt(i) == 'L'){
                if(pos == 0){
                    pos = 3;
                }else{
                    pos -= 1;
                }
            }else if(instructions.charAt(i) == 'R'){
                if(pos == 3){
                    pos = 0;
                }else{
                    pos += 1;
                }
            }else{
                switch(move[pos]){
                    case "U": y++;
                        break;
                    case "D": y--;
                        break;
                    case "R": x++;
                        break;
                    case "L": x--;
                        break;
                }
            }
        }
        return (!(move[pos].equals("U")) || (x == 0 && y == 0));
    }
}
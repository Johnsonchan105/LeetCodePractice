
public class test {
    public static void main(String[] args) {
        /*
         * char[][] w = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D',
         * 'E', 'E' } }; String word = "ABCCED"; { { 'A', 'B', 'C', 'E' }, { 'S', 'F',
         * 'C', 'S' }, { 'A', 'D', 'E', 'E' } } ABCB [["a","b"],["c","d"]]
         * 
         * 
         */
        char[][] w = { { 'a', 'b' }, { 'c', 'd' } };
        String word = "abcd";
        Solution s = new Solution();
        boolean a = s.exist(w, word);
        System.out.println(a);
    }
}

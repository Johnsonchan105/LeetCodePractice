class Solution {
    public int search(int[] nums, int target) {
        int r = nums.length;
        return binary(nums, 0, r - 1, target);
    }
    public int binary(int[] n, int left, int right, int val){
        int mid = (left + right) / 2;
        System.out.println(left + " " + mid + " " + right);
        if(left > right) return -1;
        if(n[mid] == val) return mid;
        if(val < n[mid]){
            return binary(n, left, mid - 1, val);
        }else{
            return binary(n, mid + 1, right, val);
        }
    }
}
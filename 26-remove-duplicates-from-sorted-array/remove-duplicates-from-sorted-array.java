class Solution {
    public int removeDuplicates(int[] nums) {
         if (nums.length == 0) return 0;
        
        // Initialize the slow pointer
        int slow = 0;

        // Traverse the array with the fast pointer starting from index 1
        for (int fast = 1; fast < nums.length; fast++) {
            // Compare the current element with the element at the slow pointer
            if (nums[fast] != nums[slow]) {
                // Increment the slow pointer
                slow++;
                // Move the unique element to the position of the slow pointer
                nums[slow] = nums[fast];
            }
        }

        // The number of unique elements is slow + 1
        return slow + 1;
    }
}
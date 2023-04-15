//qustion:-
You are given an integer array nums. You are initially positioned at the
array's first index, and each element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise. 
  
Example 1:
Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
  
Example 2:
Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes 
it impossible to reach the last index.
  
// code:
  bool canJump(vector<int>& nums) {
        int curr = 0, i = 0;
        while( i < nums.size()){
            if( curr < i) return false;
            curr = max( curr, nums[i] + i++);
        }return true;
    }

// TC- O(n) , SC - O(1)

//Intution behind the algorithum:-
This code checks if it is possible to reach the end of an array of non-negative
integers (where each integer represents the maximum number of steps that can be taken from that position) 
 starting from the first position.

The function takes a vector of integers called nums as input and returns a boolean value. 
 The main logic of the function is implemented using a while loop.

Initially, the variable curr is set to zero, which represents the maximum index 
that can be reached so far. The variable i is also initialized to zero, representing the current position being checked.

In each iteration of the loop, the function checks if it is possible to reach the current
position i from the previous position curr. If it is not possible, i.e., curr < i, then the
function returns false as it is impossible to reach the end of the array.

If it is possible to reach the current position, the function updates the curr value to nums[i] + i, 
which represents the farthest index that can be reached from the current position. 
 The max function is used to keep track of the farthest index reached so far,
as the previous curr value might have been updated in previous iterations.

Finally, if the loop completes without returning false, it means that it is
possible to reach the end of the array, and the function returns true.
  
  
//leetCode link:- 
  https://leetcode.com/problems/jump-game/description/
//gfglink:-
https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

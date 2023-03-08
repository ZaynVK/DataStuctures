//Problem statement.

Given n non-negative integers representing an elevation map where the width of each bar is
1, compute how much water it can trap after raining.
Example 1:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is
represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9


// code:
  int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxleft = 0, maxright = 0;
        int res = 0;
        while( left <= right){
            if( height[left] <= height[right]){
                if( height[left] >= maxleft) maxleft = height[left];
                else res += maxleft - height[left];
                left++;
            }
            else{
                if( height[right] >= maxright) maxright = height[right];
                else res += maxright - height[right];
                right--;
            }
        }
        return res;
    }

// tc:- O(n) SC:- O(1)

// Intution:- 
This algorithm is used to calculate the amount of water that can be trapped between
bars of varying heights. It works by using two pointers, one at the beginning of the 
array and one at the end, and moving them towards each other.

At each iteration, it determines which pointer is pointing to a bar with a 
smaller height, and then updates the maximum height seen so far from that side.
If the height of the current bar is less than or equal to the maximum height seen so far, 
then the amount of water that can be trapped at that position is equal to the difference 
between the maximum height and the current bar height.

This is because the maximum height seen so far from that side represents the height of
the tallest bar that water can flow over from that side. If the current bar is shorter 
than that height, then water can be trapped at that position.

The algorithm continues until the two pointers meet in the middle, at which point
the total amount of water that can be trapped is returned.
  
  
 //leet_code link:-
  https://leetcode.com/problems/trapping-rain-water/description/
//gfglink:-
https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

 

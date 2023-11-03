/*

TOPS 16 mins

11. Container With Most Water
Medium
Topics
Companies
Hint
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
*/

int maxArea(std::vector<int>& height) {  // Define a function that takes a reference to a vector of integers as input
    int maxArea = 0;  // Initialize a variable to store the maximum area found so far
    int left = 0;  // Initialize a pointer 'left' to point to the start of the vector
    int right = height.size() - 1;  // Initialize a pointer 'right' to point to the end of the vector

    while (left < right) {  // Start a while loop that continues until 'left' is less than 'right'
        int h = std::min(height[left], height[right]);  // Calculate the height of the container as the minimum of heights at 'left' and 'right'
        int width = right - left;  // Calculate the width of the container as the difference between 'right' and 'left'
        int area = h * width;  // Calculate the area of the container by multiplying height and width
        maxArea = std::max(maxArea, area);  // Update 'maxArea' with the maximum value seen so far using std::max

        if (height[left] < height[right]) {  // Check if the height at 'left' is less than the height at 'right'
            left++;  // Move the 'left' pointer one step to the right
        } else {
            right--;  // Move the 'right' pointer one step to the left
        }
    }

    return maxArea;  // Return the 'maxArea' as the final result
}

/*
Time Complexity:
The time complexity of this code is O(n), where 'n' is the number of elements in the input array 'height'. This is because the code uses a two-pointer approach that traverses the array from both ends towards the center, and in the worst case, each pointer is moved at most 'n-1' times.

Space Complexity:
The space complexity is O(1), which means it uses a constant amount of extra space regardless of the size of the input array. The code only uses a few integer variables (maxArea, left, right, h, width, area), and it does not depend on the size of the input array. Therefore, the space complexity remains constant.

In summary, the code provides an efficient solution to the problem with a time complexity of O(n) and a space complexity of O(1), making it optimal in terms of space usage.
*/

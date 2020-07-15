/*
Given a non-empty array of digits representing a non-negative integer, increment one to the integer.

Example 1:
Input: [1,2,3,9]
Output: [1,2,4, 0]

Example 2:
Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
*/

	vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        int carry = 1;
        int temp = 0;

        for(int i = n-1; i >= 0; i--){
            temp = carry + arr[i];
            carry = temp / 10;
            arr[i] = temp % 10;
        }

        if(carry != 0){
            arr.insert(arr.begin(), carry);  // to insert at a position in a vector.s
        }
        return arr;
    }

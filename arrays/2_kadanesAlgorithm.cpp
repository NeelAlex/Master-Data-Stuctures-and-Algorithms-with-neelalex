/* find the largest sum contiguous Subarray.
Also expect negative numbers to be present.

Example 1
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2
Input: [-3 -2 -5 -4 -1],
Output: -1
Explanation: [-1] has the largest sum = -1.
*/

int maxSubArraySum(int arr[], int size) {
    int max_so_far = INT_MIN;
	int max_ending_here = 0;
	int max_negative_scenario = INT_MIN;  // to handle all negative scenario.

    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;

        if (max_ending_here < 0){
            max_ending_here = 0;

        if(arr[i] > max_negative_scenario) // additional check to handle all negative scenario.
            max_negative_scenario = arr[i];
    }

    if(max_so_far == 0) // additional check to handle all negative scenario.
        max_so_far = max_negative_scenario;

    return max_so_far;
}

/*
Given an array of integers,  arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..

Example 1:
---------
Input:
[1, 2, 3, 4, 5]

Output:
One possible answer : [2, 1, 4, 3, 5]
Other possible answer : [4, 1, 3, 2, 5]
If there are multiple answers, return lexically smallest one.
*/

vector<int> waveArray(vector<int> &arr) {
    if(arr.size() <=1){
        return arr;
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 1; i = i + 2){
        swap(arr[i], arr[i+1]);
    }
    return arr;
}

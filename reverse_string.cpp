class Solution {
public:
    void reverseString(vector<char>& Array) {
        int start = 0;
        int end = Array.size()-1;
        /// while start is greater then or equal end
        while(start <= end){
            swap(Array[start], Array[end]); /// swap and increase start and end
            start++;  // move in from start
            end--;  // move from end in
        }
    }
};

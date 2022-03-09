class Solution
{
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int        N = heights.size();
        
        if (N == 0)
            return 0;
        
        st.push(0);
        int maxArea = heights[0];
        int i = 0, length, width;
        for (i = 1; i <= N; ++i) {
            while(!st.empty() && 
                  (i == N || heights[st.top()] > heights[i])) {
                length = heights[st.top()]; st.pop();
                width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, length * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
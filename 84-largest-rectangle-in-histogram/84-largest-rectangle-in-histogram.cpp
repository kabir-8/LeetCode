class Solution
{
public:
// next smaller array
    void nextSmaller(vector<int> &arr, vector<int> &next)
    {
        stack<int> st;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            // keep popping untill you found element smaller than current value 
            while (!st.empty() and arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            int n = st.empty() ? arr.size() - 1 : st.top() - 1;
            next[i] = n;
            st.push(i);
        }
    }
    // previous smaller array
    void prevSmaller(vector<int> &arr, vector<int> &prev)
    {
        stack<int> st;
        for (int i = 0; i < arr.size(); i++)
        {
            // keep popping untill you found element smaller than current value
            while (!st.empty() and arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            int p = st.empty() ? 0 : st.top() + 1;
            prev.push_back(p);
            st.push(i);
        }
    }
    int largestRectangleArea(vector<int> &heights)
    {
        // next array
        vector<int> next(heights.size(), -1);
        // previous array
        vector<int> prev;
        prevSmaller(heights, prev);
        nextSmaller(heights, next);
        int res = 0, area;
        for (int i = 0; i < heights.size(); i++)
        {
            area = (next[i] - prev[i] + 1) * heights[i];
            res = max(res, area);
        }
        return res;
    }
};
class Solution {
 public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = (int)nums.size();
    vector<int> L(n);
    L[0] = 1;
    for (int i = 1; i < n; ++i) {
      L[i] = L[i - 1] * nums[i - 1];
    }
    int r = 1;
    for (int i = n - 1; i >= 0; --i) {
      L[i] *= r;
      r *= nums[i];
    }
    return L;
  }
};

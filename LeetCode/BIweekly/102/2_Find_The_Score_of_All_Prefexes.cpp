




code:
vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
        long long sum = 0;
        int maxi = INT_MIN;
        for(int x : nums) {
          maxi = max(maxi, x);
          sum += x + maxi;
          ans.push_back(sum);
        }
      return ans;
    }

Tc: O(n);
sc: O(n);

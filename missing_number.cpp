// podejscie pierwsze gorsze  czas O(n)   pamiec O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> check (n+1, -1);
        for(int i = 0; i < n; i++)
            check[nums[i]] = 1;
        
        for(int i = 0; i<n+1;i++)
        {
            if(check[i] == -1)
                return i;
        }
        
        return 0;
    }
};



// podejscie drugie LEPSZE czas O(1) pamiec O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;

        for(int i=1;i<=n;i++)
        {
            x = x ^ i;
        }

        for(int i=0;i<n;i++)
        {
            x = x ^ nums[i];
        }

        return x;
    }
};

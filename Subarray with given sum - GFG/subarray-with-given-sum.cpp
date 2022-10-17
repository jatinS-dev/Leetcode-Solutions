//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s) {
        vector<int> ans;
        int sum = arr[0], start = 0;
        for(int i = 1; i <= n; ++i) {
            while(sum > s && start < i - 1) {
                sum -= arr[start];
                start++;
            }
            if(sum == s) {
                ans.push_back(start+1);
                ans.push_back(i);
                return ans;
            }
            if(i < n) {
                sum+=arr[i];
            }
        }
        if(ans.size()==0) return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
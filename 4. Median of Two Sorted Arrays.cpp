class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2,nums1);

        int n1 = nums1.size();
        int n2 = nums2.size();

        if((n1+n2)%2==0){
            
            int mid = (n1+n2)/2;
            int mid2 = mid+1;
            vector<int> res;
            int i = 0,j = 0;
            int cnt = 0;
            int num = 0;
            while(i<n1 || j<n2){
                if(cnt == mid)
                    if(nums1[i]<nums)
                    res.push_back(min(nums1[i]))
            }

        }else{

        }


        return 0.0;
    }
};

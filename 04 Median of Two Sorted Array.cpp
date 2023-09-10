class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size(), m= nums2.size();
        vector <float> v;
        
        for(int i=0;i<n;i++){
            v.push_back(nums1[i]);
        }
        for(int j=0; j<m; j++ ){
            v.push_back(nums2[j]);
        }

        sort(v.begin(), v.end());

        if ( (n+m)%2==1 ) return v[(n+m-1)/2];
        else {
            float a = v[((n+m)/2)-1] + v[(n+m)/2];
            a= a/2;
            return a;
        }
         
        
    }
};

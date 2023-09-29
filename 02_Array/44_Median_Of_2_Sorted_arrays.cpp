// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int len1 = nums1.size();
//         int len2 = nums2.size();
//         int n = len1 + len2;
//         vector<double> v;
//         int i  = 0, j = 0;
        
//         while(i < len1 && j < len2){
//             if(nums1[i] <= nums2[j])
//                 v.push_back(nums1[i++]);
//             else
//                 v.push_back(nums2[j++]);
//         }

//         while(i < len1)
//             v.push_back(nums1[i++]);

//         while(j < len2)
//             v.push_back(nums2[j++]);

//         if(n%2 == 0) return (v[n/2] + v[(n/2) -1])/2;

//         return v[n/2];
//     }
// };
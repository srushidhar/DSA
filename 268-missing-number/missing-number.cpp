class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1=0;
        int XOR2 =0;


        for(int i=0;i<=nums.size();i++){
            XOR1=XOR1^i;
        }

        for(int j=0;j<nums.size();j++){
            XOR2 ^= nums[j];
        }

        return XOR1 ^ XOR2;


       

        
    }
};
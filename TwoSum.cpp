class Solution {
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        for (int i = 0; i < nums.size(); i ++){
            for (int j = i + 1; j < nums.size(); j ++ ){
                if ( nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// ý tưởng 
// Dùng 2 vòng lặp 
// Duyệt lần lượt 2 phần tử nếu tổng 2 phần tử bằng target thì return
/*
input: nums [1,2,3,4] , target = 3
output: [0,1]
    */

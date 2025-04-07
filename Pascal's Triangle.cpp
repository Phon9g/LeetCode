class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;  // Đây là vector 2D để lưu Pascal's Triangle
        
        // Duyệt qua từng dòng của Pascal's Triangle
        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1, 1);  // Mỗi dòng có i+1 phần tử, tất cả là 1
            
            // Cập nhật các phần tử giữa dòng (không phải đầu và cuối)
            for (int j = 1; j < i; ++j) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];  // Tổng 2 phần tử từ dòng trên
            }
            
            // Thêm dòng mới vào Pascal's Triangle
            triangle.push_back(row);
        }
        
        return triangle;  // Trả về Pascal's Triangle
    }
};

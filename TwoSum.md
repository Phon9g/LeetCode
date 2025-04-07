Cho một mảng các số nguyên nums và một số nguyên target, trả về các chỉ số của hai số sao cho tổng của chúng bằng target.

Bạn có thể cho rằng mỗi đầu vào sẽ có đúng một giải pháp và bạn không được sử dụng cùng một phần tử hai lần.

Bạn có thể trả về câu trả lời theo bất kỳ thứ tự nào.

Ví dụ 1:

Đầu vào: nums = [2,7,11,15], target = 9
Đầu ra: [0,1]

Giải thích: Vì nums[0] + nums[1] == 9, chúng ta trả về [0, 1].

Ví dụ 2:

Đầu vào: nums = [3,2,4], target = 6

Đầu ra: [1,2]

Ví dụ 3:

Đầu vào: nums = [3,3], target = 6

Đầu ra: [0,1]

Ràng buộc:

2 <= nums.length <= 104

-109 <= nums[i] <= 109

-109 <= target <= 109

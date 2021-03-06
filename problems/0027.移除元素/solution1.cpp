class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) {       //如果i位置元素为待移除元素，将其与数组末尾元素交换
                switchElement(nums,i,size - 1);
                size--;
                i--;
            }
        }
        return size;
    }

    void switchElement(vector<int>& nums, int pos_1, int pos_2) {       //交换数组中pos_1与pos_2两位置的元素
        int a;
        a = nums[pos_1];
        nums[pos_1] = nums[pos_2];
        nums[pos_2] = a;
    }
};

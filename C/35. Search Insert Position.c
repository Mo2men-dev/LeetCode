int searchInsert(int* nums, int numsSize, int target) {
    int indx = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) indx = i;
        else if (nums[i] < target) indx = i + 1;
    }
    return indx;
}

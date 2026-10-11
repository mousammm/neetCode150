#include <stdio.h>

void twoSum(int* nums, int numsSize, int target)
{
  for (int i = 0; i < numsSize - 1; i++) {
    printf("%d %d\n", nums[i], nums[++i]);
  }
}

int main()
{
  int nums[] = {15, 7, 2, 9};
  twoSum(nums, 4, 9);
  return 0;
}

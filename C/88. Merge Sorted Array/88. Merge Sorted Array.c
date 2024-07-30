#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    for (int i = 0; i < n; i++)
        nums1[m + i] = nums2[i];

    int size = m + n;

	int temp;
	size_t i, k;

	i = 0;
	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (nums1[k] > nums1[k + 1])
			{
				temp = nums1[k];
				nums1[k] = nums1[k + 1];
				nums1[k + 1] = temp;
			}
		}
		i++;
	}

}
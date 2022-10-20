#define _CRT_SECURE_NO_WARNINGS

int removeDuplicates(int* nums, int numsSize)
{
	int src = 0, dst = 0;
	while (src < numsSize)
	{
		if (nums[src] == nums[dst])
		{
			++src;
		}
		else
		{
			//++dst;
			//nums[dst] = nums[src];
			//++src;
			nums[++dst] = nums[src++];
		}
	}
	return dst + 1;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int end1 = m - 1;
    int end2 = n - 1;
    int i = m + n - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        if (nums1[end1] > nums2[end2])
        {
            nums1[i] = nums1[end1];
            --i;
            --end1;
        }
        else
        {
            nums1[i] = nums2[end2];
            --i;
            --end2;
        }
    }
    while (end2 >= 0)
    {
        nums1[i] = nums2[end2];
        --i;
        --end2;
    }
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void BubbleSort(int array[], int size)
{
    int i, j;
    外层循环控制冒泡排序的趟数
    size-1表示：最后一趟区间中只剩1个元素，该趟冒泡可以省略。
    for (i = 0; i < size - 1; i++)
    {
        for (j = 1; j < size - 1; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);//计算元素个数
    BubbleSort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void BubbleSort(int array[], int size)
{
    int i, j;
    外层循环控制冒泡排序的趟数
    size-1表示：最后一趟区间中只剩1个元素，该趟冒泡可以省略
    for (i = 0; i < size - 1; i++)
    {
        int isChange = 0;
        具体冒泡的方式：用相邻的两个元素进行比较，前一个大于
        后一个元素时，交替这两个数据，依次直到数组的末尾
        for (j = 1; j < size - 1; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
                isChange = 1;//如果本次冒泡进行数据交换了，说明本次
                还是无序的，就将isChange设置为1
            }
        }
        如果本次冒泡中，元素没有交换，则本次开始冒泡是，数据已经有序了，
        后面的冒泡可以不用进行了
        if (!isChange)
            return;
    }
}
int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);//计算元素个数
    BubbleSort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
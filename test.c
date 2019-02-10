//给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点(i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为(i, ai) 和(i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
//
//说明：你不能倾斜容器，且 n 的值至少为 2。
//示例 :
//
//输入 : [1, 8, 6, 2, 5, 4, 8, 3, 7]
//输出 : 49
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int maxArea(int* height, int heightSize) {

	int left = 0;
	int right = heightSize - 1;
	int count = 0;
	int a = heightSize - 1;
	while (left <right)
	{
		if (height[left]<height[right])
		{
			if (count < a*height[left])
			{
				count = a*height[left];

			}
			left++;
			a--;

		}
		else if (height[left] >= height[right])
		{
			if (count < a*height[right])
			{
				count = a*height[right];

			}
			right--;
			a--;
		}
	}
	return count;
}

int main()
{
	int nums[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
	int len = sizeof(nums) / sizeof(0);
	int a = maxArea(nums,len);
	printf("%d\n",a);
	system("pause");
	return 0;
}

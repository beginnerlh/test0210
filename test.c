//���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ����(i, ai) ���������ڻ� n ����ֱ�ߣ���ֱ�� i �������˵�ֱ�Ϊ(i, ai) ��(i, 0)���ҳ����е������ߣ�ʹ�������� x �Ṳͬ���ɵ�����������������ˮ��
//
//˵�����㲻����б�������� n ��ֵ����Ϊ 2��
//ʾ�� :
//
//���� : [1, 8, 6, 2, 5, 4, 8, 3, 7]
//��� : 49
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

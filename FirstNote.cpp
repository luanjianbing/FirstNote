//https://github.com/BMR731/XueTangCplusplus/tree/master/第二章编程作业
/*任意给定n个整数，求n个整数序列的和、最小值、最大值*/
/*
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* nums =new int[n];
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
		sum += nums[i];
	}
	int min_num = nums[0];
	int max_num = nums[0];
	for (int i = 0; i < n; ++i)
	{
		min_num = min(min_num, nums[i]);
		max_num = max(max_num, nums[i]);
	}
	cout << sum << " " << min_num << " " << max_num;
	system("pause");
	return 0;
}
*/
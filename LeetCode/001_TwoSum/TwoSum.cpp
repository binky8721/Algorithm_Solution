#include<iostream>
#include<vector>
using namespace std;

// TODO : Brute Force해결 방법 말고 속도를 개선한 방법으로 문제해결 필요

vector<int>TwoSum(vector<int>& nums, int target)
{
	vector<int>twonums;

	// 벡터에 있는 값들을 각각 순차적으로 더하여 비교한다.
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				twonums.push_back(i);
				twonums.push_back(j);
			}
		}
	}
	return twonums;
}

int main(void)
{
	vector<int>input = { 2,7,11,15 };

	int target = 9;

	vector<int>outputIndex = TwoSum(input, target);

	for (int i = 0; i < outputIndex.size(); i++)
	{
		cout << outputIndex[i] << endl;
	}

	return 0;
}
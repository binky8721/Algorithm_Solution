#include<iostream>
#include<vector>
using namespace std;

// TODO : Brute Force�ذ� ��� ���� �ӵ��� ������ ������� �����ذ� �ʿ�

vector<int>TwoSum(vector<int>& nums, int target)
{
	vector<int>twonums;

	// ���Ϳ� �ִ� ������ ���� ���������� ���Ͽ� ���Ѵ�.
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
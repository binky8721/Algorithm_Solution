#include<iostream>
#include<vector>
using namespace std;

// TODO : isHappyNum �Լ��������� ��� �ڵ尡 ���ư����� �����ϱ�
// TODO : �ð��ʰ��� ���� ����
vector<int>sumlist;

bool isHappyNum(int num)
{
	// num ��ü�� 1�ΰ�� happy
	if (num == 1)
		return true;

	// ���� num�� vector�� ���
	sumlist.push_back(num);

	// �Է¹��� ������ ���ڸ� ���� ���Ѱ� -> sum
	int sum = 0;
	while (num)
	{
		sum += (num % 10) * (num % 10);
		num /= 10;
	}
	
	// sum�� 1�̸� happy
	if (sum == 1)
		return true;

	// sum�� 1�̾ƴϸ� unhappy���� �Ǵ�
	else if (sum != 1)
	{
		//vector<int>::size_type
		for (int i = 0; i < sumlist.size(); i++)
		{
			if (sum == sumlist[i])
				return false;
		}

		// unhappy���� happy���� �𸣰ڴٸ� vector�� ���� ���
		sumlist.push_back(sum);

		// �׷����� �ٽ� sum���� �ٽ� �Է��Ͽ� ��ͷ� �Լ��� ������.
		isHappyNum(sum);
	}
	
}

int main(void)
{	
	int num;
	cin >> num;

	if (isHappyNum(num))
		cout << "HAPPY" << endl;
	else
		cout << "UNHAPPY" << endl;
	
	return 0;
}
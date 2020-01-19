#include<iostream>
#include<vector>
using namespace std;

vector<int>PlusOne(vector<int>& digits)
{
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		// �ش� 1���ڸ����� 9���
		if (digits[i] == 9)
		{
			//�ش� �ڸ����� 0�̵ȴ�.
			digits[i] = 0;


			// ���� ù��° �ڸ��϶��� ���ڸ��� 1�� ���ϴ°��� �ƴ� 1�� �߰������ϰ� �ݺ����� �����Ѵ�.
			if (i == 0)
			{
				digits.insert(digits.begin(), 1);
				break;
			}

		}
		else
		{
			// 9�� �ƴϸ� 1�� �������� �ݺ�����
			digits[i]++;
			break;
		}
	}

	return digits;
}

int main(void)
{
	//vector<int>inputs{ 1,2,3 };
	vector<int>inputs{ 9,9,9,9 };
	//vector<int>inputs{ 8,9,9,9 };

	vector<int>outputs = PlusOne(inputs);

	for (int i = 0; i < outputs.size(); i++)
	{
		cout << outputs[i] << "	";
	}

	return 0;
}
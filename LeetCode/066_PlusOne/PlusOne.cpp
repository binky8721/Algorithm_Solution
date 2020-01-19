#include<iostream>
#include<vector>
using namespace std;

vector<int>PlusOne(vector<int>& digits)
{
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		// 해당 1의자리수가 9라면
		if (digits[i] == 9)
		{
			//해당 자리수는 0이된다.
			digits[i] = 0;


			// 가장 첫번째 자리일때는 앞자리에 1을 더하는것이 아닌 1을 추가삽입하고 반복문을 종료한다.
			if (i == 0)
			{
				digits.insert(digits.begin(), 1);
				break;
			}

		}
		else
		{
			// 9가 아니면 1을 더해준후 반복종료
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
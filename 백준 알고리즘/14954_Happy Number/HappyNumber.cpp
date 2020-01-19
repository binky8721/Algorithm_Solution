#include<iostream>
#include<vector>
using namespace std;

// TODO : isHappyNum 함수내에서만 모든 코드가 돌아가도록 구현하기
// TODO : 시간초과로 문제 실패
vector<int>sumlist;

bool isHappyNum(int num)
{
	// num 자체가 1인경우 happy
	if (num == 1)
		return true;

	// 받은 num을 vector에 기록
	sumlist.push_back(num);

	// 입력받은 숫자의 각자리 수를 더한값 -> sum
	int sum = 0;
	while (num)
	{
		sum += (num % 10) * (num % 10);
		num /= 10;
	}
	
	// sum이 1이면 happy
	if (sum == 1)
		return true;

	// sum이 1이아니면 unhappy인지 판단
	else if (sum != 1)
	{
		//vector<int>::size_type
		for (int i = 0; i < sumlist.size(); i++)
		{
			if (sum == sumlist[i])
				return false;
		}

		// unhappy인지 happy인지 모르겠다면 vector에 값을 기록
		sumlist.push_back(sum);

		// 그런다음 다시 sum값을 다시 입력하여 재귀로 함수를 돌린다.
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
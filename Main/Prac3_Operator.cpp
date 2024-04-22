#include <iostream>
#include <vector>
#include <string>

int main()
{
	int num1 = 5;
	int num2 = 10;
	int num3 = 15;
	
	if (num1 > num2) //if문은 결국 true인지 false인지 확인하는 것
	{
		std::cout << "숫자1이 숫자2보다 크다";
	}
	else if (num1 > num3)
	{
		std::cout << "숫자1이 숫자2보다 크거나 같고, " << "숫자1이 숫자 3보다 크다.";
	}
	else
	{
		std::cout << "숫자 1이 가장 작거나, 숫자 2또는 숫자 3보다 같거나 작다";
	}
	//bool result = false;
	//result = (num1 > num2) && (num1 > num3); 조건 1,2 모두 만족하면 True

	//int loop_count = 5;
	//int input = 99320924828;
	// input% loop_count == 0~4;

	//loop_count++;  //하나씩 증가
	//loop_count--;  //하나씩 감소
	
	// && and
	// || or
	// ! not

	return 0;
}
#include <iostream>
#include <vector>
#include <string>

int main()
{
	int num1 = 5;
	int num2 = 10;
	int num3 = 15;
	
	if (num1 > num2) //if���� �ᱹ true���� false���� Ȯ���ϴ� ��
	{
		std::cout << "����1�� ����2���� ũ��";
	}
	else if (num1 > num3)
	{
		std::cout << "����1�� ����2���� ũ�ų� ����, " << "����1�� ���� 3���� ũ��.";
	}
	else
	{
		std::cout << "���� 1�� ���� �۰ų�, ���� 2�Ǵ� ���� 3���� ���ų� �۴�";
	}
	//bool result = false;
	//result = (num1 > num2) && (num1 > num3); ���� 1,2 ��� �����ϸ� True

	//int loop_count = 5;
	//int input = 99320924828;
	// input% loop_count == 0~4;

	//loop_count++;  //�ϳ��� ����
	//loop_count--;  //�ϳ��� ����
	
	// && and
	// || or
	// ! not

	return 0;
}
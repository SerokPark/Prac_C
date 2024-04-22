//작성자 : Serok
//작성일자 : 2024.04.22
//main 함수 연습

#include <iostream>
// 외부에 있는 변수를 가져오는 것, 주석 처리하면 std에 있는 변수들 빨간 줄
#include <vector>
#include <string>

//1. 프로그램 전체에서 딱 1개만 존재하는 '함수'
//2. 프로그램에서 가장 먼저 '실행'되는 소스코드

int main()  //함수, 정의
{//코드 블럭
	//콘솔 문자 '출력' out은 꺽쇠 <<
	//프로그램이 실행되는 단위
	//특정 기능을 실행하는 단위를 ;으로 구분, ; 기준으로 계산하기 때문에 줄 바꿈, 띄워쓰기에 상관없이 실행가능
	std::cout << "Hello, World.\n";   //\n : 줄바꿈


	//C++은 Strong 언어라서 int라 정의 후 문자 사용 불가
	//기본 자료형은 불, 문자, 정수, 실수형으로 나눔
	//한글은 16bit로 표현 가능
	//bit->byte, 8bit=1byte
	//문자열은 string 타입 사용, ""를 이용해 사용
	//std는 외부에서 가져온 것
	std::string MyName = "Serok";
	char word = 'A';
	//문자는 '', 문자열은 ""

	// int : 자료형, 정수(인티저)
	// num : 변수 이름, 약간의 제약 + 자유롭게 지정가능

	int num;  //변수, 정수가 들어갈 수 있는 공간

	//콘솔 문자'입력' in은 꺽쇠 >>
	std::cin >> num;

	std::string test3 = "Posco";
	test3 = "CodingOn";
	std::cout << "What I wanna say is" << test3 << ".";

	std::cout << "줄바꿈.\n";
	std::cout << "줄바꿈."<<std::endl;

	std::cout << "줄바꿈.";

	return 0;

}


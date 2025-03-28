//비주얼 프로그래밍 3주차 입니다. 
//지난 시간: 입출력 함수 cin, cout , OOP(객체지향)개념 
/*
* 1.cin 입력함수
*
* 2.변수를 사용할때 만약 숫자가 상수라면 -> 출력시 상수의 주소를 위치가 알기 어렵기 때문에 따로 주소를 지정하는 젓이 좋다.
* ex) 5 -> a(주소명), 3 -> b(주소명)
* 이유: 코드를 재사용하기 위해
*
*
cin을 쓸때는 위에다가 바로 변수명을 넣는 것이 좋다.
ex)
int num1;
cin>>num1;

변수 -> 데이터를 저장하고 처리하는 기본 단위

동적배열 -> 리스트 -> 입력 버퍼가 가변적이다.

데이터중 비정형데이터(예시로는 트래픽)가 있다면?

변수 선언 방법

1.정형 데이터

2.비정형 데이터(실시간) -> ex) 트레픽

자료형이 여러개인 이유는 -> 숫자를 정수 밖에 없으면 발생하는 문제가 있음 -> 다양한 데이터 표현이 가능해야 오차를 줄일수 있다.

*/


#include <iostream> 
using namespace std;
/*
int main()
{
	cout << "넓이를  입력하여 주세요:\n" << endl;  //주의 문자열을 저장시 공백 입력금지-=> 실행시 출력이 잘못됨 

	int width;
	cin >> width;

	cout << "높이를 입력하여 주세요:\n" << endl;

	int height;
	cin >> height;


	int result = width * height;
	// 숫자둘의 곱셈  계산
	cout << " 넓이는 " << result << endl; // 곱셈 결과를 출력하고 다음 줄로 넘어감

	result = width - height;
	cout << "뺄셈은 " << result << endl;

	result = width + height;
	cout << "덧셈은" << result << endl;

	result = width % height;
	cout << "나머지 값은" << result << endl;


	cout << "짝수인가?" << (result % 2 == 0);


}
*/

//홀수 판독기

/*
int main(){
 cout<<"숫자를 입력하여 주세요: "<<endl; 

  int num;

  cin>>num;

  if(num%2==1)
	cout<<"홀수입니다.<<endl;
 else if(num%2==0)
	cout<<"짝수입니다.<<endl;
 else
    cout<<"숫자를 다시 입력하여 주세요"<<endl;

}


*/


//3의 배수 판별식 
/*
* 
* 
int main(){

	cout <<"숫자를 입력하여 주세요" <<endl;

	int num;
	cin>>num;

	if(num%3==0)
		cout <<"해당 배수는 3의 배수 입니다."<<endl; 
	else
		cout <<"해당 배수는 3의 배수가 아닙니다."<<endl;

}

*/


//time.h 함수 안쓰고 윤년 계산해보기 
//추가되는 제약조건: if else문 안쓰기 
int main() {

	cout << "날짜를 년/월/일 로 입력하여 주세요." << endl;

	int year= 0;
	cin >> year; 
	cout << "년" << endl;
	
	/*
	int month = 0;
	cin >> month;
	cout << "월" << endl;

	int date = 0;
	cin >> date;
	cout << "일" << endl;
	*/

	//if 대신 -> bool 연산자, 삼항연산자 활용하여 구현 가능 
	bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
	cout << (isLeapYear ? "윤년입니다." : "윤년이 아닙니다.") << endl;


	// 입력한 달이 2월 29일이 있는지 확인 하는 방법 
	/*
	bool isLeapMonthDate = (month / 2 == 1) && (month / 29 == 1);
	cout << (isLeapMonthDate ? "윤년입니다." : "윤년이 아닙니다.") << endl; 
	*/

	return 0;
}

/*
* if, else 문 포함시 
* 
int num= 0; //변수 초기화 --> 미리 년도를 입력 시켜도 상관은 없다만, 메모리를 아끼는 것이 좋다. 

cin >> num;

bool result = (num % 4 == 0 && num % 100 != 0 || num % 400 == 0);

cout.setf(cout.boolalpha); //bool 연산자를 활용하기 위한 함수 

if(result == true)
	cout << "윤년입니다."<<endl;
else
	cout << "윤년이 아닙니다."<<endl;

*/
//���־� ���α׷��� 3���� �Դϴ�. 
//���� �ð�: ����� �Լ� cin, cout , OOP(��ü����)���� 
/*
* 1.cin �Է��Լ�
*
* 2.������ ����Ҷ� ���� ���ڰ� ������ -> ��½� ����� �ּҸ� ��ġ�� �˱� ��Ʊ� ������ ���� �ּҸ� �����ϴ� ���� ����.
* ex) 5 -> a(�ּҸ�), 3 -> b(�ּҸ�)
* ����: �ڵ带 �����ϱ� ����
*
*
cin�� ������ �����ٰ� �ٷ� �������� �ִ� ���� ����.
ex)
int num1;
cin>>num1;

���� -> �����͸� �����ϰ� ó���ϴ� �⺻ ����

�����迭 -> ����Ʈ -> �Է� ���۰� �������̴�.

�������� ������������(���÷δ� Ʈ����)�� �ִٸ�?

���� ���� ���

1.���� ������

2.������ ������(�ǽð�) -> ex) Ʈ����

�ڷ����� �������� ������ -> ���ڸ� ���� �ۿ� ������ �߻��ϴ� ������ ���� -> �پ��� ������ ǥ���� �����ؾ� ������ ���ϼ� �ִ�.

*/


#include <iostream> 
using namespace std;
/*
int main()
{
	cout << "���̸�  �Է��Ͽ� �ּ���:\n" << endl;  //���� ���ڿ��� ����� ���� �Է±���-=> ����� ����� �߸��� 

	int width;
	cin >> width;

	cout << "���̸� �Է��Ͽ� �ּ���:\n" << endl;

	int height;
	cin >> height;


	int result = width * height;
	// ���ڵ��� ����  ���
	cout << " ���̴� " << result << endl; // ���� ����� ����ϰ� ���� �ٷ� �Ѿ

	result = width - height;
	cout << "������ " << result << endl;

	result = width + height;
	cout << "������" << result << endl;

	result = width % height;
	cout << "������ ����" << result << endl;


	cout << "¦���ΰ�?" << (result % 2 == 0);


}
*/

//Ȧ�� �ǵ���

/*
int main(){
 cout<<"���ڸ� �Է��Ͽ� �ּ���: "<<endl; 

  int num;

  cin>>num;

  if(num%2==1)
	cout<<"Ȧ���Դϴ�.<<endl;
 else if(num%2==0)
	cout<<"¦���Դϴ�.<<endl;
 else
    cout<<"���ڸ� �ٽ� �Է��Ͽ� �ּ���"<<endl;

}


*/


//3�� ��� �Ǻ��� 
/*
* 
* 
int main(){

	cout <<"���ڸ� �Է��Ͽ� �ּ���" <<endl;

	int num;
	cin>>num;

	if(num%3==0)
		cout <<"�ش� ����� 3�� ��� �Դϴ�."<<endl; 
	else
		cout <<"�ش� ����� 3�� ����� �ƴմϴ�."<<endl;

}

*/


//time.h �Լ� �Ⱦ��� ���� ����غ��� 
//�߰��Ǵ� ��������: if else�� �Ⱦ��� 
int main() {

	cout << "��¥�� ��/��/�� �� �Է��Ͽ� �ּ���." << endl;

	int year= 0;
	cin >> year; 
	cout << "��" << endl;
	
	/*
	int month = 0;
	cin >> month;
	cout << "��" << endl;

	int date = 0;
	cin >> date;
	cout << "��" << endl;
	*/

	//if ��� -> bool ������, ���׿����� Ȱ���Ͽ� ���� ���� 
	bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
	cout << (isLeapYear ? "�����Դϴ�." : "������ �ƴմϴ�.") << endl;


	// �Է��� ���� 2�� 29���� �ִ��� Ȯ�� �ϴ� ��� 
	/*
	bool isLeapMonthDate = (month / 2 == 1) && (month / 29 == 1);
	cout << (isLeapMonthDate ? "�����Դϴ�." : "������ �ƴմϴ�.") << endl; 
	*/

	return 0;
}

/*
* if, else �� ���Խ� 
* 
int num= 0; //���� �ʱ�ȭ --> �̸� �⵵�� �Է� ���ѵ� ����� ���ٸ�, �޸𸮸� �Ƴ��� ���� ����. 

cin >> num;

bool result = (num % 4 == 0 && num % 100 != 0 || num % 400 == 0);

cout.setf(cout.boolalpha); //bool �����ڸ� Ȱ���ϱ� ���� �Լ� 

if(result == true)
	cout << "�����Դϴ�."<<endl;
else
	cout << "������ �ƴմϴ�."<<endl;

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	// Page 28
	cout << "Hello World!" << endl;
	cout << endl;

	// Page 42
	string s1 = "Good";
	string s2 = "Moring";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	cout << endl;

	// Page 47
	string name;
	cout << "이름을 입력하시오 : ";
	cin >> name;
	cout << name << "을 환영합니다." << endl;
	cout << endl;

	return 0;
}
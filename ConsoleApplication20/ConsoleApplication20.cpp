#include <iostream>
using namespace std;

int main()
{
	//провека почты 1
	bool flag = 0;
	const char* logins[4] = { ("@"),("."),("gmail"),("com") };
	char* email = new char[100];
	cout << "Rules: email must contain '@','.','com','gmail'and be more than five lines long" << "\n";
	cout << "Enter email: ";
	gets_s(email, 100);
	for (int i = 0; i < strlen(email); i++)
	{
		if (email == logins[i] and strlen(email) > 5)
		{
			cout << "The mail is fine";
			flag = true;
		}
		else
		{
			continue;
		}
	}
	if (flag == false)
	{
		cout << "The mail doesn't fit" << "\n";
	}

	//сколько раз встречается слово в предложении
	
	int length;
	length = 50;
	char symbol;
	int word = 0;
	char* name = new char[length] {};
	cout << name << "\n";
	cout << "Please, enter text: ";
	gets_s(name, length);
	cout << "Enter word: ";
	cin >> symbol;
	for (int i = 0; i < strlen(name); i++)
	{
		cout << name[i] << "";
		if (name[i] == symbol)
		{
			word++;
		}
	}
	cout << "\n";
	cout << "Word: " << word << "\n";

	delete[] name;

	//генерация пароля

	srand(time(NULL));
	int a;
	cout << "Enter size for passwords: ";
	cin >> a;
	char* password = new char[a];
	int* number = new int[a];
	char* re[100]{};
	cout << "Password: ";
	for (int f = 0; f < a; f++)
	{
		number[f] = rand() % a;
		password[f] = 'a' + rand() % 26;
		cout << number[f] << password[f];
	}
}
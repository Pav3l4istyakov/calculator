#include<iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int number1, number2;
	char operation;
	std::cout << "������� ������ �����";
	std::cin >> number1;
	std::cout << "������� ������ �����";
	std::cin >> number2;
	std::cout << "������� �������� 1)- 2)+ 3)* 4)/" << "\n";
	std::cin >> operation;
	switch (operation) {
	case '-':
		std::cout <<   number1 - number2 << "\n";
		break;
	case '+':
		std::cout  << number1 + number2 << "\n";
		break;
	case '*':
		std::cout<<   number1 * number2 << "\n";
		break;
	case '/':
		std::cout   << number1 / number2 << "\n";
		break;
	default:
		std::cout << "Error";
	}
	return 0;
}
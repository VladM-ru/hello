//ЗАДАНИЕ 1
//Написать программу, которая выводит на экран линию
//заданным символом, вертикальную или горизонтальную, причем линия может выводиться быстро, нормально и медленно.
//Общение с пользователем организовать через меню.

#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;


int main()
{

	setlocale(LC_ALL, "rus");

	char userSymbol;
	int lineType, speedLine, delay, lineLenght;

	cout << "Введите символ из которого будет состоять Ваша линия: \n";
	cin >> userSymbol;


	cout << "Введите скорость заполнения линии: \n";
	cout << "1 - очень медленно \n";
	cout << "2 - медленно \n";
	cout << "3 - нормально \n";
	cout << "4 - быстро \n";
	cout << "5 - очень быстро \n";

	cin >> speedLine;
	switch (speedLine)
	{
	case 1:
	{
		delay = 2000;
		break;
	}
	case 2:
	{
		delay = 1000;
		break;
	}
	case 3:
	{
		delay = 500;
		break;
	}
	case 4:
	{
		delay = 250;
		break;
	}
	case 5:
	{
		delay = 0;
		break;
	}
	default:
		cout << "Ошибка выбора!" << "\n";
		cout << "Линия автоматически будет запущена очень быстро!";
		cout << "\n";
		delay = 0;
	}

	cout << "Выбирите тип линии: \n";
	cout << "1 - вертикальная линия \n";
	cout << "2 - горизонтальная линия \n";
	cin >> lineType;


	cout << "Введите длину линии: \n";
	cin >> lineLenght;



	cout << "Поехали!\n\n\t\t";



	switch (lineType)
	{
	case 1:
	{
		system("color 04");
		for (int i = 0; i < lineLenght; i++)
		{
			Sleep(delay);
			cout << userSymbol << "\n\t\t";
		}
		break;
	}
	case 2:
	{
		system("color F9");
		for (int i = 0; i < lineLenght; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
		break;
	}
	default:
		cout << "Неверный ввод!" << "\n";
		cout << "Будет выведена горизонтальная линия!";
		cout << "\n";
		for (int i = 0; i < lineLenght; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
	}


	system("pause");
	return 0;






}

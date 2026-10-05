#include <stdio.h>
//1.4
#include <locale.h>

void main()
{
	//1.4 Рус.яз
	setlocale(LC_CTYPE, "RUS");

	//Повторите код примера 1.
	puts("1.1. Моя программа");

	//1.5 Добавьте вызов функции getchar();
	puts("Нажмите Enter для продолжения...");

	getchar(); // ожидание нажатия Enter

	puts("Продолжение программы");

	//1.2 Осуществите вывод сообщения "Hello Word!".
	puts("1.2. Hello Word!");

	//1.6 Добавьте оператор return 0;
	return 0;

}
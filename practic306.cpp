#include <iostream>
//охранник клуба условие возраст подходит не подходит  меньше 18 


void security() {

	int age;

	std::cout << "Нам нужно узнать ваш возраст!\n";
	std::cin >> age;

	if (age >= 30)
	{
		std::cout << "Ты слишком стар для этой вайбовой тусы.\n";
	}
	else if (age >= 18) 
	{
		std::cout << "Все, хорошо, проходи\n";
	}
	else 
	{
		std::cout << "Тебе сюда нельзя..\n";
	}

}

void randomnumber() {
	
	int x;

	std::cout << "Я загадал число, а тебе его нужно угадать!\n";

	/*int i = 0;
	while (i < 5)*/

	//число меняется только тогда, когда его угадывают

	int ran = 1 + rand() % 5;
	std::cout << "Загаданное число = " << ran << "\n";

	for (int i = 0; i < 5; i++)
	{
		std::cin >> x;

		if (x != ran)
		{	
			std::cout << "Попробуй ещё раз!\n";
		}
		else
		{
			std::cout << "Весьма неплохо, победа!\n";
			ran = 1 + rand() % 5;
			std::cout << "Новое число = " << ran << "\n";
		}

		//std::cout << x << "\n";
		//i++;
	}

}


int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");

	//security();
	randomnumber();

}



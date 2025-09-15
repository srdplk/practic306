#include <iostream>
#include <math.h>

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

void stringi() {
	srand(time(NULL));

	std::string user;
	int rounds;
	int i = 0;
	std::string words[3]{ "rock", "scissors", "paper" };

	std::cout << "Введите количество раундов.\n";
	std::cin >> rounds;

	while (i != rounds) {

		std::string comp = words[rand() % 3];
		std::cout << comp;

		std::cout << "Чем будете атаковать?\n";
		std::cin >> user;


		if ((user == words[0] && comp == words[2]) || (user == words[1] && comp == words[0]) || (user == words[2] && comp == words[1])) {
			std::cout << "Вы проиграли...\n";
			
		}

		else if ((user == words[2] && comp == words[0]) || (user == words[0] && comp == words[1]) || (user == words[1] && comp == words[2])) {
			std::cout << "Вы выиграли!\n";
		}
		else
		{
			std::cout << "Ничья!";
		}
		i++;
	}
}


void massive() {
	srand(time(NULL));
	int numbers[5]{ 7, 6, -2, 4, -9 };

	//std::cout << "Элементы массива = " << numbers[rand() % 5] << " " << numbers[rand() % 5];

	//for (int i = 0; i < 5; i++) {
	//std::cout << "Элемент массива номер " << i+1 << " = " << numbers[i] << "\n";
	//}

	/*for (int i = 0; i < 5; i++) {
		if (numbers[i] < 0) {
			std::cout << "Отрицательное число под номером " << i+1 << " = " << numbers[i] << "\n";
		}
	}*/

	/*for (int i = 0; i < 5; i++) {
		if (numbers[i] < 0) {
			numbers[i] = numbers[i] * -1;
			std::cout << "Измененный на положительное значение элемент " << i+1 << " = " << numbers[i] << "\n";
		}
	}*/

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (numbers[j] < numbers[j + 1]){
				int x = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = x;
				}
		}
	}

	for (int i = 0; i < 5; i++) {

			std::cout << "Элемент массива номер " << i+1 << " = " << numbers[i] << "\n";

		}
	}

	int main() {
		srand(time(0));
		setlocale(LC_ALL, "Russian");

		//security();
		//randomnumber();
		//stringi();
		massive();
	}



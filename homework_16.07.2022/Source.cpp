#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	//Задача 1_простые числа
	int count;
	/*for (int i = 2; i <= 100; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				count++;}
		if (count <= 2) {
			std::cout << i << "\t";
		}
	}*/
	//Задача 2_степень числа

	unsigned int A,B,C;
	
	std::cout << "Введите число A\n";
	std::cin >> A;
	std::cout << "Введите число B\n";
	std::cin >> B;
	do {
		C = A * A; 
		{count = 0;
		for (int i = 1; i <= B; i++)
			count++;}} 
	while (count == B);
		std::cout << C << "\n";
	
	return 0;
}
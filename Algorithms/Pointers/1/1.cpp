#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1;
	int num2;
	int* pnum1;
	int* pnum2;

	std::cout << "Ââåäèòå çíà÷åíèå ïåðâîé ïåðåìåííîé" << std::endl;
	std::cin >> num1;

	pnum1 = &num1;

	std::cout << "Ââåäèòå çíà÷åíèå âòîðîé ïåðåìåííîé" << std::endl;
	std::cin >> num2;

	pnum2 = &num2;

	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;

	std::cout << "Ïîñëå çàìåíû çíà÷åíèå ïåðâîé ïåðåìåííîé ðàâíÿåòñÿ " << *pnum1 << std::endl;
	std::cout << "Ïîñëå çàìåíû çíà÷åíèå âòîðîé ïåðåìåííîé ðàâíÿåòñÿ " << *pnum2 << std::endl;

	return 0;
}
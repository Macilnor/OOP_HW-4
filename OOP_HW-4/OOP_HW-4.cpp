// OOP_HW-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ArrayInt.h"
#include <vector>
#include "Hand.h"

int main()
{
	ArrayInt arr;
	arr.push_back(5);
	arr.push_back(6);
	arr.push_front(1);
	arr.print();

	vector<int> v{ 1,2,1,1,3,3,3,4,5,4,6,6,6 };

	int count = 0;

	for (auto it = v.begin(); it != v.end(); ++it)
	{
		auto jt = v.begin();
		for (jt = it + 1; jt != v.end() && *jt != *it; ++jt);
		count += jt == v.end();
	}

	std::cout << "Unique elements " << count << std::endl;

	Hand hand;
	hand.Add(new Card(S_HEARTS, R_EIGHT, true));
	hand.Add(new Card(S_CLOVERS, R_JACK, true));
	cout << hand.GetTotal() << endl;
	hand.Add(new Card(S_PIKES, R_ACE, true));
	cout << hand.GetTotal() << endl;
	hand.Clear();
	hand.Add(new Card(S_PIKES, R_ACE, true));
	hand.Add(new Card(S_HEARTS, R_ACE, true));
	cout << hand.GetTotal() << endl;
	hand.Add(new Card(S_HEARTS, R_EIGHT, true));
	cout << hand.GetTotal() << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

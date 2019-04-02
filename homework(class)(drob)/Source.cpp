#include <iostream>
#include <fstream>
#include <clocale>
#include <Windows.h>
#include <ctime>
using namespace std;


//
//
//int main()
//{
//
//	return 0;
//}
//
//
//struct маркер
//{
//	цвет string color;
//	диаметр int diam;
//	длина
//		тип маркера
//		производитель
//
//		рисовать()
//		писать()
//		кинуть()
//		нюхать()
//		грызть()
//};
//
//маркер м;
//
//
//
////
//ООП
//Инкапсуляция
//Наследование
//Полиморфизм
//
//
//
//void sum(int a, int b);
//void sum(int a, int b, int c);
//
//
//
//
//
//
//
//struct ручка : наследоваться от маркер
//{
//	колпачок;
//};

class drob
{
private:
	int x;
	int y;
public:
	void setDrob() {
		cout << "Введите числитель\n";
		cin >> x;
		do {
			cout << "Введите знаменатель\n";
			cin >> y;
		} while (y == 0);
	}
	void setDrob(int a, int b) {
		x = a;
		if (b != 0)
			y = b;
		else
			y = 1;
	}
	//setters --модификаторы
	void setX(int a) {
		x = a;
	}
	void setY(int b)
	{
		if (b != 0)
			y = b;
		else
			y = 1;
	}
	//getters --инспекторы
	int getX() { return x; }
	int getY() { return y; }

	void printDrob() {
		cout << x << " / " << y << " = " << (double)x / y << endl;
	}
	void cut()
	{
		int remem;
		for (int i=1; i < 10; i++)
		{
			if (x%i == 0 && y%i == 0)
			{
				remem = i;
			}
			else if (x%y == 0)
			{

				remem = y;
			}
			else if (y%x == 0)
			{
				remem = x;
			}
		}
		x = x / remem;
		y = y / remem;
	}
};

void main() {
	setlocale(0, "");
	drob a;
	a.setDrob();
	a.printDrob();
	a.cut();
	a.printDrob();

	//a.setX();
	system("pause");
}
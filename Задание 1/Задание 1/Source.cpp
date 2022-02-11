#include <iostream>
#include <iomanip>

using namespace std;

enum class Tasks { task1, task2, task3, task4, task5, task6, task7 };

void task1() {
	int X = 3, Y = 12;
	cout << X + Y << "\t" << X - Y << "\t" << X * Y << endl;
	cout << endl;
}

void task2() {
	float X, Y;
	cin >> X >> Y;
	cout << (X + Y) / 2 << endl;
	cout << endl;
}

void task3() {
	int a = 4, b = 2;
	cout << "А) " << b << "+" << a << "=" << a + b << endl;
	cout << "Б) A(" << a << ")=B(" << b << ")" << endl;
	cout << "В) a = " << a << "; b = " << b << ";" << endl;
	cout << "Г) Ответ: (" << a << ";" << b << ")" << endl;
	cout << endl;
}

// Альтернативный вариант решения
/*
void task4() {
	float array[3][3];
	for (int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			cin >> array[i][j];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(7) << array[i][j];
		cout << endl;
	} cout << endl;
}

void task5() {
	cout << left;
	float array[3][3] = {{3.2, 1.2, 0}, {-1.23, 0.13, 1.01}, {-12.3, 0.013, 0.1}};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(7) << array[i][j];
		cout << endl;
	} cout << endl;
}
*/

void task4() {
	float a, b, c, d, e, f, g, h, i;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
	cout << setw(7) << a << setw(7) << b << setw(7) << c << endl;
	cout << setw(7) << d << setw(7) << e << setw(7) << f << endl;
	cout << setw(7) << g << setw(7) << h << setw(7) << i << endl;
	cout << endl;
}

void task5() {
	float a = 3.2, b = 1.2, c = 0, d = -1.23, e = 0.13, f = 1.01, g = -12.3, h = 0.013, i = 0.1;
	cout << left;
	cout << setw(7) << a << setw(7) << b << setw(7) << c << endl;
	cout << setw(7) << d << setw(7) << e << setw(7) << f << endl;
	cout << setw(7) << g << setw(7) << h << setw(7) << i << endl;
	cout << endl;
}

void task6() {
	cout << "Integer:\t" << sizeof(int) * 8 << endl;
	cout << "Float:\t\t" << sizeof(float) * 8 << endl;
	cout << "Boolean:\t" << sizeof(bool) * 8 << endl;
	cout << endl;
}

void task7() {
	float x = 172.36589012345678;
	cout << setprecision(6) << x << endl;
	cout << scientific << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << x << endl;
	cout << right << setw(10) << x << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int task;
	//while (true) {
	cout << "Введите номер задания: "; cin >> task; cout << endl;
	switch (task - 1) {
		case static_cast<int>(Tasks::task1): {task1(); break; }
		case static_cast<int>(Tasks::task2): {task2(); break; }
		case static_cast<int>(Tasks::task3): {task3(); break; }
		case static_cast<int>(Tasks::task4): {task4(); break; }
		case static_cast<int>(Tasks::task5): {task5(); break; }
		case static_cast<int>(Tasks::task6): {task6(); break; }
		case static_cast<int>(Tasks::task7): {task7(); break; }
		default: cout << "Ошибка: Неверный номер задания!\a";
	}
	cout << endl;
	//}
	return 0;
}
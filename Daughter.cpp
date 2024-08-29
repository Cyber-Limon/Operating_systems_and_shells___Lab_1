# include <iostream>

using namespace std;

int factorial(int n) {

	if (n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	int n;
	int res;

	cout << "Введите число ";
	cin >> n;
	res = factorial(n);
	if (res > 0) {
		cout << "Ответ " << res;
	}
	else {
		cout << "Ошибка ";
	}
}
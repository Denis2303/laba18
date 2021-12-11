#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int n;
	cout << "¬ведите размер массивов\n";
	cin >> n;
	int a[n] , b[n], c[n];
	cout << "¬ведите элементы первого массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
		c[i] = a[i];
	}
	cout << "¬ведите элементы второго массива\n";
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		a[i] = b[i];
		b[i] = c[i];
	}
	cout << "Ёлементы первого массива после преобразовани€:\n";
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << "\nЁлементы второго массива после преобразовани€:\n";
	for (int i = 0; i < n; i++){
		cout << b[i] << ' ';
	}
}

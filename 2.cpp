#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int n;
	cout << "¬ведите длину массива\n";
	cin >> n;
	double a[n];
	cout << "¬ведите элементы массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	double b[n];
	for (int i = 0; i < n; i++){
		double k = 0;
		for (int j = 0; j < i + 1; j++){
			k += a[j];
		}
		k /= i + 1;
		b[i] = k;
	}
	for (int i = 0; i < n; i++){
		cout << b[i] << ' ';
	}
}


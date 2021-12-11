#include <iostream>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите длину массива\n";
	cin >> n;
	int a[n];
	cout << "¬ведите элементы массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int i = n - 1;
	int d;
	while (i >= 0){
		if (a[i] % 2 != 0){
			d = a[i];
			break;
		}
		i -= 1;
	}
	for (int j = 0; j < n; j++){
		if (a[j] % 2 != 0){
			cout << a[j] + d << ' ';
		}
		else{
			cout << a[j] << ' ';
		}
	}
}

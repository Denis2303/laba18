#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите длину массива\n";
	cin >> n;
	vector <int> a;
	cout << "¬ведите элементы массива\n";
	for (int i = 0; i < n; i++){
		int el;
		cin >> el;
		a.push_back(el);
	}
	sort(a.begin(),a.end());
	cout << "”пор€доченный массив:\n";
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "������� ����� �������\n";
	cin >> n;
	vector <int> a;
	cout << "������� �������� �������\n";
	for (int i = 0; i < n; i++){
		int el;
		cin >> el;
		a.push_back(el);
	}
	sort(a.begin(),a.end());
	cout << "������������� ������:\n";
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
}

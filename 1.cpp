#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ������ ��������\n";
	cin >> n;
	int a[n] , b[n], c[n];
	cout << "������� �������� ������� �������\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
		c[i] = a[i];
	}
	cout << "������� �������� ������� �������\n";
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		a[i] = b[i];
		b[i] = c[i];
	}
	cout << "�������� ������� ������� ����� ��������������:\n";
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << "\n�������� ������� ������� ����� ��������������:\n";
	for (int i = 0; i < n; i++){
		cout << b[i] << ' ';
	}
}

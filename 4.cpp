#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите длину массива\n";
	cin >> n;
	cout << "¬ведите элементы массива\n";
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int maxi = 0, mini = 0;
	int maxe = a[0];
	int mine = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > maxe){
			maxi = i;
			maxe = a[i];
		}
		if (a[i] < mine){
			mini = i;
			mine = a[i];
		}
	}
	int j;
	int k;
	if (maxi > mini){
		j = mini + 1;
		k = maxi;
	}
	else {
		j = maxi + 1;
		k = mini;
	}
	for (int i  = j; i < k; i++){
		a[i] = 0;
	}
	cout << "»змененный массив:\n";
	for (int i = 0; i < n; i++){
		cout << a[i] <<' ';
	}
}

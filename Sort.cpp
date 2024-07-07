#include <iostream>
#include <ctime>
//#include <Windows.h>
#define MAX 100
using namespace std;

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void randomArr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;
	}cout << "DONE!" << endl;
}
void outputArr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}cout << endl;
}
void selectionSort(int a[], int n) {
	for (int j = 0; j < n - 1; j++) {
		cout << "Buoc " << j + 1 << " gan min_pos = " << j << endl;
		int min_pos = j;
		for (int i = j + 1; i < n; i++) {
			cout << "=So sanh a[" << i << "] voi a[" << min_pos << "] (min_pos) " << endl;
			cout << a[i] << " va " << a[min_pos] << endl;
			if (a[i] < a[min_pos]) {
				cout << "Ta co " << a[i] << " < " << a[min_pos] << " min_pos = " << i << endl;
				min_pos = i;
			}
		}
		cout << "=====> gia tri min la a[min_pos] = " << a[min_pos] << endl;
		cout << "SWAP " << a[j] << " voi " << a[min_pos] << endl;
		swap(a[j], a[min_pos]);
		cout << "===========SAU KHI SWAP============\n";
		outputArr(a, n);
	}
}

void interChangeSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}

void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		cout << "Gan phan tu can chen current = " << a[i] << endl;
		int current = a[i]; // phan tu can chen
		cout << "i = " << i << endl;
		cout << "Gan pos = i - 1 = " << i - 1 << endl;
		int pos = i - 1;
		//linear search
		while (pos >= 0 && a[pos] > current) {
			cout << "=Neu pos >= 0 (" << pos << ") va a[pos] = " << a[pos] << " > " << "current(" << current << ")\n";
			cout << "-Chuyen phan tu sang ben phai!\n";
			a[pos + 1] = a[pos]; // chuyen phan tu sang ben phai
			outputArr(a, n);
			pos--;
			cout << "pos - 1 = " << pos << endl;
			if (a[pos] <= current) {
				cout << "=Neu pos >= 0 (" << pos << ") va a[pos] = " << a[pos] << " < " << "current(" << current << ")\n";
				cout << "Ket thuc vong lap\n";
			}
		}
		cout << "a[pos + 1](" << a[pos + 1] << ") = current(" << current << ")\n";
		a[pos + 1] = current;
		cout << "===========SAU KHI HOAN THANH LAN LAP THU " << i << "==========" << endl;
		outputArr(a, n);
		//binary search
	}
}

//void checkFinish() {
//	if (true) {
//		cout << "Loading.";
//		for (int i = 0; i < 20; i++) {
//			Sleep(100);
//			cout << ".";
//		}cout << endl;
//		system("Color B");
//	}
//	else {
//		system("Color C");
//	}
//}

void bubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		cout << "==>Lan lap thu " << i + 1 << endl;
		for (int j = 0; j < n - i - 1; j++) {
			cout << "Neu a[j](" << a[j] << ") > a[j+1](" << a[j + 1] << ")\n";
			if (a[j] > a[j + 1]) {
				cout << "Swap a[j](" << a[j] << ") voi a[j+1](" << a[j + 1] << ")\n"; 
				swap(a[j], a[j + 1]);
			}
			cout << "==========SAU KHI SWAP==========\n";
			outputArr(a, n);
		}
	}
}
int main() {
	int a[] = { 40,70,20,60,90,10,50,30 };
	int n = sizeof(a) / sizeof(a[0]);
	outputArr(a, n);
	cout << "After Sort!!" << endl;
	//interChangeSort(a, n);
	//selectionSort(a, n);
	//insertionSort(a, n);
	bubbleSort(a, n);
	outputArr(a, n);
	return 1;
}
#pragma once
#include <iostream>
using namespace std;

void citire(int v[], int& n) {
	
	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {
	
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

void frecventa(int f[], int v[], int d) {


	for (int i = 0; i < d; i++) {

		f[v[i]]++;
	}
}

int sosete(int f[], int n) {

	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (f[i] >= 2) {
			ct = ct+f[i] / 2;
		}
	}
	return ct;
}

void numere(int v[], int n) {

	int f[1000]{};

	for (int i = 0; i < n; i++) {
		if (v[i] < 1000) {
			f[v[i]]++;
		}
	}
}

void Numere1(int v[], int n) {

	int f[1000]{}, ct = 0;

	numere(v, n);

	for (int i = 999; ct != 2; i--) {
		if (f[i] == 0) {
			cout << i << " ";
			ct++;
		}
	}

	if (ct < 2) {
		cout << "Nu exista" << endl;
	}
}

void frecventaCifre(int f[], int numar) {

	while (numar != 0) {
		f[numar % 10]++;
		numar = numar / 10;
	}
}

void Cifre4(int v[], int f[], int n) {

	for (int i = 0; i < n; i++) {
		frecventaCifre(f, v[i]);
	}

}

void afisareF(int f[], int n) {

	for (int i = 0; i < n; i++) {
		if (f[i] != 0) {
			cout << i << " ";
		}
	}
}

int max(int v[], int n) {

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

void ordine(int f[], int n) {

	for (int i = 0; i < 1000; i++) {
		if (f[i] != 0) {
			int ct = 0;
			while (f[i] - ct != 0) {
				cout << i << " ";
				ct++;
			}

		}
	}
}

bool prim(int v) {

	if (v == 0 || v == 1) {
		return false;
	}

	for (int i = 2; i < v; i++) {
		if (v % i == 0) {
			return false;
		}
	}
	return true;
}

void cifrFrecv(int v[], int n) {

	int primMax = 0;

	for (int i = 0; i < n; i++) {
		
		if (prim(v[i]) == true) {
			if (v[i] > primMax) {
				primMax = v[i];
			}
		}

	}
}

void maxim(int f[], int n) {

	for (int i = 0; i < n; i++) {
		if (f[i] == max(f, n)) {
			cout << i << " ";
		}
	}

}

int suma(int v) {

	int suma = 0;
	while (v != 0) {
		suma = suma + v % 10;
		v = v / 10;
	}
	return suma;
}

void sumaFi(int v[], int f[], int n) {
	for (int i = 0; i < n; i++) {
		f[suma(v[i])]++;
	}
}

void acSuma(int v[], int f[], int n) {

	sumaFi(v, f, n);

	int ct = 0;

	for (int i = 0; i < n; i++) {
		if (f[i] >= 2) {
			ct = ct + 2;
		}
	}

	cout << ct;
}

int cubNr(int v) {

	int cub = 0;
	while (v != 0) {

		cub = cub + pow(v % 10, 3);
		v = v / 10;
	}
	return cub;
}

void cubVector(int v[], int n) {

	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + cubNr(v[i]);
	}
	cout << suma;
}

int patratNr(int v) {

	int patrat = 0;
	while (v != 0) {

		patrat = patrat + pow(v % 10, 2);
		v = v / 10;
	}
	return patrat;
}

void patratVector(int v[], int n) {

	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + patratNr(v[i]);
	}
	cout << suma;
}

int nrCifr(int v) {
	
	int ct = 0;
	while (v != 0) {
		v = v / 10;
		ct++;
	}
	return ct;
}

void cifre(int v[], int n) {

	int f[1000]{};
	for (int i = 0; i < n; i++) {
		f[nrCifr(v[i])]++;
	}
	
}

void cifrIdentic(int v[], int f[], int n) {

	cifre(v, n);
	int ct = 0;
	for (int i = 0; i < n; i++) {
		if (f[i] >= 2) {
			ct = ct + 2;
		}
	}

	cout << ct;
}

int nrParMic(int v[], int f[], int n) {

	for (int i = 9; i < 100; i++) {
		if (f[i] == 0 && v[i] % 2 == 0) {
			return i;
		}
	}
}

int nrParMare(int v[], int f[], int n) {

	for (int i = 98; i >= 10; i--) {
		if (f[i] == 0 && v[i] % 2 == 0) {
			return i;
		}
	}
}

void afisareCt2(int f[], int n) {

	int ct = 0;
	for (int i = 999; ct != 2; i--) {
		if (f[i] == 0) {
			cout << i << " ";
			ct++;
		}
	}
}
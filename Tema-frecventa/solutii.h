#pragma once
#include <iostream>
using namespace std;
#include "functii.h"


//Dându-se un șir de numere naturale, să se determine câte dintre ele apar o singură dată.
void pb1() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	for (int i = 0; i < n; i++) {
		if (f[i] == 1) {
			cout << i << " ";
		}
	}
}

//Se dau n numere numere naturale cu cel mult două cifre fiecare. Să se determine acele numere care apar o singură dată.
void pb2() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	afisare(f, n);
}

//Andrei lucrează într-un magazin de șosete, iar fiecare șosetă are asociat un numar întreg pentru a o identifica mai ușor din ce model face parte.
// Dându-se un vector neordonat de astfel de coduri, aflați câte perechi de șosete se pot forma.
void pb3() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	int ct = sosete(f, n);
	cout << ct;
}

//Se dau n numere naturale. Determinaţi cele mai mari două numere cu trei cifre care nu apar printre numerele date.
void pb4() {

	int v[9999], n;
	citire(v, n);
	Numere1(v, n);
}

//Se dau n numere naturale. Afișați cifrele care apar în scrierea zecimală a acestor numere, în ordinea crescătoare a numărului de apariții.
void pb5() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	Cifre4(v, f, n);
	afisareF(f, n);

}

//Se dau mai multe numere naturale formate din exact o cifră. Determinaţi cifrele cu număr maxim de apariţii.
void pb6() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);

	for (int i = 0; i < n; i++) {
		if (f[i] == max(f, n)) {
			cout << i << " ";
		}
	}
}

////Se dau n cifre zecimale. Să se afişeze aceste cifre în ordine crescătoare.
void pb8() {

	int v[1000];

	int f[10000]{};
	int n;
	citire(v, n);
	frecventa(f, v, n);
	ordine(f, n);
}

//Se dă un șir de numere naturale. Să se determine câte dintre ele apar o singură dată.
void pb9() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	afisareF(f, n);
}

//Să se scrie un program care citeşte cel mult 1.000.000 de numere naturale din intervalul închis [0,9] şi determină cel mai mare număr prim citit
// şi numărul său de apariţii.
void pb10() {

	int v[100], n;
	citire(v, n);
	cifrFrecv(v, n);
}

//Se dau mai multe numere naturale cu cel mult 9 cifre fiecare. Să se determine cele mai mari două numere de 3 cifre care nu se găsesc printre 
//numerele date.
void pb11() {
	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	int ct = 0;
	for (int i = 999; ct != 2; i--) {
		if (f[i] == 0) {
			cout << i << " ";
			ct++;
		}
	}
}

//Se dau mai multe numere naturale formate din exact o cifră. Determinaţi cifrele cu număr maxim de apariţii.
void pb13() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	maxim(f, n);
}

//Se dau mai multe numere naturale, fiecare cu cel mult 9 cifre.Să se afişeze, în ordine descrescătoare, toate cifrele care apar în numerele date.
void pb14() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	acSuma(v, f, n);
}

//Fiind dat un şir cu n elemente numere naturale, să se calculeze suma cuburilor cifrelor tuturor numerelor din şir.
void pb15() {
	
	int v[1000], n;
	citire(v, n);
	cubVector(v, n);
}

//Fiind dat un şir cu n elemente numere naturale, să se calculeze suma pătratelor cifrelor tuturor numerelor din şir.
void pb16() {

	int v[1000], n;
	citire(v, n);
	patratVector(v, n);
}

//Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector au același număr de cifre.
void pb17() {

	int v[1000], n;
	int f[1000]{};
	citire(v, n);
	cifrIdentic(v, f, n);
}

//Să se afișeze cel mai mic număr par cu două cifre care NU face parte din şir.
void pb18() {

	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(v, f, n);
	cout << nrParMic(v, f, n);
}

//Să se afișeze cel mai mare număr par cu două cifre care NU fac parte din şir.
void pb19() {
	
	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(v, f, n);

	cout << nrParMare(v, f, n);
}

//Se dau mai multe numere naturale cu cel mult 9 cifre fiecare. Să se determine cele mai mari două numere de 3 cifre care nu se găsesc printre 
//numerele date.
void pb20() {
	int v[1000], n;
	citire(v, n);
	int f[1000]{};
	frecventa(f, v, n);
	afisareCt2(f, n);
}
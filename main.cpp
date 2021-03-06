#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	Point point(3,3);
	Point p(1, 2);
	point.przesun(2, 6);
	point.wypisz();
	cout << endl;
	point.przesun(p);
	point.wypisz();
	cout << endl;
	point.odbij(p);
	point.wypisz();

	return 0;
}
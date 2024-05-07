#include "Polynomial.h"

void main() {
	Polynomial a, b, c, d;
	a.read();
	b.read();
	c.read();
	d.add(b, c);

	a.display();
	b.display("B = ");
	c.display("C = ");
	d.display("B+C = ");
}
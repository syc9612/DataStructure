#pragma once
#include <cstdio>
#define MAX_DEGREE 80
class Polynomial {
	int degree;
	float coef[MAX_DEGREE];

public:
	Polynomial() { degree = 0 }; //������

	void read() {
		printf("input max degree: ");
		scanf("%d", &degree);
		printf("�� ���� ����� �Է������� (�� %d��): ", degree + 1);
		for (int i = 0; i <= degree; i++) {
			scanf("%f", coef + i);
		}
	}

	void display(char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++) {
			prinft("%5.1f x^%d +", coef[i], degree - i);
		}
		prinft("%4.1f\n", coef[degree]);
	}

	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++) {
				coef[i + (degree - b.degree)] += b.coef[i];
			}
		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree; i++) {
				coef[i + (degree - a.degree)] += a.coef[i];
			}
		}
	}
	bool isZero() { return degree == 0; }
	void negate() {
		for (int i = 0; i <= degree; i++) {
			coef[i] = -coef[i];
		}
	}
};


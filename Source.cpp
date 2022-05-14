#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

Matrix::Matrix()
{
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			values[i][j] = 0;
}

Matrix::Matrix(int x) {
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			values[i][j] = x;
}

bool Matrix::Is_Simmetric() {
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			if (values[i][j] != values[j][i])
				return false;
	return true;
}



std::ostream& operator << (std::ostream& out, Matrix& a) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			out << std::setw(std::cout.precision() * 2 + 1);
			out << a.values[i][j] << "\t";
		}
		out << endl;
	}
	return out;
}

std::istream& operator >> (std::istream& in, Matrix& a) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) 
		in >> a.values[i][j];
	}
	return in;
}

void Matrix::print() const {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j)
			cout << values[i][j] << ' ';
		cout << std::endl;
	}
}

Matrix Matrix::operator* (int x) {
	Matrix tmp(*this);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			tmp.values[i][j] = tmp.values[i][j] * x;
	}
	return tmp;
}

Matrix Matrix::operator + (const Matrix& B) {
	Matrix tmp(*this);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			tmp.values[i][j] += B.values[i][j];
	}
	return tmp;
}


bool Matrix::operator == (Matrix& F) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (F.values[i][j] != (*this).values[i][j]) {
				return false;
			}
		}
	}
	return true;
}
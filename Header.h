#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
//������� ����� ��� ������ � ��������� 3�3.�������  �������� � ����������� �������.
//
//������ ������ :
//
//����������� �� ��������� � ����������� � �����������;
//������ �������� ������� �� ��������������.
//
//
//����������� �������� :
//
//���� �������� �������;
//����� ������� � ������� �������;
//��������� ���� ������ �� ���������;
//��������� ������� �� �����;
//�������� ���� ������

class Matrix {
private:
	int values[3][3];
public:
	Matrix();
	Matrix(int x);
	bool Is_Simmetric();
	void print() const;
	friend ostream& operator << (std::ostream& out, Matrix&a);
	friend istream& operator >> (istream& in, Matrix& a);
	Matrix operator* (int x);
	Matrix operator + (const Matrix& B);
	bool operator == (Matrix& F);
};

ostream& operator << (std::ostream& out, Matrix& a);
istream& operator >> (istream& in, Matrix& a);




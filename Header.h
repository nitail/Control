#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
//Описать класс для работы с матрицами 3х3.Матрица  хранится в статическом массиве.
//
//Методы класса :
//
//конструктор по умолчанию и конструктор с параметрами;
//методы проверки матрицы на симметричность.
//
//
//Перегрузить операции :
//
//ввод значений матрицы;
//вывод матрицы в формате таблицы;
//сравнение двух матриц на равенство;
//умножения матрицы на число;
//сложение двух матриц

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




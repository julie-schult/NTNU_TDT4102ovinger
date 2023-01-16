#include "Fibonacci.h"
#include "Matrix.h"
#include "Dummy.h"

Matrix::Matrix()
{
	matrix = nullptr;
	rows = 0, columns = 0;
}
Matrix::Matrix(const int nRows, const int nColumns){
    rows=nRows;
    columns=nColumns;
    matrix=new double*[rows];
    for (int i=0;i<rows;++i){
        matrix[i]=new double[columns];
        for (int j=0;j<columns;++j){
            matrix[i][j]=0;
        }
    }
}
Matrix::Matrix(int nRows){
    for (int i = 0; i < nRows; i++){
		matrix[i][i] = 1;
	}
}

Matrix::~Matrix(){
    for (int i=0;i<rows;++i){
        delete [] matrix[i];
        matrix[i]=nullptr;
    }
    delete [] matrix;
    matrix=nullptr;
}

double Matrix::get(int row, int col) const{
    return matrix[row][columns];
}

void Matrix::set(int row, int col, double value){
    matrix[row][col] = value;
}

bool Matrix::isValid() const{
    if (matrix == nullptr || rows * columns == 0){
		return false;}
	return true;
}
ostream & operator<<(ostream & os, const Matrix & m){
    int rows=m.getRows();
    int columns=m.getColumns();
    for (int i=0;i<rows;++i){
        for (int j=0;j<columns;++j){
            os<<m.get(i,j)<<" ";
        }
        os<<endl;
    }
    return os;
}
Matrix::Matrix(const Matrix & rhs): matrix{nullptr}{
    this->rows = rhs.rows; //kopierer radene
	this->columns = rhs.columns; //kopierer kolonnene
	this->matrix = new double*[rhs.rows] {}; //liste av pekere
	for (int i = 0; i < this->rows; ++i){
		matrix[i] = new double[this->columns] {0}; //mengde av minne
		for (int j = 0; j < this->columns; j++){
			this->matrix[i][j] = rhs.matrix[i][j]; //kopierer verdier
		}
	}
}

Matrix &Matrix::operator=(Matrix rhs) {
    swap(rows, rhs.rows);
	swap(columns, rhs.columns);
	swap(matrix, rhs.matrix);
	return *this;
}

Matrix & Matrix::operator+=(const Matrix & rhs){
	if (this->isValid() && rhs.isValid() && this->rows == rhs.rows && this->columns == rhs.columns){
		for (int i = 0; i < rows; i++){
			for (int j = 0; j < columns; j++){
				this->matrix[i][j] += rhs.get(i, j);
			}
		}
		return *this;
	}
	this->matrix = nullptr;
	return *this;
}

Matrix operator+(Matrix lhs, const Matrix & rhs){
	lhs += rhs; 
	return lhs;
}
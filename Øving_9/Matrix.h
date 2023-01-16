
class Matrix{
    private:
        double **matrix;
        int rows, columns;
    public:
        Matrix();
        Matrix(const int nRows, const int nColumns);
        explicit Matrix(int nRows) : Matrix(nRows, nRows) {}; //identitetsmatrise
        ~Matrix(); //destructor


    double get(int row, int col) const;
    void set(int row, int col, double value);  

    int getRows() const {return rows;}; 
    int getColumns() const {return columns;};

    bool isValid() const;

    friend ostream& operator<<(ostream& os, const Matrix& m);


    Matrix(const Matrix & rhs);
    Matrix &operator=(Matrix rhs);

    Matrix &operator+=(const Matrix & rhs);
    friend Matrix operator+(Matrix lhs, const Matrix & rhs);
    //Matrix &operator-();
    //Matrix &operator-=();
    //Matrix &operator*();
    //Matrix &operator*=();
};
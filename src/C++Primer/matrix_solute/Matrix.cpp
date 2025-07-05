#include "matrix_solute/Matrix.h" 


void Matrix::calculate() {
    printMatrix();
    for (int curRow = 0; curRow < row_; ++curRow){
        double firstValue = (*vvd_)[curRow][curRow];
        for (int i = curRow; i < col_; ++i) {
            (*vvd_)[curRow][i] /= firstValue;
        }
        (*rhs_)[curRow] /= firstValue;

        for (int i = curRow + 1; i < row_; ++i){
            double tempFirstVal = (*vvd_)[i][curRow];
            for (int j = curRow; j < col_; ++j) {
                (*vvd_)[i][j] -= (tempFirstVal * (*vvd_)[curRow][j]);
            }            
            (*rhs_)[i] -= (tempFirstVal * (*rhs_)[curRow]);
        }
        printMatrix();
    }

    for (int curRow = row_ - 1; curRow >= 0; --curRow) {
        double tempSolution = (*rhs_)[curRow];
        for (int j = curRow + 1; j < col_; ++j) {
            tempSolution -= (*vvd_)[curRow][j] * solution_[j];
        }
        solution_[curRow] = tempSolution;
    }
    printSolution();
}

void Matrix::printMatrix() {
    cout << "=================================" << endl;
    for (int i = 0; i < row_; ++i) {
        for (int j = 0; j < col_; ++j){
            cout << (*vvd_)[i][j] << " ";
        }
        cout << " | " << (*rhs_)[i] << endl;
    }
}

void Matrix::printSolution() {
    cout << "=================================" << endl;
    cout << "Solution: " << endl;
    for (int i = 0; i < row_; ++i) {
        cout << "x" << i << " = " << solution_[i] << ", ";
    }
    cout << endl;
}
#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Matrix{
public:
    Matrix(vector<vector <double>> *vvd, vector<double> *rhs): vvd_(vvd), rhs_(rhs) {
        row_ = vvd_->size();
        col_ = rhs_->size();
        solution_.assign(rhs_->size(), 0);
        for (int i = 0; i < rhs_->size(); ++i) {
            rowMapping_.push_back(i);
        }
    }

    void calculate();
    vector<double> getSolution() {return solution_;}
    void printMatrix();
    void printSolution();

private:
    int row_;
    int col_;
    vector<vector <double>> *vvd_;
    vector<double> *rhs_;
    vector<int> rowMapping_;
    vector<double> solution_;
};
#include "matrix_solute/Matrix.h"

void include_main(){
    vector<vector <double>> vvd = {{-0.001, 6}, {2.5, 5}};
    vector<double> rhs = {6.001, 2.5};
    Matrix m(&vvd, &rhs);
    m.calculate();
}
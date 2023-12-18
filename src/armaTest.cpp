#include <iostream>
#include "RcppArmadillo.h"

// [[Rcpp::plugins(cpp11)]]
// [[Rcpp::depends(RcppArmadillo)]]

using namespace std;
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
void arma_test()
{
  mat A = randu<mat>(5,5)*10;
  A.print("A = \n");
  rowvec B = A.row(1);
  B.print("B = \n");
  arma::vec C(5);
  C.print("C = \n");
  C.t().print("C.t = \n");
  // mat D = arma::join_cols(A,C);
  // int A_rows = A.n_rows;
  cout << A.n_rows << "\n" << A.n_cols << endl;
  cout << C.n_rows << "\n" << C.n_cols << endl;
  mat D = arma::join_rows(A,C);
  D.print("D = \n");
}



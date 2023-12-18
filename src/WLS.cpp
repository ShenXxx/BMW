#include <iostream>
#include <RcppArmadillo.h>
// #include "mvp_omp.h"
// #include <bigmemory/MatrixAccessor.hpp>
// #include <bigmemory/BigMatrix.h>


// [[Rcpp::plugins(cpp11)]]
// [[Rcpp::depends(bigmemory, BH)]]
// [[Rcpp::depends(RcppArmadillo)]]

using namespace std;
using namespace Rcpp;
using namespace arma;


// template <typename T>
Rcpp::List glm_wls_c(const arma::vec &y, const arma::mat &X, const arma::mat &geno, const arma::vec &weights){

  // omp_setup(threads);

  // MatrixAccessor<T> genomat = MatrixAccessor<T>(*pMat);
  // int ind = pMat->ncol();
  // int mkr = pMat->nrow();
  int ind = geno.n_rows;
  int mkr = geno.n_cols;
  int q0 = X.n_cols;

  int y_len = y.n_elem;
  if(y_len != ind)
    throw Rcpp::exception("number of individuals not match.!");

  arma::vec snp(ind);

  arma::mat W = arma::diagmat(weights);
  // #pragma omp parallel for schedule(dynamic) firstprivate(snp)
  // for(int i = 0; i < mkr; i++)
  // {
  //   for(int j = 0; j < ind; j++)
  //   {
  //     snp[j] = genomat[j][i];
  //   }
    
  //   arma::mat XZ = arma::join_rows(X,snp);
  // }
  cout << y.head_rows(5) << endl;

}

// [[Rcpp::export]]
// SEXP glm_wls_c(const arma::vec &y, const arma::mat &X, SEXP pBigMat, const arma::vec &weights, const int threads = 0){

// 	XPtr<BigMatrix> xpMat(pBigMat);

// 	switch(xpMat->matrix_type()){
// 	case 1:
// 		return glm_wls_c<char>(y, X, xpMat, weights, threads);
// 	case 2:
// 		return glm_wls_c<short>(y, X, xpMat, weights, threads);
// 	case 4:
// 		return glm_wls_c<int>(y, X, xpMat, weights, threads);
// 	case 8:
// 		return glm_wls_c<double>(y, X, xpMat, weights, threads);
// 	default:
// 		throw Rcpp::exception("unknown type detected for big.matrix object!");
// 	}
// }




































/*** R
timesTwo(42)
*/

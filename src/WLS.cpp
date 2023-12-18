#include <iostream>
#include "/Users/shenxiong/Desktop/RcppTest/include/RcppArmadillo.h"
#include "/Users/shenxiong/Desktop/RcppTest/include/mvp_omp.h"

// [[Rcpp::depends(RcppArmadillo)]]

using namespace std;
using namespace Rcpp;
using namespace arma;

//[[Rcpp::export]]
// template <typename T>
Rcpp::List glm_wls_c(const arma::vec &y, const arma::mat &X, const arma::mat &geno, const arma::vec &weights){


  int ind = geno.n_rows;
  int mkr = geno.n_cols;
  int q0 = X.n_cols;

  int y_len = y.n_elem;
  if(y_len != ind)
    throw Rcpp::exception("number of individuals not match.!");

  arma::vec snp(ind);

  arma::mat W = arma::diagmat(weights);

  vec yhead = y.head_rows(5);
  cout << yhead << endl;
  return Rcpp::List::create(Rcpp::Named("y") = yhead);
}






































/*** R
timesTwo(42)
*/

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// glm_wls_c
SEXP glm_wls_c(const arma::vec& y, const arma::mat& X, SEXP pBigMat, const arma::vec& weights, const int threads);
RcppExport SEXP _RcppTest_glm_wls_c(SEXP ySEXP, SEXP XSEXP, SEXP pBigMatSEXP, SEXP weightsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(glm_wls_c(y, X, pBigMat, weights, threads));
    return rcpp_result_gen;
END_RCPP
}
// arma_test
void arma_test();
RcppExport SEXP _RcppTest_arma_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    arma_test();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppTest_glm_wls_c", (DL_FUNC) &_RcppTest_glm_wls_c, 5},
    {"_RcppTest_arma_test", (DL_FUNC) &_RcppTest_arma_test, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_qr_scan_array
List rcpp_qr_scan_array(RawVector grayarray, int w, int h, bool debug);
RcppExport SEXP _quadrangle_rcpp_qr_scan_array(SEXP grayarraySEXP, SEXP wSEXP, SEXP hSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type grayarray(grayarraySEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_qr_scan_array(grayarray, w, h, debug));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_quadrangle_rcpp_qr_scan_array", (DL_FUNC) &_quadrangle_rcpp_qr_scan_array, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_quadrangle(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

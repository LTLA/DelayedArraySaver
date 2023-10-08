// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_best_type_double
std::string get_best_type_double(Rcpp::NumericVector values);
RcppExport SEXP _chihaya_get_best_type_double(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_best_type_double(values));
    return rcpp_result_gen;
END_RCPP
}
// get_best_type_int
std::string get_best_type_int(Rcpp::IntegerVector values);
RcppExport SEXP _chihaya_get_best_type_int(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_best_type_int(values));
    return rcpp_result_gen;
END_RCPP
}
// h5exists
bool h5exists(std::string path, std::string host, std::string name);
RcppExport SEXP _chihaya_h5exists(SEXP pathSEXP, SEXP hostSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(h5exists(path, host, name));
    return rcpp_result_gen;
END_RCPP
}
// validate_
SEXP validate_(std::string path, std::string name);
RcppExport SEXP _chihaya_validate_(SEXP pathSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_(path, name));
    return rcpp_result_gen;
END_RCPP
}
// write_integer_scalar
SEXP write_integer_scalar(std::string path, std::string host, std::string name, int val);
RcppExport SEXP _chihaya_write_integer_scalar(SEXP pathSEXP, SEXP hostSEXP, SEXP nameSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(write_integer_scalar(path, host, name, val));
    return rcpp_result_gen;
END_RCPP
}
// write_double_scalar
SEXP write_double_scalar(std::string path, std::string host, std::string name, double val);
RcppExport SEXP _chihaya_write_double_scalar(SEXP pathSEXP, SEXP hostSEXP, SEXP nameSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(write_double_scalar(path, host, name, val));
    return rcpp_result_gen;
END_RCPP
}
// write_string_scalar
SEXP write_string_scalar(std::string path, std::string host, std::string name, std::string val);
RcppExport SEXP _chihaya_write_string_scalar(SEXP pathSEXP, SEXP hostSEXP, SEXP nameSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(write_string_scalar(path, host, name, val));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_chihaya_get_best_type_double", (DL_FUNC) &_chihaya_get_best_type_double, 1},
    {"_chihaya_get_best_type_int", (DL_FUNC) &_chihaya_get_best_type_int, 1},
    {"_chihaya_h5exists", (DL_FUNC) &_chihaya_h5exists, 3},
    {"_chihaya_validate_", (DL_FUNC) &_chihaya_validate_, 2},
    {"_chihaya_write_integer_scalar", (DL_FUNC) &_chihaya_write_integer_scalar, 4},
    {"_chihaya_write_double_scalar", (DL_FUNC) &_chihaya_write_double_scalar, 4},
    {"_chihaya_write_string_scalar", (DL_FUNC) &_chihaya_write_string_scalar, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_chihaya(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

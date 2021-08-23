// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// create_edges_matrix_custom
IntegerMatrix create_edges_matrix_custom(List cliques);
RcppExport SEXP _FasterCliquePercolation_create_edges_matrix_custom(SEXP cliquesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type cliques(cliquesSEXP);
    rcpp_result_gen = Rcpp::wrap(create_edges_matrix_custom(cliques));
    return rcpp_result_gen;
END_RCPP
}
// create_edges_matrix_intersect
IntegerMatrix create_edges_matrix_intersect(List cliques);
RcppExport SEXP _FasterCliquePercolation_create_edges_matrix_intersect(SEXP cliquesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type cliques(cliquesSEXP);
    rcpp_result_gen = Rcpp::wrap(create_edges_matrix_intersect(cliques));
    return rcpp_result_gen;
END_RCPP
}
// create_edges_matrix_setdiff
IntegerMatrix create_edges_matrix_setdiff(List cliques);
RcppExport SEXP _FasterCliquePercolation_create_edges_matrix_setdiff(SEXP cliquesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type cliques(cliquesSEXP);
    rcpp_result_gen = Rcpp::wrap(create_edges_matrix_setdiff(cliques));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _FasterCliquePercolation_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FasterCliquePercolation_create_edges_matrix_custom", (DL_FUNC) &_FasterCliquePercolation_create_edges_matrix_custom, 1},
    {"_FasterCliquePercolation_create_edges_matrix_intersect", (DL_FUNC) &_FasterCliquePercolation_create_edges_matrix_intersect, 1},
    {"_FasterCliquePercolation_create_edges_matrix_setdiff", (DL_FUNC) &_FasterCliquePercolation_create_edges_matrix_setdiff, 1},
    {"_FasterCliquePercolation_rcpp_hello_world", (DL_FUNC) &_FasterCliquePercolation_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_FasterCliquePercolation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

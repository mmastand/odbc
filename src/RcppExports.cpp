// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "odbconnect_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// connect
connection_ptr connect(std::string connection_string);
RcppExport SEXP odbconnect_connect(SEXP connection_stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type connection_string(connection_stringSEXP);
    __result = Rcpp::wrap(connect(connection_string));
    return __result;
END_RCPP
}
// connect_info
std::string connect_info(connection_ptr p);
RcppExport SEXP odbconnect_connect_info(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    __result = Rcpp::wrap(connect_info(p));
    return __result;
END_RCPP
}
// connection_release
void connection_release(connection_ptr p);
RcppExport SEXP odbconnect_connection_release(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    connection_release(p);
    return R_NilValue;
END_RCPP
}
// connection_valid
bool connection_valid(connection_ptr p);
RcppExport SEXP odbconnect_connection_valid(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    __result = Rcpp::wrap(connection_valid(p));
    return __result;
END_RCPP
}
// connection_sql_tables
Rcpp::RObject connection_sql_tables(connection_ptr p, std::string catalog_name, std::string schema_name, std::string table_name, std::string table_type);
RcppExport SEXP odbconnect_connection_sql_tables(SEXP pSEXP, SEXP catalog_nameSEXP, SEXP schema_nameSEXP, SEXP table_nameSEXP, SEXP table_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::string >::type catalog_name(catalog_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type schema_name(schema_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type table_name(table_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type table_type(table_typeSEXP);
    __result = Rcpp::wrap(connection_sql_tables(p, catalog_name, schema_name, table_name, table_type));
    return __result;
END_RCPP
}
// connection_sql_columns
Rcpp::RObject connection_sql_columns(connection_ptr p, std::string catalog_name, std::string schema_name, std::string table_name, std::string table_type);
RcppExport SEXP odbconnect_connection_sql_columns(SEXP pSEXP, SEXP catalog_nameSEXP, SEXP schema_nameSEXP, SEXP table_nameSEXP, SEXP table_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::string >::type catalog_name(catalog_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type schema_name(schema_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type table_name(table_nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type table_type(table_typeSEXP);
    __result = Rcpp::wrap(connection_sql_columns(p, catalog_name, schema_name, table_name, table_type));
    return __result;
END_RCPP
}
// result_release
void result_release(cursor_ptr c);
RcppExport SEXP odbconnect_result_release(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    result_release(c);
    return R_NilValue;
END_RCPP
}
// result_active
bool result_active(cursor_ptr c);
RcppExport SEXP odbconnect_result_active(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    __result = Rcpp::wrap(result_active(c));
    return __result;
END_RCPP
}
// result_completed
bool result_completed(cursor_ptr c);
RcppExport SEXP odbconnect_result_completed(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    __result = Rcpp::wrap(result_completed(c));
    return __result;
END_RCPP
}
// query
cursor_ptr query(connection_ptr p, std::string sql, std::size_t size);
RcppExport SEXP odbconnect_query(SEXP pSEXP, SEXP sqlSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type size(sizeSEXP);
    __result = Rcpp::wrap(query(p, sql, size));
    return __result;
END_RCPP
}
// result_fetch
List result_fetch(cursor_ptr c, int n);
RcppExport SEXP odbconnect_result_fetch(SEXP cSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(result_fetch(c, n));
    return __result;
END_RCPP
}
// column_info
void column_info(cursor_ptr c);
RcppExport SEXP odbconnect_column_info(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    column_info(c);
    return R_NilValue;
END_RCPP
}
// result_bind
void result_bind(cursor_ptr c, List params);
RcppExport SEXP odbconnect_result_bind(SEXP cSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    result_bind(c, params);
    return R_NilValue;
END_RCPP
}
// result_execute
void result_execute(cursor_ptr c);
RcppExport SEXP odbconnect_result_execute(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    result_execute(c);
    return R_NilValue;
END_RCPP
}
// result_insert_dataframe
void result_insert_dataframe(cursor_ptr c, DataFrame df);
RcppExport SEXP odbconnect_result_insert_dataframe(SEXP cSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    result_insert_dataframe(c, df);
    return R_NilValue;
END_RCPP
}
// result_row_count
long result_row_count(cursor_ptr c);
RcppExport SEXP odbconnect_result_row_count(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    __result = Rcpp::wrap(result_row_count(c));
    return __result;
END_RCPP
}
// column_types
void column_types(DataFrame df);
RcppExport SEXP odbconnect_column_types(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    column_types(df);
    return R_NilValue;
END_RCPP
}

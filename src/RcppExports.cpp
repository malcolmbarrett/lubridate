// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_update_dt
Rcpp::newDatetimeVector C_update_dt(const Rcpp::NumericVector& dt, const Rcpp::IntegerVector& year, const Rcpp::IntegerVector& month, const Rcpp::IntegerVector& yday, const Rcpp::IntegerVector& mday, const Rcpp::IntegerVector& wday, const Rcpp::IntegerVector& hour, const Rcpp::IntegerVector& minute, const Rcpp::NumericVector& second, const SEXP tz, const bool roll, const int week_start);
RcppExport SEXP _lubridate_C_update_dt(SEXP dtSEXP, SEXP yearSEXP, SEXP monthSEXP, SEXP ydaySEXP, SEXP mdaySEXP, SEXP wdaySEXP, SEXP hourSEXP, SEXP minuteSEXP, SEXP secondSEXP, SEXP tzSEXP, SEXP rollSEXP, SEXP week_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type year(yearSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type month(monthSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type yday(ydaySEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type mday(mdaySEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type wday(wdaySEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type minute(minuteSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type second(secondSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type tz(tzSEXP);
    Rcpp::traits::input_parameter< const bool >::type roll(rollSEXP);
    Rcpp::traits::input_parameter< const int >::type week_start(week_startSEXP);
    rcpp_result_gen = Rcpp::wrap(C_update_dt(dt, year, month, yday, mday, wday, hour, minute, second, tz, roll, week_start));
    return rcpp_result_gen;
END_RCPP
}
// C_force_tz
Rcpp::newDatetimeVector C_force_tz(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tz, const bool roll);
RcppExport SEXP _lubridate_C_force_tz(SEXP dtSEXP, SEXP tzSEXP, SEXP rollSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type tz(tzSEXP);
    Rcpp::traits::input_parameter< const bool >::type roll(rollSEXP);
    rcpp_result_gen = Rcpp::wrap(C_force_tz(dt, tz, roll));
    return rcpp_result_gen;
END_RCPP
}
// C_force_tzs
Rcpp::newDatetimeVector C_force_tzs(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tzs, const Rcpp::CharacterVector tz_out, const bool roll);
RcppExport SEXP _lubridate_C_force_tzs(SEXP dtSEXP, SEXP tzsSEXP, SEXP tz_outSEXP, SEXP rollSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type tzs(tzsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type tz_out(tz_outSEXP);
    Rcpp::traits::input_parameter< const bool >::type roll(rollSEXP);
    rcpp_result_gen = Rcpp::wrap(C_force_tzs(dt, tzs, tz_out, roll));
    return rcpp_result_gen;
END_RCPP
}
// C_local_time
Rcpp::NumericVector C_local_time(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tzs);
RcppExport SEXP _lubridate_C_local_time(SEXP dtSEXP, SEXP tzsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type tzs(tzsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_local_time(dt, tzs));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP C_make_d(SEXP, SEXP, SEXP);
RcppExport SEXP C_parse_dt(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP C_parse_hms(SEXP, SEXP);
RcppExport SEXP C_parse_period(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_lubridate_C_update_dt", (DL_FUNC) &_lubridate_C_update_dt, 12},
    {"_lubridate_C_force_tz", (DL_FUNC) &_lubridate_C_force_tz, 3},
    {"_lubridate_C_force_tzs", (DL_FUNC) &_lubridate_C_force_tzs, 4},
    {"_lubridate_C_local_time", (DL_FUNC) &_lubridate_C_local_time, 2},
    {"C_make_d",                (DL_FUNC) &C_make_d,                 3},
    {"C_parse_dt",              (DL_FUNC) &C_parse_dt,               5},
    {"C_parse_hms",             (DL_FUNC) &C_parse_hms,              2},
    {"C_parse_period",          (DL_FUNC) &C_parse_period,           1},
    {NULL, NULL, 0}
};

RcppExport void R_init_lubridate(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

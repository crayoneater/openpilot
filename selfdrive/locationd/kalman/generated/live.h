/******************************************************************************
 *                       Code generated with sympy 1.4                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_4488913698515846581);
void inv_err_fun(double *nom_x, double *true_x, double *out_3726875532918826483);
void H_mod_fun(double *state, double *out_8158238651806327204);
void f_fun(double *state, double dt, double *out_7595135190949565097);
void F_fun(double *state, double dt, double *out_3828390459954008134);
void h_3(double *state, double *unused, double *out_2510179481097398809);
void H_3(double *state, double *unused, double *out_8856876329499797921);
void h_4(double *state, double *unused, double *out_7371989816267243746);
void H_4(double *state, double *unused, double *out_2693252686912604718);
void h_9(double *state, double *unused, double *out_3794597782369296247);
void H_9(double *state, double *unused, double *out_2078379240644491058);
void h_10(double *state, double *unused, double *out_7841503641713858748);
void H_10(double *state, double *unused, double *out_3252329223925994006);
void h_12(double *state, double *unused, double *out_5744830437980138181);
void H_12(double *state, double *unused, double *out_4223019227268426494);
void h_13(double *state, double *unused, double *out_2507757720290095228);
void H_13(double *state, double *unused, double *out_3569835793008327010);
void h_14(double *state, double *unused, double *out_3794597782369296247);
void H_14(double *state, double *unused, double *out_2078379240644491058);
void h_19(double *state, double *unused, double *out_2219162621545099377);
void H_19(double *state, double *unused, double *out_3043570655670718922);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);
/* fort/09/02/03/p08.f -- translated by f2c (version of 22 July 1992  22:54:52).
   You must link the resulting object file with the libraries:
	-lF77 -lI77 -lm -lc   (in that order)
*/

#include "f2c.h"

/* Common Block Declarations */

struct {
    integer ctlhnd, errsig, errfil, ierrct, unerr, testct, iflerr, passsw, 
	    errsw, maxlin, conid, memun, wkid, wtype, glblun, indlun, dumint[
	    20];
    real dumrl[20];
} globnu_;

#define globnu_1 globnu_

struct {
    integer errcom, funcom, filcom, ernmsw, expsiz, experr[10], usrerr, 
	    errsav[200], funsav[200], filsav[200], efcnt, efid[100];
} errinf_;

#define errinf_1 errinf_

struct {
    char curcon[200], errsrs[40], errmrk[20], erflnm[80], contab[6000];
} errchr_;

#define errchr_1 errchr_

/* Table of constant values */

static integer c_n1 = -1;
static integer c__0 = 0;
static integer c_n10 = -10;

/*  ********************************************************* */
/*  *                                                       * */
/*  *    TEST NUMBER: 09.02.03/08                           * */
/*  *    TEST TITLE : Error indicator = 114                 * */
/*  *                                                       * */
/*  *    PHIGS Validation Tests, produced by NIST           * */
/*  *                                                       * */
/*  ********************************************************* */
#ifndef NO_PROTO
/* Main program */ MAIN__(void)
#else /* NO_PROTO */
/* Main program */ MAIN__()
#endif /* NO_PROTO */
{
    /* Builtin functions */
#ifndef NO_PROTO
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
#else /* NO_PROTO */
    /* Subroutine */ int s_copy();
#endif /* NO_PROTO */

    /* Local variables */
    static real ra6[6], ra44[16]	/* was [4][4] */, rb44[16]	/* 
	    was [4][4] */;
    static integer ival1, ival2, ival3;
#ifndef NO_PROTO
    extern /* Subroutine */ int endit_(void), nqwkc (integer *, integer *, 
	    integer *, integer *), nopwk (integer *, integer *, integer *), 
	    setvs_(char *, integer *, integer *, ftnlen), rqvwr_(integer *, 
	    integer *, integer *, integer *, integer *, real *, real *, real *
	    , integer *, integer *, integer *), chkinq_(char *, integer *, 
	    ftnlen);
#else /* NO_PROTO */
    extern /* Subroutine */ int endit_(), nqwkc (), nopwk (), setvs_(), 
	    rqvwr_(), chkinq_();
#endif /* NO_PROTO */
    static integer errind;
#ifndef NO_PROTO
    extern /* Subroutine */ int initgl_(char *, ftnlen);
#else /* NO_PROTO */
    extern /* Subroutine */ int initgl_();
#endif /* NO_PROTO */
    static integer specwt;
#ifndef NO_PROTO
    extern /* Subroutine */ int xpopph_(integer *, integer *), rqpvwr_(
	    integer *, integer *, integer *, real *, real *, real *, integer *
	    , integer *, integer *);
#else /* NO_PROTO */
    extern /* Subroutine */ int xpopph_(), rqpvwr_();
#endif /* NO_PROTO */

    initgl_("09.02.03/08", 11L);
    xpopph_(&globnu_1.errfil, &globnu_1.memun);
    s_copy(errchr_1.curcon, "the view index value is less than zero", 200L, 
	    38L);
    s_copy(errchr_1.errsrs, "8", 40L, 1L);
    setvs_("114", errinf_1.experr, &errinf_1.expsiz, 3L);
    nopwk (&globnu_1.wkid, &globnu_1.conid, &globnu_1.wtype);
    nqwkc (&globnu_1.wkid, &errind, &globnu_1.conid, &specwt);
    chkinq_("pqwkc", &errind, 5L);
    rqvwr_(&globnu_1.wkid, &c_n1, &c__0, &errind, &ival1, ra44, rb44, ra6, &
	    ival2, &ival2, &ival3);
    rqpvwr_(&specwt, &c_n10, &errind, ra44, rb44, ra6, &ival1, &ival2, &ival3)
	    ;
    endit_();
#ifndef NO_PROTO
    return 0;
#endif /* not NO_PROTO */
} /* MAIN__ */


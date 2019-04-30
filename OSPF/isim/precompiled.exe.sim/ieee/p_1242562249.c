/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function max ended without a return statement";
static const char *ng1 = "Function min ended without a return statement";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng4 = "Function \"sll\" ended without a return statement";
static const char *ng5 = "Function \"srl\" ended without a return statement";
static const char *ng6 = "Function \"rol\" ended without a return statement";
static const char *ng7 = "Function \"ror\" ended without a return statement";
static const char *ng8 = "Function to_integer ended without a return statement";
static const char *ng9 = "Function std_match ended without a return statement";

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434220770680401498_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_17249857350030274602_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1987757588013599599_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2423793367844140314_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2985487471987653227_1035706684(char *, char *, char *, char *, unsigned char );
unsigned char ieee_p_1242562249_sub_3044629854704842352_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3065688369758319528_1035706684(char *, char *, char *, char *);
char *ieee_p_1242562249_sub_420421356293926614_1035706684(char *, char *, char *, char *);
char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *, char *, char *, char *);
char *ieee_p_1242562249_sub_4856407567805619711_1035706684(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833316239837_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329934917513135_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329948342641973_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


int ieee_p_1242562249_sub_3327074314152278354_1035706684(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 > t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int ieee_p_1242562249_sub_3327074314152554960_1035706684(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 < t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int ieee_p_1242562249_sub_3312401477635428644_1035706684(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 824);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 824);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t2 >= 0);
    if (t18 != 0)
        goto LAB2;

LAB4:    t21 = (t2 + 1);
    t22 = (-(t21));
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t22;

LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB5:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t18 = (t21 > 0);
    if (t18 != 0)
        goto LAB6;

LAB8:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t0 = t21;

LAB1:    return t0;
LAB2:    t19 = (t11 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = t2;
    goto LAB3;

LAB6:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t22 = (t21 / 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB5;

LAB7:;
LAB9:;
}

int ieee_p_1242562249_sub_2977877946547446482_1035706684(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 824);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 824);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = t2;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB2:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t21 = (t20 > 1);
    if (t21 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t0 = t20;

LAB1:    return t0;
LAB3:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t22 = (t20 / 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB2;

LAB4:;
LAB6:;
}

char *ieee_p_1242562249_sub_1265626764782570828_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, unsigned char t7)
{
    char t8[368];
    char t9[40];
    char t16[8];
    char t19[16];
    char t26[16];
    char t34[16];
    char t49[8];
    char *t0;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    char *t64;
    unsigned char t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned char t76;
    unsigned char t77;
    char *t78;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    unsigned int t84;
    char *t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned char t90;
    unsigned char t91;
    char *t92;
    char *t93;
    int t94;
    char *t95;
    int t96;
    int t97;
    unsigned int t98;
    char *t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned char t104;
    unsigned int t105;
    unsigned char t106;
    unsigned char t107;
    unsigned char t108;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t11 - 1);
    t13 = (t8 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t20 = (t19 + 0U);
    t23 = (t20 + 0U);
    *((int *)t23) = t22;
    t23 = (t20 + 4U);
    *((int *)t23) = 0;
    t23 = (t20 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - t22);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t20 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t13 + 56U);
    t27 = *((char **)t23);
    t28 = *((int *)t27);
    t23 = (t26 + 0U);
    t29 = (t23 + 0U);
    *((int *)t29) = t28;
    t29 = (t23 + 4U);
    *((int *)t29) = 0;
    t29 = (t23 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t25 = (t30 * -1);
    t25 = (t25 + 1);
    t29 = (t23 + 12U);
    *((unsigned int *)t29) = t25;
    t29 = (t13 + 56U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (0 - t32);
    t25 = (t33 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t29 = (t13 + 56U);
    t35 = *((char **)t29);
    t36 = *((int *)t35);
    t29 = (t34 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t36;
    t37 = (t29 + 4U);
    *((int *)t37) = 0;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t8 + 124U);
    t40 = (t1 + 2976);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t25);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t34);
    t44 = (t37 + 64U);
    *((char **)t44) = t34;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t25;
    t46 = (t8 + 244U);
    t47 = ((IEEE_P_2592010699) + 3312);
    t48 = (t46 + 88U);
    *((char **)t48) = t47;
    t50 = (t46 + 56U);
    *((char **)t50) = t49;
    *((unsigned char *)t49) = t7;
    t51 = (t46 + 80U);
    *((unsigned int *)t51) = 1U;
    t52 = (t9 + 4U);
    t53 = (t3 != 0);
    if (t53 == 1)
        goto LAB3;

LAB2:    t54 = (t9 + 12U);
    *((char **)t54) = t4;
    t55 = (t9 + 20U);
    t56 = (t5 != 0);
    if (t56 == 1)
        goto LAB5;

LAB4:    t57 = (t9 + 28U);
    *((char **)t57) = t6;
    t58 = (t9 + 36U);
    *((unsigned char *)t58) = t7;
    t59 = (t13 + 56U);
    t60 = *((char **)t59);
    t61 = *((int *)t60);
    t62 = 0;
    t63 = t61;

LAB6:    if (t62 <= t63)
        goto LAB7;

LAB9:    t10 = (t37 + 56U);
    t14 = *((char **)t10);
    t10 = (t34 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t14, t11);
    t15 = (t34 + 0U);
    t12 = *((int *)t15);
    t17 = (t34 + 4U);
    t22 = *((int *)t17);
    t18 = (t34 + 8U);
    t24 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t12;
    t21 = (t20 + 4U);
    *((int *)t21) = t22;
    t21 = (t20 + 8U);
    *((int *)t21) = t24;
    t28 = (t22 - t12);
    t25 = (t28 * t24);
    t25 = (t25 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t25;

LAB1:    return t0;
LAB3:    *((char **)t52) = t3;
    goto LAB2;

LAB5:    *((char **)t55) = t5;
    goto LAB4;

LAB7:    t59 = (t46 + 56U);
    t64 = *((char **)t59);
    t65 = *((unsigned char *)t64);
    t59 = (t3 + 0);
    t66 = (t19 + 0U);
    t67 = *((int *)t66);
    t68 = (t19 + 8U);
    t69 = *((int *)t68);
    t70 = (t62 - t67);
    t39 = (t70 * t69);
    t71 = (t19 + 4U);
    t72 = *((int *)t71);
    xsi_vhdl_check_range_of_index(t67, t72, t69, t62);
    t73 = (1U * t39);
    t74 = (0 + t73);
    t75 = (t59 + t74);
    t76 = *((unsigned char *)t75);
    t77 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t65, t76);
    t78 = (t5 + 0);
    t79 = (t26 + 0U);
    t80 = *((int *)t79);
    t81 = (t26 + 8U);
    t82 = *((int *)t81);
    t83 = (t62 - t80);
    t84 = (t83 * t82);
    t85 = (t26 + 4U);
    t86 = *((int *)t85);
    xsi_vhdl_check_range_of_index(t80, t86, t82, t62);
    t87 = (1U * t84);
    t88 = (0 + t87);
    t89 = (t78 + t88);
    t90 = *((unsigned char *)t89);
    t91 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t77, t90);
    t92 = (t37 + 56U);
    t93 = *((char **)t92);
    t92 = (t34 + 0U);
    t94 = *((int *)t92);
    t95 = (t34 + 8U);
    t96 = *((int *)t95);
    t97 = (t62 - t94);
    t98 = (t97 * t96);
    t99 = (t34 + 4U);
    t100 = *((int *)t99);
    xsi_vhdl_check_range_of_index(t94, t100, t96, t62);
    t101 = (1U * t98);
    t102 = (0 + t101);
    t103 = (t93 + t102);
    *((unsigned char *)t103) = t91;
    t10 = (t46 + 56U);
    t14 = *((char **)t10);
    t53 = *((unsigned char *)t14);
    t10 = (t3 + 0);
    t15 = (t19 + 0U);
    t12 = *((int *)t15);
    t17 = (t19 + 8U);
    t22 = *((int *)t17);
    t24 = (t62 - t12);
    t11 = (t24 * t22);
    t18 = (t19 + 4U);
    t28 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t12, t28, t22, t62);
    t25 = (1U * t11);
    t39 = (0 + t25);
    t20 = (t10 + t39);
    t56 = *((unsigned char *)t20);
    t65 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t53, t56);
    t21 = (t46 + 56U);
    t23 = *((char **)t21);
    t76 = *((unsigned char *)t23);
    t21 = (t5 + 0);
    t27 = (t26 + 0U);
    t30 = *((int *)t27);
    t29 = (t26 + 8U);
    t32 = *((int *)t29);
    t33 = (t62 - t30);
    t73 = (t33 * t32);
    t31 = (t26 + 4U);
    t36 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t30, t36, t32, t62);
    t74 = (1U * t73);
    t84 = (0 + t74);
    t35 = (t21 + t84);
    t77 = *((unsigned char *)t35);
    t90 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t76, t77);
    t91 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t65, t90);
    t40 = (t3 + 0);
    t41 = (t19 + 0U);
    t38 = *((int *)t41);
    t43 = (t19 + 8U);
    t61 = *((int *)t43);
    t67 = (t62 - t38);
    t87 = (t67 * t61);
    t44 = (t19 + 4U);
    t69 = *((int *)t44);
    xsi_vhdl_check_range_of_index(t38, t69, t61, t62);
    t88 = (1U * t87);
    t98 = (0 + t88);
    t45 = (t40 + t98);
    t104 = *((unsigned char *)t45);
    t47 = (t5 + 0);
    t48 = (t26 + 0U);
    t70 = *((int *)t48);
    t50 = (t26 + 8U);
    t72 = *((int *)t50);
    t80 = (t62 - t70);
    t101 = (t80 * t72);
    t51 = (t26 + 4U);
    t82 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t70, t82, t72, t62);
    t102 = (1U * t101);
    t105 = (0 + t102);
    t59 = (t47 + t105);
    t106 = *((unsigned char *)t59);
    t107 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t104, t106);
    t108 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t91, t107);
    t60 = (t46 + 56U);
    t64 = *((char **)t60);
    t60 = (t64 + 0);
    *((unsigned char *)t60) = t108;

LAB8:    if (t62 == t63)
        goto LAB9;

LAB10:    t12 = (t62 + 1);
    t62 = t12;
    goto LAB6;

LAB11:;
}

char *ieee_p_1242562249_sub_15116483354026557501_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, unsigned char t7)
{
    char t8[368];
    char t9[40];
    char t16[8];
    char t19[16];
    char t26[16];
    char t34[16];
    char t49[8];
    char *t0;
    char *t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    char *t64;
    unsigned char t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned char t76;
    unsigned char t77;
    char *t78;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    unsigned int t84;
    char *t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned char t90;
    unsigned char t91;
    char *t92;
    char *t93;
    int t94;
    char *t95;
    int t96;
    int t97;
    unsigned int t98;
    char *t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned char t104;
    unsigned int t105;
    unsigned char t106;
    unsigned char t107;
    unsigned char t108;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t11 - 1);
    t13 = (t8 + 4U);
    t14 = ((STD_STANDARD) + 384);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    *((int *)t16) = t12;
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 4U;
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t20 = (t19 + 0U);
    t23 = (t20 + 0U);
    *((int *)t23) = t22;
    t23 = (t20 + 4U);
    *((int *)t23) = 0;
    t23 = (t20 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - t22);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t20 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t13 + 56U);
    t27 = *((char **)t23);
    t28 = *((int *)t27);
    t23 = (t26 + 0U);
    t29 = (t23 + 0U);
    *((int *)t29) = t28;
    t29 = (t23 + 4U);
    *((int *)t29) = 0;
    t29 = (t23 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t25 = (t30 * -1);
    t25 = (t25 + 1);
    t29 = (t23 + 12U);
    *((unsigned int *)t29) = t25;
    t29 = (t13 + 56U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (0 - t32);
    t25 = (t33 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t29 = (t13 + 56U);
    t35 = *((char **)t29);
    t36 = *((int *)t35);
    t29 = (t34 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t36;
    t37 = (t29 + 4U);
    *((int *)t37) = 0;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t8 + 124U);
    t40 = (t1 + 3080);
    t41 = (t37 + 88U);
    *((char **)t41) = t40;
    t42 = (char *)alloca(t25);
    t43 = (t37 + 56U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, t34);
    t44 = (t37 + 64U);
    *((char **)t44) = t34;
    t45 = (t37 + 80U);
    *((unsigned int *)t45) = t25;
    t46 = (t8 + 244U);
    t47 = ((IEEE_P_2592010699) + 3312);
    t48 = (t46 + 88U);
    *((char **)t48) = t47;
    t50 = (t46 + 56U);
    *((char **)t50) = t49;
    *((unsigned char *)t49) = t7;
    t51 = (t46 + 80U);
    *((unsigned int *)t51) = 1U;
    t52 = (t9 + 4U);
    t53 = (t3 != 0);
    if (t53 == 1)
        goto LAB3;

LAB2:    t54 = (t9 + 12U);
    *((char **)t54) = t4;
    t55 = (t9 + 20U);
    t56 = (t5 != 0);
    if (t56 == 1)
        goto LAB5;

LAB4:    t57 = (t9 + 28U);
    *((char **)t57) = t6;
    t58 = (t9 + 36U);
    *((unsigned char *)t58) = t7;
    t59 = (t13 + 56U);
    t60 = *((char **)t59);
    t61 = *((int *)t60);
    t62 = 0;
    t63 = t61;

LAB6:    if (t62 <= t63)
        goto LAB7;

LAB9:    t10 = (t37 + 56U);
    t14 = *((char **)t10);
    t10 = (t34 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t14, t11);
    t15 = (t34 + 0U);
    t12 = *((int *)t15);
    t17 = (t34 + 4U);
    t22 = *((int *)t17);
    t18 = (t34 + 8U);
    t24 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t12;
    t21 = (t20 + 4U);
    *((int *)t21) = t22;
    t21 = (t20 + 8U);
    *((int *)t21) = t24;
    t28 = (t22 - t12);
    t25 = (t28 * t24);
    t25 = (t25 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t25;

LAB1:    return t0;
LAB3:    *((char **)t52) = t3;
    goto LAB2;

LAB5:    *((char **)t55) = t5;
    goto LAB4;

LAB7:    t59 = (t46 + 56U);
    t64 = *((char **)t59);
    t65 = *((unsigned char *)t64);
    t59 = (t3 + 0);
    t66 = (t19 + 0U);
    t67 = *((int *)t66);
    t68 = (t19 + 8U);
    t69 = *((int *)t68);
    t70 = (t62 - t67);
    t39 = (t70 * t69);
    t71 = (t19 + 4U);
    t72 = *((int *)t71);
    xsi_vhdl_check_range_of_index(t67, t72, t69, t62);
    t73 = (1U * t39);
    t74 = (0 + t73);
    t75 = (t59 + t74);
    t76 = *((unsigned char *)t75);
    t77 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t65, t76);
    t78 = (t5 + 0);
    t79 = (t26 + 0U);
    t80 = *((int *)t79);
    t81 = (t26 + 8U);
    t82 = *((int *)t81);
    t83 = (t62 - t80);
    t84 = (t83 * t82);
    t85 = (t26 + 4U);
    t86 = *((int *)t85);
    xsi_vhdl_check_range_of_index(t80, t86, t82, t62);
    t87 = (1U * t84);
    t88 = (0 + t87);
    t89 = (t78 + t88);
    t90 = *((unsigned char *)t89);
    t91 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t77, t90);
    t92 = (t37 + 56U);
    t93 = *((char **)t92);
    t92 = (t34 + 0U);
    t94 = *((int *)t92);
    t95 = (t34 + 8U);
    t96 = *((int *)t95);
    t97 = (t62 - t94);
    t98 = (t97 * t96);
    t99 = (t34 + 4U);
    t100 = *((int *)t99);
    xsi_vhdl_check_range_of_index(t94, t100, t96, t62);
    t101 = (1U * t98);
    t102 = (0 + t101);
    t103 = (t93 + t102);
    *((unsigned char *)t103) = t91;
    t10 = (t46 + 56U);
    t14 = *((char **)t10);
    t53 = *((unsigned char *)t14);
    t10 = (t3 + 0);
    t15 = (t19 + 0U);
    t12 = *((int *)t15);
    t17 = (t19 + 8U);
    t22 = *((int *)t17);
    t24 = (t62 - t12);
    t11 = (t24 * t22);
    t18 = (t19 + 4U);
    t28 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t12, t28, t22, t62);
    t25 = (1U * t11);
    t39 = (0 + t25);
    t20 = (t10 + t39);
    t56 = *((unsigned char *)t20);
    t65 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t53, t56);
    t21 = (t46 + 56U);
    t23 = *((char **)t21);
    t76 = *((unsigned char *)t23);
    t21 = (t5 + 0);
    t27 = (t26 + 0U);
    t30 = *((int *)t27);
    t29 = (t26 + 8U);
    t32 = *((int *)t29);
    t33 = (t62 - t30);
    t73 = (t33 * t32);
    t31 = (t26 + 4U);
    t36 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t30, t36, t32, t62);
    t74 = (1U * t73);
    t84 = (0 + t74);
    t35 = (t21 + t84);
    t77 = *((unsigned char *)t35);
    t90 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t76, t77);
    t91 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t65, t90);
    t40 = (t3 + 0);
    t41 = (t19 + 0U);
    t38 = *((int *)t41);
    t43 = (t19 + 8U);
    t61 = *((int *)t43);
    t67 = (t62 - t38);
    t87 = (t67 * t61);
    t44 = (t19 + 4U);
    t69 = *((int *)t44);
    xsi_vhdl_check_range_of_index(t38, t69, t61, t62);
    t88 = (1U * t87);
    t98 = (0 + t88);
    t45 = (t40 + t98);
    t104 = *((unsigned char *)t45);
    t47 = (t5 + 0);
    t48 = (t26 + 0U);
    t70 = *((int *)t48);
    t50 = (t26 + 8U);
    t72 = *((int *)t50);
    t80 = (t62 - t70);
    t101 = (t80 * t72);
    t51 = (t26 + 4U);
    t82 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t70, t82, t72, t62);
    t102 = (1U * t101);
    t105 = (0 + t102);
    t59 = (t47 + t105);
    t106 = *((unsigned char *)t59);
    t107 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t104, t106);
    t108 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t91, t107);
    t60 = (t46 + 56U);
    t64 = *((char **)t60);
    t60 = (t64 + 0);
    *((unsigned char *)t60) = t108;

LAB8:    if (t62 == t63)
        goto LAB9;

LAB10:    t12 = (t62 + 1);
    t62 = t12;
    goto LAB6;

LAB11:;
}

void ieee_p_1242562249_sub_3138923086916629906_1035706684(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5, char *t6, char *t7, char *t8, char *t9)
{
    char t10[368];
    char t11[72];
    char t16[16];
    char t36[16];
    char t53[16];
    char t62[8];
    char t78[16];
    char t80[16];
    char t95[16];
    char t97[16];
    char t100[16];
    char t107[16];
    char t126[16];
    char t128[16];
    char t133[16];
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    unsigned char t66;
    char *t67;
    char *t68;
    unsigned char t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t81;
    char *t82;
    int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t96;
    int t98;
    int t99;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t108;
    int t109;
    int t110;
    int t111;
    char *t113;
    char *t114;
    int t115;
    char *t116;
    char *t117;
    int t118;
    int t119;
    char *t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t127;
    char *t129;
    char *t130;
    int t131;
    unsigned int t132;
    char *t134;
    int t135;
    char *t136;
    int t137;
    char *t138;
    char *t139;
    int t140;
    char *t141;
    char *t142;
    int t143;
    int t144;
    int t145;
    int t146;
    char *t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;

LAB0:    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (0 - t13);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t17 = (t3 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t16 + 0U);
    t20 = (t19 + 0U);
    *((unsigned int *)t20) = t18;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t18);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 4U);
    t23 = (t0 + 2976);
    t24 = (t20 + 88U);
    *((char **)t24) = t23;
    t25 = (char *)alloca(t15);
    t26 = (t20 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, t16);
    t27 = (t20 + 64U);
    *((char **)t27) = t16;
    t28 = (t20 + 80U);
    *((unsigned int *)t28) = t15;
    t29 = (t3 + 12U);
    t22 = *((unsigned int *)t29);
    t30 = (t5 + 12U);
    t31 = *((unsigned int *)t30);
    t32 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t0, ((t22)), ((t31)));
    t33 = (t32 - 1);
    t34 = (0 - t33);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t35 = (t35 * 1U);
    t37 = (t3 + 12U);
    t38 = *((unsigned int *)t37);
    t39 = (t5 + 12U);
    t40 = *((unsigned int *)t39);
    t41 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t0, ((t38)), ((t40)));
    t42 = (t41 - 1);
    t43 = (t36 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = t42;
    t44 = (t43 + 4U);
    *((int *)t44) = 0;
    t44 = (t43 + 8U);
    *((int *)t44) = -1;
    t45 = (0 - t42);
    t46 = (t45 * -1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t44 = (t10 + 124U);
    t47 = (t0 + 2976);
    t48 = (t44 + 88U);
    *((char **)t48) = t47;
    t49 = (char *)alloca(t35);
    t50 = (t44 + 56U);
    *((char **)t50) = t49;
    xsi_type_set_default_value(t47, t49, t36);
    t51 = (t44 + 64U);
    *((char **)t51) = t36;
    t52 = (t44 + 80U);
    *((unsigned int *)t52) = t35;
    t54 = (t5 + 12U);
    t46 = *((unsigned int *)t54);
    t55 = (t46 - 1);
    t56 = (t53 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = t55;
    t57 = (t56 + 4U);
    *((int *)t57) = 0;
    t57 = (t56 + 8U);
    *((int *)t57) = -1;
    t58 = (0 - t55);
    t59 = (t58 * -1);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;
    t57 = (t10 + 244U);
    t60 = ((STD_STANDARD) + 384);
    t61 = (t57 + 88U);
    *((char **)t61) = t60;
    t63 = (t57 + 56U);
    *((char **)t63) = t62;
    xsi_type_set_default_value(t60, t62, 0);
    t64 = (t57 + 80U);
    *((unsigned int *)t64) = 4U;
    t65 = (t11 + 4U);
    t66 = (t2 != 0);
    if (t66 == 1)
        goto LAB3;

LAB2:    t67 = (t11 + 12U);
    *((char **)t67) = t3;
    t68 = (t11 + 20U);
    t69 = (t4 != 0);
    if (t69 == 1)
        goto LAB5;

LAB4:    t70 = (t11 + 28U);
    *((char **)t70) = t5;
    t71 = (t11 + 36U);
    *((char **)t71) = t6;
    t72 = (t11 + 44U);
    *((char **)t72) = t7;
    t73 = (t11 + 52U);
    *((char **)t73) = t8;
    t74 = (t11 + 60U);
    *((char **)t74) = t9;
<<<<<<< HEAD
    t75 = (t0 + 5083);
=======
    t75 = (t0 + 5075);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t79 = (t0 + 2976);
    t81 = (t80 + 0U);
    t82 = (t81 + 0U);
    *((int *)t82) = 0;
    t82 = (t81 + 4U);
    *((int *)t82) = 0;
    t82 = (t81 + 8U);
    *((int *)t82) = 1;
    t83 = (0 - 0);
    t59 = (t83 * 1);
    t59 = (t59 + 1);
    t82 = (t81 + 12U);
    *((unsigned int *)t82) = t59;
    t77 = xsi_base_array_concat(t77, t78, t79, (char)97, t75, t80, (char)97, t2, t3, (char)101);
    t82 = (t20 + 56U);
    t84 = *((char **)t82);
    t82 = (t84 + 0);
    t85 = (t3 + 12U);
    t59 = *((unsigned int *)t85);
    t59 = (t59 * 1U);
    t86 = (1U + t59);
    memcpy(t82, t77, t86);
    t12 = (t36 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t17 = xsi_get_transient_memory(t13);
    memset(t17, 0, t13);
    t19 = t17;
    memset(t19, (unsigned char)2, t13);
    t23 = (t44 + 56U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t26 = (t36 + 12U);
    t15 = *((unsigned int *)t26);
    t15 = (t15 * 1U);
    memcpy(t23, t17, t15);
    t14 = (-(1));
    t12 = (t57 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;
    t12 = (t53 + 8U);
    t14 = *((int *)t12);
    t17 = (t53 + 4U);
    t21 = *((int *)t17);
    t19 = (t53 + 0U);
    t32 = *((int *)t19);
    t33 = t32;
    t34 = t21;

LAB6:    t41 = (t34 * t14);
    t42 = (t33 * t14);
    if (t42 <= t41)
        goto LAB7;

LAB9:    t12 = (t57 + 56U);
    t17 = *((char **)t12);
    t14 = *((int *)t17);
    t66 = (t14 >= 0);
    if (t66 == 0)
        goto LAB15;

LAB16:    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t17 = (t57 + 56U);
    t19 = *((char **)t17);
    t14 = *((int *)t19);
    t21 = (t14 + 1);
    t32 = (t13 - t21);
    t33 = t32;
    t34 = 0;

LAB17:    if (t33 >= t34)
        goto LAB18;

LAB20:    t12 = (t44 + 56U);
    t17 = *((char **)t12);
    t12 = (t7 + 12U);
    t13 = *((unsigned int *)t12);
    t19 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t0, t78, t17, t36, ((t13)));
    t23 = (t6 + 0);
    t24 = (t78 + 12U);
    t15 = *((unsigned int *)t24);
    t15 = (t15 * 1U);
    memcpy(t23, t19, t15);
    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t9 + 12U);
    t13 = *((unsigned int *)t12);
    t19 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t0, t78, t17, t16, ((t13)));
    t23 = (t8 + 0);
    t24 = (t78 + 12U);
    t15 = *((unsigned int *)t24);
    t15 = (t15 * 1U);
    memcpy(t23, t19, t15);

LAB1:    return;
LAB3:    *((char **)t65) = t2;
    goto LAB2;

LAB5:    *((char **)t68) = t4;
    goto LAB4;

LAB7:    t23 = (t4 + 0);
    t24 = (t53 + 0U);
    t45 = *((int *)t24);
    t26 = (t53 + 8U);
    t55 = *((int *)t26);
    t58 = (t33 - t45);
    t13 = (t58 * t55);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t27 = (t23 + t18);
    t66 = *((unsigned char *)t27);
    t69 = (t66 == (unsigned char)3);
    if (t69 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t33 == t34)
        goto LAB9;

LAB14:    t21 = (t33 + t14);
    t33 = t21;
    goto LAB6;

LAB10:    t28 = (t57 + 56U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    *((int *)t28) = t33;
    goto LAB9;

LAB13:    goto LAB11;

<<<<<<< HEAD
LAB15:    t12 = (t0 + 5084);
=======
LAB15:    t12 = (t0 + 5076);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 24U, (unsigned char)2);
    goto LAB16;

LAB18:    t17 = (t20 + 56U);
    t23 = *((char **)t17);
    t17 = (t16 + 0U);
    t41 = *((int *)t17);
    t24 = (t57 + 56U);
    t26 = *((char **)t24);
    t42 = *((int *)t26);
    t45 = (t42 + t33);
    t55 = (t45 + 1);
    t15 = (t41 - t55);
    t24 = (t16 + 4U);
    t58 = *((int *)t24);
    t27 = (t16 + 8U);
    t83 = *((int *)t27);
    xsi_vhdl_check_range_of_slice(t41, t58, t83, t55, t33, -1);
    t18 = (t15 * 1U);
    t22 = (0 + t18);
    t28 = (t23 + t22);
    t29 = (t57 + 56U);
    t30 = *((char **)t29);
    t87 = *((int *)t30);
    t88 = (t87 + t33);
    t89 = (t88 + 1);
    t29 = (t78 + 0U);
    t37 = (t29 + 0U);
    *((int *)t37) = t89;
    t37 = (t29 + 4U);
    *((int *)t37) = t33;
    t37 = (t29 + 8U);
    *((int *)t37) = -1;
    t90 = (t33 - t89);
    t31 = (t90 * -1);
    t31 = (t31 + 1);
    t37 = (t29 + 12U);
    *((unsigned int *)t37) = t31;
<<<<<<< HEAD
    t37 = (t0 + 5108);
=======
    t37 = (t0 + 5100);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t43 = (t4 + 0);
    t47 = (t53 + 0U);
    t91 = *((int *)t47);
    t48 = (t57 + 56U);
    t50 = *((char **)t48);
    t92 = *((int *)t50);
    t31 = (t91 - t92);
    t48 = (t53 + 4U);
    t93 = *((int *)t48);
    t51 = (t53 + 8U);
    t94 = *((int *)t51);
    xsi_vhdl_check_range_of_slice(t91, t93, t94, t92, 0, -1);
    t35 = (t31 * 1U);
    t38 = (0 + t35);
    t52 = (t43 + t38);
    t56 = (t0 + 2976);
    t60 = (t95 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = 0;
    t61 = (t60 + 4U);
    *((int *)t61) = 0;
    t61 = (t60 + 8U);
    *((int *)t61) = 1;
    t96 = (0 - 0);
    t40 = (t96 * 1);
    t40 = (t40 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t40;
    t61 = (t57 + 56U);
    t63 = *((char **)t61);
    t98 = *((int *)t63);
    t61 = (t97 + 0U);
    t64 = (t61 + 0U);
    *((int *)t64) = t98;
    t64 = (t61 + 4U);
    *((int *)t64) = 0;
    t64 = (t61 + 8U);
    *((int *)t64) = -1;
    t99 = (0 - t98);
    t40 = (t99 * -1);
    t40 = (t40 + 1);
    t64 = (t61 + 12U);
    *((unsigned int *)t64) = t40;
    t54 = xsi_base_array_concat(t54, t80, t56, (char)97, t37, t95, (char)97, t52, t97, (char)101);
    t66 = ieee_p_1242562249_sub_1434220770698190313_1035706684(t0, t28, t78, t54, t80);
    if (t66 != 0)
        goto LAB21;

LAB23:
LAB22:    t12 = (t20 + 56U);
    t17 = *((char **)t12);
    t12 = (t57 + 56U);
    t19 = *((char **)t12);
    t14 = *((int *)t19);
    t21 = (t14 + t33);
    t32 = (t21 + 1);
    t12 = (t16 + 0U);
    t41 = *((int *)t12);
    t23 = (t16 + 8U);
    t42 = *((int *)t23);
    t45 = (t32 - t41);
    t13 = (t45 * t42);
    t24 = (t16 + 4U);
    t55 = *((int *)t24);
    xsi_vhdl_check_range_of_index(t41, t55, t42, t32);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t26 = (t17 + t18);
    t66 = *((unsigned char *)t26);
    t69 = (t66 == (unsigned char)2);
    if (t69 == 0)
        goto LAB24;

LAB25:
LAB19:    if (t33 == t34)
        goto LAB20;

LAB26:    t14 = (t33 + -1);
    t33 = t14;
    goto LAB17;

LAB21:    t64 = (t20 + 56U);
    t75 = *((char **)t64);
    t64 = (t16 + 0U);
    t101 = *((int *)t64);
    t76 = (t57 + 56U);
    t77 = *((char **)t76);
    t102 = *((int *)t77);
    t103 = (t102 + t33);
    t104 = (t103 + 1);
    t40 = (t101 - t104);
    t76 = (t16 + 4U);
    t105 = *((int *)t76);
    t79 = (t16 + 8U);
    t106 = *((int *)t79);
    xsi_vhdl_check_range_of_slice(t101, t105, t106, t104, t33, -1);
    t46 = (t40 * 1U);
    t59 = (0 + t46);
    t81 = (t75 + t59);
    t82 = (t57 + 56U);
    t84 = *((char **)t82);
    t108 = *((int *)t84);
    t109 = (t108 + t33);
    t110 = (t109 + 1);
    t82 = (t107 + 0U);
    t85 = (t82 + 0U);
    *((int *)t85) = t110;
    t85 = (t82 + 4U);
    *((int *)t85) = t33;
    t85 = (t82 + 8U);
    *((int *)t85) = -1;
    t111 = (t33 - t110);
    t86 = (t111 * -1);
    t86 = (t86 + 1);
    t85 = (t82 + 12U);
    *((unsigned int *)t85) = t86;
<<<<<<< HEAD
    t85 = (t0 + 5109);
=======
    t85 = (t0 + 5101);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t113 = (t4 + 0);
    t114 = (t53 + 0U);
    t115 = *((int *)t114);
    t116 = (t57 + 56U);
    t117 = *((char **)t116);
    t118 = *((int *)t117);
    t86 = (t115 - t118);
    t116 = (t53 + 4U);
    t119 = *((int *)t116);
    t120 = (t53 + 8U);
    t121 = *((int *)t120);
    xsi_vhdl_check_range_of_slice(t115, t119, t121, t118, 0, -1);
    t122 = (t86 * 1U);
    t123 = (0 + t122);
    t124 = (t113 + t123);
    t127 = (t0 + 2976);
    t129 = (t128 + 0U);
    t130 = (t129 + 0U);
    *((int *)t130) = 0;
    t130 = (t129 + 4U);
    *((int *)t130) = 0;
    t130 = (t129 + 8U);
    *((int *)t130) = 1;
    t131 = (0 - 0);
    t132 = (t131 * 1);
    t132 = (t132 + 1);
    t130 = (t129 + 12U);
    *((unsigned int *)t130) = t132;
    t130 = (t57 + 56U);
    t134 = *((char **)t130);
    t135 = *((int *)t134);
    t130 = (t133 + 0U);
    t136 = (t130 + 0U);
    *((int *)t136) = t135;
    t136 = (t130 + 4U);
    *((int *)t136) = 0;
    t136 = (t130 + 8U);
    *((int *)t136) = -1;
    t137 = (0 - t135);
    t132 = (t137 * -1);
    t132 = (t132 + 1);
    t136 = (t130 + 12U);
    *((unsigned int *)t136) = t132;
    t125 = xsi_base_array_concat(t125, t126, t127, (char)97, t85, t128, (char)97, t124, t133, (char)101);
    t136 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t0, t100, t81, t107, t125, t126);
    t138 = (t20 + 56U);
    t139 = *((char **)t138);
    t138 = (t16 + 0U);
    t140 = *((int *)t138);
    t141 = (t57 + 56U);
    t142 = *((char **)t141);
    t143 = *((int *)t142);
    t144 = (t143 + t33);
    t145 = (t144 + 1);
    t132 = (t140 - t145);
    t141 = (t16 + 4U);
    t146 = *((int *)t141);
    t147 = (t16 + 8U);
    t148 = *((int *)t147);
    xsi_vhdl_check_range_of_slice(t140, t146, t148, t145, t33, -1);
    t149 = (t132 * 1U);
    t150 = (0 + t149);
    t151 = (t139 + t150);
    t152 = (t100 + 12U);
    t153 = *((unsigned int *)t152);
    t154 = (1U * t153);
    memcpy(t151, t136, t154);
    t12 = (t44 + 56U);
    t17 = *((char **)t12);
    t12 = (t36 + 0U);
    t14 = *((int *)t12);
    t19 = (t36 + 8U);
    t21 = *((int *)t19);
    t32 = (t33 - t14);
    t13 = (t32 * t21);
    t23 = (t36 + 4U);
    t41 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t14, t41, t21, t33);
    t15 = (1U * t13);
    t18 = (0 + t15);
    t24 = (t17 + t18);
    *((unsigned char *)t24) = (unsigned char)3;
    goto LAB22;

<<<<<<< HEAD
LAB24:    t27 = (t0 + 5110);
=======
LAB24:    t27 = (t0 + 5102);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 40U, (unsigned char)2);
    goto LAB25;

}

char *ieee_p_1242562249_sub_18075413680674704129_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    unsigned char t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    int t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    int t67;
    char *t68;
    char *t69;
    int t70;
    unsigned int t71;
    int t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t27 = t21;
    memset(t27, (unsigned char)2, t23);
    t28 = (t11 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t31 = (0 - t30);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t28 = (t11 + 56U);
    t34 = *((char **)t28);
    t35 = *((int *)t34);
    t28 = (t33 + 0U);
    t36 = (t28 + 0U);
    *((int *)t36) = t35;
    t36 = (t28 + 4U);
    *((int *)t36) = 0;
    t36 = (t28 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t28 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = ((IEEE_P_2592010699) + 4000);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t32);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    memcpy(t41, t21, t32);
    t43 = (t36 + 64U);
    *((char **)t43) = t33;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t32;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t11 + 56U);
    t50 = *((char **)t49);
    t51 = *((int *)t50);
    t52 = (t5 <= t51);
    if (t52 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t33 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t33 + 0U);
    t10 = *((int *)t13);
    t15 = (t33 + 4U);
    t20 = *((int *)t15);
    t16 = (t33 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t49 = (t3 + 0);
    t53 = (t17 + 0U);
    t54 = *((int *)t53);
    t55 = (t11 + 56U);
    t56 = *((char **)t55);
    t57 = *((int *)t56);
    t58 = (t57 - t5);
    t38 = (t54 - t58);
    t55 = (t17 + 4U);
    t59 = *((int *)t55);
    t60 = (t17 + 8U);
    t61 = *((int *)t60);
    xsi_vhdl_check_range_of_slice(t54, t59, t61, t58, 0, -1);
    t62 = (t38 * 1U);
    t63 = (0 + t62);
    t64 = (t49 + t63);
    t65 = (t36 + 56U);
    t66 = *((char **)t65);
    t65 = (t33 + 0U);
    t67 = *((int *)t65);
    t68 = (t11 + 56U);
    t69 = *((char **)t68);
    t70 = *((int *)t69);
    t71 = (t67 - t70);
    t68 = (t33 + 4U);
    t72 = *((int *)t68);
    t73 = (t33 + 8U);
    t74 = *((int *)t73);
    xsi_vhdl_check_range_of_slice(t67, t72, t74, t70, t5, -1);
    t75 = (t71 * 1U);
    t76 = (0 + t75);
    t77 = (t66 + t76);
    t78 = (t11 + 56U);
    t79 = *((char **)t78);
    t80 = *((int *)t79);
    t81 = (t80 - t5);
    t82 = (0 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t77, t64, t84);
    goto LAB5;

LAB7:;
}

char *ieee_p_1242562249_sub_18075413680674919751_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    unsigned char t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    int t69;
    int t70;
    unsigned int t71;
    int t72;
    char *t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t27 = t21;
    memset(t27, (unsigned char)2, t23);
    t28 = (t11 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t31 = (0 - t30);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t28 = (t11 + 56U);
    t34 = *((char **)t28);
    t35 = *((int *)t34);
    t28 = (t33 + 0U);
    t36 = (t28 + 0U);
    *((int *)t36) = t35;
    t36 = (t28 + 4U);
    *((int *)t36) = 0;
    t36 = (t28 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t28 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = ((IEEE_P_2592010699) + 4000);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t32);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    memcpy(t41, t21, t32);
    t43 = (t36 + 64U);
    *((char **)t43) = t33;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t32;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t11 + 56U);
    t50 = *((char **)t49);
    t51 = *((int *)t50);
    t52 = (t5 <= t51);
    if (t52 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t33 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t33 + 0U);
    t10 = *((int *)t13);
    t15 = (t33 + 4U);
    t20 = *((int *)t15);
    t16 = (t33 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t49 = (t3 + 0);
    t53 = (t17 + 0U);
    t54 = *((int *)t53);
    t55 = (t11 + 56U);
    t56 = *((char **)t55);
    t57 = *((int *)t56);
    t38 = (t54 - t57);
    t55 = (t17 + 4U);
    t58 = *((int *)t55);
    t59 = (t17 + 8U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_slice(t54, t58, t60, t57, t5, -1);
    t61 = (t38 * 1U);
    t62 = (0 + t61);
    t63 = (t49 + t62);
    t64 = (t36 + 56U);
    t65 = *((char **)t64);
    t64 = (t33 + 0U);
    t66 = *((int *)t64);
    t67 = (t11 + 56U);
    t68 = *((char **)t67);
    t69 = *((int *)t68);
    t70 = (t69 - t5);
    t71 = (t66 - t70);
    t67 = (t33 + 4U);
    t72 = *((int *)t67);
    t73 = (t33 + 8U);
    t74 = *((int *)t73);
    xsi_vhdl_check_range_of_slice(t66, t72, t74, t70, 0, -1);
    t75 = (t71 * 1U);
    t76 = (0 + t75);
    t77 = (t65 + t76);
    t78 = (t11 + 56U);
    t79 = *((char **)t78);
    t80 = *((int *)t79);
    t81 = (t5 - t80);
    t82 = (t81 * -1);
    t82 = (t82 + 1);
    t83 = (1U * t82);
    memcpy(t77, t63, t83);
    goto LAB5;

LAB7:;
}

char *ieee_p_1242562249_sub_2177871679217030280_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t27[16];
    char t42[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    int t26;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    unsigned char t51;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    unsigned int t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    char *t61;
    int t62;
    char *t63;
    char *t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t11 + 56U);
    t24 = *((char **)t21);
    t25 = *((int *)t24);
    t26 = (0 - t25);
    t23 = (t26 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = (t11 + 56U);
    t28 = *((char **)t21);
    t29 = *((int *)t28);
    t21 = (t27 + 0U);
    t30 = (t21 + 0U);
    *((int *)t30) = t29;
    t30 = (t21 + 4U);
    *((int *)t30) = 0;
    t30 = (t21 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t21 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t6 + 124U);
    t33 = ((IEEE_P_2592010699) + 4000);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t23);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t27);
    t37 = (t30 + 64U);
    *((char **)t37) = t27;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t23;
    t39 = (t6 + 244U);
    t40 = ((STD_STANDARD) + 824);
    t41 = (t39 + 88U);
    *((char **)t41) = t40;
    t43 = (t39 + 56U);
    *((char **)t43) = t42;
    *((int *)t42) = t5;
    t44 = (t39 + 80U);
    *((unsigned int *)t44) = 4U;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t50 = (t4 + 12U);
    t32 = *((unsigned int *)t50);
    t51 = (t32 <= 1);
    if (t51 == 1)
        goto LAB7;

LAB8:    t52 = (t39 + 56U);
    t53 = *((char **)t52);
    t54 = *((int *)t53);
    t55 = (t54 == 0);
    t49 = t55;

LAB9:    if (t49 != 0)
        goto LAB4;

LAB6:    t8 = (t39 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t11 + 56U);
    t13 = *((char **)t8);
    t20 = *((int *)t13);
    t46 = (t10 > t20);
    if (t46 != 0)
        goto LAB11;

LAB13:
LAB12:    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t13 = (t39 + 56U);
    t16 = *((char **)t13);
    t22 = *((int *)t16);
    t13 = (t17 + 4U);
    t25 = *((int *)t13);
    t18 = (t17 + 8U);
    t26 = *((int *)t18);
    xsi_vhdl_check_range_of_slice(t10, t25, t26, t20, t22, -1);
    t23 = (t9 * 1U);
    t32 = (0 + t23);
    t19 = (t8 + t32);
    t21 = (t30 + 56U);
    t24 = *((char **)t21);
    t21 = (t27 + 0U);
    t29 = *((int *)t21);
    t28 = (t11 + 56U);
    t33 = *((char **)t28);
    t31 = *((int *)t33);
    t28 = (t39 + 56U);
    t34 = *((char **)t28);
    t54 = *((int *)t34);
    t58 = (t31 - t54);
    t56 = (t29 - t58);
    t28 = (t27 + 4U);
    t60 = *((int *)t28);
    t36 = (t27 + 8U);
    t62 = *((int *)t36);
    xsi_vhdl_check_range_of_slice(t29, t60, t62, t58, 0, -1);
    t66 = (t56 * 1U);
    t67 = (0 + t66);
    t37 = (t24 + t67);
    t38 = (t11 + 56U);
    t40 = *((char **)t38);
    t65 = *((int *)t40);
    t38 = (t39 + 56U);
    t41 = *((char **)t38);
    t68 = *((int *)t41);
    t69 = (t68 - t65);
    t70 = (t69 * -1);
    t70 = (t70 + 1);
    t71 = (1U * t70);
    memcpy(t37, t19, t71);
    t8 = (t11 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t11 + 56U);
    t13 = *((char **)t8);
    t20 = *((int *)t13);
    t8 = (t39 + 56U);
    t15 = *((char **)t8);
    t22 = *((int *)t15);
    t25 = (t20 - t22);
    t26 = (t25 + 1);
    t29 = (t26 - t10);
    t9 = (t29 * -1);
    t9 = (t9 + 1);
    t23 = (1U * t9);
    t8 = xsi_get_transient_memory(t23);
    memset(t8, 0, t23);
    t16 = t8;
    t18 = (t3 + 0);
    t19 = (t11 + 56U);
    t21 = *((char **)t19);
    t31 = *((int *)t21);
    t19 = (t17 + 0U);
    t54 = *((int *)t19);
    t24 = (t17 + 8U);
    t58 = *((int *)t24);
    t60 = (t31 - t54);
    t32 = (t60 * t58);
    t28 = (t17 + 4U);
    t62 = *((int *)t28);
    xsi_vhdl_check_range_of_index(t54, t62, t58, t31);
    t56 = (1U * t32);
    t66 = (0 + t56);
    t33 = (t18 + t66);
    t46 = *((unsigned char *)t33);
    memset(t16, t46, t23);
    t34 = (t30 + 56U);
    t36 = *((char **)t34);
    t34 = (t27 + 0U);
    t65 = *((int *)t34);
    t37 = (t11 + 56U);
    t38 = *((char **)t37);
    t68 = *((int *)t38);
    t67 = (t65 - t68);
    t37 = (t11 + 56U);
    t40 = *((char **)t37);
    t69 = *((int *)t40);
    t37 = (t39 + 56U);
    t41 = *((char **)t37);
    t72 = *((int *)t41);
    t73 = (t69 - t72);
    t74 = (t73 + 1);
    t37 = (t27 + 4U);
    t75 = *((int *)t37);
    t43 = (t27 + 8U);
    t76 = *((int *)t43);
    xsi_vhdl_check_range_of_slice(t65, t75, t76, t68, t74, -1);
    t70 = (t67 * 1U);
    t71 = (0 + t70);
    t44 = (t36 + t71);
    t50 = (t11 + 56U);
    t52 = *((char **)t50);
    t77 = *((int *)t52);
    t50 = (t11 + 56U);
    t53 = *((char **)t50);
    t78 = *((int *)t53);
    t50 = (t39 + 56U);
    t57 = *((char **)t50);
    t79 = *((int *)t57);
    t80 = (t78 - t79);
    t81 = (t80 + 1);
    t82 = (t81 - t77);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t44, t8, t84);

LAB5:    t8 = (t30 + 56U);
    t12 = *((char **)t8);
    t8 = (t27 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t27 + 0U);
    t10 = *((int *)t13);
    t15 = (t27 + 4U);
    t20 = *((int *)t15);
    t16 = (t27 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t25 = (t20 - t10);
    t23 = (t25 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t52 = (t4 + 12U);
    t56 = *((unsigned int *)t52);
    t56 = (t56 * 1U);
    t0 = xsi_get_transient_memory(t56);
    memcpy(t0, t3, t56);
    t57 = (t4 + 0U);
    t58 = *((int *)t57);
    t59 = (t4 + 4U);
    t60 = *((int *)t59);
    t61 = (t4 + 8U);
    t62 = *((int *)t61);
    t63 = (t2 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = t58;
    t64 = (t63 + 4U);
    *((int *)t64) = t60;
    t64 = (t63 + 8U);
    *((int *)t64) = t62;
    t65 = (t60 - t58);
    t66 = (t65 * t62);
    t66 = (t66 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t66;
    goto LAB1;

LAB7:    t49 = (unsigned char)1;
    goto LAB9;

LAB10:    goto LAB5;

LAB11:    t8 = (t11 + 56U);
    t15 = *((char **)t8);
    t22 = *((int *)t15);
    t8 = (t39 + 56U);
    t16 = *((char **)t8);
    t8 = (t16 + 0);
    *((int *)t8) = t22;
    goto LAB12;

LAB14:;
}

char *ieee_p_1242562249_sub_2177871677178654844_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t25[16];
    char t41[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    int t54;
    unsigned int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    int t69;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t3 + 0);
    t24 = (t17 + 12U);
    t23 = *((unsigned int *)t24);
    t23 = (t23 * 1U);
    t26 = (t11 + 56U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = (t25 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = t28;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t6 + 124U);
    t32 = ((IEEE_P_2592010699) + 4000);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t23);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    memcpy(t34, t21, t23);
    t36 = (t29 + 64U);
    *((char **)t36) = t25;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t23;
    t38 = (t6 + 244U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t7 + 4U);
    t45 = (t3 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t7 + 12U);
    *((char **)t46) = t4;
    t47 = (t7 + 20U);
    *((int *)t47) = t5;
    t48 = (t11 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 + 1);
    t52 = xsi_vhdl_mod(t5, t51);
    t48 = (t38 + 56U);
    t53 = *((char **)t48);
    t48 = (t53 + 0);
    *((int *)t48) = t52;
    t8 = (t38 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t45 = (t10 != 0);
    if (t45 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t29 + 56U);
    t12 = *((char **)t8);
    t8 = (t25 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t25 + 0U);
    t10 = *((int *)t13);
    t15 = (t25 + 4U);
    t20 = *((int *)t15);
    t16 = (t25 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t28 = (t20 - t10);
    t23 = (t28 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t44) = t3;
    goto LAB2;

LAB4:    t8 = (t3 + 0);
    t13 = (t17 + 0U);
    t20 = *((int *)t13);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t22 = *((int *)t16);
    t15 = (t38 + 56U);
    t18 = *((char **)t15);
    t28 = *((int *)t18);
    t30 = (t22 - t28);
    t9 = (t20 - t30);
    t15 = (t17 + 4U);
    t50 = *((int *)t15);
    t19 = (t17 + 8U);
    t51 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t20, t50, t51, t30, 0, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t52 = *((int *)t24);
    t27 = (t11 + 56U);
    t32 = *((char **)t27);
    t54 = *((int *)t32);
    t55 = (t52 - t54);
    t27 = (t38 + 56U);
    t33 = *((char **)t27);
    t56 = *((int *)t33);
    t27 = (t25 + 4U);
    t57 = *((int *)t27);
    t35 = (t25 + 8U);
    t58 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t52, t57, t58, t54, t56, -1);
    t59 = (t55 * 1U);
    t60 = (0 + t59);
    t36 = (t26 + t60);
    t37 = (t11 + 56U);
    t39 = *((char **)t37);
    t61 = *((int *)t39);
    t37 = (t38 + 56U);
    t40 = *((char **)t37);
    t62 = *((int *)t40);
    t63 = (t61 - t62);
    t64 = (0 - t63);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t66 = (1U * t65);
    memcpy(t36, t21, t66);
    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    t22 = *((int *)t16);
    t13 = (t38 + 56U);
    t18 = *((char **)t13);
    t28 = *((int *)t18);
    t30 = (t22 - t28);
    t50 = (t30 + 1);
    t13 = (t17 + 4U);
    t51 = *((int *)t13);
    t19 = (t17 + 8U);
    t52 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t10, t51, t52, t20, t50, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t54 = *((int *)t24);
    t27 = (t38 + 56U);
    t32 = *((char **)t27);
    t56 = *((int *)t32);
    t57 = (t56 - 1);
    t55 = (t54 - t57);
    t27 = (t25 + 4U);
    t58 = *((int *)t27);
    t33 = (t25 + 8U);
    t61 = *((int *)t33);
    xsi_vhdl_check_range_of_slice(t54, t58, t61, t57, 0, -1);
    t59 = (t55 * 1U);
    t60 = (0 + t59);
    t35 = (t26 + t60);
    t36 = (t11 + 56U);
    t37 = *((char **)t36);
    t62 = *((int *)t37);
    t36 = (t11 + 56U);
    t39 = *((char **)t36);
    t63 = *((int *)t39);
    t36 = (t38 + 56U);
    t40 = *((char **)t36);
    t64 = *((int *)t40);
    t67 = (t63 - t64);
    t68 = (t67 + 1);
    t69 = (t68 - t62);
    t65 = (t69 * -1);
    t65 = (t65 + 1);
    t66 = (1U * t65);
    memcpy(t35, t21, t66);
    goto LAB5;

LAB7:;
}

char *ieee_p_1242562249_sub_2177871677178661378_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[368];
    char t7[24];
    char t14[8];
    char t17[16];
    char t25[16];
    char t41[8];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t3 + 0);
    t24 = (t17 + 12U);
    t23 = *((unsigned int *)t24);
    t23 = (t23 * 1U);
    t26 = (t11 + 56U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = (t25 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = t28;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t6 + 124U);
    t32 = ((IEEE_P_2592010699) + 4000);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t23);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    memcpy(t34, t21, t23);
    t36 = (t29 + 64U);
    *((char **)t36) = t25;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t23;
    t38 = (t6 + 244U);
    t39 = ((STD_STANDARD) + 384);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 4U;
    t44 = (t7 + 4U);
    t45 = (t3 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t7 + 12U);
    *((char **)t46) = t4;
    t47 = (t7 + 20U);
    *((int *)t47) = t5;
    t48 = (t11 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 + 1);
    t52 = xsi_vhdl_mod(t5, t51);
    t48 = (t38 + 56U);
    t53 = *((char **)t48);
    t48 = (t53 + 0);
    *((int *)t48) = t52;
    t8 = (t38 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t45 = (t10 != 0);
    if (t45 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t29 + 56U);
    t12 = *((char **)t8);
    t8 = (t25 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t25 + 0U);
    t10 = *((int *)t13);
    t15 = (t25 + 4U);
    t20 = *((int *)t15);
    t16 = (t25 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t28 = (t20 - t10);
    t23 = (t28 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t44) = t3;
    goto LAB2;

LAB4:    t8 = (t3 + 0);
    t13 = (t17 + 0U);
    t20 = *((int *)t13);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t22 = *((int *)t16);
    t9 = (t20 - t22);
    t15 = (t38 + 56U);
    t18 = *((char **)t15);
    t28 = *((int *)t18);
    t15 = (t17 + 4U);
    t30 = *((int *)t15);
    t19 = (t17 + 8U);
    t50 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t20, t30, t50, t22, t28, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t21 = (t8 + t31);
    t24 = (t29 + 56U);
    t26 = *((char **)t24);
    t24 = (t25 + 0U);
    t51 = *((int *)t24);
    t27 = (t11 + 56U);
    t32 = *((char **)t27);
    t52 = *((int *)t32);
    t27 = (t38 + 56U);
    t33 = *((char **)t27);
    t54 = *((int *)t33);
    t55 = (t52 - t54);
    t56 = (t51 - t55);
    t27 = (t25 + 4U);
    t57 = *((int *)t27);
    t35 = (t25 + 8U);
    t58 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t51, t57, t58, t55, 0, -1);
    t59 = (t56 * 1U);
    t60 = (0 + t59);
    t36 = (t26 + t60);
    t37 = (t11 + 56U);
    t39 = *((char **)t37);
    t61 = *((int *)t39);
    t37 = (t38 + 56U);
    t40 = *((char **)t37);
    t62 = *((int *)t40);
    t63 = (t62 - t61);
    t64 = (t63 * -1);
    t64 = (t64 + 1);
    t65 = (1U * t64);
    memcpy(t36, t21, t65);
    t8 = (t3 + 0);
    t12 = (t17 + 0U);
    t10 = *((int *)t12);
    t13 = (t38 + 56U);
    t15 = *((char **)t13);
    t20 = *((int *)t15);
    t22 = (t20 - 1);
    t9 = (t10 - t22);
    t13 = (t17 + 4U);
    t28 = *((int *)t13);
    t16 = (t17 + 8U);
    t30 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t28, t30, t22, 0, -1);
    t23 = (t9 * 1U);
    t31 = (0 + t23);
    t18 = (t8 + t31);
    t19 = (t29 + 56U);
    t21 = *((char **)t19);
    t19 = (t25 + 0U);
    t50 = *((int *)t19);
    t24 = (t11 + 56U);
    t26 = *((char **)t24);
    t51 = *((int *)t26);
    t56 = (t50 - t51);
    t24 = (t11 + 56U);
    t27 = *((char **)t24);
    t52 = *((int *)t27);
    t24 = (t38 + 56U);
    t32 = *((char **)t24);
    t54 = *((int *)t32);
    t55 = (t52 - t54);
    t57 = (t55 + 1);
    t24 = (t25 + 4U);
    t58 = *((int *)t24);
    t33 = (t25 + 8U);
    t61 = *((int *)t33);
    xsi_vhdl_check_range_of_slice(t50, t58, t61, t51, t57, -1);
    t59 = (t56 * 1U);
    t60 = (0 + t59);
    t35 = (t21 + t60);
    t36 = (t38 + 56U);
    t37 = *((char **)t36);
    t62 = *((int *)t37);
    t63 = (t62 - 1);
    t66 = (0 - t63);
    t64 = (t66 * -1);
    t64 = (t64 + 1);
    t65 = (1U * t64);
    memcpy(t35, t18, t65);
    goto LAB5;

LAB7:;
}

unsigned char ieee_p_1242562249_sub_14865958970891251801_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = 1;
    if (t15 == t17)
        goto LAB6;

LAB7:    t18 = 0;

LAB8:    t0 = t18;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:    t19 = 0;

LAB9:    if (t19 < t15)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t20 = (t2 + t19);
    t21 = (t4 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB7;

LAB11:    t19 = (t19 + 1);
    goto LAB9;

LAB12:;
}

unsigned char ieee_p_1242562249_sub_4501204497521157593_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = 1;
    if (t15 == t17)
        goto LAB6;

LAB7:    t18 = 0;

LAB8:    t0 = t18;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:    t19 = 0;

LAB9:    if (t19 < t15)
        goto LAB10;
    else
        goto LAB8;

LAB10:    t20 = (t2 + t19);
    t21 = (t4 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB7;

LAB11:    t19 = (t19 + 1);
    goto LAB9;

LAB12:;
}

unsigned char ieee_p_1242562249_sub_18072429880659511672_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = xsi_vhdl_lessthan(t18, t2, t15, t4, t17);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_1242562249_sub_5360319670459337316_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t13[16];
    char t31[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = t16;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t16 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t5 + 12U);
    t20 = *((unsigned int *)t27);
    t28 = (t20 - 1);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t30 = (t30 * 1U);
    t32 = (t5 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 - 1);
    t35 = (t31 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = t34;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (t34 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = (t1 + 3080);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t30);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t31);
    t43 = (t36 + 64U);
    *((char **)t43) = t31;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t30;
    t45 = (t7 + 4U);
    t46 = (t2 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t3;
    t48 = (t7 + 20U);
    t49 = (t4 != 0);
    if (t49 == 1)
        goto LAB5;

LAB4:    t50 = (t7 + 28U);
    *((char **)t50) = t5;
    t51 = (t18 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    t53 = (t3 + 12U);
    t38 = *((unsigned int *)t53);
    t38 = (t38 * 1U);
    memcpy(t51, t2, t38);
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    t17 = (t5 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t8, t4, t9);
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t10 = *((int *)t8);
    t17 = (t13 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t46);
    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t19 = *((int *)t22);
    t25 = (t13 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t31 + 0U);
    t10 = *((int *)t8);
    t17 = (t31 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t46);
    t22 = (t36 + 56U);
    t24 = *((char **)t22);
    t22 = (t31 + 0U);
    t19 = *((int *)t22);
    t25 = (t31 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t17 = (t36 + 56U);
    t21 = *((char **)t17);
    t17 = (t31 + 12U);
    t12 = *((unsigned int *)t17);
    t12 = (t12 * 1U);
    t22 = ((IEEE_P_2592010699) + 4000);
    t46 = xsi_vhdl_lessthan(t22, t14, t9, t21, t12);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t2;
    goto LAB2;

LAB5:    *((char **)t48) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_1242562249_sub_10067640937958098223_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    unsigned char t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;

LAB0:    t8 = (t7 + 4U);
    t9 = (t2 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t3;
    t11 = (t7 + 20U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB5;

LAB4:    t13 = (t7 + 28U);
    *((char **)t13) = t5;
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = xsi_vhdl_lessthanEqual(t18, t2, t15, t4, t17);
    t0 = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t2;
    goto LAB2;

LAB5:    *((char **)t11) = t4;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_1242562249_sub_6613294344214855355_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[248];
    char t7[40];
    char t13[16];
    char t31[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t3 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = t16;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t16 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t5 + 12U);
    t20 = *((unsigned int *)t27);
    t28 = (t20 - 1);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    t30 = (t30 + 1);
    t30 = (t30 * 1U);
    t32 = (t5 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (t33 - 1);
    t35 = (t31 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = t34;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (t34 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t6 + 124U);
    t39 = (t1 + 3080);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t30);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t31);
    t43 = (t36 + 64U);
    *((char **)t43) = t31;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t30;
    t45 = (t7 + 4U);
    t46 = (t2 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t3;
    t48 = (t7 + 20U);
    t49 = (t4 != 0);
    if (t49 == 1)
        goto LAB5;

LAB4:    t50 = (t7 + 28U);
    *((char **)t50) = t5;
    t51 = (t18 + 56U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    t53 = (t3 + 12U);
    t38 = *((unsigned int *)t53);
    t38 = (t38 * 1U);
    memcpy(t51, t2, t38);
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    t17 = (t5 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t8, t4, t9);
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t10 = *((int *)t8);
    t17 = (t13 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t46);
    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t19 = *((int *)t22);
    t25 = (t13 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t36 + 56U);
    t14 = *((char **)t8);
    t8 = (t31 + 0U);
    t10 = *((int *)t8);
    t17 = (t31 + 8U);
    t11 = *((int *)t17);
    t16 = (0 - t10);
    t9 = (t16 * t11);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    t46 = *((unsigned char *)t21);
    t49 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t46);
    t22 = (t36 + 56U);
    t24 = *((char **)t22);
    t22 = (t31 + 0U);
    t19 = *((int *)t22);
    t25 = (t31 + 8U);
    t28 = *((int *)t25);
    t29 = (0 - t19);
    t20 = (t29 * t28);
    t30 = (1U * t20);
    t33 = (0 + t30);
    t26 = (t24 + t33);
    *((unsigned char *)t26) = t49;
    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t17 = (t36 + 56U);
    t21 = *((char **)t17);
    t17 = (t31 + 12U);
    t12 = *((unsigned int *)t17);
    t12 = (t12 * 1U);
    t22 = ((IEEE_P_2592010699) + 4000);
    t46 = xsi_vhdl_lessthanEqual(t22, t14, t9, t21, t12);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t2;
    goto LAB2;

LAB5:    *((char **)t48) = t4;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_4437083849341520093_1035706684(char *t1, char *t2, char *t3, char *t4)
{
    char t5[248];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t48[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t49;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t6 + 4U);
    t39 = (t3 != 0);
    if (t39 == 1)
        goto LAB3;

LAB2:    t40 = (t6 + 12U);
    *((char **)t40) = t4;
    t41 = (t4 + 12U);
    t31 = *((unsigned int *)t41);
    t42 = (t31 < 1);
    if (t42 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t48, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t48 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t39 = *((unsigned char *)t15);
    t42 = (t39 == (unsigned char)1);
    if (t42 != 0)
        goto LAB8;

LAB10:
LAB9:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t39 = *((unsigned char *)t15);
    t42 = (t39 == (unsigned char)3);
    if (t42 != 0)
        goto LAB12;

LAB14:
LAB13:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t11, t8);
    t12 = (t26 + 0U);
    t9 = *((int *)t12);
    t14 = (t26 + 4U);
    t19 = *((int *)t14);
    t15 = (t26 + 8U);
    t21 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t9;
    t18 = (t17 + 4U);
    *((int *)t18) = t19;
    t18 = (t17 + 8U);
    *((int *)t18) = t21;
    t24 = (t19 - t9);
    t22 = (t24 * t21);
    t22 = (t22 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t22;

LAB1:    return t0;
LAB3:    *((char **)t38) = t3;
    goto LAB2;

LAB4:    t43 = (t1 + 1288U);
    t44 = *((char **)t43);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t44, 0U);
    t43 = (t2 + 0U);
    t45 = (t43 + 0U);
    *((int *)t45) = 0;
    t45 = (t43 + 4U);
    *((int *)t45) = 1;
    t45 = (t43 + 8U);
    *((int *)t45) = -1;
    t46 = (1 - 0);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t43 + 12U);
    *((unsigned int *)t45) = t47;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t17 = (t29 + 56U);
    t18 = *((char **)t17);
    t17 = (t26 + 12U);
    t47 = *((unsigned int *)t17);
    t47 = (t47 * 1U);
    t0 = xsi_get_transient_memory(t47);
    memcpy(t0, t18, t47);
    t20 = (t26 + 0U);
    t25 = *((int *)t20);
    t23 = (t26 + 4U);
    t28 = *((int *)t23);
    t27 = (t26 + 8U);
    t30 = *((int *)t27);
    t32 = (t2 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = t25;
    t33 = (t32 + 4U);
    *((int *)t33) = t28;
    t33 = (t32 + 8U);
    *((int *)t33) = t30;
    t46 = (t28 - t25);
    t49 = (t46 * t30);
    t49 = (t49 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t49;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    t17 = (t29 + 56U);
    t18 = *((char **)t17);
    t17 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t48, t18, t26);
    t20 = (t29 + 56U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    t27 = (t48 + 12U);
    t47 = *((unsigned int *)t27);
    t49 = (1U * t47);
    memcpy(t20, t17, t49);
    goto LAB13;

LAB15:;
}

char *ieee_p_1242562249_sub_3065688369758319528_1035706684(char *t1, char *t2, char *t3, char *t4)
{
    char t5[488];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t48[8];
    char t61[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned char t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned char t63;
    unsigned char t64;
    int t65;
    int t66;
    int t67;
    unsigned int t68;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = (t1 + 3080);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t22);
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t26);
    t43 = (t38 + 64U);
    *((char **)t43) = t26;
    t44 = (t38 + 80U);
    *((unsigned int *)t44) = t22;
    t45 = (t5 + 364U);
    t46 = ((IEEE_P_2592010699) + 3312);
    t47 = (t45 + 88U);
    *((char **)t47) = t46;
    t49 = (t45 + 56U);
    *((char **)t49) = t48;
    *((unsigned char *)t48) = (unsigned char)3;
    t50 = (t45 + 80U);
    *((unsigned int *)t50) = 1U;
    t51 = (t6 + 4U);
    t52 = (t3 != 0);
    if (t52 == 1)
        goto LAB3;

LAB2:    t53 = (t6 + 12U);
    *((char **)t53) = t4;
    t54 = (t4 + 12U);
    t31 = *((unsigned int *)t54);
    t55 = (t31 < 1);
    if (t55 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t61, t3, t4, (unsigned char)1);
    t11 = (t38 + 56U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t14 = (t61 + 12U);
    t8 = *((unsigned int *)t14);
    t8 = (t8 * 1U);
    memcpy(t11, t7, t8);
    t7 = (t38 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t52 = *((unsigned char *)t15);
    t55 = (t52 == (unsigned char)1);
    if (t55 != 0)
        goto LAB8;

LAB10:
LAB9:    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t19 = 0;
    t21 = t9;

LAB12:    if (t19 <= t21)
        goto LAB13;

LAB15:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t11, t8);
    t12 = (t26 + 0U);
    t9 = *((int *)t12);
    t14 = (t26 + 4U);
    t19 = *((int *)t14);
    t15 = (t26 + 8U);
    t21 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t9;
    t18 = (t17 + 4U);
    *((int *)t18) = t19;
    t18 = (t17 + 8U);
    *((int *)t18) = t21;
    t24 = (t19 - t9);
    t22 = (t24 * t21);
    t22 = (t22 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t22;

LAB1:    return t0;
LAB3:    *((char **)t51) = t3;
    goto LAB2;

LAB4:    t56 = (t1 + 1288U);
    t57 = *((char **)t56);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t57, 0U);
    t56 = (t2 + 0U);
    t58 = (t56 + 0U);
    *((int *)t58) = 0;
    t58 = (t56 + 4U);
    *((int *)t58) = 1;
    t58 = (t56 + 8U);
    *((int *)t58) = -1;
    t59 = (1 - 0);
    t60 = (t59 * -1);
    t60 = (t60 + 1);
    t58 = (t56 + 12U);
    *((unsigned int *)t58) = t60;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t17 = (t38 + 56U);
    t18 = *((char **)t17);
    t17 = (t26 + 12U);
    t60 = *((unsigned int *)t17);
    t60 = (t60 * 1U);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t18, t60);
    t20 = (t26 + 0U);
    t25 = *((int *)t20);
    t23 = (t26 + 4U);
    t28 = *((int *)t23);
    t27 = (t26 + 8U);
    t30 = *((int *)t27);
    t32 = (t2 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = t25;
    t33 = (t32 + 4U);
    *((int *)t33) = t28;
    t33 = (t32 + 8U);
    *((int *)t33) = t30;
    t59 = (t28 - t25);
    t62 = (t59 * t30);
    t62 = (t62 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t62;
    goto LAB1;

LAB11:    goto LAB9;

LAB13:    t11 = (t38 + 56U);
    t12 = *((char **)t11);
    t11 = (t26 + 0U);
    t24 = *((int *)t11);
    t14 = (t26 + 8U);
    t25 = *((int *)t14);
    t28 = (t19 - t24);
    t8 = (t28 * t25);
    t15 = (t26 + 4U);
    t30 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t24, t30, t25, t19);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t17 = (t12 + t31);
    t52 = *((unsigned char *)t17);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t52);
    t18 = (t45 + 56U);
    t20 = *((char **)t18);
    t63 = *((unsigned char *)t20);
    t64 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t55, t63);
    t18 = (t29 + 56U);
    t23 = *((char **)t18);
    t18 = (t26 + 0U);
    t59 = *((int *)t18);
    t27 = (t26 + 8U);
    t65 = *((int *)t27);
    t66 = (t19 - t59);
    t60 = (t66 * t65);
    t32 = (t26 + 4U);
    t67 = *((int *)t32);
    xsi_vhdl_check_range_of_index(t59, t67, t65, t19);
    t62 = (1U * t60);
    t68 = (0 + t62);
    t33 = (t23 + t68);
    *((unsigned char *)t33) = t64;
    t7 = (t45 + 56U);
    t11 = *((char **)t7);
    t52 = *((unsigned char *)t11);
    t7 = (t38 + 56U);
    t12 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t14 = (t26 + 8U);
    t24 = *((int *)t14);
    t25 = (t19 - t9);
    t8 = (t25 * t24);
    t15 = (t26 + 4U);
    t28 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t28, t24, t19);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t17 = (t12 + t31);
    t55 = *((unsigned char *)t17);
    t63 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t55);
    t64 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t52, t63);
    t18 = (t45 + 56U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    *((unsigned char *)t18) = t64;

LAB14:    if (t19 == t21)
        goto LAB15;

LAB16:    t9 = (t19 + 1);
    t19 = t9;
    goto LAB12;

LAB17:;
}

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t17[8];
    char t26[16];
    char t44[16];
    char t74[16];
    char t75[16];
    char *t0;
    char *t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t6 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t10)), ((t12)));
    t14 = (t7 + 4U);
    t15 = ((STD_STANDARD) + 824);
    t16 = (t14 + 88U);
    *((char **)t16) = t15;
    t18 = (t14 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = t13;
    t19 = (t14 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t24 = (0 - t23);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t20 = (t14 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t29 = (t28 - 1);
    t20 = (t26 + 0U);
    t30 = (t20 + 0U);
    *((int *)t30) = t29;
    t30 = (t20 + 4U);
    *((int *)t30) = 0;
    t30 = (t20 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t20 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t7 + 124U);
    t33 = (t1 + 2976);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t25);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t26);
    t37 = (t30 + 64U);
    *((char **)t37) = t26;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t25;
    t39 = (t14 + 56U);
    t40 = *((char **)t39);
    t41 = *((int *)t40);
    t42 = (t41 - 1);
    t43 = (0 - t42);
    t32 = (t43 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t39 = (t14 + 56U);
    t45 = *((char **)t39);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t39 = (t44 + 0U);
    t48 = (t39 + 0U);
    *((int *)t48) = t47;
    t48 = (t39 + 4U);
    *((int *)t48) = 0;
    t48 = (t39 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t39 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 244U);
    t51 = (t1 + 2976);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t32);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t32;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t75, t3, t4, t13);
    t15 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t30 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t26 + 0U);
    t13 = *((int *)t9);
    t15 = (t26 + 0U);
    t22 = *((int *)t15);
    t16 = (t26 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t75, t5, t6, t13);
    t15 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t48 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t48 + 56U);
    t11 = *((char **)t9);
    t9 = (t44 + 0U);
    t13 = *((int *)t9);
    t15 = (t44 + 0U);
    t22 = *((int *)t15);
    t16 = (t44 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t48 + 56U);
    t15 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_1265626764782570828_1035706684(t1, t74, t11, t26, t15, t44, (unsigned char)2);
    t16 = (t74 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t9, t10);
    t18 = (t74 + 0U);
    t13 = *((int *)t18);
    t19 = (t74 + 4U);
    t22 = *((int *)t19);
    t20 = (t74 + 8U);
    t23 = *((int *)t20);
    t21 = (t2 + 0U);
    t27 = (t21 + 0U);
    *((int *)t27) = t13;
    t27 = (t21 + 4U);
    *((int *)t27) = t22;
    t27 = (t21 + 8U);
    *((int *)t27) = t23;
    t24 = (t22 - t13);
    t12 = (t24 * t23);
    t12 = (t12 + 1);
    t27 = (t21 + 12U);
    *((unsigned int *)t27) = t12;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1168U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t19 = (t30 + 56U);
    t20 = *((char **)t19);
    t19 = (t26 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t26 + 0U);
    t28 = *((int *)t21);
    t27 = (t26 + 4U);
    t29 = *((int *)t27);
    t33 = (t26 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB16:    goto LAB14;

LAB17:    t19 = (t48 + 56U);
    t20 = *((char **)t19);
    t19 = (t44 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t44 + 0U);
    t28 = *((int *)t21);
    t27 = (t44 + 4U);
    t29 = *((int *)t27);
    t33 = (t44 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB20:    goto LAB18;

LAB21:;
}

char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t17[8];
    char t26[16];
    char t44[16];
    char t74[16];
    char t75[16];
    char *t0;
    char *t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t6 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t10)), ((t12)));
    t14 = (t7 + 4U);
    t15 = ((STD_STANDARD) + 824);
    t16 = (t14 + 88U);
    *((char **)t16) = t15;
    t18 = (t14 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = t13;
    t19 = (t14 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t24 = (0 - t23);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t20 = (t14 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t29 = (t28 - 1);
    t20 = (t26 + 0U);
    t30 = (t20 + 0U);
    *((int *)t30) = t29;
    t30 = (t20 + 4U);
    *((int *)t30) = 0;
    t30 = (t20 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t20 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t7 + 124U);
    t33 = (t1 + 3080);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t25);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t26);
    t37 = (t30 + 64U);
    *((char **)t37) = t26;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t25;
    t39 = (t14 + 56U);
    t40 = *((char **)t39);
    t41 = *((int *)t40);
    t42 = (t41 - 1);
    t43 = (0 - t42);
    t32 = (t43 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t39 = (t14 + 56U);
    t45 = *((char **)t39);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t39 = (t44 + 0U);
    t48 = (t39 + 0U);
    *((int *)t48) = t47;
    t48 = (t39 + 4U);
    *((int *)t48) = 0;
    t48 = (t39 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t39 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 244U);
    t51 = (t1 + 3080);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t32);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t32;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t75, t3, t4, t13);
    t15 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t30 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t26 + 0U);
    t13 = *((int *)t9);
    t15 = (t26 + 0U);
    t22 = *((int *)t15);
    t16 = (t26 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t75, t5, t6, t13);
    t15 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t48 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t48 + 56U);
    t11 = *((char **)t9);
    t9 = (t44 + 0U);
    t13 = *((int *)t9);
    t15 = (t44 + 0U);
    t22 = *((int *)t15);
    t16 = (t44 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t48 + 56U);
    t15 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_15116483354026557501_1035706684(t1, t74, t11, t26, t15, t44, (unsigned char)2);
    t16 = (t74 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t9, t10);
    t18 = (t74 + 0U);
    t13 = *((int *)t18);
    t19 = (t74 + 4U);
    t22 = *((int *)t19);
    t20 = (t74 + 8U);
    t23 = *((int *)t20);
    t21 = (t2 + 0U);
    t27 = (t21 + 0U);
    *((int *)t27) = t13;
    t27 = (t21 + 4U);
    *((int *)t27) = t22;
    t27 = (t21 + 8U);
    *((int *)t27) = t23;
    t24 = (t22 - t13);
    t12 = (t24 * t23);
    t12 = (t12 + 1);
    t27 = (t21 + 12U);
    *((unsigned int *)t27) = t12;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1288U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t19 = (t30 + 56U);
    t20 = *((char **)t19);
    t19 = (t26 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t26 + 0U);
    t28 = *((int *)t21);
    t27 = (t26 + 4U);
    t29 = *((int *)t27);
    t33 = (t26 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB16:    goto LAB14;

LAB17:    t19 = (t48 + 56U);
    t20 = *((char **)t19);
    t19 = (t44 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t44 + 0U);
    t28 = *((int *)t21);
    t27 = (t44 + 4U);
    t29 = *((int *)t27);
    t33 = (t44 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB20:    goto LAB18;

LAB21:;
}

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_1701011461141717515_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_1940155297735201586_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_1701011461141717515_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_800139796931496790_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_3525738511873186323_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_3468090124142232570_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_3525738511873186323_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t17[8];
    char t26[16];
    char t44[16];
    char t74[16];
    char t75[16];
    char *t0;
    char *t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t6 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t10)), ((t12)));
    t14 = (t7 + 4U);
    t15 = ((STD_STANDARD) + 824);
    t16 = (t14 + 88U);
    *((char **)t16) = t15;
    t18 = (t14 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = t13;
    t19 = (t14 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t24 = (0 - t23);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t20 = (t14 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t29 = (t28 - 1);
    t20 = (t26 + 0U);
    t30 = (t20 + 0U);
    *((int *)t30) = t29;
    t30 = (t20 + 4U);
    *((int *)t30) = 0;
    t30 = (t20 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t20 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t7 + 124U);
    t33 = (t1 + 2976);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t25);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t26);
    t37 = (t30 + 64U);
    *((char **)t37) = t26;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t25;
    t39 = (t14 + 56U);
    t40 = *((char **)t39);
    t41 = *((int *)t40);
    t42 = (t41 - 1);
    t43 = (0 - t42);
    t32 = (t43 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t39 = (t14 + 56U);
    t45 = *((char **)t39);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t39 = (t44 + 0U);
    t48 = (t39 + 0U);
    *((int *)t48) = t47;
    t48 = (t39 + 4U);
    *((int *)t48) = 0;
    t48 = (t39 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t39 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 244U);
    t51 = (t1 + 2976);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t32);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t32;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t75, t3, t4, t13);
    t15 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t30 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t26 + 0U);
    t13 = *((int *)t9);
    t15 = (t26 + 0U);
    t22 = *((int *)t15);
    t16 = (t26 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t75, t5, t6, t13);
    t15 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t48 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t48 + 56U);
    t11 = *((char **)t9);
    t9 = (t44 + 0U);
    t13 = *((int *)t9);
    t15 = (t44 + 0U);
    t22 = *((int *)t15);
    t16 = (t44 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t48 + 56U);
    t15 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_4758460051581457611_1035706684(t1, t75, t15, t44);
    t16 = ieee_p_1242562249_sub_1265626764782570828_1035706684(t1, t74, t11, t26, t9, t75, (unsigned char)3);
    t18 = (t74 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t16, t10);
    t19 = (t74 + 0U);
    t13 = *((int *)t19);
    t20 = (t74 + 4U);
    t22 = *((int *)t20);
    t21 = (t74 + 8U);
    t23 = *((int *)t21);
    t27 = (t2 + 0U);
    t33 = (t27 + 0U);
    *((int *)t33) = t13;
    t33 = (t27 + 4U);
    *((int *)t33) = t22;
    t33 = (t27 + 8U);
    *((int *)t33) = t23;
    t24 = (t22 - t13);
    t12 = (t24 * t23);
    t12 = (t12 + 1);
    t33 = (t27 + 12U);
    *((unsigned int *)t33) = t12;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1168U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t19 = (t30 + 56U);
    t20 = *((char **)t19);
    t19 = (t26 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t26 + 0U);
    t28 = *((int *)t21);
    t27 = (t26 + 4U);
    t29 = *((int *)t27);
    t33 = (t26 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB16:    goto LAB14;

LAB17:    t19 = (t48 + 56U);
    t20 = *((char **)t19);
    t19 = (t44 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t44 + 0U);
    t28 = *((int *)t21);
    t27 = (t44 + 4U);
    t29 = *((int *)t27);
    t33 = (t44 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB20:    goto LAB18;

LAB21:;
}

char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t17[8];
    char t26[16];
    char t44[16];
    char t74[16];
    char t75[16];
    char *t0;
    char *t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    char *t45;
    int t46;
    int t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    char *t64;
    unsigned char t65;
    char *t66;
    unsigned int t67;
    unsigned char t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    unsigned int t73;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t6 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t10)), ((t12)));
    t14 = (t7 + 4U);
    t15 = ((STD_STANDARD) + 824);
    t16 = (t14 + 88U);
    *((char **)t16) = t15;
    t18 = (t14 + 56U);
    *((char **)t18) = t17;
    *((int *)t17) = t13;
    t19 = (t14 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t24 = (0 - t23);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t25 = (t25 * 1U);
    t20 = (t14 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t29 = (t28 - 1);
    t20 = (t26 + 0U);
    t30 = (t20 + 0U);
    *((int *)t30) = t29;
    t30 = (t20 + 4U);
    *((int *)t30) = 0;
    t30 = (t20 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t20 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t7 + 124U);
    t33 = (t1 + 3080);
    t34 = (t30 + 88U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t25);
    t36 = (t30 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t26);
    t37 = (t30 + 64U);
    *((char **)t37) = t26;
    t38 = (t30 + 80U);
    *((unsigned int *)t38) = t25;
    t39 = (t14 + 56U);
    t40 = *((char **)t39);
    t41 = *((int *)t40);
    t42 = (t41 - 1);
    t43 = (0 - t42);
    t32 = (t43 * -1);
    t32 = (t32 + 1);
    t32 = (t32 * 1U);
    t39 = (t14 + 56U);
    t45 = *((char **)t39);
    t46 = *((int *)t45);
    t47 = (t46 - 1);
    t39 = (t44 + 0U);
    t48 = (t39 + 0U);
    *((int *)t48) = t47;
    t48 = (t39 + 4U);
    *((int *)t48) = 0;
    t48 = (t39 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - t47);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t39 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t7 + 244U);
    t51 = (t1 + 3080);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t53 = (char *)alloca(t32);
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t44);
    t55 = (t48 + 64U);
    *((char **)t55) = t44;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = t32;
    t57 = (t8 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB3;

LAB2:    t59 = (t8 + 12U);
    *((char **)t59) = t4;
    t60 = (t8 + 20U);
    t61 = (t5 != 0);
    if (t61 == 1)
        goto LAB5;

LAB4:    t62 = (t8 + 28U);
    *((char **)t62) = t6;
    t64 = (t4 + 12U);
    t50 = *((unsigned int *)t64);
    t65 = (t50 < 1);
    if (t65 == 1)
        goto LAB9;

LAB10:    t66 = (t6 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t67 < 1);
    t63 = t68;

LAB11:    if (t63 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t75, t3, t4, t13);
    t15 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t30 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t26 + 0U);
    t13 = *((int *)t9);
    t15 = (t26 + 0U);
    t22 = *((int *)t15);
    t16 = (t26 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t14 + 56U);
    t11 = *((char **)t9);
    t13 = *((int *)t11);
    t9 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t75, t5, t6, t13);
    t15 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t74, t9, t75, (unsigned char)1);
    t16 = (t48 + 56U);
    t18 = *((char **)t16);
    t16 = (t18 + 0);
    t19 = (t74 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t16, t15, t10);
    t9 = (t48 + 56U);
    t11 = *((char **)t9);
    t9 = (t44 + 0U);
    t13 = *((int *)t9);
    t15 = (t44 + 0U);
    t22 = *((int *)t15);
    t16 = (t44 + 8U);
    t23 = *((int *)t16);
    t24 = (t13 - t22);
    t10 = (t24 * t23);
    t12 = (1U * t10);
    t25 = (0 + t12);
    t18 = (t11 + t25);
    t58 = *((unsigned char *)t18);
    t61 = (t58 == (unsigned char)1);
    if (t61 != 0)
        goto LAB17;

LAB19:
LAB18:    t9 = (t30 + 56U);
    t11 = *((char **)t9);
    t9 = (t48 + 56U);
    t15 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_420421356293926614_1035706684(t1, t75, t15, t44);
    t16 = ieee_p_1242562249_sub_15116483354026557501_1035706684(t1, t74, t11, t26, t9, t75, (unsigned char)3);
    t18 = (t74 + 12U);
    t10 = *((unsigned int *)t18);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t16, t10);
    t19 = (t74 + 0U);
    t13 = *((int *)t19);
    t20 = (t74 + 4U);
    t22 = *((int *)t20);
    t21 = (t74 + 8U);
    t23 = *((int *)t21);
    t27 = (t2 + 0U);
    t33 = (t27 + 0U);
    *((int *)t33) = t13;
    t33 = (t27 + 4U);
    *((int *)t33) = t22;
    t33 = (t27 + 8U);
    *((int *)t33) = t23;
    t24 = (t22 - t13);
    t12 = (t24 * t23);
    t12 = (t12 + 1);
    t33 = (t27 + 12U);
    *((unsigned int *)t33) = t12;

LAB1:    return t0;
LAB3:    *((char **)t57) = t3;
    goto LAB2;

LAB5:    *((char **)t60) = t5;
    goto LAB4;

LAB6:    t69 = (t1 + 1288U);
    t70 = *((char **)t69);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t70, 0U);
    t69 = (t2 + 0U);
    t71 = (t69 + 0U);
    *((int *)t71) = 0;
    t71 = (t69 + 4U);
    *((int *)t71) = 1;
    t71 = (t69 + 8U);
    *((int *)t71) = -1;
    t72 = (1 - 0);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t69 + 12U);
    *((unsigned int *)t71) = t73;
    goto LAB1;

LAB9:    t63 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t19 = (t30 + 56U);
    t20 = *((char **)t19);
    t19 = (t26 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t26 + 0U);
    t28 = *((int *)t21);
    t27 = (t26 + 4U);
    t29 = *((int *)t27);
    t33 = (t26 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB16:    goto LAB14;

LAB17:    t19 = (t48 + 56U);
    t20 = *((char **)t19);
    t19 = (t44 + 12U);
    t32 = *((unsigned int *)t19);
    t32 = (t32 * 1U);
    t0 = xsi_get_transient_memory(t32);
    memcpy(t0, t20, t32);
    t21 = (t44 + 0U);
    t28 = *((int *)t21);
    t27 = (t44 + 4U);
    t29 = *((int *)t27);
    t33 = (t44 + 8U);
    t31 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t28;
    t36 = (t34 + 4U);
    *((int *)t36) = t29;
    t36 = (t34 + 8U);
    *((int *)t36) = t31;
    t41 = (t29 - t28);
    t50 = (t41 * t31);
    t50 = (t50 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t50;
    goto LAB1;

LAB20:    goto LAB18;

LAB21:;
}

char *ieee_p_1242562249_sub_1006216973935724872_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_1940155297735273460_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_800139796931568664_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_3525738511873258197_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_3468090124142304444_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_3525738511873258197_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_2177518728674633585_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t87[16];
    char t111[16];
    char t145[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    int t73;
    int t74;
    int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    int t83;
    int t84;
    int t85;
    unsigned int t86;
    char *t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    int t92;
    int t93;
    char *t94;
    char *t95;
    int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    int t107;
    int t108;
    int t109;
    unsigned int t110;
    char *t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    int t116;
    int t117;
    char *t118;
    char *t119;
    int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned char t129;
    char *t130;
    char *t131;
    unsigned char t132;
    char *t133;
    unsigned char t134;
    char *t135;
    unsigned char t136;
    char *t137;
    unsigned int t138;
    unsigned char t139;
    char *t140;
    char *t141;
    char *t142;
    int t143;
    unsigned int t144;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 2976);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 2976);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t6 + 12U);
    t72 = *((unsigned int *)t71);
    t73 = (t63 + t72);
    t74 = (t73 - 1);
    t75 = (0 - t74);
    t76 = (t75 * -1);
    t76 = (t76 + 1);
    t76 = (t76 * 1U);
    t77 = xsi_get_transient_memory(t76);
    memset(t77, 0, t76);
    t78 = t77;
    memset(t78, (unsigned char)2, t76);
    t79 = (t4 + 12U);
    t80 = *((unsigned int *)t79);
    t81 = (t6 + 12U);
    t82 = *((unsigned int *)t81);
    t83 = (t80 + t82);
    t84 = (t83 - 1);
    t85 = (0 - t84);
    t86 = (t85 * -1);
    t86 = (t86 + 1);
    t86 = (t86 * 1U);
    t88 = (t4 + 12U);
    t89 = *((unsigned int *)t88);
    t90 = (t6 + 12U);
    t91 = *((unsigned int *)t90);
    t92 = (t89 + t91);
    t93 = (t92 - 1);
    t94 = (t87 + 0U);
    t95 = (t94 + 0U);
    *((int *)t95) = t93;
    t95 = (t94 + 4U);
    *((int *)t95) = 0;
    t95 = (t94 + 8U);
    *((int *)t95) = -1;
    t96 = (0 - t93);
    t97 = (t96 * -1);
    t97 = (t97 + 1);
    t95 = (t94 + 12U);
    *((unsigned int *)t95) = t97;
    t95 = (t7 + 484U);
    t98 = (t1 + 2976);
    t99 = (t95 + 88U);
    *((char **)t99) = t98;
    t100 = (char *)alloca(t86);
    t101 = (t95 + 56U);
    *((char **)t101) = t100;
    memcpy(t100, t77, t86);
    t102 = (t95 + 64U);
    *((char **)t102) = t87;
    t103 = (t95 + 80U);
    *((unsigned int *)t103) = t86;
    t104 = (t4 + 12U);
    t97 = *((unsigned int *)t104);
    t105 = (t6 + 12U);
    t106 = *((unsigned int *)t105);
    t107 = (t97 + t106);
    t108 = (t107 - 1);
    t109 = (0 - t108);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t110 = (t110 * 1U);
    t112 = (t4 + 12U);
    t113 = *((unsigned int *)t112);
    t114 = (t6 + 12U);
    t115 = *((unsigned int *)t114);
    t116 = (t113 + t115);
    t117 = (t116 - 1);
    t118 = (t111 + 0U);
    t119 = (t118 + 0U);
    *((int *)t119) = t117;
    t119 = (t118 + 4U);
    *((int *)t119) = 0;
    t119 = (t118 + 8U);
    *((int *)t119) = -1;
    t120 = (0 - t117);
    t121 = (t120 * -1);
    t121 = (t121 + 1);
    t119 = (t118 + 12U);
    *((unsigned int *)t119) = t121;
    t119 = (t7 + 604U);
    t122 = (t1 + 2976);
    t123 = (t119 + 88U);
    *((char **)t123) = t122;
    t124 = (char *)alloca(t110);
    t125 = (t119 + 56U);
    *((char **)t125) = t124;
    xsi_type_set_default_value(t122, t124, t111);
    t126 = (t119 + 64U);
    *((char **)t126) = t111;
    t127 = (t119 + 80U);
    *((unsigned int *)t127) = t110;
    t128 = (t8 + 4U);
    t129 = (t3 != 0);
    if (t129 == 1)
        goto LAB3;

LAB2:    t130 = (t8 + 12U);
    *((char **)t130) = t4;
    t131 = (t8 + 20U);
    t132 = (t5 != 0);
    if (t132 == 1)
        goto LAB5;

LAB4:    t133 = (t8 + 28U);
    *((char **)t133) = t6;
    t135 = (t4 + 12U);
    t121 = *((unsigned int *)t135);
    t136 = (t121 < 1);
    if (t136 == 1)
        goto LAB9;

LAB10:    t137 = (t6 + 12U);
    t138 = *((unsigned int *)t137);
    t139 = (t138 < 1);
    t134 = t139;

LAB11:    if (t134 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t145, t9, t27, (unsigned char)1);
    t14 = (t45 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t145 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t145, t9, t34, (unsigned char)1);
    t14 = (t61 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t145 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t132 = *((unsigned char *)t17);
    t134 = (t132 == (unsigned char)1);
    if (t134 == 1)
        goto LAB16;

LAB17:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = (t58 + 0U);
    t36 = *((int *)t18);
    t23 = (t58 + 0U);
    t38 = *((int *)t23);
    t25 = (t58 + 8U);
    t40 = *((int *)t25);
    t41 = (t36 - t38);
    t47 = (t41 * t40);
    t63 = (1U * t47);
    t72 = (0 + t63);
    t26 = (t22 + t72);
    t136 = *((unsigned char *)t26);
    t139 = (t136 == (unsigned char)1);
    t129 = t139;

LAB18:    if (t129 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t61 + 56U);
    t13 = *((char **)t9);
    t9 = (t87 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t145, t13, t58, ((t10)));
    t16 = (t119 + 56U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t145 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t14, t19);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t20 = 0;
    t30 = t11;

LAB20:    if (t20 <= t30)
        goto LAB21;

LAB23:    t9 = (t95 + 56U);
    t13 = *((char **)t9);
    t9 = (t87 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t87 + 0U);
    t11 = *((int *)t14);
    t16 = (t87 + 4U);
    t20 = *((int *)t16);
    t17 = (t87 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;

LAB1:    return t0;
LAB3:    *((char **)t128) = t3;
    goto LAB2;

LAB5:    *((char **)t131) = t5;
    goto LAB4;

LAB6:    t140 = (t1 + 1168U);
    t141 = *((char **)t140);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t141, 0U);
    t140 = (t2 + 0U);
    t142 = (t140 + 0U);
    *((int *)t142) = 0;
    t142 = (t140 + 4U);
    *((int *)t142) = 1;
    t142 = (t140 + 8U);
    *((int *)t142) = -1;
    t143 = (1 - 0);
    t144 = (t143 * -1);
    t144 = (t144 + 1);
    t142 = (t140 + 12U);
    *((unsigned int *)t142) = t144;
    goto LAB1;

LAB9:    t134 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t87 + 12U);
    t76 = *((unsigned int *)t28);
    t76 = (t76 * 1U);
    t29 = xsi_get_transient_memory(t76);
    memset(t29, 0, t76);
    t31 = t29;
    memset(t31, (unsigned char)1, t76);
    t35 = (t95 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t87 + 12U);
    t80 = *((unsigned int *)t39);
    t80 = (t80 * 1U);
    memcpy(t35, t29, t80);
    t9 = (t95 + 56U);
    t13 = *((char **)t9);
    t9 = (t87 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t87 + 0U);
    t11 = *((int *)t14);
    t16 = (t87 + 4U);
    t20 = *((int *)t16);
    t17 = (t87 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t129 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB21:    t9 = (t45 + 56U);
    t14 = *((char **)t9);
    t9 = (t42 + 0U);
    t32 = *((int *)t9);
    t16 = (t42 + 8U);
    t36 = *((int *)t16);
    t38 = (t20 - t32);
    t10 = (t38 * t36);
    t17 = (t42 + 4U);
    t40 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t32, t40, t36, t20);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t18 = (t14 + t33);
    t129 = *((unsigned char *)t18);
    t132 = (t129 == (unsigned char)3);
    if (t132 != 0)
        goto LAB24;

LAB26:
LAB25:    t9 = (t119 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_1987757588013599599_1035706684(t1, t145, t13, t111, 1);
    t14 = (t119 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t145 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);

LAB22:    if (t20 == t30)
        goto LAB23;

LAB27:    t11 = (t20 + 1);
    t20 = t11;
    goto LAB20;

LAB24:    t22 = (t95 + 56U);
    t23 = *((char **)t22);
    t22 = (t119 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_1242562249_sub_1701011461141717515_1035706684(t1, t145, t23, t87, t25, t111);
    t26 = (t95 + 56U);
    t28 = *((char **)t26);
    t26 = (t28 + 0);
    t29 = (t145 + 12U);
    t47 = *((unsigned int *)t29);
    t63 = (1U * t47);
    memcpy(t26, t22, t63);
    goto LAB25;

LAB28:;
}

char *ieee_p_1242562249_sub_2598175070666390882_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t32[16];
    char t48[16];
    char t78[16];
    char t102[16];
    char t135[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    int t34;
    char *t35;
    int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    int t47;
    char *t49;
    int t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    int t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    int t74;
    int t75;
    int t76;
    unsigned int t77;
    char *t79;
    int t80;
    char *t81;
    int t82;
    int t83;
    int t84;
    char *t85;
    int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    int t96;
    char *t97;
    int t98;
    int t99;
    int t100;
    int t101;
    char *t103;
    int t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    char *t109;
    int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned char t119;
    char *t120;
    char *t121;
    unsigned char t122;
    char *t123;
    unsigned char t124;
    char *t125;
    char *t126;
    int t127;
    unsigned char t128;
    char *t129;
    int t130;
    unsigned char t131;
    char *t132;
    char *t133;
    int t134;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t27 = (t12 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t27 = (t12 + 56U);
    t33 = *((char **)t27);
    t34 = *((int *)t33);
    t27 = (t32 + 0U);
    t35 = (t27 + 0U);
    *((int *)t35) = t34;
    t35 = (t27 + 4U);
    *((int *)t35) = 0;
    t35 = (t27 + 8U);
    *((int *)t35) = -1;
    t36 = (0 - t34);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t35 = (t27 + 12U);
    *((unsigned int *)t35) = t37;
    t35 = (t7 + 244U);
    t38 = (t1 + 3080);
    t39 = (t35 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t31);
    t41 = (t35 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t32);
    t42 = (t35 + 64U);
    *((char **)t42) = t32;
    t43 = (t35 + 80U);
    *((unsigned int *)t43) = t31;
    t44 = (t21 + 56U);
    t45 = *((char **)t44);
    t46 = *((int *)t45);
    t47 = (0 - t46);
    t37 = (t47 * -1);
    t37 = (t37 + 1);
    t37 = (t37 * 1U);
    t44 = (t21 + 56U);
    t49 = *((char **)t44);
    t50 = *((int *)t49);
    t44 = (t48 + 0U);
    t51 = (t44 + 0U);
    *((int *)t51) = t50;
    t51 = (t44 + 4U);
    *((int *)t51) = 0;
    t51 = (t44 + 8U);
    *((int *)t51) = -1;
    t52 = (0 - t50);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t44 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t7 + 364U);
    t54 = (t1 + 3080);
    t55 = (t51 + 88U);
    *((char **)t55) = t54;
    t56 = (char *)alloca(t37);
    t57 = (t51 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t48);
    t58 = (t51 + 64U);
    *((char **)t58) = t48;
    t59 = (t51 + 80U);
    *((unsigned int *)t59) = t37;
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t62 = *((int *)t61);
    t60 = (t21 + 56U);
    t63 = *((char **)t60);
    t64 = *((int *)t63);
    t65 = (t62 + t64);
    t66 = (t65 + 1);
    t67 = (0 - t66);
    t53 = (t67 * -1);
    t53 = (t53 + 1);
    t53 = (t53 * 1U);
    t60 = xsi_get_transient_memory(t53);
    memset(t60, 0, t53);
    t68 = t60;
    memset(t68, (unsigned char)2, t53);
    t69 = (t12 + 56U);
    t70 = *((char **)t69);
    t71 = *((int *)t70);
    t69 = (t21 + 56U);
    t72 = *((char **)t69);
    t73 = *((int *)t72);
    t74 = (t71 + t73);
    t75 = (t74 + 1);
    t76 = (0 - t75);
    t77 = (t76 * -1);
    t77 = (t77 + 1);
    t77 = (t77 * 1U);
    t69 = (t12 + 56U);
    t79 = *((char **)t69);
    t80 = *((int *)t79);
    t69 = (t21 + 56U);
    t81 = *((char **)t69);
    t82 = *((int *)t81);
    t83 = (t80 + t82);
    t84 = (t83 + 1);
    t69 = (t78 + 0U);
    t85 = (t69 + 0U);
    *((int *)t85) = t84;
    t85 = (t69 + 4U);
    *((int *)t85) = 0;
    t85 = (t69 + 8U);
    *((int *)t85) = -1;
    t86 = (0 - t84);
    t87 = (t86 * -1);
    t87 = (t87 + 1);
    t85 = (t69 + 12U);
    *((unsigned int *)t85) = t87;
    t85 = (t7 + 484U);
    t88 = (t1 + 3080);
    t89 = (t85 + 88U);
    *((char **)t89) = t88;
    t90 = (char *)alloca(t77);
    t91 = (t85 + 56U);
    *((char **)t91) = t90;
    memcpy(t90, t60, t77);
    t92 = (t85 + 64U);
    *((char **)t92) = t78;
    t93 = (t85 + 80U);
    *((unsigned int *)t93) = t77;
    t94 = (t12 + 56U);
    t95 = *((char **)t94);
    t96 = *((int *)t95);
    t94 = (t21 + 56U);
    t97 = *((char **)t94);
    t98 = *((int *)t97);
    t99 = (t96 + t98);
    t100 = (t99 + 1);
    t101 = (0 - t100);
    t87 = (t101 * -1);
    t87 = (t87 + 1);
    t87 = (t87 * 1U);
    t94 = (t12 + 56U);
    t103 = *((char **)t94);
    t104 = *((int *)t103);
    t94 = (t21 + 56U);
    t105 = *((char **)t94);
    t106 = *((int *)t105);
    t107 = (t104 + t106);
    t108 = (t107 + 1);
    t94 = (t102 + 0U);
    t109 = (t94 + 0U);
    *((int *)t109) = t108;
    t109 = (t94 + 4U);
    *((int *)t109) = 0;
    t109 = (t94 + 8U);
    *((int *)t109) = -1;
    t110 = (0 - t108);
    t111 = (t110 * -1);
    t111 = (t111 + 1);
    t109 = (t94 + 12U);
    *((unsigned int *)t109) = t111;
    t109 = (t7 + 604U);
    t112 = (t1 + 3080);
    t113 = (t109 + 88U);
    *((char **)t113) = t112;
    t114 = (char *)alloca(t87);
    t115 = (t109 + 56U);
    *((char **)t115) = t114;
    xsi_type_set_default_value(t112, t114, t102);
    t116 = (t109 + 64U);
    *((char **)t116) = t102;
    t117 = (t109 + 80U);
    *((unsigned int *)t117) = t87;
    t118 = (t8 + 4U);
    t119 = (t3 != 0);
    if (t119 == 1)
        goto LAB3;

LAB2:    t120 = (t8 + 12U);
    *((char **)t120) = t4;
    t121 = (t8 + 20U);
    t122 = (t5 != 0);
    if (t122 == 1)
        goto LAB5;

LAB4:    t123 = (t8 + 28U);
    *((char **)t123) = t6;
    t125 = (t12 + 56U);
    t126 = *((char **)t125);
    t127 = *((int *)t126);
    t128 = (t127 < 0);
    if (t128 == 1)
        goto LAB9;

LAB10:    t125 = (t21 + 56U);
    t129 = *((char **)t125);
    t130 = *((int *)t129);
    t131 = (t130 < 0);
    t124 = t131;

LAB11:    if (t124 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t135, t3, t4, (unsigned char)1);
    t13 = (t35 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t16 = (t135 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t13, t9, t10);
    t9 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t135, t5, t6, (unsigned char)1);
    t13 = (t51 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t16 = (t135 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t13, t9, t10);
    t9 = (t35 + 56U);
    t13 = *((char **)t9);
    t9 = (t12 + 56U);
    t14 = *((char **)t9);
    t11 = *((int *)t14);
    t9 = (t32 + 0U);
    t20 = *((int *)t9);
    t16 = (t32 + 8U);
    t29 = *((int *)t16);
    t30 = (t11 - t20);
    t10 = (t30 * t29);
    t17 = (t32 + 4U);
    t34 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t20, t34, t29, t11);
    t19 = (1U * t10);
    t31 = (0 + t19);
    t18 = (t13 + t31);
    t122 = *((unsigned char *)t18);
    t124 = (t122 == (unsigned char)1);
    if (t124 == 1)
        goto LAB16;

LAB17:    t22 = (t51 + 56U);
    t23 = *((char **)t22);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t36 = *((int *)t25);
    t22 = (t48 + 0U);
    t46 = *((int *)t22);
    t26 = (t48 + 8U);
    t47 = *((int *)t26);
    t50 = (t36 - t46);
    t37 = (t50 * t47);
    t27 = (t48 + 4U);
    t52 = *((int *)t27);
    xsi_vhdl_check_range_of_index(t46, t52, t47, t36);
    t53 = (1U * t37);
    t77 = (0 + t53);
    t28 = (t23 + t77);
    t128 = *((unsigned char *)t28);
    t131 = (t128 == (unsigned char)1);
    t119 = t131;

LAB18:    if (t119 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t51 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t135, t13, t48, ((t10)));
    t16 = (t109 + 56U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t135 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    memcpy(t16, t14, t19);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t11 = *((int *)t13);
    t20 = (t11 - 1);
    t29 = 0;
    t30 = t20;

LAB20:    if (t29 <= t30)
        goto LAB21;

LAB23:    t9 = (t35 + 56U);
    t13 = *((char **)t9);
    t9 = (t12 + 56U);
    t14 = *((char **)t9);
    t11 = *((int *)t14);
    t9 = (t32 + 0U);
    t20 = *((int *)t9);
    t16 = (t32 + 8U);
    t29 = *((int *)t16);
    t30 = (t11 - t20);
    t10 = (t30 * t29);
    t17 = (t32 + 4U);
    t34 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t20, t34, t29, t11);
    t19 = (1U * t10);
    t31 = (0 + t19);
    t18 = (t13 + t31);
    t119 = *((unsigned char *)t18);
    t122 = (t119 == (unsigned char)3);
    if (t122 != 0)
        goto LAB28;

LAB30:
LAB29:    t9 = (t85 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t78 + 0U);
    t11 = *((int *)t14);
    t16 = (t78 + 4U);
    t20 = *((int *)t16);
    t17 = (t78 + 8U);
    t29 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t29;
    t30 = (t20 - t11);
    t19 = (t30 * t29);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;

LAB1:    return t0;
LAB3:    *((char **)t118) = t3;
    goto LAB2;

LAB5:    *((char **)t121) = t5;
    goto LAB4;

LAB6:    t125 = (t1 + 1288U);
    t132 = *((char **)t125);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t132, 0U);
    t125 = (t2 + 0U);
    t133 = (t125 + 0U);
    *((int *)t133) = 0;
    t133 = (t125 + 4U);
    *((int *)t133) = 1;
    t133 = (t125 + 8U);
    *((int *)t133) = -1;
    t134 = (1 - 0);
    t111 = (t134 * -1);
    t111 = (t111 + 1);
    t133 = (t125 + 12U);
    *((unsigned int *)t133) = t111;
    goto LAB1;

LAB9:    t124 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t33 = (t78 + 12U);
    t87 = *((unsigned int *)t33);
    t87 = (t87 * 1U);
    t38 = xsi_get_transient_memory(t87);
    memset(t38, 0, t87);
    t39 = t38;
    memset(t39, (unsigned char)1, t87);
    t41 = (t85 + 56U);
    t42 = *((char **)t41);
    t41 = (t42 + 0);
    t43 = (t78 + 12U);
    t111 = *((unsigned int *)t43);
    t111 = (t111 * 1U);
    memcpy(t41, t38, t111);
    t9 = (t85 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t78 + 0U);
    t11 = *((int *)t14);
    t16 = (t78 + 4U);
    t20 = *((int *)t16);
    t17 = (t78 + 8U);
    t29 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t29;
    t30 = (t20 - t11);
    t19 = (t30 * t29);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t119 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB21:    t9 = (t35 + 56U);
    t14 = *((char **)t9);
    t9 = (t32 + 0U);
    t34 = *((int *)t9);
    t16 = (t32 + 8U);
    t36 = *((int *)t16);
    t46 = (t29 - t34);
    t10 = (t46 * t36);
    t17 = (t32 + 4U);
    t47 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t34, t47, t36, t29);
    t19 = (1U * t10);
    t31 = (0 + t19);
    t18 = (t14 + t31);
    t119 = *((unsigned char *)t18);
    t122 = (t119 == (unsigned char)3);
    if (t122 != 0)
        goto LAB24;

LAB26:
LAB25:    t9 = (t109 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_17249857350030274602_1035706684(t1, t135, t13, t102, 1);
    t14 = (t109 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t135 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);

LAB22:    if (t29 == t30)
        goto LAB23;

LAB27:    t11 = (t29 + 1);
    t29 = t11;
    goto LAB20;

LAB24:    t22 = (t85 + 56U);
    t23 = *((char **)t22);
    t22 = (t109 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_1242562249_sub_3525738511873186323_1035706684(t1, t135, t23, t78, t25, t102);
    t26 = (t85 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    t28 = (t135 + 12U);
    t37 = *((unsigned int *)t28);
    t53 = (1U * t37);
    memcpy(t26, t22, t53);
    goto LAB25;

LAB28:    t22 = (t85 + 56U);
    t23 = *((char **)t22);
    t22 = (t109 + 56U);
    t25 = *((char **)t22);
    t22 = ieee_p_1242562249_sub_3525738511873258197_1035706684(t1, t135, t23, t78, t25, t102);
    t26 = (t85 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    t28 = (t135 + 12U);
    t37 = *((unsigned int *)t28);
    t53 = (1U * t37);
    memcpy(t26, t22, t53);
    goto LAB29;

LAB31:;
}

char *ieee_p_1242562249_sub_1006216973935617061_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_2177518728674633585_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_1940155297735165649_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_2177518728674633585_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_800139796931460853_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t5, ((t15)));
    t17 = ieee_p_1242562249_sub_2598175070666390882_1035706684(t1, t12, t3, t4, t16, t13);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_3468090124142196633_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t7[24];
    char t12[16];
    char t13[16];
    char *t0;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    t10 = (t4 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t7 + 16U);
    *((char **)t11) = t5;
    t14 = (t5 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t13, t3, ((t15)));
    t17 = ieee_p_1242562249_sub_2598175070666390882_1035706684(t1, t12, t16, t13, t4, t5);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t17, t20);
    t21 = (t12 + 0U);
    t22 = *((int *)t21);
    t23 = (t12 + 4U);
    t24 = *((int *)t23);
    t25 = (t12 + 8U);
    t26 = *((int *)t25);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = t22;
    t28 = (t27 + 4U);
    *((int *)t28) = t24;
    t28 = (t27 + 8U);
    *((int *)t28) = t26;
    t29 = (t24 - t22);
    t30 = (t29 * t26);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;

LAB1:    return t0;
LAB3:    *((char **)t9) = t4;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_2177532604777208567_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t74[16];
    char t92[16];
    char t123[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    int t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned char t107;
    char *t108;
    char *t109;
    unsigned char t110;
    char *t111;
    unsigned char t112;
    char *t113;
    unsigned char t114;
    char *t115;
    unsigned int t116;
    unsigned char t117;
    char *t118;
    char *t119;
    char *t120;
    int t121;
    unsigned int t122;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 2976);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 2976);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t63 - 1);
    t72 = (0 - t71);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t73 = (t73 * 1U);
    t75 = (t4 + 12U);
    t76 = *((unsigned int *)t75);
    t77 = (t76 - 1);
    t78 = (t74 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t77;
    t79 = (t78 + 4U);
    *((int *)t79) = 0;
    t79 = (t78 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - t77);
    t81 = (t80 * -1);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    t79 = (t7 + 484U);
    t82 = (t1 + 2976);
    t83 = (t79 + 88U);
    *((char **)t83) = t82;
    t84 = (char *)alloca(t73);
    t85 = (t79 + 56U);
    *((char **)t85) = t84;
    xsi_type_set_default_value(t82, t84, t74);
    t86 = (t79 + 64U);
    *((char **)t86) = t74;
    t87 = (t79 + 80U);
    *((unsigned int *)t87) = t73;
    t88 = (t6 + 12U);
    t81 = *((unsigned int *)t88);
    t89 = (t81 - 1);
    t90 = (0 - t89);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t91 = (t91 * 1U);
    t93 = (t6 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t94 - 1);
    t96 = (t92 + 0U);
    t97 = (t96 + 0U);
    *((int *)t97) = t95;
    t97 = (t96 + 4U);
    *((int *)t97) = 0;
    t97 = (t96 + 8U);
    *((int *)t97) = -1;
    t98 = (0 - t95);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t97 = (t96 + 12U);
    *((unsigned int *)t97) = t99;
    t97 = (t7 + 604U);
    t100 = (t1 + 2976);
    t101 = (t97 + 88U);
    *((char **)t101) = t100;
    t102 = (char *)alloca(t91);
    t103 = (t97 + 56U);
    *((char **)t103) = t102;
    xsi_type_set_default_value(t100, t102, t92);
    t104 = (t97 + 64U);
    *((char **)t104) = t92;
    t105 = (t97 + 80U);
    *((unsigned int *)t105) = t91;
    t106 = (t8 + 4U);
    t107 = (t3 != 0);
    if (t107 == 1)
        goto LAB3;

LAB2:    t108 = (t8 + 12U);
    *((char **)t108) = t4;
    t109 = (t8 + 20U);
    t110 = (t5 != 0);
    if (t110 == 1)
        goto LAB5;

LAB4:    t111 = (t8 + 28U);
    *((char **)t111) = t6;
    t113 = (t4 + 12U);
    t99 = *((unsigned int *)t113);
    t114 = (t99 < 1);
    if (t114 == 1)
        goto LAB9;

LAB10:    t115 = (t6 + 12U);
    t116 = *((unsigned int *)t115);
    t117 = (t116 < 1);
    t112 = t117;

LAB11:    if (t112 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t27, (unsigned char)1);
    t14 = (t45 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t34, (unsigned char)1);
    t14 = (t61 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t110 = *((unsigned char *)t17);
    t112 = (t110 == (unsigned char)1);
    if (t112 == 1)
        goto LAB16;

LAB17:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = (t58 + 0U);
    t36 = *((int *)t18);
    t23 = (t58 + 0U);
    t38 = *((int *)t23);
    t25 = (t58 + 8U);
    t40 = *((int *)t25);
    t41 = (t36 - t38);
    t47 = (t41 * t40);
    t63 = (1U * t47);
    t73 = (0 + t63);
    t26 = (t22 + t73);
    t114 = *((unsigned char *)t26);
    t117 = (t114 == (unsigned char)1);
    t107 = t117;

LAB18:    if (t107 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t14 = (char *)alloca(t10);
    memcpy(t14, t13, t10);
    t16 = (t61 + 56U);
    t17 = *((char **)t16);
    t16 = (t58 + 12U);
    t19 = *((unsigned int *)t16);
    t19 = (t19 * 1U);
    t18 = (char *)alloca(t19);
    memcpy(t18, t17, t19);
    t22 = (t79 + 56U);
    t23 = *((char **)t22);
    t22 = (t97 + 56U);
    t25 = *((char **)t22);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t14, t42, t18, t58, t23, t74, t25, t92);
    t9 = (t79 + 56U);
    t13 = *((char **)t9);
    t9 = (t74 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t16 = (t74 + 0U);
    t11 = *((int *)t16);
    t17 = (t74 + 4U);
    t20 = *((int *)t17);
    t22 = (t74 + 8U);
    t30 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t11;
    t25 = (t23 + 4U);
    *((int *)t25) = t20;
    t25 = (t23 + 8U);
    *((int *)t25) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t106) = t3;
    goto LAB2;

LAB5:    *((char **)t109) = t5;
    goto LAB4;

LAB6:    t118 = (t1 + 1168U);
    t119 = *((char **)t118);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t119, 0U);
    t118 = (t2 + 0U);
    t120 = (t118 + 0U);
    *((int *)t120) = 0;
    t120 = (t118 + 4U);
    *((int *)t120) = 1;
    t120 = (t118 + 8U);
    *((int *)t120) = -1;
    t121 = (1 - 0);
    t122 = (t121 * -1);
    t122 = (t122 + 1);
    t120 = (t118 + 12U);
    *((unsigned int *)t120) = t122;
    goto LAB1;

LAB9:    t112 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t74 + 12U);
    t76 = *((unsigned int *)t28);
    t76 = (t76 * 1U);
    t29 = xsi_get_transient_memory(t76);
    memset(t29, 0, t76);
    t31 = t29;
    memset(t31, (unsigned char)1, t76);
    t35 = (t79 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t74 + 12U);
    t81 = *((unsigned int *)t39);
    t81 = (t81 * 1U);
    memcpy(t35, t29, t81);
    t9 = (t79 + 56U);
    t13 = *((char **)t9);
    t9 = (t74 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t74 + 0U);
    t11 = *((int *)t14);
    t16 = (t74 + 4U);
    t20 = *((int *)t16);
    t17 = (t74 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t107 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:;
}

char *ieee_p_1242562249_sub_4450116696532108620_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[1088];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t74[16];
    char t92[16];
    char t110[16];
    char t128[16];
    char t145[8];
    char t165[16];
    char t166[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    int t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    int t107;
    int t108;
    unsigned int t109;
    char *t111;
    unsigned int t112;
    int t113;
    char *t114;
    char *t115;
    int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    int t125;
    int t126;
    unsigned int t127;
    char *t129;
    unsigned int t130;
    int t131;
    char *t132;
    char *t133;
    int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t146;
    char *t147;
    char *t148;
    unsigned char t149;
    char *t150;
    char *t151;
    unsigned char t152;
    char *t153;
    unsigned char t154;
    char *t155;
    unsigned char t156;
    char *t157;
    unsigned int t158;
    unsigned char t159;
    char *t160;
    char *t161;
    char *t162;
    int t163;
    unsigned int t164;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 3080);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 3080);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t63 - 1);
    t72 = (0 - t71);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t73 = (t73 * 1U);
    t75 = (t4 + 12U);
    t76 = *((unsigned int *)t75);
    t77 = (t76 - 1);
    t78 = (t74 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t77;
    t79 = (t78 + 4U);
    *((int *)t79) = 0;
    t79 = (t78 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - t77);
    t81 = (t80 * -1);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    t79 = (t7 + 484U);
    t82 = (t1 + 2976);
    t83 = (t79 + 88U);
    *((char **)t83) = t82;
    t84 = (char *)alloca(t73);
    t85 = (t79 + 56U);
    *((char **)t85) = t84;
    xsi_type_set_default_value(t82, t84, t74);
    t86 = (t79 + 64U);
    *((char **)t86) = t74;
    t87 = (t79 + 80U);
    *((unsigned int *)t87) = t73;
    t88 = (t6 + 12U);
    t81 = *((unsigned int *)t88);
    t89 = (t81 - 1);
    t90 = (0 - t89);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t91 = (t91 * 1U);
    t93 = (t6 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t94 - 1);
    t96 = (t92 + 0U);
    t97 = (t96 + 0U);
    *((int *)t97) = t95;
    t97 = (t96 + 4U);
    *((int *)t97) = 0;
    t97 = (t96 + 8U);
    *((int *)t97) = -1;
    t98 = (0 - t95);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t97 = (t96 + 12U);
    *((unsigned int *)t97) = t99;
    t97 = (t7 + 604U);
    t100 = (t1 + 2976);
    t101 = (t97 + 88U);
    *((char **)t101) = t100;
    t102 = (char *)alloca(t91);
    t103 = (t97 + 56U);
    *((char **)t103) = t102;
    xsi_type_set_default_value(t100, t102, t92);
    t104 = (t97 + 64U);
    *((char **)t104) = t92;
    t105 = (t97 + 80U);
    *((unsigned int *)t105) = t91;
    t106 = (t4 + 12U);
    t99 = *((unsigned int *)t106);
    t107 = (t99 - 1);
    t108 = (0 - t107);
    t109 = (t108 * -1);
    t109 = (t109 + 1);
    t109 = (t109 * 1U);
    t111 = (t4 + 12U);
    t112 = *((unsigned int *)t111);
    t113 = (t112 - 1);
    t114 = (t110 + 0U);
    t115 = (t114 + 0U);
    *((int *)t115) = t113;
    t115 = (t114 + 4U);
    *((int *)t115) = 0;
    t115 = (t114 + 8U);
    *((int *)t115) = -1;
    t116 = (0 - t113);
    t117 = (t116 * -1);
    t117 = (t117 + 1);
    t115 = (t114 + 12U);
    *((unsigned int *)t115) = t117;
    t115 = (t7 + 724U);
    t118 = (t1 + 2976);
    t119 = (t115 + 88U);
    *((char **)t119) = t118;
    t120 = (char *)alloca(t109);
    t121 = (t115 + 56U);
    *((char **)t121) = t120;
    xsi_type_set_default_value(t118, t120, t110);
    t122 = (t115 + 64U);
    *((char **)t122) = t110;
    t123 = (t115 + 80U);
    *((unsigned int *)t123) = t109;
    t124 = (t6 + 12U);
    t117 = *((unsigned int *)t124);
    t125 = (t117 - 1);
    t126 = (0 - t125);
    t127 = (t126 * -1);
    t127 = (t127 + 1);
    t127 = (t127 * 1U);
    t129 = (t6 + 12U);
    t130 = *((unsigned int *)t129);
    t131 = (t130 - 1);
    t132 = (t128 + 0U);
    t133 = (t132 + 0U);
    *((int *)t133) = t131;
    t133 = (t132 + 4U);
    *((int *)t133) = 0;
    t133 = (t132 + 8U);
    *((int *)t133) = -1;
    t134 = (0 - t131);
    t135 = (t134 * -1);
    t135 = (t135 + 1);
    t133 = (t132 + 12U);
    *((unsigned int *)t133) = t135;
    t133 = (t7 + 844U);
    t136 = (t1 + 2976);
    t137 = (t133 + 88U);
    *((char **)t137) = t136;
    t138 = (char *)alloca(t127);
    t139 = (t133 + 56U);
    *((char **)t139) = t138;
    xsi_type_set_default_value(t136, t138, t128);
    t140 = (t133 + 64U);
    *((char **)t140) = t128;
    t141 = (t133 + 80U);
    *((unsigned int *)t141) = t127;
    t142 = (t7 + 964U);
    t143 = ((STD_STANDARD) + 0);
    t144 = (t142 + 88U);
    *((char **)t144) = t143;
    t146 = (t142 + 56U);
    *((char **)t146) = t145;
    *((unsigned char *)t145) = (unsigned char)0;
    t147 = (t142 + 80U);
    *((unsigned int *)t147) = 1U;
    t148 = (t8 + 4U);
    t149 = (t3 != 0);
    if (t149 == 1)
        goto LAB3;

LAB2:    t150 = (t8 + 12U);
    *((char **)t150) = t4;
    t151 = (t8 + 20U);
    t152 = (t5 != 0);
    if (t152 == 1)
        goto LAB5;

LAB4:    t153 = (t8 + 28U);
    *((char **)t153) = t6;
    t155 = (t4 + 12U);
    t135 = *((unsigned int *)t155);
    t156 = (t135 < 1);
    if (t156 == 1)
        goto LAB9;

LAB10:    t157 = (t6 + 12U);
    t158 = *((unsigned int *)t157);
    t159 = (t158 < 1);
    t154 = t159;

LAB11:    if (t154 != 0)
        goto LAB6;

LAB8:
LAB7:    t136 = (t3 + 0);
    t137 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t165, t136, t27, (unsigned char)1);
    t139 = (t45 + 56U);
    t140 = *((char **)t139);
    t139 = (t140 + 0);
    t141 = (t165 + 12U);
    t158 = *((unsigned int *)t141);
    t158 = (t158 * 1U);
    memcpy(t139, t137, t158);
    t136 = (t5 + 0);
    t137 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t165, t136, t34, (unsigned char)1);
    t139 = (t61 + 56U);
    t140 = *((char **)t139);
    t139 = (t140 + 0);
    t141 = (t165 + 12U);
    t158 = *((unsigned int *)t141);
    t158 = (t158 * 1U);
    memcpy(t139, t137, t158);
    t136 = (t45 + 56U);
    t137 = *((char **)t136);
    t136 = (t42 + 0U);
    t163 = *((int *)t136);
    t139 = (t42 + 0U);
    t11 = *((int *)t139);
    t140 = (t42 + 8U);
    t20 = *((int *)t140);
    t30 = (t163 - t11);
    t158 = (t30 * t20);
    t164 = (1U * t158);
    t10 = (0 + t164);
    t141 = (t137 + t10);
    t152 = *((unsigned char *)t141);
    t154 = (t152 == (unsigned char)1);
    if (t154 == 1)
        goto LAB16;

LAB17:    t143 = (t61 + 56U);
    t144 = *((char **)t143);
    t143 = (t58 + 0U);
    t32 = *((int *)t143);
    t146 = (t58 + 0U);
    t36 = *((int *)t146);
    t147 = (t58 + 8U);
    t38 = *((int *)t147);
    t40 = (t32 - t36);
    t19 = (t40 * t38);
    t33 = (1U * t19);
    t47 = (0 + t33);
    t155 = (t144 + t47);
    t156 = *((unsigned char *)t155);
    t159 = (t156 == (unsigned char)1);
    t149 = t159;

LAB18:    if (t149 != 0)
        goto LAB13;

LAB15:
LAB14:    t136 = (t45 + 56U);
    t137 = *((char **)t136);
    t136 = (t42 + 0U);
    t163 = *((int *)t136);
    t139 = (t42 + 0U);
    t11 = *((int *)t139);
    t140 = (t42 + 8U);
    t20 = *((int *)t140);
    t30 = (t163 - t11);
    t158 = (t30 * t20);
    t164 = (1U * t158);
    t10 = (0 + t164);
    t141 = (t137 + t10);
    t149 = *((unsigned char *)t141);
    t152 = (t149 == (unsigned char)3);
    if (t152 != 0)
        goto LAB20;

LAB22:    t136 = (t45 + 56U);
    t137 = *((char **)t136);
    t136 = (t115 + 56U);
    t139 = *((char **)t136);
    t136 = (t139 + 0);
    t140 = (t42 + 12U);
    t158 = *((unsigned int *)t140);
    t158 = (t158 * 1U);
    memcpy(t136, t137, t158);

LAB21:    t136 = (t61 + 56U);
    t137 = *((char **)t136);
    t136 = (t58 + 0U);
    t163 = *((int *)t136);
    t139 = (t58 + 0U);
    t11 = *((int *)t139);
    t140 = (t58 + 8U);
    t20 = *((int *)t140);
    t30 = (t163 - t11);
    t158 = (t30 * t20);
    t164 = (1U * t158);
    t10 = (0 + t164);
    t141 = (t137 + t10);
    t149 = *((unsigned char *)t141);
    t152 = (t149 == (unsigned char)3);
    if (t152 != 0)
        goto LAB23;

LAB25:    t136 = (t61 + 56U);
    t137 = *((char **)t136);
    t136 = (t133 + 56U);
    t139 = *((char **)t136);
    t136 = (t139 + 0);
    t140 = (t58 + 12U);
    t158 = *((unsigned int *)t140);
    t158 = (t158 * 1U);
    memcpy(t136, t137, t158);

LAB24:    t136 = (t115 + 56U);
    t137 = *((char **)t136);
    t136 = (t110 + 12U);
    t158 = *((unsigned int *)t136);
    t158 = (t158 * 1U);
    t139 = (char *)alloca(t158);
    memcpy(t139, t137, t158);
    t140 = (t133 + 56U);
    t141 = *((char **)t140);
    t140 = (t128 + 12U);
    t164 = *((unsigned int *)t140);
    t164 = (t164 * 1U);
    t143 = (char *)alloca(t164);
    memcpy(t143, t141, t164);
    t144 = (t79 + 56U);
    t146 = *((char **)t144);
    t144 = (t97 + 56U);
    t147 = *((char **)t144);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t139, t110, t143, t128, t146, t74, t147, t92);
    t136 = (t142 + 56U);
    t137 = *((char **)t136);
    t149 = *((unsigned char *)t137);
    if (t149 != 0)
        goto LAB26;

LAB28:
LAB27:    t136 = (t79 + 56U);
    t137 = *((char **)t136);
    t136 = (t74 + 12U);
    t158 = *((unsigned int *)t136);
    t158 = (t158 * 1U);
    t0 = xsi_get_transient_memory(t158);
    memcpy(t0, t137, t158);
    t140 = (t74 + 0U);
    t163 = *((int *)t140);
    t141 = (t74 + 4U);
    t11 = *((int *)t141);
    t144 = (t74 + 8U);
    t20 = *((int *)t144);
    t146 = (t2 + 0U);
    t147 = (t146 + 0U);
    *((int *)t147) = t163;
    t147 = (t146 + 4U);
    *((int *)t147) = t11;
    t147 = (t146 + 8U);
    *((int *)t147) = t20;
    t30 = (t11 - t163);
    t164 = (t30 * t20);
    t164 = (t164 + 1);
    t147 = (t146 + 12U);
    *((unsigned int *)t147) = t164;

LAB1:    return t0;
LAB3:    *((char **)t148) = t3;
    goto LAB2;

LAB5:    *((char **)t151) = t5;
    goto LAB4;

LAB6:    t160 = (t1 + 1288U);
    t161 = *((char **)t160);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t161, 0U);
    t160 = (t2 + 0U);
    t162 = (t160 + 0U);
    *((int *)t162) = 0;
    t162 = (t160 + 4U);
    *((int *)t162) = 1;
    t162 = (t160 + 8U);
    *((int *)t162) = -1;
    t163 = (1 - 0);
    t164 = (t163 * -1);
    t164 = (t164 + 1);
    t162 = (t160 + 12U);
    *((unsigned int *)t162) = t164;
    goto LAB1;

LAB9:    t154 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t157 = (t74 + 12U);
    t63 = *((unsigned int *)t157);
    t63 = (t63 * 1U);
    t160 = xsi_get_transient_memory(t63);
    memset(t160, 0, t63);
    t161 = t160;
    memset(t161, (unsigned char)1, t63);
    t162 = (t79 + 56U);
    t9 = *((char **)t162);
    t162 = (t9 + 0);
    t13 = (t74 + 12U);
    t73 = *((unsigned int *)t13);
    t73 = (t73 * 1U);
    memcpy(t162, t160, t73);
    t136 = (t79 + 56U);
    t137 = *((char **)t136);
    t136 = (t74 + 12U);
    t158 = *((unsigned int *)t136);
    t158 = (t158 * 1U);
    t0 = xsi_get_transient_memory(t158);
    memcpy(t0, t137, t158);
    t139 = (t74 + 0U);
    t163 = *((int *)t139);
    t140 = (t74 + 4U);
    t11 = *((int *)t140);
    t141 = (t74 + 8U);
    t20 = *((int *)t141);
    t143 = (t2 + 0U);
    t144 = (t143 + 0U);
    *((int *)t144) = t163;
    t144 = (t143 + 4U);
    *((int *)t144) = t11;
    t144 = (t143 + 8U);
    *((int *)t144) = t20;
    t30 = (t11 - t163);
    t164 = (t30 * t20);
    t164 = (t164 + 1);
    t144 = (t143 + 12U);
    *((unsigned int *)t144) = t164;
    goto LAB1;

LAB16:    t149 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:    t143 = (t45 + 56U);
    t144 = *((char **)t143);
    t143 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t165, t144, t42);
    t146 = (t115 + 56U);
    t147 = *((char **)t146);
    t146 = (t147 + 0);
    t155 = (t165 + 12U);
    t19 = *((unsigned int *)t155);
    t33 = (1U * t19);
    memcpy(t146, t143, t33);
    t136 = (t142 + 56U);
    t137 = *((char **)t136);
    t136 = (t137 + 0);
    *((unsigned char *)t136) = (unsigned char)1;
    goto LAB21;

LAB23:    t143 = (t61 + 56U);
    t144 = *((char **)t143);
    t143 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t165, t144, t58);
    t146 = (t133 + 56U);
    t147 = *((char **)t146);
    t146 = (t147 + 0);
    t155 = (t165 + 12U);
    t19 = *((unsigned int *)t155);
    t33 = (1U * t19);
    memcpy(t146, t143, t33);
    t136 = (t142 + 56U);
    t137 = *((char **)t136);
    t149 = *((unsigned char *)t137);
    t152 = (!(t149));
    t136 = (t142 + 56U);
    t139 = *((char **)t136);
    t136 = (t139 + 0);
    *((unsigned char *)t136) = t152;
    goto LAB24;

<<<<<<< HEAD
LAB26:    t136 = (t1 + 5150);
=======
LAB26:    t136 = (t1 + 5142);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t141 = (t166 + 0U);
    t144 = (t141 + 0U);
    *((int *)t144) = 0;
    t144 = (t141 + 4U);
    *((int *)t144) = 0;
    t144 = (t141 + 8U);
    *((int *)t144) = 1;
    t163 = (0 - 0);
    t158 = (t163 * 1);
    t158 = (t158 + 1);
    t144 = (t141 + 12U);
    *((unsigned int *)t144) = t158;
    t144 = (t79 + 56U);
    t146 = *((char **)t144);
    t144 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t165, t136, t166, t146, t74);
    t147 = (t79 + 56U);
    t155 = *((char **)t147);
    t147 = (t155 + 0);
    t157 = (t165 + 12U);
    t158 = *((unsigned int *)t157);
    t164 = (1U * t158);
    memcpy(t147, t144, t164);
    goto LAB27;

LAB29:;
}

char *ieee_p_1242562249_sub_3299428170688237929_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t63 = (t10 > t9);
    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_2177532604777208567_1035706684(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t14 = (t24 + 12U);
    t23 = *((unsigned int *)t14);
    t23 = (t23 * 1U);
    t16 = xsi_get_transient_memory(t23);
    memset(t16, 0, t23);
    t17 = t16;
    memset(t17, (unsigned char)2, t23);
    t18 = (t37 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t25 = (t24 + 12U);
    t30 = *((unsigned int *)t25);
    t30 = (t30 * 1U);
    memcpy(t18, t16, t30);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

char *ieee_p_1242562249_sub_336620276024282463_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned char t105;
    char *t106;
    unsigned char t107;

LAB0:    t8 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_2177532604777208567_1035706684(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t75 = (t8 > t10);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t70 = (t1 + 1408U);
    t106 = *((char **)t70);
    t107 = *((unsigned char *)t106);
    if (t107 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t12 + 56U);
    t57 = *((char **)t52);
    t87 = *((int *)t57);
    t88 = (t87 - 1);
    t52 = (t5 + 12U);
    t89 = *((unsigned int *)t52);
    if (-1 == -1)
        goto LAB17;

LAB18:    t90 = t89;

LAB19:    t91 = (t90 - t86);
    t92 = (t91 * -1);
    t93 = (1U * t92);
    t59 = (t49 + t93);
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t94 = *((int *)t61);
    t95 = (t94 - 1);
    t60 = (t5 + 12U);
    t96 = *((unsigned int *)t60);
    t97 = (t96 - t95);
    t98 = (t97 * -1);
    t98 = (t98 + 1);
    t99 = (1U * t98);
    memset(t59, (unsigned char)2, t99);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t100 = *((int *)t68);
    t101 = (t100 - 1);
    t66 = (t5 + 12U);
    t102 = *((unsigned int *)t66);
    t69 = (t74 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = t101;
    t70 = (t69 + 4U);
    *((unsigned int *)t70) = t102;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t103 = (t102 - t101);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t104;
    t105 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t36, t73, t44, t74);
    t64 = t105;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t90 = t88;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t70 = (t1 + 5151);
=======
LAB20:    t70 = (t1 + 5143);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t70, 35U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_1312018951627255984_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t63 = (t10 > t9);
    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_4450116696532108620_1035706684(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t14 = (t24 + 12U);
    t23 = *((unsigned int *)t14);
    t23 = (t23 * 1U);
    t16 = xsi_get_transient_memory(t23);
    memset(t16, 0, t23);
    t17 = t16;
    memset(t17, (unsigned char)2, t23);
    t18 = (t37 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t25 = (t24 + 12U);
    t30 = *((unsigned int *)t25);
    t30 = (t30 * 1U);
    memcpy(t18, t16, t30);
    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

char *ieee_p_1242562249_sub_2685831498948951983_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    int t114;
    int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned char t121;
    char *t122;
    unsigned char t123;

LAB0:    t8 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_4450116696532108620_1035706684(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t75 = (t8 > t10);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t118 = (t1 + 1408U);
    t122 = *((char **)t118);
    t123 = *((unsigned char *)t122);
    if (t123 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t37 + 56U);
    t57 = *((char **)t52);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - 1);
    t59 = (t24 + 0U);
    t89 = *((int *)t59);
    t60 = (t24 + 8U);
    t90 = *((int *)t60);
    t91 = (t88 - t89);
    t92 = (t91 * t90);
    t61 = (t24 + 4U);
    t93 = *((int *)t61);
    xsi_vhdl_check_range_of_index(t89, t93, t90, t88);
    t94 = (1U * t92);
    t95 = (0 + t94);
    t66 = (t57 + t95);
    t96 = *((unsigned char *)t66);
    t68 = (t12 + 56U);
    t69 = *((char **)t68);
    t97 = *((int *)t69);
    t98 = (t97 - 1);
    t68 = (t5 + 12U);
    t99 = *((unsigned int *)t68);
    if (-1 == -1)
        goto LAB17;

LAB18:    t100 = t99;

LAB19:    t101 = (t100 - t86);
    t102 = (t101 * -1);
    t103 = (1U * t102);
    t70 = (t49 + t103);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t106 = *((int *)t105);
    t107 = (t106 - 1);
    t104 = (t5 + 12U);
    t108 = *((unsigned int *)t104);
    t109 = (t108 - t107);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    memset(t70, t96, t111);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t114 = *((int *)t113);
    t115 = (t114 - 1);
    t112 = (t5 + 12U);
    t116 = *((unsigned int *)t112);
    t117 = (t74 + 0U);
    t118 = (t117 + 0U);
    *((int *)t118) = t115;
    t118 = (t117 + 4U);
    *((unsigned int *)t118) = t116;
    t118 = (t117 + 8U);
    *((int *)t118) = -1;
    t119 = (t116 - t115);
    t120 = (t119 * -1);
    t120 = (t120 + 1);
    t118 = (t117 + 12U);
    *((unsigned int *)t118) = t120;
    t121 = ieee_p_1242562249_sub_3044629854704842352_1035706684(t1, t36, t73, t44, t74);
    t64 = t121;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t100 = t98;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t118 = (t1 + 5186);
=======
LAB20:    t118 = (t1 + 5178);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t118, 35U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_2177761772484348620_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t74[16];
    char t92[16];
    char t123[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    int t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned char t107;
    char *t108;
    char *t109;
    unsigned char t110;
    char *t111;
    unsigned char t112;
    char *t113;
    unsigned char t114;
    char *t115;
    unsigned int t116;
    unsigned char t117;
    char *t118;
    char *t119;
    char *t120;
    int t121;
    unsigned int t122;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 2976);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 2976);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t63 - 1);
    t72 = (0 - t71);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t73 = (t73 * 1U);
    t75 = (t4 + 12U);
    t76 = *((unsigned int *)t75);
    t77 = (t76 - 1);
    t78 = (t74 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t77;
    t79 = (t78 + 4U);
    *((int *)t79) = 0;
    t79 = (t78 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - t77);
    t81 = (t80 * -1);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    t79 = (t7 + 484U);
    t82 = (t1 + 2976);
    t83 = (t79 + 88U);
    *((char **)t83) = t82;
    t84 = (char *)alloca(t73);
    t85 = (t79 + 56U);
    *((char **)t85) = t84;
    xsi_type_set_default_value(t82, t84, t74);
    t86 = (t79 + 64U);
    *((char **)t86) = t74;
    t87 = (t79 + 80U);
    *((unsigned int *)t87) = t73;
    t88 = (t6 + 12U);
    t81 = *((unsigned int *)t88);
    t89 = (t81 - 1);
    t90 = (0 - t89);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t91 = (t91 * 1U);
    t93 = (t6 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t94 - 1);
    t96 = (t92 + 0U);
    t97 = (t96 + 0U);
    *((int *)t97) = t95;
    t97 = (t96 + 4U);
    *((int *)t97) = 0;
    t97 = (t96 + 8U);
    *((int *)t97) = -1;
    t98 = (0 - t95);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t97 = (t96 + 12U);
    *((unsigned int *)t97) = t99;
    t97 = (t7 + 604U);
    t100 = (t1 + 2976);
    t101 = (t97 + 88U);
    *((char **)t101) = t100;
    t102 = (char *)alloca(t91);
    t103 = (t97 + 56U);
    *((char **)t103) = t102;
    xsi_type_set_default_value(t100, t102, t92);
    t104 = (t97 + 64U);
    *((char **)t104) = t92;
    t105 = (t97 + 80U);
    *((unsigned int *)t105) = t91;
    t106 = (t8 + 4U);
    t107 = (t3 != 0);
    if (t107 == 1)
        goto LAB3;

LAB2:    t108 = (t8 + 12U);
    *((char **)t108) = t4;
    t109 = (t8 + 20U);
    t110 = (t5 != 0);
    if (t110 == 1)
        goto LAB5;

LAB4:    t111 = (t8 + 28U);
    *((char **)t111) = t6;
    t113 = (t4 + 12U);
    t99 = *((unsigned int *)t113);
    t114 = (t99 < 1);
    if (t114 == 1)
        goto LAB9;

LAB10:    t115 = (t6 + 12U);
    t116 = *((unsigned int *)t115);
    t117 = (t116 < 1);
    t112 = t117;

LAB11:    if (t112 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t27, (unsigned char)1);
    t14 = (t45 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t34, (unsigned char)1);
    t14 = (t61 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t110 = *((unsigned char *)t17);
    t112 = (t110 == (unsigned char)1);
    if (t112 == 1)
        goto LAB16;

LAB17:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = (t58 + 0U);
    t36 = *((int *)t18);
    t23 = (t58 + 0U);
    t38 = *((int *)t23);
    t25 = (t58 + 8U);
    t40 = *((int *)t25);
    t41 = (t36 - t38);
    t47 = (t41 * t40);
    t63 = (1U * t47);
    t73 = (0 + t63);
    t26 = (t22 + t73);
    t114 = *((unsigned char *)t26);
    t117 = (t114 == (unsigned char)1);
    t107 = t117;

LAB18:    if (t107 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t14 = (char *)alloca(t10);
    memcpy(t14, t13, t10);
    t16 = (t61 + 56U);
    t17 = *((char **)t16);
    t16 = (t58 + 12U);
    t19 = *((unsigned int *)t16);
    t19 = (t19 * 1U);
    t18 = (char *)alloca(t19);
    memcpy(t18, t17, t19);
    t22 = (t79 + 56U);
    t23 = *((char **)t22);
    t22 = (t97 + 56U);
    t25 = *((char **)t22);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t14, t42, t18, t58, t23, t74, t25, t92);
    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t16 = (t92 + 0U);
    t11 = *((int *)t16);
    t17 = (t92 + 4U);
    t20 = *((int *)t17);
    t22 = (t92 + 8U);
    t30 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t11;
    t25 = (t23 + 4U);
    *((int *)t25) = t20;
    t25 = (t23 + 8U);
    *((int *)t25) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t106) = t3;
    goto LAB2;

LAB5:    *((char **)t109) = t5;
    goto LAB4;

LAB6:    t118 = (t1 + 1168U);
    t119 = *((char **)t118);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t119, 0U);
    t118 = (t2 + 0U);
    t120 = (t118 + 0U);
    *((int *)t120) = 0;
    t120 = (t118 + 4U);
    *((int *)t120) = 1;
    t120 = (t118 + 8U);
    *((int *)t120) = -1;
    t121 = (1 - 0);
    t122 = (t121 * -1);
    t122 = (t122 + 1);
    t120 = (t118 + 12U);
    *((unsigned int *)t120) = t122;
    goto LAB1;

LAB9:    t112 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t92 + 12U);
    t76 = *((unsigned int *)t28);
    t76 = (t76 * 1U);
    t29 = xsi_get_transient_memory(t76);
    memset(t29, 0, t76);
    t31 = t29;
    memset(t31, (unsigned char)1, t76);
    t35 = (t97 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t92 + 12U);
    t81 = *((unsigned int *)t39);
    t81 = (t81 * 1U);
    memcpy(t35, t29, t81);
    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t92 + 0U);
    t11 = *((int *)t14);
    t16 = (t92 + 4U);
    t20 = *((int *)t16);
    t17 = (t92 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t107 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:;
}

char *ieee_p_1242562249_sub_4198213126180714255_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[848];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t60[16];
    char t78[16];
    char t96[16];
    char t113[8];
    char t133[16];
    char t134[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    unsigned int t41;
    char *t43;
    unsigned int t44;
    int t45;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    int t57;
    int t58;
    unsigned int t59;
    char *t61;
    unsigned int t62;
    int t63;
    char *t64;
    char *t65;
    int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    int t75;
    int t76;
    unsigned int t77;
    char *t79;
    unsigned int t80;
    int t81;
    char *t82;
    char *t83;
    int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    int t93;
    int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    int t99;
    char *t100;
    char *t101;
    int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    unsigned char t117;
    char *t118;
    char *t119;
    unsigned char t120;
    char *t121;
    unsigned char t122;
    char *t123;
    unsigned char t124;
    char *t125;
    unsigned int t126;
    unsigned char t127;
    char *t128;
    char *t129;
    char *t130;
    int t131;
    unsigned int t132;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t4 + 12U);
    t33 = *((unsigned int *)t37);
    t39 = (t33 - 1);
    t40 = (0 - t39);
    t41 = (t40 * -1);
    t41 = (t41 + 1);
    t41 = (t41 * 1U);
    t43 = (t4 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t44 - 1);
    t46 = (t42 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = t45;
    t47 = (t46 + 4U);
    *((int *)t47) = 0;
    t47 = (t46 + 8U);
    *((int *)t47) = -1;
    t48 = (0 - t45);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t49;
    t47 = (t7 + 244U);
    t50 = (t1 + 2976);
    t51 = (t47 + 88U);
    *((char **)t51) = t50;
    t52 = (char *)alloca(t41);
    t53 = (t47 + 56U);
    *((char **)t53) = t52;
    xsi_type_set_default_value(t50, t52, t42);
    t54 = (t47 + 64U);
    *((char **)t54) = t42;
    t55 = (t47 + 80U);
    *((unsigned int *)t55) = t41;
    t56 = (t6 + 12U);
    t49 = *((unsigned int *)t56);
    t57 = (t49 - 1);
    t58 = (0 - t57);
    t59 = (t58 * -1);
    t59 = (t59 + 1);
    t59 = (t59 * 1U);
    t61 = (t6 + 12U);
    t62 = *((unsigned int *)t61);
    t63 = (t62 - 1);
    t64 = (t60 + 0U);
    t65 = (t64 + 0U);
    *((int *)t65) = t63;
    t65 = (t64 + 4U);
    *((int *)t65) = 0;
    t65 = (t64 + 8U);
    *((int *)t65) = -1;
    t66 = (0 - t63);
    t67 = (t66 * -1);
    t67 = (t67 + 1);
    t65 = (t64 + 12U);
    *((unsigned int *)t65) = t67;
    t65 = (t7 + 364U);
    t68 = (t1 + 2976);
    t69 = (t65 + 88U);
    *((char **)t69) = t68;
    t70 = (char *)alloca(t59);
    t71 = (t65 + 56U);
    *((char **)t71) = t70;
    xsi_type_set_default_value(t68, t70, t60);
    t72 = (t65 + 64U);
    *((char **)t72) = t60;
    t73 = (t65 + 80U);
    *((unsigned int *)t73) = t59;
    t74 = (t4 + 12U);
    t67 = *((unsigned int *)t74);
    t75 = (t67 - 1);
    t76 = (0 - t75);
    t77 = (t76 * -1);
    t77 = (t77 + 1);
    t77 = (t77 * 1U);
    t79 = (t4 + 12U);
    t80 = *((unsigned int *)t79);
    t81 = (t80 - 1);
    t82 = (t78 + 0U);
    t83 = (t82 + 0U);
    *((int *)t83) = t81;
    t83 = (t82 + 4U);
    *((int *)t83) = 0;
    t83 = (t82 + 8U);
    *((int *)t83) = -1;
    t84 = (0 - t81);
    t85 = (t84 * -1);
    t85 = (t85 + 1);
    t83 = (t82 + 12U);
    *((unsigned int *)t83) = t85;
    t83 = (t7 + 484U);
    t86 = (t1 + 2976);
    t87 = (t83 + 88U);
    *((char **)t87) = t86;
    t88 = (char *)alloca(t77);
    t89 = (t83 + 56U);
    *((char **)t89) = t88;
    xsi_type_set_default_value(t86, t88, t78);
    t90 = (t83 + 64U);
    *((char **)t90) = t78;
    t91 = (t83 + 80U);
    *((unsigned int *)t91) = t77;
    t92 = (t6 + 12U);
    t85 = *((unsigned int *)t92);
    t93 = (t85 - 1);
    t94 = (0 - t93);
    t95 = (t94 * -1);
    t95 = (t95 + 1);
    t95 = (t95 * 1U);
    t97 = (t6 + 12U);
    t98 = *((unsigned int *)t97);
    t99 = (t98 - 1);
    t100 = (t96 + 0U);
    t101 = (t100 + 0U);
    *((int *)t101) = t99;
    t101 = (t100 + 4U);
    *((int *)t101) = 0;
    t101 = (t100 + 8U);
    *((int *)t101) = -1;
    t102 = (0 - t99);
    t103 = (t102 * -1);
    t103 = (t103 + 1);
    t101 = (t100 + 12U);
    *((unsigned int *)t101) = t103;
    t101 = (t7 + 604U);
    t104 = (t1 + 2976);
    t105 = (t101 + 88U);
    *((char **)t105) = t104;
    t106 = (char *)alloca(t95);
    t107 = (t101 + 56U);
    *((char **)t107) = t106;
    xsi_type_set_default_value(t104, t106, t96);
    t108 = (t101 + 64U);
    *((char **)t108) = t96;
    t109 = (t101 + 80U);
    *((unsigned int *)t109) = t95;
    t110 = (t7 + 724U);
    t111 = ((STD_STANDARD) + 0);
    t112 = (t110 + 88U);
    *((char **)t112) = t111;
    t114 = (t110 + 56U);
    *((char **)t114) = t113;
    *((unsigned char *)t113) = (unsigned char)0;
    t115 = (t110 + 80U);
    *((unsigned int *)t115) = 1U;
    t116 = (t8 + 4U);
    t117 = (t3 != 0);
    if (t117 == 1)
        goto LAB3;

LAB2:    t118 = (t8 + 12U);
    *((char **)t118) = t4;
    t119 = (t8 + 20U);
    t120 = (t5 != 0);
    if (t120 == 1)
        goto LAB5;

LAB4:    t121 = (t8 + 28U);
    *((char **)t121) = t6;
    t123 = (t4 + 12U);
    t103 = *((unsigned int *)t123);
    t124 = (t103 < 1);
    if (t124 == 1)
        goto LAB9;

LAB10:    t125 = (t6 + 12U);
    t126 = *((unsigned int *)t125);
    t127 = (t126 < 1);
    t122 = t127;

LAB11:    if (t122 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t133, t9, t27, (unsigned char)1);
    t14 = (t83 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t133 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t133, t9, t34, (unsigned char)1);
    t14 = (t101 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t133 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t83 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 0U);
    t11 = *((int *)t9);
    t14 = (t78 + 0U);
    t20 = *((int *)t14);
    t16 = (t78 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t120 = *((unsigned char *)t17);
    t122 = (t120 == (unsigned char)1);
    if (t122 == 1)
        goto LAB16;

LAB17:    t18 = (t101 + 56U);
    t22 = *((char **)t18);
    t18 = (t96 + 0U);
    t36 = *((int *)t18);
    t23 = (t96 + 0U);
    t38 = *((int *)t23);
    t25 = (t96 + 8U);
    t39 = *((int *)t25);
    t40 = (t36 - t38);
    t41 = (t40 * t39);
    t44 = (1U * t41);
    t49 = (0 + t44);
    t26 = (t22 + t49);
    t124 = *((unsigned char *)t26);
    t127 = (t124 == (unsigned char)1);
    t117 = t127;

LAB18:    if (t117 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t83 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 0U);
    t11 = *((int *)t9);
    t14 = (t78 + 0U);
    t20 = *((int *)t14);
    t16 = (t78 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t117 = *((unsigned char *)t17);
    t120 = (t117 == (unsigned char)3);
    if (t120 != 0)
        goto LAB20;

LAB22:    t9 = (t83 + 56U);
    t13 = *((char **)t9);
    t9 = (t83 + 56U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    t16 = (t78 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t9, t13, t10);

LAB21:    t9 = (t101 + 56U);
    t13 = *((char **)t9);
    t9 = (t96 + 0U);
    t11 = *((int *)t9);
    t14 = (t96 + 0U);
    t20 = *((int *)t14);
    t16 = (t96 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t117 = *((unsigned char *)t17);
    t120 = (t117 == (unsigned char)3);
    if (t120 != 0)
        goto LAB23;

LAB25:    t9 = (t101 + 56U);
    t13 = *((char **)t9);
    t9 = (t101 + 56U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    t16 = (t96 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t9, t13, t10);

LAB24:    t9 = (t83 + 56U);
    t13 = *((char **)t9);
    t9 = (t78 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t14 = (char *)alloca(t10);
    memcpy(t14, t13, t10);
    t16 = (t101 + 56U);
    t17 = *((char **)t16);
    t16 = (t96 + 12U);
    t19 = *((unsigned int *)t16);
    t19 = (t19 * 1U);
    t18 = (char *)alloca(t19);
    memcpy(t18, t17, t19);
    t22 = (t47 + 56U);
    t23 = *((char **)t22);
    t22 = (t65 + 56U);
    t25 = *((char **)t22);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t14, t78, t18, t96, t23, t42, t25, t60);
    t9 = (t110 + 56U);
    t13 = *((char **)t9);
    t117 = *((unsigned char *)t13);
    if (t117 != 0)
        goto LAB26;

LAB28:
LAB27:    t9 = (t65 + 56U);
    t13 = *((char **)t9);
    t9 = (t60 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t16 = (t60 + 0U);
    t11 = *((int *)t16);
    t17 = (t60 + 4U);
    t20 = *((int *)t17);
    t22 = (t60 + 8U);
    t30 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t11;
    t25 = (t23 + 4U);
    *((int *)t25) = t20;
    t25 = (t23 + 8U);
    *((int *)t25) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t116) = t3;
    goto LAB2;

LAB5:    *((char **)t119) = t5;
    goto LAB4;

LAB6:    t128 = (t1 + 1288U);
    t129 = *((char **)t128);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t129, 0U);
    t128 = (t2 + 0U);
    t130 = (t128 + 0U);
    *((int *)t130) = 0;
    t130 = (t128 + 4U);
    *((int *)t130) = 1;
    t130 = (t128 + 8U);
    *((int *)t130) = -1;
    t131 = (1 - 0);
    t132 = (t131 * -1);
    t132 = (t132 + 1);
    t130 = (t128 + 12U);
    *((unsigned int *)t130) = t132;
    goto LAB1;

LAB9:    t122 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t60 + 12U);
    t59 = *((unsigned int *)t28);
    t59 = (t59 * 1U);
    t29 = xsi_get_transient_memory(t59);
    memset(t29, 0, t59);
    t31 = t29;
    memset(t31, (unsigned char)1, t59);
    t35 = (t65 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t43 = (t60 + 12U);
    t62 = *((unsigned int *)t43);
    t62 = (t62 * 1U);
    memcpy(t35, t29, t62);
    t9 = (t65 + 56U);
    t13 = *((char **)t9);
    t9 = (t60 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t60 + 0U);
    t11 = *((int *)t14);
    t16 = (t60 + 4U);
    t20 = *((int *)t16);
    t17 = (t60 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t117 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:    t18 = (t83 + 56U);
    t22 = *((char **)t18);
    t18 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t133, t22, t78);
    t23 = (t83 + 56U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t26 = (t133 + 12U);
    t41 = *((unsigned int *)t26);
    t44 = (1U * t41);
    memcpy(t23, t18, t44);
    t9 = (t110 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB21;

LAB23:    t18 = (t101 + 56U);
    t22 = *((char **)t18);
    t18 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t133, t22, t96);
    t23 = (t101 + 56U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t26 = (t133 + 12U);
    t41 = *((unsigned int *)t26);
    t44 = (1U * t41);
    memcpy(t23, t18, t44);
    goto LAB24;

<<<<<<< HEAD
LAB26:    t9 = (t1 + 5221);
=======
LAB26:    t9 = (t1 + 5213);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t17 = (t134 + 0U);
    t22 = (t17 + 0U);
    *((int *)t22) = 0;
    t22 = (t17 + 4U);
    *((int *)t22) = 0;
    t22 = (t17 + 8U);
    *((int *)t22) = 1;
    t11 = (0 - 0);
    t10 = (t11 * 1);
    t10 = (t10 + 1);
    t22 = (t17 + 12U);
    *((unsigned int *)t22) = t10;
    t22 = (t65 + 56U);
    t23 = *((char **)t22);
    t22 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t133, t9, t134, t23, t60);
    t25 = (t65 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t28 = (t133 + 12U);
    t10 = *((unsigned int *)t28);
    t19 = (1U * t10);
    memcpy(t25, t22, t19);
    goto LAB27;

LAB29:;
}

char *ieee_p_1242562249_sub_3299657338412254413_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t99[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t74;
    unsigned char t75;
    unsigned char t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    int t100;
    int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned char t105;
    char *t106;
    unsigned char t107;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_2177761772484348620_1035706684(t1, t73, t3, t4, t13, t24);
    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t23 = (1U * t9);
    memcpy(t14, t8, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t74 = (t10 > t9);
    if (t74 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t70 = (t1 + 1408U);
    t106 = *((char **)t70);
    t107 = *((unsigned char *)t106);
    if (t107 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t4 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t77 = (0 + t72);
    t36 = (t25 + t77);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t4 + 12U);
    t78 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t78;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t78 - t51);
    t79 = (t54 * -1);
    t79 = (t79 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t79;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t80 = (t71 - 1);
    t42 = (t4 + 12U);
    t79 = *((unsigned int *)t42);
    t81 = (t79 - t80);
    t82 = (t81 * -1);
    t82 = (t82 + 1);
    t83 = (1U * t82);
    t44 = xsi_get_transient_memory(t83);
    memset(t44, 0, t83);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t84 = *((int *)t56);
    t85 = (t84 - 1);
    t52 = (t12 + 56U);
    t57 = *((char **)t52);
    t86 = *((int *)t57);
    t87 = (t86 - 1);
    t52 = (t4 + 12U);
    t88 = *((unsigned int *)t52);
    if (-1 == -1)
        goto LAB17;

LAB18:    t89 = t88;

LAB19:    t90 = (t89 - t85);
    t91 = (t90 * -1);
    t92 = (1U * t91);
    t59 = (t49 + t92);
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t93 = *((int *)t61);
    t94 = (t93 - 1);
    t60 = (t4 + 12U);
    t95 = *((unsigned int *)t60);
    t96 = (t95 - t94);
    t97 = (t96 * -1);
    t97 = (t97 + 1);
    t98 = (1U * t97);
    memset(t59, (unsigned char)2, t98);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t100 = *((int *)t68);
    t101 = (t100 - 1);
    t66 = (t4 + 12U);
    t102 = *((unsigned int *)t66);
    t69 = (t99 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = t101;
    t70 = (t69 + 4U);
    *((unsigned int *)t70) = t102;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t103 = (t102 - t101);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t104;
    t105 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t36, t73, t44, t99);
    t63 = t105;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t75 = *((unsigned char *)t18);
    t76 = (t75 != (unsigned char)1);
    t67 = t76;
    goto LAB16;

LAB17:    t89 = t87;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t70 = (t1 + 5222);
=======
LAB20:    t70 = (t1 + 5214);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t70, 38U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_336849443748298947_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t66[16];
    char t100[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t67;
    char *t68;
    int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t73;
    unsigned char t74;
    unsigned char t75;
    unsigned char t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    int t101;
    int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned char t106;
    unsigned char t107;

LAB0:    t8 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t67 = (t12 + 56U);
    t68 = *((char **)t67);
    t69 = *((int *)t68);
    t67 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t66, t3, t69);
    t70 = (t28 + 56U);
    t71 = *((char **)t70);
    t70 = (t71 + 0);
    t72 = (t66 + 12U);
    t55 = *((unsigned int *)t72);
    t55 = (t55 * 1U);
    memcpy(t70, t67, t55);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_2177761772484348620_1035706684(t1, t66, t13, t24, t4, t5);
    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t66 + 12U);
    t10 = *((unsigned int *)t17);
    t23 = (1U * t10);
    memcpy(t14, t9, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t74 = (t8 > t10);
    if (t74 == 1)
        goto LAB10;

LAB11:    t73 = (unsigned char)0;

LAB12:    if (t73 == 1)
        goto LAB7;

LAB8:    t64 = (unsigned char)0;

LAB9:    if (t64 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t66, t13, t24, ((t10)));
    t16 = (t66 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t66 + 0U);
    t8 = *((int *)t17);
    t18 = (t66 + 4U);
    t11 = *((int *)t18);
    t19 = (t66 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t71 = (t1 + 1408U);
    t72 = *((char **)t71);
    t107 = *((unsigned char *)t72);
    if (t107 == 0)
        goto LAB16;

LAB17:    goto LAB5;

LAB7:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t77 = (t50 * 1U);
    t78 = (0 + t77);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t66 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t69 = *((int *)t43);
    t81 = (t69 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t12 + 56U);
    t57 = *((char **)t52);
    t87 = *((int *)t57);
    t88 = (t87 - 1);
    t52 = (t5 + 12U);
    t89 = *((unsigned int *)t52);
    if (-1 == -1)
        goto LAB13;

LAB14:    t90 = t89;

LAB15:    t91 = (t90 - t86);
    t92 = (t91 * -1);
    t93 = (1U * t92);
    t59 = (t49 + t93);
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t94 = *((int *)t61);
    t95 = (t94 - 1);
    t60 = (t5 + 12U);
    t96 = *((unsigned int *)t60);
    t97 = (t96 - t95);
    t98 = (t97 * -1);
    t98 = (t98 + 1);
    t99 = (1U * t98);
    memset(t59, (unsigned char)2, t99);
    t67 = (t12 + 56U);
    t68 = *((char **)t67);
    t101 = *((int *)t68);
    t102 = (t101 - 1);
    t67 = (t5 + 12U);
    t103 = *((unsigned int *)t67);
    t70 = (t100 + 0U);
    t71 = (t70 + 0U);
    *((int *)t71) = t102;
    t71 = (t70 + 4U);
    *((unsigned int *)t71) = t103;
    t71 = (t70 + 8U);
    *((int *)t71) = -1;
    t104 = (t103 - t102);
    t105 = (t104 * -1);
    t105 = (t105 + 1);
    t71 = (t70 + 12U);
    *((unsigned int *)t71) = t105;
    t106 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t36, t66, t44, t100);
    t64 = t106;
    goto LAB9;

LAB10:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t75 = *((unsigned char *)t18);
    t76 = (t75 != (unsigned char)1);
    t73 = t76;
    goto LAB12;

LAB13:    t90 = t88;
    goto LAB15;

<<<<<<< HEAD
LAB16:    t71 = (t1 + 5260);
=======
LAB16:    t71 = (t1 + 5252);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t71, 38U, (unsigned char)1);
    goto LAB17;

LAB18:;
}

char *ieee_p_1242562249_sub_1312248119351272476_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    int t114;
    int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned char t121;
    char *t122;
    unsigned char t123;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_4198213126180714255_1035706684(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t75 = (t10 > t9);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t118 = (t1 + 1408U);
    t122 = *((char **)t118);
    t123 = *((unsigned char *)t122);
    if (t123 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t4 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t4 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t4 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t37 + 56U);
    t57 = *((char **)t52);
    t52 = (t4 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - 1);
    t59 = (t24 + 0U);
    t89 = *((int *)t59);
    t60 = (t24 + 8U);
    t90 = *((int *)t60);
    t91 = (t88 - t89);
    t92 = (t91 * t90);
    t61 = (t24 + 4U);
    t93 = *((int *)t61);
    xsi_vhdl_check_range_of_index(t89, t93, t90, t88);
    t94 = (1U * t92);
    t95 = (0 + t94);
    t66 = (t57 + t95);
    t96 = *((unsigned char *)t66);
    t68 = (t12 + 56U);
    t69 = *((char **)t68);
    t97 = *((int *)t69);
    t98 = (t97 - 1);
    t68 = (t4 + 12U);
    t99 = *((unsigned int *)t68);
    if (-1 == -1)
        goto LAB17;

LAB18:    t100 = t99;

LAB19:    t101 = (t100 - t86);
    t102 = (t101 * -1);
    t103 = (1U * t102);
    t70 = (t49 + t103);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t106 = *((int *)t105);
    t107 = (t106 - 1);
    t104 = (t4 + 12U);
    t108 = *((unsigned int *)t104);
    t109 = (t108 - t107);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    memset(t70, t96, t111);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t114 = *((int *)t113);
    t115 = (t114 - 1);
    t112 = (t4 + 12U);
    t116 = *((unsigned int *)t112);
    t117 = (t74 + 0U);
    t118 = (t117 + 0U);
    *((int *)t118) = t115;
    t118 = (t117 + 4U);
    *((unsigned int *)t118) = t116;
    t118 = (t117 + 8U);
    *((int *)t118) = -1;
    t119 = (t116 - t115);
    t120 = (t119 * -1);
    t120 = (t120 + 1);
    t118 = (t117 + 12U);
    *((unsigned int *)t118) = t120;
    t121 = ieee_p_1242562249_sub_3044629854704842352_1035706684(t1, t36, t73, t44, t74);
    t63 = t121;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t100 = t98;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t118 = (t1 + 5298);
=======
LAB20:    t118 = (t1 + 5290);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t118, 38U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_2686060666672968475_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    int t114;
    int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned char t121;
    char *t122;
    unsigned char t123;

LAB0:    t8 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_4198213126180714255_1035706684(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t75 = (t8 > t10);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t118 = (t1 + 1408U);
    t122 = *((char **)t118);
    t123 = *((unsigned char *)t122);
    if (t123 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t37 + 56U);
    t57 = *((char **)t52);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - 1);
    t59 = (t24 + 0U);
    t89 = *((int *)t59);
    t60 = (t24 + 8U);
    t90 = *((int *)t60);
    t91 = (t88 - t89);
    t92 = (t91 * t90);
    t61 = (t24 + 4U);
    t93 = *((int *)t61);
    xsi_vhdl_check_range_of_index(t89, t93, t90, t88);
    t94 = (1U * t92);
    t95 = (0 + t94);
    t66 = (t57 + t95);
    t96 = *((unsigned char *)t66);
    t68 = (t12 + 56U);
    t69 = *((char **)t68);
    t97 = *((int *)t69);
    t98 = (t97 - 1);
    t68 = (t5 + 12U);
    t99 = *((unsigned int *)t68);
    if (-1 == -1)
        goto LAB17;

LAB18:    t100 = t99;

LAB19:    t101 = (t100 - t86);
    t102 = (t101 * -1);
    t103 = (1U * t102);
    t70 = (t49 + t103);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t106 = *((int *)t105);
    t107 = (t106 - 1);
    t104 = (t5 + 12U);
    t108 = *((unsigned int *)t104);
    t109 = (t108 - t107);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    memset(t70, t96, t111);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t114 = *((int *)t113);
    t115 = (t114 - 1);
    t112 = (t5 + 12U);
    t116 = *((unsigned int *)t112);
    t117 = (t74 + 0U);
    t118 = (t117 + 0U);
    *((int *)t118) = t115;
    t118 = (t117 + 4U);
    *((unsigned int *)t118) = t116;
    t118 = (t117 + 8U);
    *((int *)t118) = -1;
    t119 = (t116 - t115);
    t120 = (t119 * -1);
    t120 = (t120 + 1);
    t118 = (t117 + 12U);
    *((unsigned int *)t118) = t120;
    t121 = ieee_p_1242562249_sub_3044629854704842352_1035706684(t1, t36, t73, t44, t74);
    t64 = t121;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t100 = t98;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t118 = (t1 + 5336);
=======
LAB20:    t118 = (t1 + 5328);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t118, 38U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_2177761772300207432_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[728];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t74[16];
    char t92[16];
    char t123[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    int t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned char t107;
    char *t108;
    char *t109;
    unsigned char t110;
    char *t111;
    unsigned char t112;
    char *t113;
    unsigned char t114;
    char *t115;
    unsigned int t116;
    unsigned char t117;
    char *t118;
    char *t119;
    char *t120;
    int t121;
    unsigned int t122;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 2976);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 2976);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t63 - 1);
    t72 = (0 - t71);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t73 = (t73 * 1U);
    t75 = (t4 + 12U);
    t76 = *((unsigned int *)t75);
    t77 = (t76 - 1);
    t78 = (t74 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t77;
    t79 = (t78 + 4U);
    *((int *)t79) = 0;
    t79 = (t78 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - t77);
    t81 = (t80 * -1);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    t79 = (t7 + 484U);
    t82 = (t1 + 2976);
    t83 = (t79 + 88U);
    *((char **)t83) = t82;
    t84 = (char *)alloca(t73);
    t85 = (t79 + 56U);
    *((char **)t85) = t84;
    xsi_type_set_default_value(t82, t84, t74);
    t86 = (t79 + 64U);
    *((char **)t86) = t74;
    t87 = (t79 + 80U);
    *((unsigned int *)t87) = t73;
    t88 = (t6 + 12U);
    t81 = *((unsigned int *)t88);
    t89 = (t81 - 1);
    t90 = (0 - t89);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t91 = (t91 * 1U);
    t93 = (t6 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t94 - 1);
    t96 = (t92 + 0U);
    t97 = (t96 + 0U);
    *((int *)t97) = t95;
    t97 = (t96 + 4U);
    *((int *)t97) = 0;
    t97 = (t96 + 8U);
    *((int *)t97) = -1;
    t98 = (0 - t95);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t97 = (t96 + 12U);
    *((unsigned int *)t97) = t99;
    t97 = (t7 + 604U);
    t100 = (t1 + 2976);
    t101 = (t97 + 88U);
    *((char **)t101) = t100;
    t102 = (char *)alloca(t91);
    t103 = (t97 + 56U);
    *((char **)t103) = t102;
    xsi_type_set_default_value(t100, t102, t92);
    t104 = (t97 + 64U);
    *((char **)t104) = t92;
    t105 = (t97 + 80U);
    *((unsigned int *)t105) = t91;
    t106 = (t8 + 4U);
    t107 = (t3 != 0);
    if (t107 == 1)
        goto LAB3;

LAB2:    t108 = (t8 + 12U);
    *((char **)t108) = t4;
    t109 = (t8 + 20U);
    t110 = (t5 != 0);
    if (t110 == 1)
        goto LAB5;

LAB4:    t111 = (t8 + 28U);
    *((char **)t111) = t6;
    t113 = (t4 + 12U);
    t99 = *((unsigned int *)t113);
    t114 = (t99 < 1);
    if (t114 == 1)
        goto LAB9;

LAB10:    t115 = (t6 + 12U);
    t116 = *((unsigned int *)t115);
    t117 = (t116 < 1);
    t112 = t117;

LAB11:    if (t112 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t27, (unsigned char)1);
    t14 = (t45 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t123, t9, t34, (unsigned char)1);
    t14 = (t61 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t123 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t110 = *((unsigned char *)t17);
    t112 = (t110 == (unsigned char)1);
    if (t112 == 1)
        goto LAB16;

LAB17:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = (t58 + 0U);
    t36 = *((int *)t18);
    t23 = (t58 + 0U);
    t38 = *((int *)t23);
    t25 = (t58 + 8U);
    t40 = *((int *)t25);
    t41 = (t36 - t38);
    t47 = (t41 * t40);
    t63 = (1U * t47);
    t73 = (0 + t63);
    t26 = (t22 + t73);
    t114 = *((unsigned char *)t26);
    t117 = (t114 == (unsigned char)1);
    t107 = t117;

LAB18:    if (t107 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t14 = (char *)alloca(t10);
    memcpy(t14, t13, t10);
    t16 = (t61 + 56U);
    t17 = *((char **)t16);
    t16 = (t58 + 12U);
    t19 = *((unsigned int *)t16);
    t19 = (t19 * 1U);
    t18 = (char *)alloca(t19);
    memcpy(t18, t17, t19);
    t22 = (t79 + 56U);
    t23 = *((char **)t22);
    t22 = (t97 + 56U);
    t25 = *((char **)t22);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t14, t42, t18, t58, t23, t74, t25, t92);
    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t16 = (t92 + 0U);
    t11 = *((int *)t16);
    t17 = (t92 + 4U);
    t20 = *((int *)t17);
    t22 = (t92 + 8U);
    t30 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t11;
    t25 = (t23 + 4U);
    *((int *)t25) = t20;
    t25 = (t23 + 8U);
    *((int *)t25) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t106) = t3;
    goto LAB2;

LAB5:    *((char **)t109) = t5;
    goto LAB4;

LAB6:    t118 = (t1 + 1168U);
    t119 = *((char **)t118);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t119, 0U);
    t118 = (t2 + 0U);
    t120 = (t118 + 0U);
    *((int *)t120) = 0;
    t120 = (t118 + 4U);
    *((int *)t120) = 1;
    t120 = (t118 + 8U);
    *((int *)t120) = -1;
    t121 = (1 - 0);
    t122 = (t121 * -1);
    t122 = (t122 + 1);
    t120 = (t118 + 12U);
    *((unsigned int *)t120) = t122;
    goto LAB1;

LAB9:    t112 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t92 + 12U);
    t76 = *((unsigned int *)t28);
    t76 = (t76 * 1U);
    t29 = xsi_get_transient_memory(t76);
    memset(t29, 0, t76);
    t31 = t29;
    memset(t31, (unsigned char)1, t76);
    t35 = (t97 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t92 + 12U);
    t81 = *((unsigned int *)t39);
    t81 = (t81 * 1U);
    memcpy(t35, t29, t81);
    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t92 + 0U);
    t11 = *((int *)t14);
    t16 = (t92 + 4U);
    t20 = *((int *)t16);
    t17 = (t92 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t107 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:;
}

char *ieee_p_1242562249_sub_4450345864055181605_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[1088];
    char t8[40];
    char t15[8];
    char t24[8];
    char t27[16];
    char t34[16];
    char t42[16];
    char t58[16];
    char t74[16];
    char t92[16];
    char t110[16];
    char t128[16];
    char t145[8];
    char t165[16];
    char t166[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    char *t59;
    int t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    int t95;
    char *t96;
    char *t97;
    int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    int t107;
    int t108;
    unsigned int t109;
    char *t111;
    unsigned int t112;
    int t113;
    char *t114;
    char *t115;
    int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    int t125;
    int t126;
    unsigned int t127;
    char *t129;
    unsigned int t130;
    int t131;
    char *t132;
    char *t133;
    int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t146;
    char *t147;
    char *t148;
    unsigned char t149;
    char *t150;
    char *t151;
    unsigned char t152;
    char *t153;
    unsigned char t154;
    char *t155;
    unsigned char t156;
    char *t157;
    unsigned int t158;
    unsigned char t159;
    char *t160;
    char *t161;
    char *t162;
    int t163;
    unsigned int t164;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t7 + 4U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t6 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (t19 - 1);
    t21 = (t7 + 124U);
    t22 = ((STD_STANDARD) + 384);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    *((int *)t24) = t20;
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 4U;
    t28 = (t12 + 56U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t28 = (t27 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = t30;
    t31 = (t28 + 4U);
    *((int *)t31) = 0;
    t31 = (t28 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - t30);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t33;
    t31 = (t21 + 56U);
    t35 = *((char **)t31);
    t36 = *((int *)t35);
    t31 = (t34 + 0U);
    t37 = (t31 + 0U);
    *((int *)t37) = t36;
    t37 = (t31 + 4U);
    *((int *)t37) = 0;
    t37 = (t31 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t36);
    t33 = (t38 * -1);
    t33 = (t33 + 1);
    t37 = (t31 + 12U);
    *((unsigned int *)t37) = t33;
    t37 = (t12 + 56U);
    t39 = *((char **)t37);
    t40 = *((int *)t39);
    t41 = (0 - t40);
    t33 = (t41 * -1);
    t33 = (t33 + 1);
    t33 = (t33 * 1U);
    t37 = (t12 + 56U);
    t43 = *((char **)t37);
    t44 = *((int *)t43);
    t37 = (t42 + 0U);
    t45 = (t37 + 0U);
    *((int *)t45) = t44;
    t45 = (t37 + 4U);
    *((int *)t45) = 0;
    t45 = (t37 + 8U);
    *((int *)t45) = -1;
    t46 = (0 - t44);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t37 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 244U);
    t48 = (t1 + 3080);
    t49 = (t45 + 88U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t33);
    t51 = (t45 + 56U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t42);
    t52 = (t45 + 64U);
    *((char **)t52) = t42;
    t53 = (t45 + 80U);
    *((unsigned int *)t53) = t33;
    t54 = (t21 + 56U);
    t55 = *((char **)t54);
    t56 = *((int *)t55);
    t57 = (0 - t56);
    t47 = (t57 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t54 = (t21 + 56U);
    t59 = *((char **)t54);
    t60 = *((int *)t59);
    t54 = (t58 + 0U);
    t61 = (t54 + 0U);
    *((int *)t61) = t60;
    t61 = (t54 + 4U);
    *((int *)t61) = 0;
    t61 = (t54 + 8U);
    *((int *)t61) = -1;
    t62 = (0 - t60);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t54 + 12U);
    *((unsigned int *)t61) = t63;
    t61 = (t7 + 364U);
    t64 = (t1 + 3080);
    t65 = (t61 + 88U);
    *((char **)t65) = t64;
    t66 = (char *)alloca(t47);
    t67 = (t61 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t58);
    t68 = (t61 + 64U);
    *((char **)t68) = t58;
    t69 = (t61 + 80U);
    *((unsigned int *)t69) = t47;
    t70 = (t4 + 12U);
    t63 = *((unsigned int *)t70);
    t71 = (t63 - 1);
    t72 = (0 - t71);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t73 = (t73 * 1U);
    t75 = (t4 + 12U);
    t76 = *((unsigned int *)t75);
    t77 = (t76 - 1);
    t78 = (t74 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t77;
    t79 = (t78 + 4U);
    *((int *)t79) = 0;
    t79 = (t78 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - t77);
    t81 = (t80 * -1);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    t79 = (t7 + 484U);
    t82 = (t1 + 2976);
    t83 = (t79 + 88U);
    *((char **)t83) = t82;
    t84 = (char *)alloca(t73);
    t85 = (t79 + 56U);
    *((char **)t85) = t84;
    xsi_type_set_default_value(t82, t84, t74);
    t86 = (t79 + 64U);
    *((char **)t86) = t74;
    t87 = (t79 + 80U);
    *((unsigned int *)t87) = t73;
    t88 = (t6 + 12U);
    t81 = *((unsigned int *)t88);
    t89 = (t81 - 1);
    t90 = (0 - t89);
    t91 = (t90 * -1);
    t91 = (t91 + 1);
    t91 = (t91 * 1U);
    t93 = (t6 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t94 - 1);
    t96 = (t92 + 0U);
    t97 = (t96 + 0U);
    *((int *)t97) = t95;
    t97 = (t96 + 4U);
    *((int *)t97) = 0;
    t97 = (t96 + 8U);
    *((int *)t97) = -1;
    t98 = (0 - t95);
    t99 = (t98 * -1);
    t99 = (t99 + 1);
    t97 = (t96 + 12U);
    *((unsigned int *)t97) = t99;
    t97 = (t7 + 604U);
    t100 = (t1 + 2976);
    t101 = (t97 + 88U);
    *((char **)t101) = t100;
    t102 = (char *)alloca(t91);
    t103 = (t97 + 56U);
    *((char **)t103) = t102;
    xsi_type_set_default_value(t100, t102, t92);
    t104 = (t97 + 64U);
    *((char **)t104) = t92;
    t105 = (t97 + 80U);
    *((unsigned int *)t105) = t91;
    t106 = (t4 + 12U);
    t99 = *((unsigned int *)t106);
    t107 = (t99 - 1);
    t108 = (0 - t107);
    t109 = (t108 * -1);
    t109 = (t109 + 1);
    t109 = (t109 * 1U);
    t111 = (t4 + 12U);
    t112 = *((unsigned int *)t111);
    t113 = (t112 - 1);
    t114 = (t110 + 0U);
    t115 = (t114 + 0U);
    *((int *)t115) = t113;
    t115 = (t114 + 4U);
    *((int *)t115) = 0;
    t115 = (t114 + 8U);
    *((int *)t115) = -1;
    t116 = (0 - t113);
    t117 = (t116 * -1);
    t117 = (t117 + 1);
    t115 = (t114 + 12U);
    *((unsigned int *)t115) = t117;
    t115 = (t7 + 724U);
    t118 = (t1 + 2976);
    t119 = (t115 + 88U);
    *((char **)t119) = t118;
    t120 = (char *)alloca(t109);
    t121 = (t115 + 56U);
    *((char **)t121) = t120;
    xsi_type_set_default_value(t118, t120, t110);
    t122 = (t115 + 64U);
    *((char **)t122) = t110;
    t123 = (t115 + 80U);
    *((unsigned int *)t123) = t109;
    t124 = (t6 + 12U);
    t117 = *((unsigned int *)t124);
    t125 = (t117 - 1);
    t126 = (0 - t125);
    t127 = (t126 * -1);
    t127 = (t127 + 1);
    t127 = (t127 * 1U);
    t129 = (t6 + 12U);
    t130 = *((unsigned int *)t129);
    t131 = (t130 - 1);
    t132 = (t128 + 0U);
    t133 = (t132 + 0U);
    *((int *)t133) = t131;
    t133 = (t132 + 4U);
    *((int *)t133) = 0;
    t133 = (t132 + 8U);
    *((int *)t133) = -1;
    t134 = (0 - t131);
    t135 = (t134 * -1);
    t135 = (t135 + 1);
    t133 = (t132 + 12U);
    *((unsigned int *)t133) = t135;
    t133 = (t7 + 844U);
    t136 = (t1 + 2976);
    t137 = (t133 + 88U);
    *((char **)t137) = t136;
    t138 = (char *)alloca(t127);
    t139 = (t133 + 56U);
    *((char **)t139) = t138;
    xsi_type_set_default_value(t136, t138, t128);
    t140 = (t133 + 64U);
    *((char **)t140) = t128;
    t141 = (t133 + 80U);
    *((unsigned int *)t141) = t127;
    t142 = (t7 + 964U);
    t143 = ((STD_STANDARD) + 0);
    t144 = (t142 + 88U);
    *((char **)t144) = t143;
    t146 = (t142 + 56U);
    *((char **)t146) = t145;
    *((unsigned char *)t145) = (unsigned char)0;
    t147 = (t142 + 80U);
    *((unsigned int *)t147) = 1U;
    t148 = (t8 + 4U);
    t149 = (t3 != 0);
    if (t149 == 1)
        goto LAB3;

LAB2:    t150 = (t8 + 12U);
    *((char **)t150) = t4;
    t151 = (t8 + 20U);
    t152 = (t5 != 0);
    if (t152 == 1)
        goto LAB5;

LAB4:    t153 = (t8 + 28U);
    *((char **)t153) = t6;
    t155 = (t4 + 12U);
    t135 = *((unsigned int *)t155);
    t156 = (t135 < 1);
    if (t156 == 1)
        goto LAB9;

LAB10:    t157 = (t6 + 12U);
    t158 = *((unsigned int *)t157);
    t159 = (t158 < 1);
    t154 = t159;

LAB11:    if (t154 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t3 + 0);
    t13 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t165, t9, t27, (unsigned char)1);
    t14 = (t45 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t165 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t5 + 0);
    t13 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t165, t9, t34, (unsigned char)1);
    t14 = (t61 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t165 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t13, t10);
    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t152 = *((unsigned char *)t17);
    t154 = (t152 == (unsigned char)1);
    if (t154 == 1)
        goto LAB16;

LAB17:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = (t58 + 0U);
    t36 = *((int *)t18);
    t23 = (t58 + 0U);
    t38 = *((int *)t23);
    t25 = (t58 + 8U);
    t40 = *((int *)t25);
    t41 = (t36 - t38);
    t47 = (t41 * t40);
    t63 = (1U * t47);
    t73 = (0 + t63);
    t26 = (t22 + t73);
    t156 = *((unsigned char *)t26);
    t159 = (t156 == (unsigned char)1);
    t149 = t159;

LAB18:    if (t149 != 0)
        goto LAB13;

LAB15:
LAB14:    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t42 + 0U);
    t11 = *((int *)t9);
    t14 = (t42 + 0U);
    t20 = *((int *)t14);
    t16 = (t42 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t149 = *((unsigned char *)t17);
    t152 = (t149 == (unsigned char)3);
    if (t152 != 0)
        goto LAB20;

LAB22:    t9 = (t45 + 56U);
    t13 = *((char **)t9);
    t9 = (t115 + 56U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    t16 = (t42 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t9, t13, t10);

LAB21:    t9 = (t61 + 56U);
    t13 = *((char **)t9);
    t9 = (t58 + 0U);
    t11 = *((int *)t9);
    t14 = (t58 + 0U);
    t20 = *((int *)t14);
    t16 = (t58 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t13 + t33);
    t149 = *((unsigned char *)t17);
    t152 = (t149 == (unsigned char)3);
    if (t152 != 0)
        goto LAB23;

LAB25:    t9 = (t61 + 56U);
    t13 = *((char **)t9);
    t9 = (t133 + 56U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    t16 = (t58 + 12U);
    t10 = *((unsigned int *)t16);
    t10 = (t10 * 1U);
    memcpy(t9, t13, t10);

LAB24:    t9 = (t115 + 56U);
    t13 = *((char **)t9);
    t9 = (t110 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t14 = (char *)alloca(t10);
    memcpy(t14, t13, t10);
    t16 = (t133 + 56U);
    t17 = *((char **)t16);
    t16 = (t128 + 12U);
    t19 = *((unsigned int *)t16);
    t19 = (t19 * 1U);
    t18 = (char *)alloca(t19);
    memcpy(t18, t17, t19);
    t22 = (t79 + 56U);
    t23 = *((char **)t22);
    t22 = (t97 + 56U);
    t25 = *((char **)t22);
    ieee_p_1242562249_sub_3138923086916629906_1035706684(t1, (char *)0, t14, t110, t18, t128, t23, t74, t25, t92);
    t9 = (t142 + 56U);
    t13 = *((char **)t9);
    t152 = *((unsigned char *)t13);
    if (t152 == 1)
        goto LAB29;

LAB30:    t149 = (unsigned char)0;

LAB31:    if (t149 != 0)
        goto LAB26;

LAB28:    t9 = (t142 + 56U);
    t13 = *((char **)t9);
    t152 = *((unsigned char *)t13);
    if (t152 == 1)
        goto LAB34;

LAB35:    t149 = (unsigned char)0;

LAB36:    if (t149 != 0)
        goto LAB32;

LAB33:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t13 = (t4 + 0U);
    t20 = *((int *)t13);
    t16 = (t4 + 8U);
    t30 = *((int *)t16);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t17 = (t3 + t33);
    t152 = *((unsigned char *)t17);
    t154 = (t152 == (unsigned char)3);
    if (t154 == 1)
        goto LAB39;

LAB40:    t149 = (unsigned char)0;

LAB41:    if (t149 != 0)
        goto LAB37;

LAB38:
LAB27:    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t16 = (t92 + 0U);
    t11 = *((int *)t16);
    t17 = (t92 + 4U);
    t20 = *((int *)t17);
    t22 = (t92 + 8U);
    t30 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t11;
    t25 = (t23 + 4U);
    *((int *)t25) = t20;
    t25 = (t23 + 8U);
    *((int *)t25) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t148) = t3;
    goto LAB2;

LAB5:    *((char **)t151) = t5;
    goto LAB4;

LAB6:    t160 = (t1 + 1288U);
    t161 = *((char **)t160);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t161, 0U);
    t160 = (t2 + 0U);
    t162 = (t160 + 0U);
    *((int *)t162) = 0;
    t162 = (t160 + 4U);
    *((int *)t162) = 1;
    t162 = (t160 + 8U);
    *((int *)t162) = -1;
    t163 = (1 - 0);
    t164 = (t163 * -1);
    t164 = (t164 + 1);
    t162 = (t160 + 12U);
    *((unsigned int *)t162) = t164;
    goto LAB1;

LAB9:    t154 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB13:    t28 = (t92 + 12U);
    t76 = *((unsigned int *)t28);
    t76 = (t76 * 1U);
    t29 = xsi_get_transient_memory(t76);
    memset(t29, 0, t76);
    t31 = t29;
    memset(t31, (unsigned char)1, t76);
    t35 = (t97 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t92 + 12U);
    t81 = *((unsigned int *)t39);
    t81 = (t81 * 1U);
    memcpy(t35, t29, t81);
    t9 = (t97 + 56U);
    t13 = *((char **)t9);
    t9 = (t92 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t13, t10);
    t14 = (t92 + 0U);
    t11 = *((int *)t14);
    t16 = (t92 + 4U);
    t20 = *((int *)t16);
    t17 = (t92 + 8U);
    t30 = *((int *)t17);
    t18 = (t2 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = t11;
    t22 = (t18 + 4U);
    *((int *)t22) = t20;
    t22 = (t18 + 8U);
    *((int *)t22) = t30;
    t32 = (t20 - t11);
    t19 = (t32 * t30);
    t19 = (t19 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t19;
    goto LAB1;

LAB16:    t149 = (unsigned char)1;
    goto LAB18;

LAB19:    goto LAB14;

LAB20:    t18 = (t45 + 56U);
    t22 = *((char **)t18);
    t18 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t165, t22, t42);
    t23 = (t115 + 56U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t26 = (t165 + 12U);
    t47 = *((unsigned int *)t26);
    t63 = (1U * t47);
    memcpy(t23, t18, t63);
    goto LAB21;

LAB23:    t18 = (t61 + 56U);
    t22 = *((char **)t18);
    t18 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t165, t22, t58);
    t23 = (t133 + 56U);
    t25 = *((char **)t23);
    t23 = (t25 + 0);
    t26 = (t165 + 12U);
    t47 = *((unsigned int *)t26);
    t63 = (1U * t47);
    memcpy(t23, t18, t63);
    t9 = (t142 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    *((unsigned char *)t9) = (unsigned char)1;
    goto LAB24;

<<<<<<< HEAD
LAB26:    t23 = (t1 + 5374);
=======
LAB26:    t23 = (t1 + 5366);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t26 = (t166 + 0U);
    t28 = (t26 + 0U);
    *((int *)t28) = 0;
    t28 = (t26 + 4U);
    *((int *)t28) = 0;
    t28 = (t26 + 8U);
    *((int *)t28) = 1;
    t36 = (0 - 0);
    t47 = (t36 * 1);
    t47 = (t47 + 1);
    t28 = (t26 + 12U);
    *((unsigned int *)t28) = t47;
    t28 = (t97 + 56U);
    t29 = *((char **)t28);
    t28 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t165, t23, t166, t29, t92);
    t31 = (t97 + 56U);
    t35 = *((char **)t31);
    t31 = (t35 + 0);
    t37 = (t165 + 12U);
    t47 = *((unsigned int *)t37);
    t63 = (1U * t47);
    memcpy(t31, t28, t63);
    goto LAB27;

LAB29:    t9 = (t4 + 0U);
    t11 = *((int *)t9);
    t16 = (t4 + 0U);
    t20 = *((int *)t16);
    t17 = (t4 + 8U);
    t30 = *((int *)t17);
    t32 = (t11 - t20);
    t10 = (t32 * t30);
    t19 = (1U * t10);
    t33 = (0 + t19);
    t22 = (t3 + t33);
    t154 = *((unsigned char *)t22);
    t156 = (t154 == (unsigned char)3);
    t149 = t156;
    goto LAB31;

LAB32:    t23 = (t97 + 56U);
    t25 = *((char **)t23);
    t23 = (t133 + 56U);
    t26 = *((char **)t23);
    t23 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t166, t25, t92, t26, t128);
    t28 = (t97 + 56U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    t31 = (t166 + 12U);
    t10 = *((unsigned int *)t31);
    t19 = (1U * t10);
    memcpy(t28, t23, t19);
    goto LAB27;

LAB34:    t9 = (t97 + 56U);
    t16 = *((char **)t9);
<<<<<<< HEAD
    t9 = (t1 + 5375);
=======
    t9 = (t1 + 5367);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t22 = (t165 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t11 = (0 - 0);
    t10 = (t11 * 1);
    t10 = (t10 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t10;
    t154 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t16, t92, t9, t165);
    t149 = t154;
    goto LAB36;

LAB37:    t28 = (t133 + 56U);
    t29 = *((char **)t28);
    t28 = (t97 + 56U);
    t31 = *((char **)t28);
    t28 = ieee_p_1242562249_sub_1701011461141789389_1035706684(t1, t166, t29, t128, t31, t92);
    t35 = (t97 + 56U);
    t37 = *((char **)t35);
    t35 = (t37 + 0);
    t39 = (t166 + 12U);
    t47 = *((unsigned int *)t39);
    t63 = (1U * t47);
    memcpy(t35, t28, t63);
    goto LAB27;

LAB39:    t22 = (t97 + 56U);
    t23 = *((char **)t22);
<<<<<<< HEAD
    t22 = (t1 + 5376);
=======
    t22 = (t1 + 5368);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    t26 = (t165 + 0U);
    t28 = (t26 + 0U);
    *((int *)t28) = 0;
    t28 = (t26 + 4U);
    *((int *)t28) = 0;
    t28 = (t26 + 8U);
    *((int *)t28) = 1;
    t36 = (0 - 0);
    t47 = (t36 * 1);
    t47 = (t47 + 1);
    t28 = (t26 + 12U);
    *((unsigned int *)t28) = t47;
    t156 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t23, t92, t22, t165);
    t149 = t156;
    goto LAB41;

LAB42:;
}

char *ieee_p_1242562249_sub_3299657338228113225_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned char t105;
    char *t106;
    unsigned char t107;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_2177761772300207432_1035706684(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t75 = (t10 > t9);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t70 = (t1 + 1408U);
    t106 = *((char **)t70);
    t107 = *((unsigned char *)t106);
    if (t107 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t4 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t4 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t4 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t12 + 56U);
    t57 = *((char **)t52);
    t87 = *((int *)t57);
    t88 = (t87 - 1);
    t52 = (t4 + 12U);
    t89 = *((unsigned int *)t52);
    if (-1 == -1)
        goto LAB17;

LAB18:    t90 = t89;

LAB19:    t91 = (t90 - t86);
    t92 = (t91 * -1);
    t93 = (1U * t92);
    t59 = (t49 + t93);
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t94 = *((int *)t61);
    t95 = (t94 - 1);
    t60 = (t4 + 12U);
    t96 = *((unsigned int *)t60);
    t97 = (t96 - t95);
    t98 = (t97 * -1);
    t98 = (t98 + 1);
    t99 = (1U * t98);
    memset(t59, (unsigned char)2, t99);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t100 = *((int *)t68);
    t101 = (t100 - 1);
    t66 = (t4 + 12U);
    t102 = *((unsigned int *)t66);
    t69 = (t74 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = t101;
    t70 = (t69 + 4U);
    *((unsigned int *)t70) = t102;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t103 = (t102 - t101);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t104;
    t105 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t36, t73, t44, t74);
    t63 = t105;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t90 = t88;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t70 = (t1 + 5377);
=======
LAB20:    t70 = (t1 + 5369);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t70, 36U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_336849443564157759_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned char t105;
    char *t106;
    unsigned char t107;

LAB0:    t8 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 2976);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 2976);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_2177761772300207432_1035706684(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t75 = (t8 > t10);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1168U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t70 = (t1 + 1408U);
    t106 = *((char **)t70);
    t107 = *((unsigned char *)t106);
    if (t107 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t12 + 56U);
    t57 = *((char **)t52);
    t87 = *((int *)t57);
    t88 = (t87 - 1);
    t52 = (t5 + 12U);
    t89 = *((unsigned int *)t52);
    if (-1 == -1)
        goto LAB17;

LAB18:    t90 = t89;

LAB19:    t91 = (t90 - t86);
    t92 = (t91 * -1);
    t93 = (1U * t92);
    t59 = (t49 + t93);
    t60 = (t12 + 56U);
    t61 = *((char **)t60);
    t94 = *((int *)t61);
    t95 = (t94 - 1);
    t60 = (t5 + 12U);
    t96 = *((unsigned int *)t60);
    t97 = (t96 - t95);
    t98 = (t97 * -1);
    t98 = (t98 + 1);
    t99 = (1U * t98);
    memset(t59, (unsigned char)2, t99);
    t66 = (t12 + 56U);
    t68 = *((char **)t66);
    t100 = *((int *)t68);
    t101 = (t100 - 1);
    t66 = (t5 + 12U);
    t102 = *((unsigned int *)t66);
    t69 = (t74 + 0U);
    t70 = (t69 + 0U);
    *((int *)t70) = t101;
    t70 = (t69 + 4U);
    *((unsigned int *)t70) = t102;
    t70 = (t69 + 8U);
    *((int *)t70) = -1;
    t103 = (t102 - t101);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t70 = (t69 + 12U);
    *((unsigned int *)t70) = t104;
    t105 = ieee_p_1242562249_sub_1434220770680401498_1035706684(t1, t36, t73, t44, t74);
    t64 = t105;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t90 = t88;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t70 = (t1 + 5413);
=======
LAB20:    t70 = (t1 + 5405);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t70, 36U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_1312248119167131288_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    int t114;
    int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned char t121;
    char *t122;
    unsigned char t123;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t5);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t9)), t10);
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t4 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t4 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    t63 = (t3 != 0);
    if (t63 == 1)
        goto LAB3;

LAB2:    t64 = (t7 + 12U);
    *((char **)t64) = t4;
    t65 = (t7 + 20U);
    *((int *)t65) = t5;
    t66 = (t4 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t5, t10);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t9 = *((unsigned int *)t17);
    t9 = (t9 * 1U);
    memcpy(t14, t8, t9);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = ieee_p_1242562249_sub_4450345864055181605_1035706684(t1, t74, t3, t4, t13, t24);
    t14 = (t24 + 12U);
    t9 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t8, t74, ((t9)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t8 = (t12 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t75 = (t10 > t9);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t63 = (unsigned char)0;

LAB13:    if (t63 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t37 + 56U);
    t13 = *((char **)t8);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t9)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t10 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t10;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t10);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t62) = t3;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t118 = (t1 + 1408U);
    t122 = *((char **)t118);
    t123 = *((unsigned char *)t122);
    if (t123 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t4 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t4 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t4 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t37 + 56U);
    t57 = *((char **)t52);
    t52 = (t4 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - 1);
    t59 = (t24 + 0U);
    t89 = *((int *)t59);
    t60 = (t24 + 8U);
    t90 = *((int *)t60);
    t91 = (t88 - t89);
    t92 = (t91 * t90);
    t61 = (t24 + 4U);
    t93 = *((int *)t61);
    xsi_vhdl_check_range_of_index(t89, t93, t90, t88);
    t94 = (1U * t92);
    t95 = (0 + t94);
    t66 = (t57 + t95);
    t96 = *((unsigned char *)t66);
    t68 = (t12 + 56U);
    t69 = *((char **)t68);
    t97 = *((int *)t69);
    t98 = (t97 - 1);
    t68 = (t4 + 12U);
    t99 = *((unsigned int *)t68);
    if (-1 == -1)
        goto LAB17;

LAB18:    t100 = t99;

LAB19:    t101 = (t100 - t86);
    t102 = (t101 * -1);
    t103 = (1U * t102);
    t70 = (t49 + t103);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t106 = *((int *)t105);
    t107 = (t106 - 1);
    t104 = (t4 + 12U);
    t108 = *((unsigned int *)t104);
    t109 = (t108 - t107);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    memset(t70, t96, t111);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t114 = *((int *)t113);
    t115 = (t114 - 1);
    t112 = (t4 + 12U);
    t116 = *((unsigned int *)t112);
    t117 = (t74 + 0U);
    t118 = (t117 + 0U);
    *((int *)t118) = t115;
    t118 = (t117 + 4U);
    *((unsigned int *)t118) = t116;
    t118 = (t117 + 8U);
    *((int *)t118) = -1;
    t119 = (t116 - t115);
    t120 = (t119 * -1);
    t120 = (t120 + 1);
    t118 = (t117 + 12U);
    *((unsigned int *)t118) = t120;
    t121 = ieee_p_1242562249_sub_3044629854704842352_1035706684(t1, t36, t73, t44, t74);
    t63 = t121;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t100 = t98;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t118 = (t1 + 5449);
=======
LAB20:    t118 = (t1 + 5441);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t118, 36U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

char *ieee_p_1242562249_sub_2686060666488827287_1035706684(char *t1, char *t2, int t3, char *t4, char *t5)
{
    char t6[488];
    char t7[24];
    char t15[8];
    char t24[16];
    char t48[16];
    char t73[16];
    char t74[16];
    char *t0;
    int t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    int t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    char *t49;
    unsigned int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    int t71;
    unsigned int t72;
    unsigned char t75;
    unsigned char t76;
    unsigned char t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    int t114;
    int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned char t121;
    char *t122;
    unsigned char t123;

LAB0:    t8 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t3);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, t8, ((t10)));
    t12 = (t6 + 4U);
    t13 = ((STD_STANDARD) + 824);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((int *)t15) = t11;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t21 = (t20 - 1);
    t22 = (0 - t21);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t18 = (t12 + 56U);
    t25 = *((char **)t18);
    t26 = *((int *)t25);
    t27 = (t26 - 1);
    t18 = (t24 + 0U);
    t28 = (t18 + 0U);
    *((int *)t28) = t27;
    t28 = (t18 + 4U);
    *((int *)t28) = 0;
    t28 = (t18 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t18 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t6 + 124U);
    t31 = (t1 + 3080);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t23);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t24);
    t35 = (t28 + 64U);
    *((char **)t35) = t24;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t23;
    t37 = (t6 + 244U);
    t38 = (t1 + 3080);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t40 = (char *)alloca(t23);
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    xsi_type_set_default_value(t38, t40, t24);
    t42 = (t37 + 64U);
    *((char **)t42) = t24;
    t43 = (t37 + 80U);
    *((unsigned int *)t43) = t23;
    t44 = (t5 + 12U);
    t30 = *((unsigned int *)t44);
    t45 = (t30 - 1);
    t46 = (0 - t45);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t47 = (t47 * 1U);
    t49 = (t5 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (t50 - 1);
    t52 = (t48 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = t51;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - t51);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = (t6 + 364U);
    t56 = (t1 + 3080);
    t57 = (t53 + 88U);
    *((char **)t57) = t56;
    t58 = (char *)alloca(t47);
    t59 = (t53 + 56U);
    *((char **)t59) = t58;
    xsi_type_set_default_value(t56, t58, t48);
    t60 = (t53 + 64U);
    *((char **)t60) = t48;
    t61 = (t53 + 80U);
    *((unsigned int *)t61) = t47;
    t62 = (t7 + 4U);
    *((int *)t62) = t3;
    t63 = (t7 + 8U);
    t64 = (t4 != 0);
    if (t64 == 1)
        goto LAB3;

LAB2:    t65 = (t7 + 16U);
    *((char **)t65) = t5;
    t66 = (t5 + 12U);
    t55 = *((unsigned int *)t66);
    t67 = (t55 < 1);
    if (t67 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t73, t3, t8);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    t17 = (t73 + 12U);
    t10 = *((unsigned int *)t17);
    t10 = (t10 * 1U);
    memcpy(t14, t9, t10);
    t9 = (t28 + 56U);
    t13 = *((char **)t9);
    t9 = ieee_p_1242562249_sub_4450345864055181605_1035706684(t1, t74, t13, t24, t4, t5);
    t14 = (t24 + 12U);
    t10 = *((unsigned int *)t14);
    t16 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t9, t74, ((t10)));
    t17 = (t37 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t19 = (t73 + 12U);
    t23 = *((unsigned int *)t19);
    t23 = (t23 * 1U);
    memcpy(t17, t16, t23);
    t9 = (t12 + 56U);
    t13 = *((char **)t9);
    t8 = *((int *)t13);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t75 = (t8 > t10);
    if (t75 == 1)
        goto LAB14;

LAB15:    t67 = (unsigned char)0;

LAB16:    if (t67 == 1)
        goto LAB11;

LAB12:    t64 = (unsigned char)0;

LAB13:    if (t64 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t37 + 56U);
    t13 = *((char **)t9);
    t9 = (t5 + 12U);
    t10 = *((unsigned int *)t9);
    t14 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t73, t13, t24, ((t10)));
    t16 = (t73 + 12U);
    t23 = *((unsigned int *)t16);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t14, t23);
    t17 = (t73 + 0U);
    t8 = *((int *)t17);
    t18 = (t73 + 4U);
    t11 = *((int *)t18);
    t19 = (t73 + 8U);
    t20 = *((int *)t19);
    t25 = (t2 + 0U);
    t31 = (t25 + 0U);
    *((int *)t31) = t8;
    t31 = (t25 + 4U);
    *((int *)t31) = t11;
    t31 = (t25 + 8U);
    *((int *)t31) = t20;
    t21 = (t11 - t8);
    t30 = (t21 * t20);
    t30 = (t30 + 1);
    t31 = (t25 + 12U);
    *((unsigned int *)t31) = t30;

LAB1:    return t0;
LAB3:    *((char **)t63) = t4;
    goto LAB2;

LAB4:    t68 = (t1 + 1288U);
    t69 = *((char **)t68);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t69, 0U);
    t68 = (t2 + 0U);
    t70 = (t68 + 0U);
    *((int *)t70) = 0;
    t70 = (t68 + 4U);
    *((int *)t70) = 1;
    t70 = (t68 + 8U);
    *((int *)t70) = -1;
    t71 = (1 - 0);
    t72 = (t71 * -1);
    t72 = (t72 + 1);
    t70 = (t68 + 12U);
    *((unsigned int *)t70) = t72;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t118 = (t1 + 1408U);
    t122 = *((char **)t118);
    t123 = *((unsigned char *)t122);
    if (t123 == 0)
        goto LAB20;

LAB21:    goto LAB9;

LAB11:    t19 = (t37 + 56U);
    t25 = *((char **)t19);
    t19 = (t24 + 0U);
    t22 = *((int *)t19);
    t31 = (t12 + 56U);
    t32 = *((char **)t31);
    t26 = *((int *)t32);
    t27 = (t26 - 1);
    t50 = (t22 - t27);
    t31 = (t5 + 12U);
    t55 = *((unsigned int *)t31);
    t34 = (t24 + 4U);
    t29 = *((int *)t34);
    t35 = (t24 + 8U);
    t45 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t22, t29, t45, t27, t55, -1);
    t72 = (t50 * 1U);
    t78 = (0 + t72);
    t36 = (t25 + t78);
    t38 = (t12 + 56U);
    t39 = *((char **)t38);
    t46 = *((int *)t39);
    t51 = (t46 - 1);
    t38 = (t5 + 12U);
    t79 = *((unsigned int *)t38);
    t41 = (t73 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t51;
    t42 = (t41 + 4U);
    *((unsigned int *)t42) = t79;
    t42 = (t41 + 8U);
    *((int *)t42) = -1;
    t54 = (t79 - t51);
    t80 = (t54 * -1);
    t80 = (t80 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t80;
    t42 = (t12 + 56U);
    t43 = *((char **)t42);
    t71 = *((int *)t43);
    t81 = (t71 - 1);
    t42 = (t5 + 12U);
    t80 = *((unsigned int *)t42);
    t82 = (t80 - t81);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    t44 = xsi_get_transient_memory(t84);
    memset(t44, 0, t84);
    t49 = t44;
    t52 = (t12 + 56U);
    t56 = *((char **)t52);
    t85 = *((int *)t56);
    t86 = (t85 - 1);
    t52 = (t37 + 56U);
    t57 = *((char **)t52);
    t52 = (t5 + 12U);
    t87 = *((unsigned int *)t52);
    t88 = (t87 - 1);
    t59 = (t24 + 0U);
    t89 = *((int *)t59);
    t60 = (t24 + 8U);
    t90 = *((int *)t60);
    t91 = (t88 - t89);
    t92 = (t91 * t90);
    t61 = (t24 + 4U);
    t93 = *((int *)t61);
    xsi_vhdl_check_range_of_index(t89, t93, t90, t88);
    t94 = (1U * t92);
    t95 = (0 + t94);
    t66 = (t57 + t95);
    t96 = *((unsigned char *)t66);
    t68 = (t12 + 56U);
    t69 = *((char **)t68);
    t97 = *((int *)t69);
    t98 = (t97 - 1);
    t68 = (t5 + 12U);
    t99 = *((unsigned int *)t68);
    if (-1 == -1)
        goto LAB17;

LAB18:    t100 = t99;

LAB19:    t101 = (t100 - t86);
    t102 = (t101 * -1);
    t103 = (1U * t102);
    t70 = (t49 + t103);
    t104 = (t12 + 56U);
    t105 = *((char **)t104);
    t106 = *((int *)t105);
    t107 = (t106 - 1);
    t104 = (t5 + 12U);
    t108 = *((unsigned int *)t104);
    t109 = (t108 - t107);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t111 = (1U * t110);
    memset(t70, t96, t111);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t114 = *((int *)t113);
    t115 = (t114 - 1);
    t112 = (t5 + 12U);
    t116 = *((unsigned int *)t112);
    t117 = (t74 + 0U);
    t118 = (t117 + 0U);
    *((int *)t118) = t115;
    t118 = (t117 + 4U);
    *((unsigned int *)t118) = t116;
    t118 = (t117 + 8U);
    *((int *)t118) = -1;
    t119 = (t116 - t115);
    t120 = (t119 * -1);
    t120 = (t120 + 1);
    t118 = (t117 + 12U);
    *((unsigned int *)t118) = t120;
    t121 = ieee_p_1242562249_sub_3044629854704842352_1035706684(t1, t36, t73, t44, t74);
    t64 = t121;
    goto LAB13;

LAB14:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t14 = (t24 + 0U);
    t11 = *((int *)t14);
    t17 = (t24 + 8U);
    t20 = *((int *)t17);
    t21 = (0 - t11);
    t23 = (t21 * t20);
    t30 = (1U * t23);
    t47 = (0 + t30);
    t18 = (t16 + t47);
    t76 = *((unsigned char *)t18);
    t77 = (t76 != (unsigned char)1);
    t67 = t77;
    goto LAB16;

LAB17:    t100 = t98;
    goto LAB19;

<<<<<<< HEAD
LAB20:    t118 = (t1 + 5485);
=======
LAB20:    t118 = (t1 + 5477);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t118, 36U, (unsigned char)1);
    goto LAB21;

LAB22:;
}

unsigned char ieee_p_1242562249_sub_1434214030532825644_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t8, t102, t15, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 5521);
=======
LAB12:    t98 = (t1 + 5513);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 5577);
=======
LAB21:    t27 = (t1 + 5569);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044623114557266498_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t45 = (t2 + 0);
    t46 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t45, t26, (unsigned char)1);
    t47 = (t55 + 56U);
    t48 = *((char **)t47);
    t47 = (t48 + 0);
    t53 = (t102 + 12U);
    t51 = *((unsigned int *)t53);
    t51 = (t51 * 1U);
    memcpy(t47, t46, t51);
    t45 = (t4 + 0);
    t46 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t45, t33, (unsigned char)1);
    t47 = (t71 + 56U);
    t48 = *((char **)t47);
    t47 = (t48 + 0);
    t53 = (t102 + 12U);
    t51 = *((unsigned int *)t53);
    t51 = (t51 * 1U);
    memcpy(t47, t46, t51);
    t45 = (t55 + 56U);
    t46 = *((char **)t45);
    t45 = (t52 + 0U);
    t49 = *((int *)t45);
    t47 = (t52 + 0U);
    t50 = *((int *)t47);
    t48 = (t52 + 8U);
    t54 = *((int *)t48);
    t56 = (t49 - t50);
    t51 = (t56 * t54);
    t57 = (1U * t51);
    t73 = (0 + t57);
    t53 = (t46 + t73);
    t90 = *((unsigned char *)t53);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t58 = (t71 + 56U);
    t59 = *((char **)t58);
    t58 = (t68 + 0U);
    t66 = *((int *)t58);
    t61 = (t68 + 0U);
    t67 = *((int *)t61);
    t62 = (t68 + 8U);
    t70 = *((int *)t62);
    t72 = (t66 - t67);
    t96 = (t72 * t70);
    t9 = (1U * t96);
    t18 = (0 + t9);
    t63 = (t59 + t18);
    t94 = *((unsigned char *)t63);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t45 = (t55 + 56U);
    t46 = *((char **)t45);
    t45 = (t41 + 56U);
    t47 = *((char **)t45);
    t49 = *((int *)t47);
    t45 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t46, t52, t49);
    t48 = (t71 + 56U);
    t53 = *((char **)t48);
    t48 = (t41 + 56U);
    t58 = *((char **)t48);
    t50 = *((int *)t58);
    t48 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t53, t68, t50);
    t87 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t45, t102, t48, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 5629);
=======
LAB12:    t98 = (t1 + 5621);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t64 = (t1 + 1408U);
    t65 = *((char **)t64);
    t100 = *((unsigned char *)t65);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t64 = (t1 + 5685);
=======
LAB21:    t64 = (t1 + 5677);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t64, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971559637588037263_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 5737);
=======
LAB7:    t50 = (t1 + 5729);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 5793);
=======
LAB13:    t17 = (t1 + 5785);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)1;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927094933232428636_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 5845);
=======
LAB7:    t50 = (t1 + 5837);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 5901);
=======
LAB13:    t17 = (t1 + 5893);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 > 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307759752501539734_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 5953);
=======
LAB7:    t50 = (t1 + 5945);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6009);
=======
LAB13:    t17 = (t1 + 6001);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538360624587667818_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 6061);
=======
LAB7:    t50 = (t1 + 6053);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6117);
=======
LAB13:    t17 = (t1 + 6109);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (0 > t4);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_1434214030532753770_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 6169);
=======
LAB12:    t98 = (t1 + 6161);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 6225);
=======
LAB21:    t27 = (t1 + 6217);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044623114557194624_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 6277);
=======
LAB12:    t98 = (t1 + 6269);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 6333);
=======
LAB21:    t27 = (t1 + 6325);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971559637587965389_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 6385);
=======
LAB7:    t50 = (t1 + 6377);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6441);
=======
LAB13:    t17 = (t1 + 6433);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 < 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927094933232356762_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 6493);
=======
LAB7:    t50 = (t1 + 6485);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6549);
=======
LAB13:    t17 = (t1 + 6541);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 < 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307759752501467860_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t11, t26, t12, t54);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 6601);
=======
LAB7:    t50 = (t1 + 6593);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6657);
=======
LAB13:    t17 = (t1 + 6649);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (0 < t4);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538360624587595944_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t11, t26, t12, t54);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 6709);
=======
LAB7:    t50 = (t1 + 6701);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 6765);
=======
LAB13:    t17 = (t1 + 6757);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (0 < t4);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_1434220770695818471_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 6817);
=======
LAB12:    t98 = (t1 + 6809);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 6874);
=======
LAB21:    t27 = (t1 + 6866);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 53U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044629854720259325_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 6927);
=======
LAB12:    t98 = (t1 + 6919);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 6984);
=======
LAB21:    t27 = (t1 + 6976);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 53U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971566377751030090_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 7037);
=======
LAB7:    t50 = (t1 + 7029);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7094);
=======
LAB13:    t17 = (t1 + 7086);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 < 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927101673395421463_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 7147);
=======
LAB7:    t50 = (t1 + 7139);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7204);
=======
LAB13:    t17 = (t1 + 7196);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 < 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307766492664532561_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t55[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    unsigned char t51;
    char *t52;
    unsigned char t53;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t10 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 < 0);
    if (t51 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t55, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t55 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t51 = (t45 == (unsigned char)1);
    if (t51 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t55, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_10067640937958098223_1035706684(t1, t11, t26, t12, t55);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t48 = (t1 + 1408U);
    t52 = *((char **)t48);
    t53 = *((unsigned char *)t52);
    if (t53 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t48 = (t1 + 7257);
=======
LAB7:    t48 = (t1 + 7249);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t48, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t53 = *((unsigned char *)t18);
    if (t53 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7314);
=======
LAB13:    t17 = (t1 + 7306);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t51 = (0 < t4);
    t0 = t51;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538367364750660645_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t55[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    unsigned char t51;
    char *t52;
    unsigned char t53;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t10 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t51 = (t50 < 0);
    if (t51 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t55, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t55 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t51 = (t45 == (unsigned char)1);
    if (t51 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t55, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_6613294344214855355_1035706684(t1, t11, t26, t12, t55);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t48 = (t1 + 1408U);
    t52 = *((char **)t48);
    t53 = *((unsigned char *)t52);
    if (t53 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t48 = (t1 + 7367);
=======
LAB7:    t48 = (t1 + 7359);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t48, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t53 = *((unsigned char *)t18);
    if (t53 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7424);
=======
LAB13:    t17 = (t1 + 7416);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t51 = (0 < t4);
    t0 = t51;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t8, t102, t15, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 7477);
=======
LAB12:    t98 = (t1 + 7469);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 7534);
=======
LAB21:    t27 = (t1 + 7526);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 53U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044629854722631167_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t8, t102, t15, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 7587);
=======
LAB12:    t98 = (t1 + 7579);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 57U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 7644);
=======
LAB21:    t27 = (t1 + 7636);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 53U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971566377753401932_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 7697);
=======
LAB7:    t50 = (t1 + 7689);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7754);
=======
LAB13:    t17 = (t1 + 7746);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 > 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927101673397793305_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 7807);
=======
LAB7:    t50 = (t1 + 7799);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7864);
=======
LAB13:    t17 = (t1 + 7856);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (t2 > 0);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307766492666904403_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_18072429880659511672_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 7917);
=======
LAB7:    t50 = (t1 + 7909);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 7974);
=======
LAB13:    t17 = (t1 + 7966);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (0 > t4);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538367364753032487_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_5360319670459337316_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 8027);
=======
LAB7:    t50 = (t1 + 8019);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 57U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 8084);
=======
LAB13:    t17 = (t1 + 8076);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 53U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t49 = (0 > t4);
    t0 = t49;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 8137);
=======
LAB12:    t98 = (t1 + 8129);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 8193);
=======
LAB21:    t27 = (t1 + 8185);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044623114557230561_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t8, t102, t15, t103);
    t0 = t87;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 8245);
=======
LAB12:    t98 = (t1 + 8237);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)0;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 8301);
=======
LAB21:    t27 = (t1 + 8293);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971559637588001326_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 8353);
=======
LAB7:    t50 = (t1 + 8345);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 8409);
=======
LAB13:    t17 = (t1 + 8401);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927094933232392699_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t11, t54, t14, t26);
    t0 = t46;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 8461);
=======
LAB7:    t50 = (t1 + 8453);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 8517);
=======
LAB13:    t17 = (t1 + 8509);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t11, t26, t12, t54);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 8569);
=======
LAB7:    t50 = (t1 + 8561);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 8625);
=======
LAB13:    t17 = (t1 + 8617);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538360624587631881_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t11, t26, t12, t54);
    t0 = t45;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 8677);
=======
LAB7:    t50 = (t1 + 8669);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 8733);
=======
LAB13:    t17 = (t1 + 8725);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_1434220770680401498_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 2976);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 2976);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2749763749646623249_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t8, t102, t15, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)1;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 8785);
=======
LAB12:    t98 = (t1 + 8777);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)1;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 8841);
=======
LAB21:    t27 = (t1 + 8833);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_3044629854704842352_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[728];
    char t7[40];
    char t14[8];
    char t23[8];
    char t26[16];
    char t33[16];
    char t44[8];
    char t52[16];
    char t68[16];
    char t83[8];
    char t102[16];
    char t103[16];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    char *t53;
    int t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    char *t69;
    int t70;
    char *t71;
    int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    unsigned char t92;
    char *t93;
    unsigned char t94;
    char *t95;
    unsigned int t96;
    unsigned char t97;
    char *t98;
    char *t99;
    unsigned char t100;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 - 1);
    t20 = (t6 + 124U);
    t21 = ((STD_STANDARD) + 384);
    t22 = (t20 + 88U);
    *((char **)t22) = t21;
    t24 = (t20 + 56U);
    *((char **)t24) = t23;
    *((int *)t23) = t19;
    t25 = (t20 + 80U);
    *((unsigned int *)t25) = 4U;
    t27 = (t11 + 56U);
    t28 = *((char **)t27);
    t29 = *((int *)t28);
    t27 = (t26 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = t29;
    t30 = (t27 + 4U);
    *((int *)t30) = 0;
    t30 = (t27 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - t29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t20 + 56U);
    t34 = *((char **)t30);
    t35 = *((int *)t34);
    t30 = (t33 + 0U);
    t36 = (t30 + 0U);
    *((int *)t36) = t35;
    t36 = (t30 + 4U);
    *((int *)t36) = 0;
    t36 = (t30 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t35);
    t32 = (t37 * -1);
    t32 = (t32 + 1);
    t36 = (t30 + 12U);
    *((unsigned int *)t36) = t32;
    t36 = (t3 + 12U);
    t32 = *((unsigned int *)t36);
    t38 = (t5 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = ieee_p_1242562249_sub_3327074314152278354_1035706684(t1, ((t32)), ((t39)));
    t41 = (t6 + 244U);
    t42 = ((STD_STANDARD) + 824);
    t43 = (t41 + 88U);
    *((char **)t43) = t42;
    t45 = (t41 + 56U);
    *((char **)t45) = t44;
    *((int *)t44) = t40;
    t46 = (t41 + 80U);
    *((unsigned int *)t46) = 4U;
    t47 = (t11 + 56U);
    t48 = *((char **)t47);
    t49 = *((int *)t48);
    t50 = (0 - t49);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t51 = (t51 * 1U);
    t47 = (t11 + 56U);
    t53 = *((char **)t47);
    t54 = *((int *)t53);
    t47 = (t52 + 0U);
    t55 = (t47 + 0U);
    *((int *)t55) = t54;
    t55 = (t47 + 4U);
    *((int *)t55) = 0;
    t55 = (t47 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - t54);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t47 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t6 + 364U);
    t58 = (t1 + 3080);
    t59 = (t55 + 88U);
    *((char **)t59) = t58;
    t60 = (char *)alloca(t51);
    t61 = (t55 + 56U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t52);
    t62 = (t55 + 64U);
    *((char **)t62) = t52;
    t63 = (t55 + 80U);
    *((unsigned int *)t63) = t51;
    t64 = (t20 + 56U);
    t65 = *((char **)t64);
    t66 = *((int *)t65);
    t67 = (0 - t66);
    t57 = (t67 * -1);
    t57 = (t57 + 1);
    t57 = (t57 * 1U);
    t64 = (t20 + 56U);
    t69 = *((char **)t64);
    t70 = *((int *)t69);
    t64 = (t68 + 0U);
    t71 = (t64 + 0U);
    *((int *)t71) = t70;
    t71 = (t64 + 4U);
    *((int *)t71) = 0;
    t71 = (t64 + 8U);
    *((int *)t71) = -1;
    t72 = (0 - t70);
    t73 = (t72 * -1);
    t73 = (t73 + 1);
    t71 = (t64 + 12U);
    *((unsigned int *)t71) = t73;
    t71 = (t6 + 484U);
    t74 = (t1 + 3080);
    t75 = (t71 + 88U);
    *((char **)t75) = t74;
    t76 = (char *)alloca(t57);
    t77 = (t71 + 56U);
    *((char **)t77) = t76;
    xsi_type_set_default_value(t74, t76, t68);
    t78 = (t71 + 64U);
    *((char **)t78) = t68;
    t79 = (t71 + 80U);
    *((unsigned int *)t79) = t57;
    t80 = (t6 + 604U);
    t81 = ((STD_STANDARD) + 0);
    t82 = (t80 + 88U);
    *((char **)t82) = t81;
    t84 = (t80 + 56U);
    *((char **)t84) = t83;
    xsi_type_set_default_value(t81, t83, 0);
    t85 = (t80 + 80U);
    *((unsigned int *)t85) = 1U;
    t86 = (t7 + 4U);
    t87 = (t2 != 0);
    if (t87 == 1)
        goto LAB3;

LAB2:    t88 = (t7 + 12U);
    *((char **)t88) = t3;
    t89 = (t7 + 20U);
    t90 = (t4 != 0);
    if (t90 == 1)
        goto LAB5;

LAB4:    t91 = (t7 + 28U);
    *((char **)t91) = t5;
    t93 = (t3 + 12U);
    t73 = *((unsigned int *)t93);
    t94 = (t73 < 1);
    if (t94 == 1)
        goto LAB9;

LAB10:    t95 = (t5 + 12U);
    t96 = *((unsigned int *)t95);
    t97 = (t96 < 1);
    t92 = t97;

LAB11:    if (t92 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t2 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t26, (unsigned char)1);
    t13 = (t55 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t4 + 0);
    t12 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t102, t8, t33, (unsigned char)1);
    t13 = (t71 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t102 + 12U);
    t9 = *((unsigned int *)t16);
    t9 = (t9 * 1U);
    memcpy(t13, t12, t9);
    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t52 + 0U);
    t19 = *((int *)t13);
    t15 = (t52 + 8U);
    t29 = *((int *)t15);
    t31 = (t10 - t19);
    t9 = (t31 * t29);
    t18 = (1U * t9);
    t32 = (0 + t18);
    t16 = (t12 + t32);
    t90 = *((unsigned char *)t16);
    t92 = (t90 == (unsigned char)1);
    if (t92 == 1)
        goto LAB18;

LAB19:    t17 = (t71 + 56U);
    t21 = *((char **)t17);
    t17 = (t68 + 0U);
    t35 = *((int *)t17);
    t22 = (t68 + 0U);
    t37 = *((int *)t22);
    t24 = (t68 + 8U);
    t40 = *((int *)t24);
    t49 = (t35 - t37);
    t39 = (t49 * t40);
    t51 = (1U * t39);
    t57 = (0 + t51);
    t25 = (t21 + t57);
    t94 = *((unsigned char *)t25);
    t97 = (t94 == (unsigned char)1);
    t87 = t97;

LAB20:    if (t87 != 0)
        goto LAB15;

LAB17:
LAB16:    t8 = (t55 + 56U);
    t12 = *((char **)t8);
    t8 = (t41 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t102, t12, t52, t10);
    t15 = (t71 + 56U);
    t16 = *((char **)t15);
    t15 = (t41 + 56U);
    t17 = *((char **)t15);
    t19 = *((int *)t17);
    t15 = ieee_p_1242562249_sub_2423793367844140314_1035706684(t1, t103, t16, t68, t19);
    t87 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t8, t102, t15, t103);
    t90 = (!(t87));
    t0 = t90;

LAB1:    return t0;
LAB3:    *((char **)t86) = t2;
    goto LAB2;

LAB5:    *((char **)t89) = t4;
    goto LAB4;

LAB6:    t98 = (t1 + 1408U);
    t99 = *((char **)t98);
    t100 = *((unsigned char *)t99);
    if (t100 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)1;
    goto LAB1;

LAB9:    t92 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t98 = (t1 + 8893);
=======
LAB12:    t98 = (t1 + 8885);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t98, 56U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t27 = (t1 + 1408U);
    t28 = *((char **)t27);
    t100 = *((unsigned char *)t28);
    if (t100 == 0)
        goto LAB21;

LAB22:    t0 = (unsigned char)1;
    goto LAB1;

LAB18:    t87 = (unsigned char)1;
    goto LAB20;

<<<<<<< HEAD
LAB21:    t27 = (t1 + 8949);
=======
LAB21:    t27 = (t1 + 8941);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t27, 52U, (unsigned char)1);
    goto LAB22;

LAB23:    goto LAB16;

LAB24:;
}

unsigned char ieee_p_1242562249_sub_971566377735613117_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 9001);
=======
LAB7:    t50 = (t1 + 8993);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 9057);
=======
LAB13:    t17 = (t1 + 9049);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)1;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_927101673380004490_1035706684(char *t1, int t2, char *t3, char *t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    *((int *)t44) = t2;
    t45 = (t6 + 8U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t6 + 16U);
    *((char **)t47) = t4;
    t48 = (t4 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t46 = *((unsigned char *)t15);
    t49 = (t46 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t2);
    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t46 = (t9 > t8);
    if (t46 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t11 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t2, ((t8)));
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t46 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t11, t54, t14, t26);
    t49 = (!(t46));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 9109);
=======
LAB7:    t50 = (t1 + 9101);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 9165);
=======
LAB13:    t17 = (t1 + 9157);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)1;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3307766492649115588_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 2976);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_2977877946547446482_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_14865958970891251801_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 9217);
=======
LAB7:    t50 = (t1 + 9209);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 9273);
=======
LAB13:    t17 = (t1 + 9265);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)1;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

unsigned char ieee_p_1242562249_sub_3538367364735243672_1035706684(char *t1, char *t2, char *t3, int t4)
{
    char t5[368];
    char t6[24];
    char t13[8];
    char t16[16];
    char t26[16];
    char t41[8];
    char t54[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    int t25;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    unsigned char t52;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t5 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t17 = (t16 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = t19;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - t19);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t10 + 56U);
    t23 = *((char **)t20);
    t24 = *((int *)t23);
    t25 = (0 - t24);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t20 = (t10 + 56U);
    t27 = *((char **)t20);
    t28 = *((int *)t27);
    t20 = (t26 + 0U);
    t29 = (t20 + 0U);
    *((int *)t29) = t28;
    t29 = (t20 + 4U);
    *((int *)t29) = 0;
    t29 = (t20 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - t28);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t20 + 12U);
    *((unsigned int *)t29) = t31;
    t29 = (t5 + 124U);
    t32 = (t1 + 3080);
    t33 = (t29 + 88U);
    *((char **)t33) = t32;
    t34 = (char *)alloca(t22);
    t35 = (t29 + 56U);
    *((char **)t35) = t34;
    xsi_type_set_default_value(t32, t34, t26);
    t36 = (t29 + 64U);
    *((char **)t36) = t26;
    t37 = (t29 + 80U);
    *((unsigned int *)t37) = t22;
    t38 = (t5 + 244U);
    t39 = ((STD_STANDARD) + 0);
    t40 = (t38 + 88U);
    *((char **)t40) = t39;
    t42 = (t38 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, 0);
    t43 = (t38 + 80U);
    *((unsigned int *)t43) = 1U;
    t44 = (t6 + 4U);
    t45 = (t2 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t6 + 12U);
    *((char **)t46) = t3;
    t47 = (t6 + 20U);
    *((int *)t47) = t4;
    t48 = (t3 + 12U);
    t31 = *((unsigned int *)t48);
    t49 = (t31 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t2 + 0);
    t11 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t54, t7, t16, (unsigned char)1);
    t12 = (t29 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t54 + 12U);
    t8 = *((unsigned int *)t15);
    t8 = (t8 * 1U);
    memcpy(t12, t11, t8);
    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 0U);
    t9 = *((int *)t7);
    t12 = (t26 + 0U);
    t19 = *((int *)t12);
    t14 = (t26 + 8U);
    t21 = *((int *)t14);
    t24 = (t9 - t19);
    t8 = (t24 * t21);
    t22 = (1U * t8);
    t31 = (0 + t22);
    t15 = (t11 + t31);
    t45 = *((unsigned char *)t15);
    t49 = (t45 == (unsigned char)1);
    if (t49 != 0)
        goto LAB10;

LAB12:
LAB11:    t9 = ieee_p_1242562249_sub_3312401477635428644_1035706684(t1, t4);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t45 = (t9 > t8);
    if (t45 != 0)
        goto LAB16;

LAB18:
LAB17:    t7 = (t29 + 56U);
    t11 = *((char **)t7);
    t7 = (t26 + 12U);
    t8 = *((unsigned int *)t7);
    t12 = ieee_p_1242562249_sub_17126692536656888728_1035706684(t1, t54, t4, ((t8)));
    t45 = ieee_p_1242562249_sub_4501204497521157593_1035706684(t1, t11, t26, t12, t54);
    t49 = (!(t45));
    t0 = t49;

LAB1:    return t0;
LAB3:    *((char **)t44) = t2;
    goto LAB2;

LAB4:    t50 = (t1 + 1408U);
    t51 = *((char **)t50);
    t52 = *((unsigned char *)t51);
    if (t52 == 0)
        goto LAB7;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t50 = (t1 + 9325);
=======
LAB7:    t50 = (t1 + 9317);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t50, 56U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t17 = (t1 + 1408U);
    t18 = *((char **)t17);
    t52 = *((unsigned char *)t18);
    if (t52 == 0)
        goto LAB13;

LAB14:    t0 = (unsigned char)1;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t17 = (t1 + 9381);
=======
LAB13:    t17 = (t1 + 9373);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t17, 52U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t0 = (unsigned char)1;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:;
}

char *ieee_p_1242562249_sub_1987757588013599599_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_18075413680674704129_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_8645934262925994370_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_18075413680674919751_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_17249857350030274602_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_18075413680674704129_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_5461289951233117757_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_2177871679217030280_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_7348455036272725216_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_2177871677178654844_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_1081509318381623571_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_2177871677178661378_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1168U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_4163810724579848603_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_2177871677178654844_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_16343609080398298574_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[24];
    char t20[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 12U);
    *((char **)t10) = t4;
    t11 = (t7 + 20U);
    *((int *)t11) = t5;
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 < 1);
    if (t14 != 0)
        goto LAB4;

LAB6:
LAB5:    t12 = ieee_p_1242562249_sub_2177871677178661378_1035706684(t1, t20, t3, t4, t5);
    t15 = (t20 + 12U);
    t13 = *((unsigned int *)t15);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t12, t13);
    t16 = (t20 + 0U);
    t18 = *((int *)t16);
    t17 = (t20 + 4U);
    t21 = *((int *)t17);
    t22 = (t20 + 8U);
    t23 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t18;
    t25 = (t24 + 4U);
    *((int *)t25) = t21;
    t25 = (t24 + 8U);
    *((int *)t25) = t23;
    t26 = (t21 - t18);
    t19 = (t26 * t23);
    t19 = (t19 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t19;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t15 = (t1 + 1288U);
    t16 = *((char **)t15);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t16, 0U);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 0;
    t17 = (t15 + 4U);
    *((int *)t17) = 1;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - 0);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t19;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

char *ieee_p_1242562249_sub_875668032854310322_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2976);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_8645934262925994370_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_1987757588013599599_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_617102632970689396_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_8645934262925994370_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_17249857350030274602_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_875668032861425848_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2976);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_1987757588013599599_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_8645934262925994370_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_617102632977804922_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_17249857350030274602_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_8645934262925994370_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_875668032818732692_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2976);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_1081509318381623571_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_7348455036272725216_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_617102632935111766_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_16343609080398298574_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_4163810724579848603_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_875668032818948314_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2976);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_7348455036272725216_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_1081509318381623571_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

char *ieee_p_1242562249_sub_617102632935327388_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t13[16];
    char t32[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t5 >= 0);
    if (t31 != 0)
        goto LAB4;

LAB6:    t10 = (-(t5));
    t8 = ieee_p_1242562249_sub_4163810724579848603_1035706684(t1, t32, t3, t4, t10);
    t14 = (t32 + 12U);
    t9 = *((unsigned int *)t14);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t8, t9);
    t17 = (t32 + 0U);
    t11 = *((int *)t17);
    t21 = (t32 + 4U);
    t16 = *((int *)t21);
    t22 = (t32 + 8U);
    t19 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t11;
    t25 = (t24 + 4U);
    *((int *)t25) = t16;
    t25 = (t24 + 8U);
    *((int *)t25) = t19;
    t36 = (t16 - t11);
    t12 = (t36 * t19);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB4:    t33 = ieee_p_1242562249_sub_16343609080398298574_1035706684(t1, t32, t3, t4, t5);
    t34 = (t32 + 12U);
    t20 = *((unsigned int *)t34);
    t20 = (t20 * 1U);
    t0 = xsi_get_transient_memory(t20);
    memcpy(t0, t33, t20);
    t35 = (t32 + 0U);
    t36 = *((int *)t35);
    t37 = (t32 + 4U);
    t38 = *((int *)t37);
    t39 = (t32 + 8U);
    t40 = *((int *)t39);
    t41 = (t2 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = t36;
    t42 = (t41 + 4U);
    *((int *)t42) = t38;
    t42 = (t41 + 8U);
    *((int *)t42) = t40;
    t43 = (t38 - t36);
    t44 = (t43 * t40);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    goto LAB1;

LAB5:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    goto LAB5;

}

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *t1, char *t2, char *t3)
{
    char t4[368];
    char t5[24];
    char t12[8];
    char t15[16];
    char t25[16];
    char t40[8];
    char t52[16];
    int t0;
    char *t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    int t24;
    char *t26;
    int t27;
    char *t28;
    int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    unsigned char t47;
    char *t48;
    char *t49;
    unsigned char t50;
    int t53;
    int t54;
    int t55;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t8 = (t7 - 1);
    t9 = (t4 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t9 + 88U);
    *((char **)t11) = t10;
    t13 = (t9 + 56U);
    *((char **)t13) = t12;
    *((int *)t12) = t8;
    t14 = (t9 + 80U);
    *((unsigned int *)t14) = 4U;
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t18 = *((int *)t17);
    t16 = (t15 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = t18;
    t19 = (t16 + 4U);
    *((int *)t19) = 0;
    t19 = (t16 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t18);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t9 + 56U);
    t22 = *((char **)t19);
    t23 = *((int *)t22);
    t24 = (0 - t23);
    t21 = (t24 * -1);
    t21 = (t21 + 1);
    t21 = (t21 * 1U);
    t19 = (t9 + 56U);
    t26 = *((char **)t19);
    t27 = *((int *)t26);
    t19 = (t25 + 0U);
    t28 = (t19 + 0U);
    *((int *)t28) = t27;
    t28 = (t19 + 4U);
    *((int *)t28) = 0;
    t28 = (t19 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - t27);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t19 + 12U);
    *((unsigned int *)t28) = t30;
    t28 = (t4 + 124U);
    t31 = (t1 + 2976);
    t32 = (t28 + 88U);
    *((char **)t32) = t31;
    t33 = (char *)alloca(t21);
    t34 = (t28 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, t25);
    t35 = (t28 + 64U);
    *((char **)t35) = t25;
    t36 = (t28 + 80U);
    *((unsigned int *)t36) = t21;
    t37 = (t4 + 244U);
    t38 = ((STD_STANDARD) + 824);
    t39 = (t37 + 88U);
    *((char **)t39) = t38;
    t41 = (t37 + 56U);
    *((char **)t41) = t40;
    *((int *)t40) = 0;
    t42 = (t37 + 80U);
    *((unsigned int *)t42) = 4U;
    t43 = (t5 + 4U);
    t44 = (t2 != 0);
    if (t44 == 1)
        goto LAB3;

LAB2:    t45 = (t5 + 12U);
    *((char **)t45) = t3;
    t46 = (t3 + 12U);
    t30 = *((unsigned int *)t46);
    t47 = (t30 < 1);
    if (t47 != 0)
        goto LAB4;

LAB6:
LAB5:    t6 = (t2 + 0);
    t10 = ieee_p_1242562249_sub_4856407567805619711_1035706684(t1, t52, t6, t15, (unsigned char)1);
    t11 = (t28 + 56U);
    t13 = *((char **)t11);
    t11 = (t13 + 0);
    t14 = (t52 + 12U);
    t7 = *((unsigned int *)t14);
    t7 = (t7 * 1U);
    memcpy(t11, t10, t7);
    t6 = (t28 + 56U);
    t10 = *((char **)t6);
    t6 = (t25 + 0U);
    t8 = *((int *)t6);
    t11 = (t25 + 0U);
    t18 = *((int *)t11);
    t13 = (t25 + 8U);
    t20 = *((int *)t13);
    t23 = (t8 - t18);
    t7 = (t23 * t20);
    t21 = (1U * t7);
    t30 = (0 + t21);
    t14 = (t10 + t30);
    t44 = *((unsigned char *)t14);
    t47 = (t44 == (unsigned char)1);
    if (t47 != 0)
        goto LAB10;

LAB12:
LAB11:    t6 = (t25 + 8U);
    t8 = *((int *)t6);
    t10 = (t25 + 4U);
    t18 = *((int *)t10);
    t11 = (t25 + 0U);
    t20 = *((int *)t11);
    t23 = t20;
    t24 = t18;

LAB16:    t27 = (t24 * t8);
    t29 = (t23 * t8);
    if (t29 <= t27)
        goto LAB17;

LAB19:    t6 = (t37 + 56U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t43) = t2;
    goto LAB2;

LAB4:    t48 = (t1 + 1408U);
    t49 = *((char **)t48);
    t50 = *((unsigned char *)t49);
    if (t50 == 0)
        goto LAB7;

LAB8:    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t48 = (t1 + 9433);
=======
LAB7:    t48 = (t1 + 9425);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t48, 50U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t16 = (t1 + 1408U);
    t17 = *((char **)t16);
    t50 = *((unsigned char *)t17);
    if (t50 == 0)
        goto LAB13;

LAB14:    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t16 = (t1 + 9483);
=======
LAB13:    t16 = (t1 + 9475);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t16, 55U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB17:    t13 = (t37 + 56U);
    t14 = *((char **)t13);
    t53 = *((int *)t14);
    t13 = (t37 + 56U);
    t16 = *((char **)t13);
    t54 = *((int *)t16);
    t55 = (t53 + t54);
    t13 = (t37 + 56U);
    t17 = *((char **)t13);
    t13 = (t17 + 0);
    *((int *)t13) = t55;
    t6 = (t28 + 56U);
    t10 = *((char **)t6);
    t6 = (t25 + 0U);
    t18 = *((int *)t6);
    t11 = (t25 + 8U);
    t20 = *((int *)t11);
    t27 = (t23 - t18);
    t7 = (t27 * t20);
    t21 = (1U * t7);
    t30 = (0 + t21);
    t13 = (t10 + t30);
    t44 = *((unsigned char *)t13);
    t47 = (t44 == (unsigned char)3);
    if (t47 != 0)
        goto LAB20;

LAB22:
LAB21:
LAB18:    if (t23 == t24)
        goto LAB19;

LAB23:    t18 = (t23 + t8);
    t23 = t18;
    goto LAB16;

LAB20:    t14 = (t37 + 56U);
    t16 = *((char **)t14);
    t29 = *((int *)t16);
    t53 = (t29 + 1);
    t14 = (t37 + 56U);
    t17 = *((char **)t14);
    t14 = (t17 + 0);
    *((int *)t14) = t53;
    goto LAB21;

LAB24:;
}

int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *t1, char *t2, char *t3)
{
    char t4[248];
    char t5[24];
    char t11[16];
    char t28[8];
    char t40[16];
    char t42[16];
    int t0;
    char *t6;
    unsigned int t7;
    int t8;
    int t9;
    unsigned int t10;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    unsigned char t38;
    int t41;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t8 = (t7 - 1);
    t9 = (0 - t8);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t13 - 1);
    t15 = (t11 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = t14;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - t14);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t4 + 4U);
    t19 = (t1 + 3080);
    t20 = (t16 + 88U);
    *((char **)t20) = t19;
    t21 = (char *)alloca(t10);
    t22 = (t16 + 56U);
    *((char **)t22) = t21;
    xsi_type_set_default_value(t19, t21, t11);
    t23 = (t16 + 64U);
    *((char **)t23) = t11;
    t24 = (t16 + 80U);
    *((unsigned int *)t24) = t10;
    t25 = (t4 + 124U);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t25 + 88U);
    *((char **)t27) = t26;
    t29 = (t25 + 56U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, 0);
    t30 = (t25 + 80U);
    *((unsigned int *)t30) = 4U;
    t31 = (t5 + 4U);
    t32 = (t2 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t5 + 12U);
    *((char **)t33) = t3;
    t34 = (t3 + 12U);
    t18 = *((unsigned int *)t34);
    t35 = (t18 < 1);
    if (t35 != 0)
        goto LAB4;

LAB6:
LAB5:    t6 = ieee_p_1242562249_sub_2985487471987653227_1035706684(t1, t40, t2, t3, (unsigned char)1);
    t12 = (t16 + 56U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    t19 = (t40 + 12U);
    t7 = *((unsigned int *)t19);
    t7 = (t7 * 1U);
    memcpy(t12, t6, t7);
    t6 = (t16 + 56U);
    t12 = *((char **)t6);
    t6 = (t11 + 0U);
    t8 = *((int *)t6);
    t15 = (t11 + 0U);
    t9 = *((int *)t15);
    t19 = (t11 + 8U);
    t14 = *((int *)t19);
    t17 = (t8 - t9);
    t7 = (t17 * t14);
    t10 = (1U * t7);
    t13 = (0 + t10);
    t20 = (t12 + t13);
    t32 = *((unsigned char *)t20);
    t35 = (t32 == (unsigned char)1);
    if (t35 != 0)
        goto LAB10;

LAB12:
LAB11:    t6 = (t16 + 56U);
    t12 = *((char **)t6);
    t6 = (t11 + 0U);
    t8 = *((int *)t6);
    t15 = (t11 + 0U);
    t9 = *((int *)t15);
    t19 = (t11 + 8U);
    t14 = *((int *)t19);
    t17 = (t8 - t9);
    t7 = (t17 * t14);
    t10 = (1U * t7);
    t13 = (0 + t10);
    t20 = (t12 + t13);
    t32 = *((unsigned char *)t20);
    t35 = (t32 == (unsigned char)2);
    if (t35 != 0)
        goto LAB16;

LAB18:    t6 = (t16 + 56U);
    t12 = *((char **)t6);
    t6 = ieee_p_1242562249_sub_800139796931496790_1035706684(t1, t42, t12, t11, 1);
    t15 = ieee_p_1242562249_sub_3065688369758319528_1035706684(t1, t40, t6, t42);
    t8 = ieee_p_1242562249_sub_17802405650254020620_1035706684(t1, t15, t40);
    t9 = (-(t8));
    t14 = (t9 - 1);
    t0 = t14;

LAB1:    return t0;
LAB3:    *((char **)t31) = t2;
    goto LAB2;

LAB4:    t36 = (t1 + 1408U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    if (t38 == 0)
        goto LAB7;

LAB8:    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t36 = (t1 + 9538);
=======
LAB7:    t36 = (t1 + 9530);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t36, 50U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB10:    t22 = (t1 + 1408U);
    t23 = *((char **)t22);
    t38 = *((unsigned char *)t23);
    if (t38 == 0)
        goto LAB13;

LAB14:    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB13:    t22 = (t1 + 9588);
=======
LAB13:    t22 = (t1 + 9580);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t22, 55U, (unsigned char)1);
    goto LAB14;

LAB15:    goto LAB11;

LAB16:    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    t41 = ieee_p_1242562249_sub_17802405650254020620_1035706684(t1, t23, t11);
    t0 = t41;
    goto LAB1;

LAB17:    xsi_error(ng8);
    t0 = 0;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:    goto LAB17;

}

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *t1, char *t2, int t3, int t4)
{
    char t5[248];
    char t6[16];
    char t10[16];
    char t25[8];
    char *t0;
    int t7;
    int t8;
    unsigned int t9;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned char t40;
    unsigned char t41;

LAB0:    t7 = (t4 - 1);
    t8 = (0 - t7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t9 = (t9 * 1U);
    t11 = (t4 - 1);
    t12 = (t10 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 4U);
    t16 = (t1 + 2976);
    t17 = (t13 + 88U);
    *((char **)t17) = t16;
    t18 = (char *)alloca(t9);
    t19 = (t13 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t10);
    t20 = (t13 + 64U);
    *((char **)t20) = t10;
    t21 = (t13 + 80U);
    *((unsigned int *)t21) = t9;
    t22 = (t5 + 124U);
    t23 = ((STD_STANDARD) + 824);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    *((int *)t25) = t3;
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 4U;
    t28 = (t6 + 4U);
    *((int *)t28) = t3;
    t29 = (t6 + 8U);
    *((int *)t29) = t4;
    t30 = (t4 < 1);
    if (t30 != 0)
        goto LAB2;

LAB4:
LAB3:    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t8 = 0;
    t11 = t7;

LAB6:    if (t8 <= t11)
        goto LAB7;

LAB9:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t30 = (t7 == 0);
    t40 = (!(t30));
    if (t40 != 0)
        goto LAB14;

LAB16:
LAB15:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 12U);
    t9 = *((unsigned int *)t12);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t16, t9);
    t17 = (t10 + 0U);
    t7 = *((int *)t17);
    t19 = (t10 + 4U);
    t8 = *((int *)t19);
    t20 = (t10 + 8U);
    t11 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t7;
    t23 = (t21 + 4U);
    *((int *)t23) = t8;
    t23 = (t21 + 8U);
    *((int *)t23) = t11;
    t14 = (t8 - t7);
    t15 = (t14 * t11);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;

LAB1:    return t0;
LAB2:    t31 = (t1 + 1168U);
    t32 = *((char **)t31);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t32, 0U);
    t31 = (t2 + 0U);
    t33 = (t31 + 0U);
    *((int *)t33) = 0;
    t33 = (t31 + 4U);
    *((int *)t33) = 1;
    t33 = (t31 + 8U);
    *((int *)t33) = -1;
    t34 = (1 - 0);
    t15 = (t34 * -1);
    t15 = (t15 + 1);
    t33 = (t31 + 12U);
    *((unsigned int *)t33) = t15;
    goto LAB1;

LAB5:    goto LAB3;

LAB7:    t16 = (t22 + 56U);
    t17 = *((char **)t16);
    t14 = *((int *)t17);
    t34 = xsi_vhdl_mod(t14, 2);
    t30 = (t34 == 0);
    if (t30 != 0)
        goto LAB10;

LAB12:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t17 = (t10 + 8U);
    t14 = *((int *)t17);
    t34 = (t8 - t7);
    t9 = (t34 * t14);
    t19 = (t10 + 4U);
    t35 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t7, t35, t14, t8);
    t15 = (1U * t9);
    t39 = (0 + t15);
    t20 = (t16 + t39);
    *((unsigned char *)t20) = (unsigned char)3;

LAB11:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t14 = (t7 / 2);
    t12 = (t22 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;

LAB8:    if (t8 == t11)
        goto LAB9;

LAB13:    t7 = (t8 + 1);
    t8 = t7;
    goto LAB6;

LAB10:    t16 = (t13 + 56U);
    t19 = *((char **)t16);
    t16 = (t10 + 0U);
    t35 = *((int *)t16);
    t20 = (t10 + 8U);
    t36 = *((int *)t20);
    t37 = (t8 - t35);
    t9 = (t37 * t36);
    t21 = (t10 + 4U);
    t38 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t35, t38, t36, t8);
    t15 = (1U * t9);
    t39 = (0 + t15);
    t23 = (t19 + t39);
    *((unsigned char *)t23) = (unsigned char)2;
    goto LAB11;

LAB14:    t12 = (t1 + 1408U);
    t17 = *((char **)t12);
    t41 = *((unsigned char *)t17);
    if (t41 == 0)
        goto LAB17;

LAB18:    goto LAB15;

<<<<<<< HEAD
LAB17:    t12 = (t1 + 9643);
=======
LAB17:    t12 = (t1 + 9635);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 41U, (unsigned char)1);
    goto LAB18;

LAB19:;
}

char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *t1, char *t2, int t3, int t4)
{
    char t5[368];
    char t6[16];
    char t10[16];
    char t25[8];
    char t31[8];
    char *t0;
    int t7;
    int t8;
    unsigned int t9;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    unsigned char t41;
    int t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;

LAB0:    t7 = (t4 - 1);
    t8 = (0 - t7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t9 = (t9 * 1U);
    t11 = (t4 - 1);
    t12 = (t10 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 4U);
    t16 = (t1 + 3080);
    t17 = (t13 + 88U);
    *((char **)t17) = t16;
    t18 = (char *)alloca(t9);
    t19 = (t13 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t10);
    t20 = (t13 + 64U);
    *((char **)t20) = t10;
    t21 = (t13 + 80U);
    *((unsigned int *)t21) = t9;
    t22 = (t5 + 124U);
    t23 = ((IEEE_P_2592010699) + 3312);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    *((unsigned char *)t25) = (unsigned char)2;
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 1U;
    t28 = (t5 + 244U);
    t29 = ((STD_STANDARD) + 384);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    *((int *)t31) = t3;
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 4U;
    t34 = (t6 + 4U);
    *((int *)t34) = t3;
    t35 = (t6 + 8U);
    *((int *)t35) = t4;
    t36 = (t4 < 1);
    if (t36 != 0)
        goto LAB2;

LAB4:
LAB3:    t36 = (t3 < 0);
    if (t36 != 0)
        goto LAB6;

LAB8:
LAB7:    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t8 = 0;
    t11 = t7;

LAB9:    if (t8 <= t11)
        goto LAB10;

LAB12:    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t41 = (t7 != 0);
    if (t41 == 1)
        goto LAB20;

LAB21:    t12 = (t22 + 56U);
    t17 = *((char **)t12);
    t47 = *((unsigned char *)t17);
    t12 = (t13 + 56U);
    t19 = *((char **)t12);
    t12 = (t10 + 0U);
    t8 = *((int *)t12);
    t20 = (t10 + 0U);
    t11 = *((int *)t20);
    t21 = (t10 + 8U);
    t14 = *((int *)t21);
    t40 = (t8 - t11);
    t9 = (t40 * t14);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t23 = (t19 + t46);
    t48 = *((unsigned char *)t23);
    t49 = (t47 != t48);
    t36 = t49;

LAB22:    if (t36 != 0)
        goto LAB17;

LAB19:
LAB18:    t12 = (t13 + 56U);
    t16 = *((char **)t12);
    t12 = (t10 + 12U);
    t9 = *((unsigned int *)t12);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t16, t9);
    t17 = (t10 + 0U);
    t7 = *((int *)t17);
    t19 = (t10 + 4U);
    t8 = *((int *)t19);
    t20 = (t10 + 8U);
    t11 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t7;
    t23 = (t21 + 4U);
    *((int *)t23) = t8;
    t23 = (t21 + 8U);
    *((int *)t23) = t11;
    t14 = (t8 - t7);
    t15 = (t14 * t11);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;

LAB1:    return t0;
LAB2:    t37 = (t1 + 1288U);
    t38 = *((char **)t37);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t38, 0U);
    t37 = (t2 + 0U);
    t39 = (t37 + 0U);
    *((int *)t39) = 0;
    t39 = (t37 + 4U);
    *((int *)t39) = 1;
    t39 = (t37 + 8U);
    *((int *)t39) = -1;
    t40 = (1 - 0);
    t15 = (t40 * -1);
    t15 = (t15 + 1);
    t39 = (t37 + 12U);
    *((unsigned int *)t39) = t15;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((unsigned char *)t12) = (unsigned char)3;
    t7 = (t3 + 1);
    t8 = (-(t7));
    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t12 = (t16 + 0);
    *((int *)t12) = t8;
    goto LAB7;

LAB10:    t16 = (t28 + 56U);
    t17 = *((char **)t16);
    t14 = *((int *)t17);
    t40 = xsi_vhdl_mod(t14, 2);
    t36 = (t40 == 0);
    if (t36 != 0)
        goto LAB13;

LAB15:    t12 = (t22 + 56U);
    t16 = *((char **)t12);
    t36 = *((unsigned char *)t16);
    t41 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t36);
    t12 = (t13 + 56U);
    t17 = *((char **)t12);
    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t19 = (t10 + 8U);
    t14 = *((int *)t19);
    t40 = (t8 - t7);
    t9 = (t40 * t14);
    t20 = (t10 + 4U);
    t42 = *((int *)t20);
    xsi_vhdl_check_range_of_index(t7, t42, t14, t8);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t21 = (t17 + t46);
    *((unsigned char *)t21) = t41;

LAB14:    t12 = (t28 + 56U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t14 = (t7 / 2);
    t12 = (t28 + 56U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;

LAB11:    if (t8 == t11)
        goto LAB12;

LAB16:    t7 = (t8 + 1);
    t8 = t7;
    goto LAB9;

LAB13:    t16 = (t22 + 56U);
    t19 = *((char **)t16);
    t41 = *((unsigned char *)t19);
    t16 = (t13 + 56U);
    t20 = *((char **)t16);
    t16 = (t10 + 0U);
    t42 = *((int *)t16);
    t21 = (t10 + 8U);
    t43 = *((int *)t21);
    t44 = (t8 - t42);
    t9 = (t44 * t43);
    t23 = (t10 + 4U);
    t45 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t42, t45, t43, t8);
    t15 = (1U * t9);
    t46 = (0 + t15);
    t24 = (t20 + t46);
    *((unsigned char *)t24) = t41;
    goto LAB14;

LAB17:    t24 = (t1 + 1408U);
    t26 = *((char **)t24);
    t50 = *((unsigned char *)t26);
    if (t50 == 0)
        goto LAB23;

LAB24:    goto LAB18;

LAB20:    t36 = (unsigned char)1;
    goto LAB22;

<<<<<<< HEAD
LAB23:    t24 = (t1 + 9684);
=======
LAB23:    t24 = (t1 + 9676);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t24, 39U, (unsigned char)1);
    goto LAB24;

LAB25:;
}

char *ieee_p_1242562249_sub_2423793367844140314_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t8[16];
    char t22[16];
    char t42[8];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (t8 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = (t5 - 1);
    t17 = (0 - t16);
    t15 = (t17 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t13 = xsi_get_transient_memory(t15);
    memset(t13, 0, t15);
    t18 = t13;
    memset(t18, (unsigned char)2, t15);
    t19 = (t5 - 1);
    t20 = (0 - t19);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t21 = (t21 * 1U);
    t23 = (t5 - 1);
    t24 = (t22 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t23;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t26 = (0 - t23);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = (t6 + 4U);
    t28 = (t1 + 3080);
    t29 = (t25 + 88U);
    *((char **)t29) = t28;
    t30 = (char *)alloca(t21);
    t31 = (t25 + 56U);
    *((char **)t31) = t30;
    memcpy(t30, t13, t21);
    t32 = (t25 + 64U);
    *((char **)t32) = t22;
    t33 = (t25 + 80U);
    *((unsigned int *)t33) = t21;
    t34 = (t4 + 12U);
    t27 = *((unsigned int *)t34);
    t35 = (t22 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = ieee_p_1242562249_sub_3327074314152554960_1035706684(t1, ((t27)), ((t36)));
    t38 = (t37 - 2);
    t39 = (t6 + 124U);
    t40 = ((STD_STANDARD) + 384);
    t41 = (t39 + 88U);
    *((char **)t41) = t40;
    t43 = (t39 + 56U);
    *((char **)t43) = t42;
    *((int *)t42) = t38;
    t44 = (t39 + 80U);
    *((unsigned int *)t44) = 4U;
    t45 = (t7 + 4U);
    t46 = (t3 != 0);
    if (t46 == 1)
        goto LAB3;

LAB2:    t47 = (t7 + 12U);
    *((char **)t47) = t4;
    t48 = (t7 + 20U);
    *((int *)t48) = t5;
    t49 = (t5 < 1);
    if (t49 != 0)
        goto LAB4;

LAB6:
LAB5:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t46 = (t10 == 0);
    if (t46 != 0)
        goto LAB8;

LAB10:
LAB9:    t9 = (t22 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t12 = xsi_get_transient_memory(t10);
    memset(t12, 0, t10);
    t13 = t12;
    t18 = (t4 + 0U);
    t11 = *((int *)t18);
    t24 = (t4 + 0U);
    t14 = *((int *)t24);
    t28 = (t4 + 8U);
    t16 = *((int *)t28);
    t17 = (t11 - t14);
    t15 = (t17 * t16);
    t21 = (1U * t15);
    t27 = (0 + t21);
    t29 = (t3 + t27);
    t46 = *((unsigned char *)t29);
    memset(t13, t46, t10);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t22 + 12U);
    t36 = *((unsigned int *)t33);
    t36 = (t36 * 1U);
    memcpy(t31, t12, t36);
    t9 = (t39 + 56U);
    t12 = *((char **)t9);
    t11 = *((int *)t12);
    t46 = (t11 >= 0);
    if (t46 != 0)
        goto LAB12;

LAB14:
LAB13:    t9 = (t25 + 56U);
    t12 = *((char **)t9);
    t9 = (t22 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t12, t10);
    t13 = (t22 + 0U);
    t11 = *((int *)t13);
    t18 = (t22 + 4U);
    t14 = *((int *)t18);
    t24 = (t22 + 8U);
    t16 = *((int *)t24);
    t28 = (t2 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = t11;
    t29 = (t28 + 4U);
    *((int *)t29) = t14;
    t29 = (t28 + 8U);
    *((int *)t29) = t16;
    t17 = (t14 - t11);
    t15 = (t17 * t16);
    t15 = (t15 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t15;

LAB1:    return t0;
LAB3:    *((char **)t45) = t3;
    goto LAB2;

LAB4:    t50 = (t1 + 1288U);
    t51 = *((char **)t50);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t51, 0U);
    t50 = (t2 + 0U);
    t52 = (t50 + 0U);
    *((int *)t52) = 0;
    t52 = (t50 + 4U);
    *((int *)t52) = 1;
    t52 = (t50 + 8U);
    *((int *)t52) = -1;
    t53 = (1 - 0);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t52 = (t50 + 12U);
    *((unsigned int *)t52) = t54;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t12 = (t25 + 56U);
    t13 = *((char **)t12);
    t12 = (t22 + 12U);
    t15 = *((unsigned int *)t12);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t13, t15);
    t18 = (t22 + 0U);
    t11 = *((int *)t18);
    t24 = (t22 + 4U);
    t14 = *((int *)t24);
    t28 = (t22 + 8U);
    t16 = *((int *)t28);
    t29 = (t2 + 0U);
    t31 = (t29 + 0U);
    *((int *)t31) = t11;
    t31 = (t29 + 4U);
    *((int *)t31) = t14;
    t31 = (t29 + 8U);
    *((int *)t31) = t16;
    t17 = (t14 - t11);
    t21 = (t17 * t16);
    t21 = (t21 + 1);
    t31 = (t29 + 12U);
    *((unsigned int *)t31) = t21;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    t9 = (t3 + 0);
    t13 = (t8 + 0U);
    t14 = *((int *)t13);
    t18 = (t39 + 56U);
    t24 = *((char **)t18);
    t16 = *((int *)t24);
    t10 = (t14 - t16);
    t18 = (t8 + 4U);
    t17 = *((int *)t18);
    t28 = (t8 + 8U);
    t19 = *((int *)t28);
    xsi_vhdl_check_range_of_slice(t14, t17, t19, t16, 0, -1);
    t15 = (t10 * 1U);
    t21 = (0 + t15);
    t29 = (t9 + t21);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t31 = (t22 + 0U);
    t20 = *((int *)t31);
    t33 = (t39 + 56U);
    t34 = *((char **)t33);
    t23 = *((int *)t34);
    t27 = (t20 - t23);
    t33 = (t22 + 4U);
    t26 = *((int *)t33);
    t35 = (t22 + 8U);
    t37 = *((int *)t35);
    xsi_vhdl_check_range_of_slice(t20, t26, t37, t23, 0, -1);
    t36 = (t27 * 1U);
    t54 = (0 + t36);
    t40 = (t32 + t54);
    t41 = (t39 + 56U);
    t43 = *((char **)t41);
    t38 = *((int *)t43);
    t53 = (0 - t38);
    t55 = (t53 * -1);
    t55 = (t55 + 1);
    t56 = (1U * t55);
    memcpy(t40, t29, t56);
    goto LAB13;

LAB15:;
}

char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[248];
    char t7[24];
    char t14[8];
    char t17[16];
    char t30[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    int t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    int t59;
    int t60;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (t6 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t18 = (t17 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = t20;
    t21 = (t18 + 4U);
    *((int *)t21) = 0;
    t21 = (t18 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t20);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t23;
    t24 = (t5 - 1);
    t25 = (0 - t24);
    t23 = (t25 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t21 = xsi_get_transient_memory(t23);
    memset(t21, 0, t23);
    t26 = t21;
    memset(t26, (unsigned char)2, t23);
    t27 = (t5 - 1);
    t28 = (0 - t27);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t29 = (t29 * 1U);
    t31 = (t5 - 1);
    t32 = (t30 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = t31;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - t31);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t6 + 124U);
    t36 = (t1 + 2976);
    t37 = (t33 + 88U);
    *((char **)t37) = t36;
    t38 = (char *)alloca(t29);
    t39 = (t33 + 56U);
    *((char **)t39) = t38;
    memcpy(t38, t21, t29);
    t40 = (t33 + 64U);
    *((char **)t40) = t30;
    t41 = (t33 + 80U);
    *((unsigned int *)t41) = t29;
    t42 = (t7 + 4U);
    t43 = (t3 != 0);
    if (t43 == 1)
        goto LAB3;

LAB2:    t44 = (t7 + 12U);
    *((char **)t44) = t4;
    t45 = (t7 + 20U);
    *((int *)t45) = t5;
    t46 = (t5 < 1);
    if (t46 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t17 + 12U);
    t9 = *((unsigned int *)t8);
    t43 = (t9 == 0);
    if (t43 != 0)
        goto LAB8;

LAB10:
LAB9:    t8 = (t30 + 12U);
    t9 = *((unsigned int *)t8);
    t12 = (t4 + 12U);
    t23 = *((unsigned int *)t12);
    t43 = (t9 < t23);
    if (t43 != 0)
        goto LAB12;

LAB14:    t8 = (t30 + 0U);
    t10 = *((int *)t8);
    t12 = (t17 + 0U);
    t20 = *((int *)t12);
    t22 = (t20 + 1);
    t24 = (t22 - t10);
    t9 = (t24 * -1);
    t9 = (t9 + 1);
    t23 = (1U * t9);
    t13 = xsi_get_transient_memory(t23);
    memset(t13, 0, t23);
    t15 = t13;
    memset(t15, (unsigned char)2, t23);
    t16 = (t33 + 56U);
    t18 = *((char **)t16);
    t16 = (t30 + 0U);
    t25 = *((int *)t16);
    t19 = (t30 + 0U);
    t27 = *((int *)t19);
    t29 = (t25 - t27);
    t21 = (t17 + 0U);
    t28 = *((int *)t21);
    t31 = (t28 + 1);
    t26 = (t30 + 4U);
    t34 = *((int *)t26);
    t32 = (t30 + 8U);
    t50 = *((int *)t32);
    xsi_vhdl_check_range_of_slice(t25, t34, t50, t27, t31, -1);
    t35 = (t29 * 1U);
    t51 = (0 + t35);
    t36 = (t18 + t51);
    t37 = (t30 + 0U);
    t57 = *((int *)t37);
    t39 = (t17 + 0U);
    t58 = *((int *)t39);
    t59 = (t58 + 1);
    t60 = (t59 - t57);
    t52 = (t60 * -1);
    t52 = (t52 + 1);
    t53 = (1U * t52);
    memcpy(t36, t13, t53);
    t8 = (t3 + 0);
    t12 = (t33 + 56U);
    t13 = *((char **)t12);
    t12 = (t30 + 0U);
    t10 = *((int *)t12);
    t15 = (t17 + 0U);
    t20 = *((int *)t15);
    t9 = (t10 - t20);
    t16 = (t30 + 4U);
    t22 = *((int *)t16);
    t18 = (t30 + 8U);
    t24 = *((int *)t18);
    xsi_vhdl_check_range_of_slice(t10, t22, t24, t20, 0, -1);
    t23 = (t9 * 1U);
    t29 = (0 + t23);
    t19 = (t13 + t29);
    t21 = (t17 + 12U);
    t35 = *((unsigned int *)t21);
    t35 = (t35 * 1U);
    memcpy(t19, t8, t35);

LAB13:    t8 = (t33 + 56U);
    t12 = *((char **)t8);
    t8 = (t30 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t12, t9);
    t13 = (t30 + 0U);
    t10 = *((int *)t13);
    t15 = (t30 + 4U);
    t20 = *((int *)t15);
    t16 = (t30 + 8U);
    t22 = *((int *)t16);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t10;
    t19 = (t18 + 4U);
    *((int *)t19) = t20;
    t19 = (t18 + 8U);
    *((int *)t19) = t22;
    t24 = (t20 - t10);
    t23 = (t24 * t22);
    t23 = (t23 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t23;

LAB1:    return t0;
LAB3:    *((char **)t42) = t3;
    goto LAB2;

LAB4:    t47 = (t1 + 1168U);
    t48 = *((char **)t47);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t48, 0U);
    t47 = (t2 + 0U);
    t49 = (t47 + 0U);
    *((int *)t49) = 0;
    t49 = (t47 + 4U);
    *((int *)t49) = 1;
    t49 = (t47 + 8U);
    *((int *)t49) = -1;
    t50 = (1 - 0);
    t35 = (t50 * -1);
    t35 = (t35 + 1);
    t49 = (t47 + 12U);
    *((unsigned int *)t49) = t35;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t12 = (t33 + 56U);
    t13 = *((char **)t12);
    t12 = (t30 + 12U);
    t23 = *((unsigned int *)t12);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t13, t23);
    t15 = (t30 + 0U);
    t10 = *((int *)t15);
    t16 = (t30 + 4U);
    t20 = *((int *)t16);
    t18 = (t30 + 8U);
    t22 = *((int *)t18);
    t19 = (t2 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = t10;
    t21 = (t19 + 4U);
    *((int *)t21) = t20;
    t21 = (t19 + 8U);
    *((int *)t21) = t22;
    t24 = (t20 - t10);
    t29 = (t24 * t22);
    t29 = (t29 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t29;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    t13 = (t3 + 0);
    t15 = (t17 + 0U);
    t10 = *((int *)t15);
    t16 = (t30 + 0U);
    t20 = *((int *)t16);
    t29 = (t10 - t20);
    t18 = (t17 + 4U);
    t22 = *((int *)t18);
    t19 = (t17 + 8U);
    t24 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t10, t22, t24, t20, 0, -1);
    t35 = (t29 * 1U);
    t51 = (0 + t35);
    t21 = (t13 + t51);
    t26 = (t33 + 56U);
    t32 = *((char **)t26);
    t26 = (t30 + 0U);
    t25 = *((int *)t26);
    t36 = (t30 + 0U);
    t27 = *((int *)t36);
    t52 = (t25 - t27);
    t37 = (t30 + 4U);
    t28 = *((int *)t37);
    t39 = (t30 + 8U);
    t31 = *((int *)t39);
    xsi_vhdl_check_range_of_slice(t25, t28, t31, t27, 0, -1);
    t53 = (t52 * 1U);
    t54 = (0 + t53);
    t40 = (t32 + t54);
    t41 = (t30 + 0U);
    t34 = *((int *)t41);
    t50 = (0 - t34);
    t55 = (t50 * -1);
    t55 = (t55 + 1);
    t56 = (1U * t55);
    memcpy(t40, t21, t56);
    goto LAB13;

LAB15:;
}

char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char t29[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t4 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 2976);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 64U);
    *((char **)t24) = t12;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t30 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t29, t3, t4);
    t31 = (t17 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t29 + 12U);
    t19 = *((unsigned int *)t33);
    t34 = (1U * t19);
    memcpy(t31, t30, t34);
    t7 = (t17 + 56U);
    t13 = *((char **)t7);
    t7 = (t12 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t13, t8);
    t16 = (t12 + 0U);
    t9 = *((int *)t16);
    t20 = (t12 + 4U);
    t10 = *((int *)t20);
    t21 = (t12 + 8U);
    t15 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t9;
    t24 = (t23 + 4U);
    *((int *)t24) = t10;
    t24 = (t23 + 8U);
    *((int *)t24) = t15;
    t18 = (t10 - t9);
    t11 = (t18 * t15);
    t11 = (t11 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t11;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_1331342005737211399_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_1331119578910941685_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_1338682107848933845_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16447329934917513135_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_1331342006247660547_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989833316239837_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_1331342006639014477_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_1338682121274062683_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 2976);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16447329948342641973_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_420421356293926614_1035706684(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char t29[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t4 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 3080);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 64U);
    *((char **)t24) = t12;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t30 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t29, t3, t4);
    t31 = (t17 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t29 + 12U);
    t19 = *((unsigned int *)t33);
    t34 = (1U * t19);
    memcpy(t31, t30, t34);
    t7 = (t17 + 56U);
    t13 = *((char **)t7);
    t7 = (t12 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t13, t8);
    t16 = (t12 + 0U);
    t9 = *((int *)t16);
    t20 = (t12 + 4U);
    t10 = *((int *)t20);
    t21 = (t12 + 8U);
    t15 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t9;
    t24 = (t23 + 4U);
    *((int *)t24) = t10;
    t24 = (t23 + 8U);
    *((int *)t24) = t15;
    t18 = (t10 - t9);
    t11 = (t18 * t15);
    t11 = (t11 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t11;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:;
}

char *ieee_p_1242562249_sub_443655408936719335_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_443432982110449621_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_450995511048441781_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16447329934917513135_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_443655409447168483_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989833316239837_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_443655409838522413_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

char *ieee_p_1242562249_sub_450995524473570619_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t14[16];
    char t34[16];
    char *t0;
    char *t9;
    unsigned int t10;
    int t11;
    int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;

LAB0:    t9 = (t4 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t10 - 1);
    t12 = (0 - t11);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t13 = (t13 * 1U);
    t15 = (t4 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = (t1 + 3080);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t8 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 12U);
    *((char **)t30) = t4;
    t31 = (t8 + 20U);
    t32 = (t5 != 0);
    if (t32 == 1)
        goto LAB5;

LAB4:    t33 = (t8 + 28U);
    *((char **)t33) = t6;
    t35 = ieee_p_2592010699_sub_16447329948342641973_503743352(IEEE_P_2592010699, t34, t3, t4, t5, t6);
    t36 = (t19 + 56U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t34 + 12U);
    t21 = *((unsigned int *)t38);
    t39 = (1U * t21);
    memcpy(t36, t35, t39);
    t9 = (t19 + 56U);
    t15 = *((char **)t9);
    t9 = (t14 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t15, t10);
    t18 = (t14 + 0U);
    t11 = *((int *)t18);
    t22 = (t14 + 4U);
    t12 = *((int *)t22);
    t23 = (t14 + 8U);
    t17 = *((int *)t23);
    t25 = (t2 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = t11;
    t26 = (t25 + 4U);
    *((int *)t26) = t12;
    t26 = (t25 + 8U);
    *((int *)t26) = t17;
    t20 = (t12 - t11);
    t13 = (t20 * t17);
    t13 = (t13 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t13;

LAB1:    return t0;
LAB3:    *((char **)t28) = t3;
    goto LAB2;

LAB5:    *((char **)t31) = t5;
    goto LAB4;

LAB6:;
}

unsigned char ieee_p_1242562249_sub_14246957632564071036_1035706684(char *t1, unsigned char t2, unsigned char t3)
{
    char t4[128];
    char t5[8];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;

LAB0:    t6 = (t4 + 4U);
    t7 = ((IEEE_P_2592010699) + 3216);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    *((unsigned char *)t12) = t2;
    t13 = (t5 + 5U);
    *((unsigned char *)t13) = t3;
    t14 = (t1 + 1528U);
    t15 = *((char **)t14);
    t16 = (t2 - 0);
    t17 = (t16 * 1);
    t18 = (t17 * 9U);
    t19 = (t3 - 0);
    t20 = (t19 * 1);
    t21 = (t18 + t20);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((unsigned char *)t14);
    t0 = t24;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_1242562249_sub_17814753899323031155_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    char t8[16];
    char t15[16];
    unsigned char t0;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t8 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((unsigned int *)t12) = t10;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (t10 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t5 + 12U);
    t14 = *((unsigned int *)t12);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((unsigned int *)t17) = t14;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (t14 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t7 + 12U);
    *((char **)t21) = t3;
    t22 = (t7 + 20U);
    t23 = (t4 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t7 + 28U);
    *((char **)t24) = t5;
    t26 = (t3 + 12U);
    t19 = *((unsigned int *)t26);
    t27 = (t19 < 1);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t5 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (t29 < 1);
    t25 = t30;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t8 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t15 + 12U);
    t14 = *((unsigned int *)t11);
    t20 = (t10 != t14);
    if (t20 != 0)
        goto LAB15;

LAB17:    t9 = (t8 + 0U);
    t18 = *((int *)t9);
    t11 = (t8 + 4U);
    t35 = *((int *)t11);
    t12 = (t8 + 8U);
    t36 = *((int *)t12);
    if (t18 > t35)
        goto LAB25;

LAB26:    if (t36 == -1)
        goto LAB30;

LAB31:    t13 = t35;

LAB27:    t16 = (t8 + 0U);
    t38 = *((int *)t16);
    t26 = (t8 + 4U);
    t39 = *((int *)t26);
    t28 = (t8 + 8U);
    t40 = *((int *)t28);
    if (t38 > t39)
        goto LAB32;

LAB33:    if (t40 == -1)
        goto LAB37;

LAB38:    t37 = t38;

LAB34:    t41 = t37;
    t42 = t13;

LAB21:    if (t41 <= t42)
        goto LAB22;

LAB24:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t4;
    goto LAB4;

LAB6:    t31 = (t1 + 1408U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    if (t33 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t31 = (t1 + 9723);
=======
LAB12:    t31 = (t1 + 9715);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t31, 53U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t12 = (t1 + 1408U);
    t16 = *((char **)t12);
    t23 = *((unsigned char *)t16);
    if (t23 == 0)
        goto LAB18;

LAB19:    t0 = (unsigned char)0;
    goto LAB1;

LAB16:    xsi_error(ng9);
    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB18:    t12 = (t1 + 9776);
=======
LAB18:    t12 = (t1 + 9768);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 60U, (unsigned char)1);
    goto LAB19;

LAB20:    goto LAB16;

LAB22:    t31 = (t1 + 1528U);
    t32 = *((char **)t31);
    t31 = (t2 + 0);
    t34 = (t8 + 0U);
    t43 = *((int *)t34);
    t44 = (t8 + 8U);
    t45 = *((int *)t44);
    t46 = (t41 - t43);
    t10 = (t46 * t45);
    t47 = (t8 + 4U);
    t48 = *((int *)t47);
    xsi_vhdl_check_range_of_index(t43, t48, t45, t41);
    t14 = (1U * t10);
    t19 = (0 + t14);
    t49 = (t31 + t19);
    t20 = *((unsigned char *)t49);
    t50 = (t20 - 0);
    t29 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t20);
    t51 = (t29 * 9U);
    t52 = (t4 + 0);
    t53 = (t15 + 0U);
    t54 = *((int *)t53);
    t55 = (t15 + 8U);
    t56 = *((int *)t55);
    t57 = (t41 - t54);
    t58 = (t57 * t56);
    t59 = (t15 + 4U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_index(t54, t60, t56, t41);
    t61 = (1U * t58);
    t62 = (0 + t61);
    t63 = (t52 + t62);
    t23 = *((unsigned char *)t63);
    t64 = (t23 - 0);
    t65 = (t64 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t23);
    t66 = (t51 + t65);
    t67 = (1U * t66);
    t68 = (0 + t67);
    t69 = (t32 + t68);
    t25 = *((unsigned char *)t69);
    t27 = (!(t25));
    if (t27 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB23:    if (t41 == t42)
        goto LAB24;

LAB43:    t13 = (t41 + 1);
    t41 = t13;
    goto LAB21;

LAB25:    if (t36 == 1)
        goto LAB28;

LAB29:    t13 = t18;
    goto LAB27;

LAB28:    t13 = t35;
    goto LAB27;

LAB30:    t13 = t18;
    goto LAB27;

LAB32:    if (t40 == 1)
        goto LAB35;

LAB36:    t37 = t39;
    goto LAB34;

LAB35:    t37 = t38;
    goto LAB34;

LAB37:    t37 = t39;
    goto LAB34;

LAB39:    t0 = (unsigned char)0;
    goto LAB1;

LAB42:    goto LAB40;

LAB44:    goto LAB16;

}

unsigned char ieee_p_1242562249_sub_14692318544450357410_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    char t8[16];
    char t15[16];
    unsigned char t0;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t8 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((unsigned int *)t12) = t10;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (t10 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t5 + 12U);
    t14 = *((unsigned int *)t12);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((unsigned int *)t17) = t14;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (t14 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t7 + 12U);
    *((char **)t21) = t3;
    t22 = (t7 + 20U);
    t23 = (t4 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t7 + 28U);
    *((char **)t24) = t5;
    t26 = (t3 + 12U);
    t19 = *((unsigned int *)t26);
    t27 = (t19 < 1);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t5 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (t29 < 1);
    t25 = t30;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t8 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t15 + 12U);
    t14 = *((unsigned int *)t11);
    t20 = (t10 != t14);
    if (t20 != 0)
        goto LAB15;

LAB17:    t9 = (t8 + 0U);
    t18 = *((int *)t9);
    t11 = (t8 + 4U);
    t35 = *((int *)t11);
    t12 = (t8 + 8U);
    t36 = *((int *)t12);
    if (t18 > t35)
        goto LAB25;

LAB26:    if (t36 == -1)
        goto LAB30;

LAB31:    t13 = t35;

LAB27:    t16 = (t8 + 0U);
    t38 = *((int *)t16);
    t26 = (t8 + 4U);
    t39 = *((int *)t26);
    t28 = (t8 + 8U);
    t40 = *((int *)t28);
    if (t38 > t39)
        goto LAB32;

LAB33:    if (t40 == -1)
        goto LAB37;

LAB38:    t37 = t38;

LAB34:    t41 = t37;
    t42 = t13;

LAB21:    if (t41 <= t42)
        goto LAB22;

LAB24:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t4;
    goto LAB4;

LAB6:    t31 = (t1 + 1408U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    if (t33 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t31 = (t1 + 9836);
=======
LAB12:    t31 = (t1 + 9828);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t31, 53U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t12 = (t1 + 1408U);
    t16 = *((char **)t12);
    t23 = *((unsigned char *)t16);
    if (t23 == 0)
        goto LAB18;

LAB19:    t0 = (unsigned char)0;
    goto LAB1;

LAB16:    xsi_error(ng9);
    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB18:    t12 = (t1 + 9889);
=======
LAB18:    t12 = (t1 + 9881);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 60U, (unsigned char)1);
    goto LAB19;

LAB20:    goto LAB16;

LAB22:    t31 = (t1 + 1528U);
    t32 = *((char **)t31);
    t31 = (t2 + 0);
    t34 = (t8 + 0U);
    t43 = *((int *)t34);
    t44 = (t8 + 8U);
    t45 = *((int *)t44);
    t46 = (t41 - t43);
    t10 = (t46 * t45);
    t47 = (t8 + 4U);
    t48 = *((int *)t47);
    xsi_vhdl_check_range_of_index(t43, t48, t45, t41);
    t14 = (1U * t10);
    t19 = (0 + t14);
    t49 = (t31 + t19);
    t20 = *((unsigned char *)t49);
    t50 = (t20 - 0);
    t29 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t20);
    t51 = (t29 * 9U);
    t52 = (t4 + 0);
    t53 = (t15 + 0U);
    t54 = *((int *)t53);
    t55 = (t15 + 8U);
    t56 = *((int *)t55);
    t57 = (t41 - t54);
    t58 = (t57 * t56);
    t59 = (t15 + 4U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_index(t54, t60, t56, t41);
    t61 = (1U * t58);
    t62 = (0 + t61);
    t63 = (t52 + t62);
    t23 = *((unsigned char *)t63);
    t64 = (t23 - 0);
    t65 = (t64 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t23);
    t66 = (t51 + t65);
    t67 = (1U * t66);
    t68 = (0 + t67);
    t69 = (t32 + t68);
    t25 = *((unsigned char *)t69);
    t27 = (!(t25));
    if (t27 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB23:    if (t41 == t42)
        goto LAB24;

LAB43:    t13 = (t41 + 1);
    t41 = t13;
    goto LAB21;

LAB25:    if (t36 == 1)
        goto LAB28;

LAB29:    t13 = t18;
    goto LAB27;

LAB28:    t13 = t35;
    goto LAB27;

LAB30:    t13 = t18;
    goto LAB27;

LAB32:    if (t40 == 1)
        goto LAB35;

LAB36:    t37 = t39;
    goto LAB34;

LAB35:    t37 = t38;
    goto LAB34;

LAB37:    t37 = t39;
    goto LAB34;

LAB39:    t0 = (unsigned char)0;
    goto LAB1;

LAB42:    goto LAB40;

LAB44:    goto LAB16;

}

unsigned char ieee_p_1242562249_sub_14874919107683458094_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    char t8[16];
    char t15[16];
    unsigned char t0;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t8 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((unsigned int *)t12) = t10;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (t10 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t5 + 12U);
    t14 = *((unsigned int *)t12);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((unsigned int *)t17) = t14;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (t14 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t7 + 12U);
    *((char **)t21) = t3;
    t22 = (t7 + 20U);
    t23 = (t4 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t7 + 28U);
    *((char **)t24) = t5;
    t26 = (t3 + 12U);
    t19 = *((unsigned int *)t26);
    t27 = (t19 < 1);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t5 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (t29 < 1);
    t25 = t30;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t8 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t15 + 12U);
    t14 = *((unsigned int *)t11);
    t20 = (t10 != t14);
    if (t20 != 0)
        goto LAB15;

LAB17:    t9 = (t8 + 0U);
    t18 = *((int *)t9);
    t11 = (t8 + 4U);
    t35 = *((int *)t11);
    t12 = (t8 + 8U);
    t36 = *((int *)t12);
    if (t18 > t35)
        goto LAB25;

LAB26:    if (t36 == -1)
        goto LAB30;

LAB31:    t13 = t35;

LAB27:    t16 = (t8 + 0U);
    t38 = *((int *)t16);
    t26 = (t8 + 4U);
    t39 = *((int *)t26);
    t28 = (t8 + 8U);
    t40 = *((int *)t28);
    if (t38 > t39)
        goto LAB32;

LAB33:    if (t40 == -1)
        goto LAB37;

LAB38:    t37 = t38;

LAB34:    t41 = t37;
    t42 = t13;

LAB21:    if (t41 <= t42)
        goto LAB22;

LAB24:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t4;
    goto LAB4;

LAB6:    t31 = (t1 + 1408U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    if (t33 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t31 = (t1 + 9949);
=======
LAB12:    t31 = (t1 + 9941);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t31, 53U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t12 = (t1 + 1408U);
    t16 = *((char **)t12);
    t23 = *((unsigned char *)t16);
    if (t23 == 0)
        goto LAB18;

LAB19:    t0 = (unsigned char)0;
    goto LAB1;

LAB16:    xsi_error(ng9);
    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB18:    t12 = (t1 + 10002);
=======
LAB18:    t12 = (t1 + 9994);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 60U, (unsigned char)1);
    goto LAB19;

LAB20:    goto LAB16;

LAB22:    t31 = (t1 + 1528U);
    t32 = *((char **)t31);
    t31 = (t2 + 0);
    t34 = (t8 + 0U);
    t43 = *((int *)t34);
    t44 = (t8 + 8U);
    t45 = *((int *)t44);
    t46 = (t41 - t43);
    t10 = (t46 * t45);
    t47 = (t8 + 4U);
    t48 = *((int *)t47);
    xsi_vhdl_check_range_of_index(t43, t48, t45, t41);
    t14 = (1U * t10);
    t19 = (0 + t14);
    t49 = (t31 + t19);
    t20 = *((unsigned char *)t49);
    t50 = (t20 - 0);
    t29 = (t50 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t20);
    t51 = (t29 * 9U);
    t52 = (t4 + 0);
    t53 = (t15 + 0U);
    t54 = *((int *)t53);
    t55 = (t15 + 8U);
    t56 = *((int *)t55);
    t57 = (t41 - t54);
    t58 = (t57 * t56);
    t59 = (t15 + 4U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_index(t54, t60, t56, t41);
    t61 = (1U * t58);
    t62 = (0 + t61);
    t63 = (t52 + t62);
    t23 = *((unsigned char *)t63);
    t64 = (t23 - 0);
    t65 = (t64 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t23);
    t66 = (t51 + t65);
    t67 = (1U * t66);
    t68 = (0 + t67);
    t69 = (t32 + t68);
    t25 = *((unsigned char *)t69);
    t27 = (!(t25));
    if (t27 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB23:    if (t41 == t42)
        goto LAB24;

LAB43:    t13 = (t41 + 1);
    t41 = t13;
    goto LAB21;

LAB25:    if (t36 == 1)
        goto LAB28;

LAB29:    t13 = t18;
    goto LAB27;

LAB28:    t13 = t35;
    goto LAB27;

LAB30:    t13 = t18;
    goto LAB27;

LAB32:    if (t40 == 1)
        goto LAB35;

LAB36:    t37 = t39;
    goto LAB34;

LAB35:    t37 = t38;
    goto LAB34;

LAB37:    t37 = t39;
    goto LAB34;

LAB39:    t0 = (unsigned char)0;
    goto LAB1;

LAB42:    goto LAB40;

LAB44:    goto LAB16;

}

unsigned char ieee_p_1242562249_sub_13907505804321001047_1035706684(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[40];
    char t8[16];
    char t15[16];
    unsigned char t0;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t9 = (t3 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t8 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((unsigned int *)t12) = t10;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (t10 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t5 + 12U);
    t14 = *((unsigned int *)t12);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((unsigned int *)t17) = t14;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (t14 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t7 + 12U);
    *((char **)t21) = t3;
    t22 = (t7 + 20U);
    t23 = (t4 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t7 + 28U);
    *((char **)t24) = t5;
    t26 = (t3 + 12U);
    t19 = *((unsigned int *)t26);
    t27 = (t19 < 1);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t5 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (t29 < 1);
    t25 = t30;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:
LAB7:    t9 = (t8 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (t15 + 12U);
    t14 = *((unsigned int *)t11);
    t20 = (t10 != t14);
    if (t20 != 0)
        goto LAB15;

LAB17:    t9 = (t8 + 0U);
    t18 = *((int *)t9);
    t11 = (t8 + 4U);
    t35 = *((int *)t11);
    t12 = (t8 + 8U);
    t36 = *((int *)t12);
    if (t18 > t35)
        goto LAB25;

LAB26:    if (t36 == -1)
        goto LAB30;

LAB31:    t13 = t35;

LAB27:    t16 = (t8 + 0U);
    t38 = *((int *)t16);
    t26 = (t8 + 4U);
    t39 = *((int *)t26);
    t28 = (t8 + 8U);
    t40 = *((int *)t28);
    if (t38 > t39)
        goto LAB32;

LAB33:    if (t40 == -1)
        goto LAB37;

LAB38:    t37 = t38;

LAB34:    t41 = t37;
    t42 = t13;

LAB21:    if (t41 <= t42)
        goto LAB22;

LAB24:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t4;
    goto LAB4;

LAB6:    t31 = (t1 + 1408U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    if (t33 == 0)
        goto LAB12;

LAB13:    t0 = (unsigned char)0;
    goto LAB1;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

<<<<<<< HEAD
LAB12:    t31 = (t1 + 10062);
=======
LAB12:    t31 = (t1 + 10054);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t31, 53U, (unsigned char)1);
    goto LAB13;

LAB14:    goto LAB7;

LAB15:    t12 = (t1 + 1408U);
    t16 = *((char **)t12);
    t23 = *((unsigned char *)t16);
    if (t23 == 0)
        goto LAB18;

LAB19:    t0 = (unsigned char)0;
    goto LAB1;

LAB16:    xsi_error(ng9);
    t0 = 0;
    goto LAB1;

<<<<<<< HEAD
LAB18:    t12 = (t1 + 10115);
=======
LAB18:    t12 = (t1 + 10107);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t12, 60U, (unsigned char)1);
    goto LAB19;

LAB20:    goto LAB16;

LAB22:    t31 = (t1 + 1528U);
    t32 = *((char **)t31);
    t31 = (t2 + 0);
    t34 = (t8 + 0U);
    t43 = *((int *)t34);
    t44 = (t8 + 8U);
    t45 = *((int *)t44);
    t46 = (t41 - t43);
    t10 = (t46 * t45);
    t47 = (t8 + 4U);
    t48 = *((int *)t47);
    xsi_vhdl_check_range_of_index(t43, t48, t45, t41);
    t14 = (1U * t10);
    t19 = (0 + t14);
    t49 = (t31 + t19);
    t20 = *((unsigned char *)t49);
    t50 = (t20 - 0);
    t29 = (t50 * 1);
    t51 = (t29 * 9U);
    t52 = (t4 + 0);
    t53 = (t15 + 0U);
    t54 = *((int *)t53);
    t55 = (t15 + 8U);
    t56 = *((int *)t55);
    t57 = (t41 - t54);
    t58 = (t57 * t56);
    t59 = (t15 + 4U);
    t60 = *((int *)t59);
    xsi_vhdl_check_range_of_index(t54, t60, t56, t41);
    t61 = (1U * t58);
    t62 = (0 + t61);
    t63 = (t52 + t62);
    t23 = *((unsigned char *)t63);
    t64 = (t23 - 0);
    t65 = (t64 * 1);
    t66 = (t51 + t65);
    t67 = (1U * t66);
    t68 = (0 + t67);
    t69 = (t32 + t68);
    t25 = *((unsigned char *)t69);
    t27 = (!(t25));
    if (t27 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB23:    if (t41 == t42)
        goto LAB24;

LAB43:    t13 = (t41 + 1);
    t41 = t13;
    goto LAB21;

LAB25:    if (t36 == 1)
        goto LAB28;

LAB29:    t13 = t18;
    goto LAB27;

LAB28:    t13 = t35;
    goto LAB27;

LAB30:    t13 = t18;
    goto LAB27;

LAB32:    if (t40 == 1)
        goto LAB35;

LAB36:    t37 = t39;
    goto LAB34;

LAB35:    t37 = t38;
    goto LAB34;

LAB37:    t37 = t39;
    goto LAB34;

LAB39:    t0 = (unsigned char)0;
    goto LAB1;

LAB42:    goto LAB40;

LAB44:    goto LAB16;

}

char *ieee_p_1242562249_sub_4856407567805619711_1035706684(char *t1, char *t2, char *t3, char *t4, unsigned char t5)
{
    char t6[248];
    char t7[24];
    char t13[16];
    char t30[8];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    unsigned char t47;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    unsigned int t57;
    static char *nl0[] = {&&LAB17, &&LAB17, &&LAB15, &&LAB16, &&LAB17, &&LAB17, &&LAB15, &&LAB16, &&LAB17};

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 2976);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t6 + 124U);
    t28 = ((STD_STANDARD) + 0);
    t29 = (t27 + 88U);
    *((char **)t29) = t28;
    t31 = (t27 + 56U);
    *((char **)t31) = t30;
    *((unsigned char *)t30) = (unsigned char)0;
    t32 = (t27 + 80U);
    *((unsigned int *)t32) = 1U;
    t34 = (t4 + 12U);
    t20 = *((unsigned int *)t34);
    t35 = (t20 - 1);
    t36 = (t33 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 4U);
    t40 = (t3 != 0);
    if (t40 == 1)
        goto LAB3;

LAB2:    t41 = (t7 + 12U);
    *((char **)t41) = t4;
    t42 = (t7 + 20U);
    *((unsigned char *)t42) = t5;
    t43 = (t4 + 12U);
    t39 = *((unsigned int *)t43);
    t44 = (t39 < 1);
    if (t44 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t13 + 8U);
    t10 = *((int *)t8);
    t14 = (t13 + 4U);
    t11 = *((int *)t14);
    t17 = (t13 + 0U);
    t16 = *((int *)t17);
    t19 = t16;
    t35 = t11;

LAB10:    t38 = (t35 * t10);
    t49 = (t19 * t10);
    if (t49 <= t38)
        goto LAB11;

LAB13:    t8 = (t27 + 56U);
    t14 = *((char **)t8);
    t40 = *((unsigned char *)t14);
    if (t40 != 0)
        goto LAB19;

LAB21:
LAB20:    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t14, t9);
    t17 = (t13 + 0U);
    t10 = *((int *)t17);
    t21 = (t13 + 4U);
    t11 = *((int *)t21);
    t22 = (t13 + 8U);
    t16 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t10;
    t25 = (t24 + 4U);
    *((int *)t25) = t11;
    t25 = (t24 + 8U);
    *((int *)t25) = t16;
    t19 = (t11 - t10);
    t12 = (t19 * t16);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t37) = t3;
    goto LAB2;

LAB4:    t45 = (t1 + 1408U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    if (t47 == 0)
        goto LAB7;

LAB8:    t8 = (t1 + 1168U);
    t14 = *((char **)t8);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t14, 0U);
    t8 = (t2 + 0U);
    t17 = (t8 + 0U);
    *((int *)t17) = 0;
    t17 = (t8 + 4U);
    *((int *)t17) = 1;
    t17 = (t8 + 8U);
    *((int *)t17) = -1;
    t10 = (1 - 0);
    t9 = (t10 * -1);
    t9 = (t9 + 1);
    t17 = (t8 + 12U);
    *((unsigned int *)t17) = t9;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t45 = (t1 + 10175);
=======
LAB7:    t45 = (t1 + 10167);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t45, 47U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB11:    t21 = (t3 + 0);
    t22 = (t33 + 0U);
    t50 = *((int *)t22);
    t24 = (t33 + 8U);
    t51 = *((int *)t24);
    t52 = (t19 - t50);
    t9 = (t52 * t51);
    t25 = (t33 + 4U);
    t53 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t19);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t26 = (t21 + t15);
    t40 = *((unsigned char *)t26);
    t28 = (char *)((nl0) + t40);
    goto **((char **)t28);

LAB12:    if (t19 == t35)
        goto LAB13;

LAB18:    t11 = (t19 + t10);
    t19 = t11;
    goto LAB10;

LAB14:    goto LAB12;

LAB15:    t29 = (t18 + 56U);
    t31 = *((char **)t29);
    t29 = (t13 + 0U);
    t54 = *((int *)t29);
    t32 = (t13 + 8U);
    t55 = *((int *)t32);
    t56 = (t19 - t54);
    t20 = (t56 * t55);
    t39 = (1U * t20);
    t57 = (0 + t39);
    t34 = (t31 + t57);
    *((unsigned char *)t34) = (unsigned char)2;
    goto LAB14;

LAB16:    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t11 = *((int *)t8);
    t17 = (t13 + 8U);
    t16 = *((int *)t17);
    t38 = (t19 - t11);
    t9 = (t38 * t16);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    *((unsigned char *)t21) = (unsigned char)3;
    goto LAB14;

LAB17:    t8 = (t27 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB14;

LAB19:    t8 = (t13 + 8U);
    t10 = *((int *)t8);
    t17 = (t13 + 4U);
    t11 = *((int *)t17);
    t21 = (t13 + 0U);
    t16 = *((int *)t21);
    t19 = t16;
    t35 = t11;

LAB22:    t38 = (t35 * t10);
    t49 = (t19 * t10);
    if (t49 <= t38)
        goto LAB23;

LAB25:    goto LAB20;

LAB23:    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t50 = *((int *)t22);
    t25 = (t13 + 8U);
    t51 = *((int *)t25);
    t52 = (t19 - t50);
    t9 = (t52 * t51);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t26 = (t24 + t15);
    *((unsigned char *)t26) = t5;

LAB24:    if (t19 == t35)
        goto LAB25;

LAB26:    t11 = (t19 + t10);
    t19 = t11;
    goto LAB22;

LAB27:;
}

char *ieee_p_1242562249_sub_2985487471987653227_1035706684(char *t1, char *t2, char *t3, char *t4, unsigned char t5)
{
    char t6[248];
    char t7[24];
    char t13[16];
    char t30[8];
    char t33[16];
    char *t0;
    char *t8;
    unsigned int t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    unsigned char t47;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    unsigned int t57;
    static char *nl0[] = {&&LAB17, &&LAB17, &&LAB15, &&LAB16, &&LAB17, &&LAB17, &&LAB15, &&LAB16, &&LAB17};

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (t15 - 1);
    t17 = (t13 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t16;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - t16);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = (t1 + 3080);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t12);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t13);
    t25 = (t18 + 64U);
    *((char **)t25) = t13;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t12;
    t27 = (t6 + 124U);
    t28 = ((STD_STANDARD) + 0);
    t29 = (t27 + 88U);
    *((char **)t29) = t28;
    t31 = (t27 + 56U);
    *((char **)t31) = t30;
    *((unsigned char *)t30) = (unsigned char)0;
    t32 = (t27 + 80U);
    *((unsigned int *)t32) = 1U;
    t34 = (t4 + 12U);
    t20 = *((unsigned int *)t34);
    t35 = (t20 - 1);
    t36 = (t33 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t35;
    t37 = (t36 + 4U);
    *((int *)t37) = 0;
    t37 = (t36 + 8U);
    *((int *)t37) = -1;
    t38 = (0 - t35);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t37 = (t7 + 4U);
    t40 = (t3 != 0);
    if (t40 == 1)
        goto LAB3;

LAB2:    t41 = (t7 + 12U);
    *((char **)t41) = t4;
    t42 = (t7 + 20U);
    *((unsigned char *)t42) = t5;
    t43 = (t4 + 12U);
    t39 = *((unsigned int *)t43);
    t44 = (t39 < 1);
    if (t44 != 0)
        goto LAB4;

LAB6:
LAB5:    t8 = (t13 + 8U);
    t10 = *((int *)t8);
    t14 = (t13 + 4U);
    t11 = *((int *)t14);
    t17 = (t13 + 0U);
    t16 = *((int *)t17);
    t19 = t16;
    t35 = t11;

LAB10:    t38 = (t35 * t10);
    t49 = (t19 * t10);
    if (t49 <= t38)
        goto LAB11;

LAB13:    t8 = (t27 + 56U);
    t14 = *((char **)t8);
    t40 = *((unsigned char *)t14);
    if (t40 != 0)
        goto LAB19;

LAB21:
LAB20:    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t14, t9);
    t17 = (t13 + 0U);
    t10 = *((int *)t17);
    t21 = (t13 + 4U);
    t11 = *((int *)t21);
    t22 = (t13 + 8U);
    t16 = *((int *)t22);
    t24 = (t2 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t10;
    t25 = (t24 + 4U);
    *((int *)t25) = t11;
    t25 = (t24 + 8U);
    *((int *)t25) = t16;
    t19 = (t11 - t10);
    t12 = (t19 * t16);
    t12 = (t12 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t12;

LAB1:    return t0;
LAB3:    *((char **)t37) = t3;
    goto LAB2;

LAB4:    t45 = (t1 + 1408U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    if (t47 == 0)
        goto LAB7;

LAB8:    t8 = (t1 + 1288U);
    t14 = *((char **)t8);
    t0 = xsi_get_transient_memory(0U);
    memcpy(t0, t14, 0U);
    t8 = (t2 + 0U);
    t17 = (t8 + 0U);
    *((int *)t17) = 0;
    t17 = (t8 + 4U);
    *((int *)t17) = 1;
    t17 = (t8 + 8U);
    *((int *)t17) = -1;
    t10 = (1 - 0);
    t9 = (t10 * -1);
    t9 = (t9 + 1);
    t17 = (t8 + 12U);
    *((unsigned int *)t17) = t9;
    goto LAB1;

<<<<<<< HEAD
LAB7:    t45 = (t1 + 10222);
=======
LAB7:    t45 = (t1 + 10214);
>>>>>>> 833603ae8953f8f9ef8cc932a8e95fc8c510e671
    xsi_report(t45, 47U, (unsigned char)1);
    goto LAB8;

LAB9:    goto LAB5;

LAB11:    t21 = (t3 + 0);
    t22 = (t33 + 0U);
    t50 = *((int *)t22);
    t24 = (t33 + 8U);
    t51 = *((int *)t24);
    t52 = (t19 - t50);
    t9 = (t52 * t51);
    t25 = (t33 + 4U);
    t53 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t19);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t26 = (t21 + t15);
    t40 = *((unsigned char *)t26);
    t28 = (char *)((nl0) + t40);
    goto **((char **)t28);

LAB12:    if (t19 == t35)
        goto LAB13;

LAB18:    t11 = (t19 + t10);
    t19 = t11;
    goto LAB10;

LAB14:    goto LAB12;

LAB15:    t29 = (t18 + 56U);
    t31 = *((char **)t29);
    t29 = (t13 + 0U);
    t54 = *((int *)t29);
    t32 = (t13 + 8U);
    t55 = *((int *)t32);
    t56 = (t19 - t54);
    t20 = (t56 * t55);
    t39 = (1U * t20);
    t57 = (0 + t39);
    t34 = (t31 + t57);
    *((unsigned char *)t34) = (unsigned char)2;
    goto LAB14;

LAB16:    t8 = (t18 + 56U);
    t14 = *((char **)t8);
    t8 = (t13 + 0U);
    t11 = *((int *)t8);
    t17 = (t13 + 8U);
    t16 = *((int *)t17);
    t38 = (t19 - t11);
    t9 = (t38 * t16);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t21 = (t14 + t15);
    *((unsigned char *)t21) = (unsigned char)3;
    goto LAB14;

LAB17:    t8 = (t27 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    goto LAB14;

LAB19:    t8 = (t13 + 8U);
    t10 = *((int *)t8);
    t17 = (t13 + 4U);
    t11 = *((int *)t17);
    t21 = (t13 + 0U);
    t16 = *((int *)t21);
    t19 = t16;
    t35 = t11;

LAB22:    t38 = (t35 * t10);
    t49 = (t19 * t10);
    if (t49 <= t38)
        goto LAB23;

LAB25:    goto LAB20;

LAB23:    t22 = (t18 + 56U);
    t24 = *((char **)t22);
    t22 = (t13 + 0U);
    t50 = *((int *)t22);
    t25 = (t13 + 8U);
    t51 = *((int *)t25);
    t52 = (t19 - t50);
    t9 = (t52 * t51);
    t12 = (1U * t9);
    t15 = (0 + t12);
    t26 = (t24 + t15);
    *((unsigned char *)t26) = t5;

LAB24:    if (t19 == t35)
        goto LAB25;

LAB26:    t11 = (t19 + t10);
    t19 = t11;
    goto LAB22;

LAB27:;
}


extern void ieee_p_1242562249_init()
{
	static char *se[] = {(void *)ieee_p_1242562249_sub_3327074314152278354_1035706684,(void *)ieee_p_1242562249_sub_3327074314152554960_1035706684,(void *)ieee_p_1242562249_sub_3312401477635428644_1035706684,(void *)ieee_p_1242562249_sub_2977877946547446482_1035706684,(void *)ieee_p_1242562249_sub_1265626764782570828_1035706684,(void *)ieee_p_1242562249_sub_15116483354026557501_1035706684,(void *)ieee_p_1242562249_sub_3138923086916629906_1035706684,(void *)ieee_p_1242562249_sub_18075413680674704129_1035706684,(void *)ieee_p_1242562249_sub_18075413680674919751_1035706684,(void *)ieee_p_1242562249_sub_2177871679217030280_1035706684,(void *)ieee_p_1242562249_sub_2177871677178654844_1035706684,(void *)ieee_p_1242562249_sub_2177871677178661378_1035706684,(void *)ieee_p_1242562249_sub_14865958970891251801_1035706684,(void *)ieee_p_1242562249_sub_4501204497521157593_1035706684,(void *)ieee_p_1242562249_sub_18072429880659511672_1035706684,(void *)ieee_p_1242562249_sub_5360319670459337316_1035706684,(void *)ieee_p_1242562249_sub_10067640937958098223_1035706684,(void *)ieee_p_1242562249_sub_6613294344214855355_1035706684,(void *)ieee_p_1242562249_sub_4437083849341520093_1035706684,(void *)ieee_p_1242562249_sub_3065688369758319528_1035706684,(void *)ieee_p_1242562249_sub_1701011461141717515_1035706684,(void *)ieee_p_1242562249_sub_3525738511873186323_1035706684,(void *)ieee_p_1242562249_sub_1006216973935652998_1035706684,(void *)ieee_p_1242562249_sub_1940155297735201586_1035706684,(void *)ieee_p_1242562249_sub_800139796931496790_1035706684,(void *)ieee_p_1242562249_sub_3468090124142232570_1035706684,(void *)ieee_p_1242562249_sub_1701011461141789389_1035706684,(void *)ieee_p_1242562249_sub_3525738511873258197_1035706684,(void *)ieee_p_1242562249_sub_1006216973935724872_1035706684,(void *)ieee_p_1242562249_sub_1940155297735273460_1035706684,(void *)ieee_p_1242562249_sub_800139796931568664_1035706684,(void *)ieee_p_1242562249_sub_3468090124142304444_1035706684,(void *)ieee_p_1242562249_sub_2177518728674633585_1035706684,(void *)ieee_p_1242562249_sub_2598175070666390882_1035706684,(void *)ieee_p_1242562249_sub_1006216973935617061_1035706684,(void *)ieee_p_1242562249_sub_1940155297735165649_1035706684,(void *)ieee_p_1242562249_sub_800139796931460853_1035706684,(void *)ieee_p_1242562249_sub_3468090124142196633_1035706684,(void *)ieee_p_1242562249_sub_2177532604777208567_1035706684,(void *)ieee_p_1242562249_sub_4450116696532108620_1035706684,(void *)ieee_p_1242562249_sub_3299428170688237929_1035706684,(void *)ieee_p_1242562249_sub_336620276024282463_1035706684,(void *)ieee_p_1242562249_sub_1312018951627255984_1035706684,(void *)ieee_p_1242562249_sub_2685831498948951983_1035706684,(void *)ieee_p_1242562249_sub_2177761772484348620_1035706684,(void *)ieee_p_1242562249_sub_4198213126180714255_1035706684,(void *)ieee_p_1242562249_sub_3299657338412254413_1035706684,(void *)ieee_p_1242562249_sub_336849443748298947_1035706684,(void *)ieee_p_1242562249_sub_1312248119351272476_1035706684,(void *)ieee_p_1242562249_sub_2686060666672968475_1035706684,(void *)ieee_p_1242562249_sub_2177761772300207432_1035706684,(void *)ieee_p_1242562249_sub_4450345864055181605_1035706684,(void *)ieee_p_1242562249_sub_3299657338228113225_1035706684,(void *)ieee_p_1242562249_sub_336849443564157759_1035706684,(void *)ieee_p_1242562249_sub_1312248119167131288_1035706684,(void *)ieee_p_1242562249_sub_2686060666488827287_1035706684,(void *)ieee_p_1242562249_sub_1434214030532825644_1035706684,(void *)ieee_p_1242562249_sub_3044623114557266498_1035706684,(void *)ieee_p_1242562249_sub_971559637588037263_1035706684,(void *)ieee_p_1242562249_sub_927094933232428636_1035706684,(void *)ieee_p_1242562249_sub_3307759752501539734_1035706684,(void *)ieee_p_1242562249_sub_3538360624587667818_1035706684,(void *)ieee_p_1242562249_sub_1434214030532753770_1035706684,(void *)ieee_p_1242562249_sub_3044623114557194624_1035706684,(void *)ieee_p_1242562249_sub_971559637587965389_1035706684,(void *)ieee_p_1242562249_sub_927094933232356762_1035706684,(void *)ieee_p_1242562249_sub_3307759752501467860_1035706684,(void *)ieee_p_1242562249_sub_3538360624587595944_1035706684,(void *)ieee_p_1242562249_sub_1434220770695818471_1035706684,(void *)ieee_p_1242562249_sub_3044629854720259325_1035706684,(void *)ieee_p_1242562249_sub_971566377751030090_1035706684,(void *)ieee_p_1242562249_sub_927101673395421463_1035706684,(void *)ieee_p_1242562249_sub_3307766492664532561_1035706684,(void *)ieee_p_1242562249_sub_3538367364750660645_1035706684,(void *)ieee_p_1242562249_sub_1434220770698190313_1035706684,(void *)ieee_p_1242562249_sub_3044629854722631167_1035706684,(void *)ieee_p_1242562249_sub_971566377753401932_1035706684,(void *)ieee_p_1242562249_sub_927101673397793305_1035706684,(void *)ieee_p_1242562249_sub_3307766492666904403_1035706684,(void *)ieee_p_1242562249_sub_3538367364753032487_1035706684,(void *)ieee_p_1242562249_sub_1434214030532789707_1035706684,(void *)ieee_p_1242562249_sub_3044623114557230561_1035706684,(void *)ieee_p_1242562249_sub_971559637588001326_1035706684,(void *)ieee_p_1242562249_sub_927094933232392699_1035706684,(void *)ieee_p_1242562249_sub_3307759752501503797_1035706684,(void *)ieee_p_1242562249_sub_3538360624587631881_1035706684,(void *)ieee_p_1242562249_sub_1434220770680401498_1035706684,(void *)ieee_p_1242562249_sub_3044629854704842352_1035706684,(void *)ieee_p_1242562249_sub_971566377735613117_1035706684,(void *)ieee_p_1242562249_sub_927101673380004490_1035706684,(void *)ieee_p_1242562249_sub_3307766492649115588_1035706684,(void *)ieee_p_1242562249_sub_3538367364735243672_1035706684,(void *)ieee_p_1242562249_sub_1987757588013599599_1035706684,(void *)ieee_p_1242562249_sub_8645934262925994370_1035706684,(void *)ieee_p_1242562249_sub_17249857350030274602_1035706684,(void *)ieee_p_1242562249_sub_5461289951233117757_1035706684,(void *)ieee_p_1242562249_sub_7348455036272725216_1035706684,(void *)ieee_p_1242562249_sub_1081509318381623571_1035706684,(void *)ieee_p_1242562249_sub_4163810724579848603_1035706684,(void *)ieee_p_1242562249_sub_16343609080398298574_1035706684,(void *)ieee_p_1242562249_sub_875668032854310322_1035706684,(void *)ieee_p_1242562249_sub_617102632970689396_1035706684,(void *)ieee_p_1242562249_sub_875668032861425848_1035706684,(void *)ieee_p_1242562249_sub_617102632977804922_1035706684,(void *)ieee_p_1242562249_sub_875668032818732692_1035706684,(void *)ieee_p_1242562249_sub_617102632935111766_1035706684,(void *)ieee_p_1242562249_sub_875668032818948314_1035706684,(void *)ieee_p_1242562249_sub_617102632935327388_1035706684,(void *)ieee_p_1242562249_sub_17802405650254020620_1035706684,(void *)ieee_p_1242562249_sub_1871261289446890672_1035706684,(void *)ieee_p_1242562249_sub_10420449594411817395_1035706684,(void *)ieee_p_1242562249_sub_17126692536656888728_1035706684,(void *)ieee_p_1242562249_sub_2423793367844140314_1035706684,(void *)ieee_p_1242562249_sub_2749763749646623249_1035706684,(void *)ieee_p_1242562249_sub_4758460051581457611_1035706684,(void *)ieee_p_1242562249_sub_1331342005737211399_1035706684,(void *)ieee_p_1242562249_sub_1331119578910941685_1035706684,(void *)ieee_p_1242562249_sub_1338682107848933845_1035706684,(void *)ieee_p_1242562249_sub_1331342006247660547_1035706684,(void *)ieee_p_1242562249_sub_1331342006639014477_1035706684,(void *)ieee_p_1242562249_sub_1338682121274062683_1035706684,(void *)ieee_p_1242562249_sub_420421356293926614_1035706684,(void *)ieee_p_1242562249_sub_443655408936719335_1035706684,(void *)ieee_p_1242562249_sub_443432982110449621_1035706684,(void *)ieee_p_1242562249_sub_450995511048441781_1035706684,(void *)ieee_p_1242562249_sub_443655409447168483_1035706684,(void *)ieee_p_1242562249_sub_443655409838522413_1035706684,(void *)ieee_p_1242562249_sub_450995524473570619_1035706684,(void *)ieee_p_1242562249_sub_14246957632564071036_1035706684,(void *)ieee_p_1242562249_sub_17814753899323031155_1035706684,(void *)ieee_p_1242562249_sub_14692318544450357410_1035706684,(void *)ieee_p_1242562249_sub_14874919107683458094_1035706684,(void *)ieee_p_1242562249_sub_13907505804321001047_1035706684,(void *)ieee_p_1242562249_sub_4856407567805619711_1035706684,(void *)ieee_p_1242562249_sub_2985487471987653227_1035706684};
	xsi_register_didat("ieee_p_1242562249", "isim/precompiled.exe.sim/ieee/p_1242562249.didat");
	xsi_register_subprogram_executes(se);
}

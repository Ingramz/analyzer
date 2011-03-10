// PARAM: --analysis containment --class UES --allfuns CXX.json SAFE.json
/* I2 Goblint Version with debug info*/
#line 0 "LLVM INTERNAL"
/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int llvmInt128;
typedef unsigned llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
struct l_class_OC_CBaseFSM;
struct l_class_OC_Dummy;
struct l_class_OC_DummyStream;
struct l_class_OC_FSM;
struct l_class_OC_Log;
struct l_class_OC_SubUES_X;
struct l_class_OC_Test2;
struct l_class_OC_UES;
struct l_class_OC_UecFSMImpl;
struct l_class_OC___gnu_cxx_KD__KD___normal_iterator;
struct l_class_OC_std_KD__KD_basic_string;
struct l_class_OC_std_KD__KD_vector;
struct l_struct_OC_UEC_Event;
struct l_struct_OC_std_KD__KD__Vector_base;
struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl;
struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Alloc_hider;
struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Rep_base;
struct l_unnamed0;
struct l_unnamed1;
struct l_unnamed10;
struct l_unnamed11;
struct l_unnamed12;
struct l_unnamed13;
struct l_unnamed14;
struct l_unnamed15;
struct l_unnamed16;
struct l_unnamed2;
struct l_unnamed3;
struct l_unnamed4;
struct l_unnamed5;
struct l_unnamed6;
struct l_unnamed7;
struct l_unnamed8;
struct l_unnamed9;

/* Typedefs */
typedef struct l_class_OC_CBaseFSM l_class_OC_CBaseFSM;
typedef struct l_class_OC_Dummy l_class_OC_Dummy;
typedef struct l_class_OC_DummyStream l_class_OC_DummyStream;
typedef struct l_class_OC_FSM l_class_OC_FSM;
typedef struct l_class_OC_Log l_class_OC_Log;
typedef struct l_class_OC_SubUES_X l_class_OC_SubUES_X;
typedef struct l_class_OC_Test2 l_class_OC_Test2;
typedef struct l_class_OC_UES l_class_OC_UES;
typedef struct l_class_OC_UecFSMImpl l_class_OC_UecFSMImpl;
typedef struct l_class_OC___gnu_cxx_KD__KD___normal_iterator l_class_OC___gnu_cxx_KD__KD___normal_iterator;
typedef struct l_class_OC_std_KD__KD_basic_string l_class_OC_std_KD__KD_basic_string;
typedef struct l_class_OC_std_KD__KD_vector l_class_OC_std_KD__KD_vector;
typedef struct l_struct_OC_UEC_Event l_struct_OC_UEC_Event;
typedef struct l_struct_OC_std_KD__KD__Vector_base l_struct_OC_std_KD__KD__Vector_base;
typedef struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl;
typedef struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Alloc_hider l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Alloc_hider;
typedef struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Rep_base l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Rep_base;
typedef struct l_unnamed0 l_unnamed0;
typedef struct l_unnamed1 l_unnamed1;
typedef struct l_unnamed10 l_unnamed10;
typedef struct l_unnamed11 l_unnamed11;
typedef struct l_unnamed12 l_unnamed12;
typedef struct l_unnamed13 l_unnamed13;
typedef struct l_unnamed14 l_unnamed14;
typedef struct l_unnamed15 l_unnamed15;
typedef struct l_unnamed16 l_unnamed16;
typedef struct l_unnamed2 l_unnamed2;
typedef struct l_unnamed3 l_unnamed3;
typedef struct l_unnamed4 l_unnamed4;
typedef struct l_unnamed5 l_unnamed5;
typedef struct l_unnamed6 l_unnamed6;
typedef struct l_unnamed7 l_unnamed7;
typedef struct l_unnamed8 l_unnamed8;
typedef struct l_unnamed9 l_unnamed9;

/* Structure contents */
struct l_class_OC_CBaseFSM {  unsigned int field0;};

struct l_unnamed0 { unsigned char array[8]; };

struct l_class_OC_Dummy {  struct l_unnamed0 field0;};

struct l_class_OC_DummyStream {  unsigned char field0;};

struct l_unnamed3 { unsigned char array[4]; };

struct l_unnamed13 { float array[4]; };

struct l_class_OC_FSM {  unsigned int  (**field0) ( int, ...);  struct l_unnamed3 field1;  struct l_unnamed13 field2;};

struct l_unnamed16 {  unsigned long long field0;  unsigned long long field1;};

struct l_unnamed12 { unsigned int array[10]; };

struct l_class_OC_Log {  struct l_unnamed0 field0;  unsigned int *field1;  unsigned int *field2;  unsigned int *field3;  unsigned int *field4;  unsigned int *field5;  unsigned int *field6;  struct l_unnamed16 field7;  struct l_unnamed16 field8;  unsigned int field9;  struct l_unnamed12 field10;  unsigned int field11;  unsigned int *field12;  struct l_unnamed12 field13;  unsigned int field14;  unsigned int field15;  unsigned int field16;  unsigned int field17;  unsigned int field18;  unsigned int field19;  unsigned int field20;  unsigned int field21;  unsigned int field22;  unsigned int field23;  unsigned int *field24;};

struct l_unnamed5 { unsigned char array[28]; };

struct l_unnamed4 { unsigned char array[232]; };

struct l_class_OC_SubUES_X {  struct l_unnamed5 field0;  struct l_unnamed3 field1;  struct l_unnamed4 field2;  unsigned int field3;  struct l_unnamed3 field4;};

struct l_class_OC_Test2 {  unsigned int *field0;};

struct l_class_OC_UES {  struct l_unnamed5 field0;  struct l_unnamed3 field1;  struct l_unnamed4 field2;  unsigned int field3;  unsigned int field4;  struct l_class_OC_SubUES_X field5;  unsigned int *field6;  unsigned int *field7;  unsigned int *field8;  unsigned int *field9;  unsigned int *field10;  unsigned int *field11;  unsigned int **field12;  unsigned int *field13;};

struct l_class_OC_UecFSMImpl {  unsigned int field0;  struct l_class_OC_Test2 *field1;};

struct l_class_OC___gnu_cxx_KD__KD___normal_iterator {  unsigned int **field0;};

struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Alloc_hider {  unsigned char *field0;};

struct l_class_OC_std_KD__KD_basic_string {  struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Alloc_hider field0;};

struct l_unnamed14 { unsigned char array[24]; };

struct l_class_OC_std_KD__KD_vector {  struct l_unnamed14 field0;};

struct l_struct_OC_UEC_Event {  unsigned int field0;  unsigned int field1;};

struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl {  unsigned int **field0;  unsigned int **field1;  unsigned int **field2;};

struct l_struct_OC_std_KD__KD__Vector_base {  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl field0;};

struct l_struct_OC_std_KD__KD_basic_string_MD_char_MC__AC_std_KD__KD_char_traits_MD_char_OD__MC__AC_std_KD__KD_allocator_MD_char_OD__AC__OD__KD__KD__Rep_base {  unsigned long long field0;  unsigned long long field1;  unsigned int field2;};

struct l_unnamed1 { unsigned char array[7]; };

struct l_unnamed10 { unsigned char *array[7]; };

struct l_unnamed11 { unsigned char array[10]; };

struct l_unnamed15 { unsigned char array[5]; };

struct l_unnamed2 { unsigned char array[22]; };

struct l_unnamed6 { unsigned char array[25]; };

struct l_unnamed7 {  unsigned char *field0;  unsigned char *field1;};

struct l_unnamed8 {  unsigned char *field0;  unsigned char *field1;  unsigned int field2;  unsigned int field3;  unsigned char *field4;  unsigned long long field5;  unsigned char *field6;  unsigned long long field7;};

struct l_unnamed9 {  unsigned char *field0;  unsigned char *field1;  unsigned int field2;  unsigned int field3;  unsigned char *field4;  unsigned long long field5;};


/* External Global Variable Declarations */
extern unsigned int API_0;
extern unsigned int API_1;
extern struct l_class_OC_DummyStream mout;
extern unsigned char *_ZTVN10__cxxabiv121__vmi_class_type_infoE;
extern unsigned char *_ZTVN10__cxxabiv117__class_type_infoE;
extern unsigned int _ZN8CBaseFSM5fubarE;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void _Z5__GWNv(void);
void _Z5__GERv(void);
void _Z5__GNWv(void);
unsigned int _Z9API_CALL0i(unsigned int llvm_cbe_i);
unsigned int *_Z19API_GET_GLOBAL_MEM2v(void);
void _Z5dummyv(void);
void _ZN3UESC1Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3UESD1Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int __gxx_personality_v0(int vararg_dummy_arg,...);
void _ZSt9terminatev(void);
void _Unwind_Resume_or_Rethrow(unsigned char *);
void _ZN3UES16InsertGlobalDataEPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_pglob) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest1EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest2EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest3EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest4EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest5EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3UES8RetTest7EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
void _ZN3UES5EntryEv(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3Log4TestEv(struct l_class_OC_Log *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3UES4KillEv(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3UES9TestCycleEv(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3Log10test_cycleEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_glob) __ATTRIBUTE_WEAK__;
void _ZN3Log7call_fpEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_glob) __ATTRIBUTE_WEAK__;
void _ZN14UecManagerBaseC1Ev(struct l_class_OC_Test2 *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN10UecFSMImplC1EP14UecManagerBase(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr) __ATTRIBUTE_WEAK__;
unsigned int *_ZN10UecFSMImpl22Public_UecFSMImpl_FuncEP6CEvent(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_CBaseFSM *llvm_cbe_pev) __ATTRIBUTE_WEAK__;
unsigned int *_ZN14UecManagerBase13GetSharedDataEv(struct l_class_OC_Test2 *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _Z8API_FUNCPi(unsigned int *);
void _ZN10UecFSMImplC2EP14UecManagerBase(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr) __ATTRIBUTE_WEAK__;
void _ZN14UecManagerBaseC2Ev(struct l_class_OC_Test2 *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned char *_Znam(unsigned long long );
unsigned int _Z9API_CALL1iPv(unsigned int , unsigned char *);
void _ZN3UES14PrivateMember5Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int *_Z18API_GET_GLOBAL_MEMv(void);
void _ZNSt6vectorIPiSaIS0_EEC1Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIPiSaIS0_EED1Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIPiSaIS0_EE9push_backERKS0_(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned int **llvm_cbe___x) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt6vectorIPiSaIS0_EEixEm(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe___n) __ATTRIBUTE_WEAK__;
unsigned long long _ZNKSs6lengthEv(struct l_class_OC_std_KD__KD_basic_string *llvm_cbe_this);
struct l_class_OC_std_KD__KD_vector *_ZNKSs6_M_repEv(struct l_class_OC_std_KD__KD_basic_string *llvm_cbe_this);
unsigned char *_ZNKSs7_M_dataEv(struct l_class_OC_std_KD__KD_basic_string *llvm_cbe_this);
void _ZN9__gnu_cxx13new_allocatorIPiE9constructEPS1_RKS1_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned int **llvm_cbe___val) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIPiSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long , unsigned int **llvm_cbe___x) __ATTRIBUTE_WEAK__;
unsigned long long _ZNSt6vectorIPiSaIS0_EE3endEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC1ERKS2_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this, unsigned int ***llvm_cbe___i) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC2ERKS2_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this, unsigned int ***llvm_cbe___i) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int ***_ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int **_ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEdeEv(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned long long _ZNKSt6vectorIPiSaIS0_EE12_M_check_lenEmPKc(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe___n, unsigned char *llvm_cbe___s) __ATTRIBUTE_WEAK__;
unsigned long long _ZN9__gnu_cxxmiIPPiSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___lhs, struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___rhs) __ATTRIBUTE_WEAK__;
unsigned long long _ZNSt6vectorIPiSaIS0_EE5beginEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt12_Vector_baseIPiSaIS0_EE11_M_allocateEm(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this, unsigned long long llvm_cbe___n) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt22__uninitialized_move_aIPPiS1_SaIS0_EET0_T_S4_S3_RT1_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result, struct l_class_OC_DummyStream *llvm_cbe___alloc) __ATTRIBUTE_WEAK__;
struct l_class_OC_DummyStream *_ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned char *__cxa_begin_catch(unsigned char *);
void _ZN9__gnu_cxx13new_allocatorIPiE7destroyEPS1_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p) __ATTRIBUTE_WEAK__;
void _ZSt8_DestroyIPPiS0_EvT_S2_RSaIT0_E(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, struct l_class_OC_DummyStream *) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EE13_M_deallocateEPS0_m(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned long long llvm_cbe___n) __ATTRIBUTE_WEAK__;
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void _ZN9__gnu_cxx13new_allocatorIPiE10deallocateEPS1_m(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned long long ) __ATTRIBUTE_WEAK__;
void _ZdlPv(unsigned char *);
void _ZSt8_DestroyIPPiEvT_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last) __ATTRIBUTE_WEAK__;
void _ZNSt12_Destroy_auxILb1EE9__destroyIPPiEEvT_S4_(unsigned int **, unsigned int **) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt22__uninitialized_copy_aIPPiS1_S0_ET0_T_S3_S2_RSaIT1_E(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result, struct l_class_OC_DummyStream *) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt18uninitialized_copyIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt20__uninitialized_copyILb1EE18uninitialized_copyIPPiS3_EET0_T_S5_S4_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt4copyIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt14__copy_move_a2ILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt12__miter_baseIPPiLb0EE3__bES1_(unsigned int **llvm_cbe___it) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt12__niter_baseIPPiLb0EE3__bES1_(unsigned int **llvm_cbe___it) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIPiEEPT_PKS4_S7_S5_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZN9__gnu_cxx13new_allocatorIPiE8allocateEmPKv(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned long long llvm_cbe___n, unsigned char *) __ATTRIBUTE_WEAK__;
unsigned long long _ZNK9__gnu_cxx13new_allocatorIPiE8max_sizeEv(struct l_class_OC_DummyStream *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZSt17__throw_bad_allocv(void);
unsigned char *_Znwm(unsigned long long );
void __cxa_call_unexpected(unsigned char *);
unsigned long long _ZNKSt6vectorIPiSaIS0_EE8max_sizeEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned long long _ZNKSt6vectorIPiSaIS0_EE4sizeEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZSt20__throw_length_errorPKc(unsigned char *);
unsigned long long *_ZSt3maxImERKT_S2_S2_(unsigned long long *llvm_cbe___a, unsigned long long *llvm_cbe___b) __ATTRIBUTE_WEAK__;
struct l_class_OC_DummyStream *_ZNKSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned int **_ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIPiEEPT_PKS4_S7_S5_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) __ATTRIBUTE_WEAK__;
unsigned char *_ZnwmPv(unsigned long long , unsigned char *llvm_cbe___p) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIPiSaIS0_EED2Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EED2Ev(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD1Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD2Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSaIPiED2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIPiED2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt6vectorIPiSaIS0_EEC2Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EEC2Ev(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC1Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC2Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZNSaIPiEC2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN9__gnu_cxx13new_allocatorIPiEC2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) __ATTRIBUTE_WEAK__;
struct l_class_OC_DummyStream *_ZN11DummyStreamlsIPKcEERS_T_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned char *llvm_cbe_arg) __ATTRIBUTE_WEAK__;
void _ZN3UESD2Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int printf(unsigned char *,...);
void _ZN8SubUES_XD1Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3FSMD2Ev(struct l_class_OC_FSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3FSM7FakeFunEP9UEC_Event(struct l_class_OC_FSM *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN3UES12ReceiveEventEP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
void _ZN3FSM4VirtEv(struct l_class_OC_FSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3UESD0Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3UES3PrvEPPiS0_(struct l_class_OC_UES *llvm_cbe_this, unsigned int **llvm_cbe_i, unsigned int *llvm_cbe_q) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3UES7GetGlobEv(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _Z8COPY_BADPPiS_(unsigned int **, unsigned int *);
unsigned char *_ZN3UES14PrivateMember0EPiS0_iPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_i, unsigned int *llvm_cbe_i2, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) __ATTRIBUTE_WEAK__;
unsigned char *_ZN3UES14PrivateMember2EPiiPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_stack_i, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) __ATTRIBUTE_WEAK__;
unsigned char *_ZN3UES14PrivateMember3EPiiPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_glob_i, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) __ATTRIBUTE_WEAK__;
unsigned char *_ZN3UES14PrivateMember4EPPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int **llvm_cbe_ipppppq) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3UES8RetTest6EPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_pi) __ATTRIBUTE_WEAK__;
void _ZN3Log5doLogEPc(unsigned char *llvm_cbe_txt) __ATTRIBUTE_WEAK__;
unsigned int *_Z11TS_API_SOMEPi(unsigned int *);
void _ZN8SubUES_X3ADDEv(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN5DummyC1Ev(struct l_class_OC_Dummy *llvm_cbe_this) __ATTRIBUTE_WEAK__;
struct l_unnamed16 _ZN3Log12get_priv_funEv(struct l_class_OC_Log *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3Log11my_priv_funEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_pi) __ATTRIBUTE_WEAK__;
void _ZN5DummyC2Ev(struct l_class_OC_Dummy *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN5Test2C2Ev(struct l_class_OC_Test2 *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int _Z10XXXXXXXXXXiPv(unsigned int , unsigned char *);
unsigned int *_Z6memcpyPiS_i(unsigned int *, unsigned int *, unsigned int );
unsigned int *_ZN3UES9undef_funEv(struct l_class_OC_UES *);
void __cxa_pure_virtual(void);
void _ZN3FSMD1Ev(struct l_class_OC_FSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3FSMD0Ev(struct l_class_OC_FSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN8SubUES_XD2Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
struct l_class_OC_CBaseFSM *_ZN8SubUES_X12ReceiveEventEP9UEC_Event(struct l_class_OC_SubUES_X *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) __ATTRIBUTE_WEAK__;
void _ZN8SubUES_XD0Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3UESC2Ev(struct l_class_OC_UES *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3FSMC2Ev(struct l_class_OC_FSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3LogC2Ev(struct l_class_OC_Log *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN8SubUES_XC1Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN8SubUES_XC2Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void _ZN3Log10TestFieldsEv(struct l_class_OC_Log *llvm_cbe_this) __ATTRIBUTE_WEAK__;
unsigned int *_ZN3Log15my_undef_fp_funEPi(struct l_class_OC_Log *, unsigned int *);
void _ZN8CBaseFSMC2Ev(struct l_class_OC_CBaseFSM *llvm_cbe_this) __ATTRIBUTE_WEAK__;
void abort(void);
unsigned char *memcpy(unsigned char *, unsigned char *, unsigned long long );
unsigned char *memmove(unsigned char *, unsigned char *, unsigned long long );


/* Global Variable Declarations */
extern unsigned int API_0;
extern unsigned int API_1;
static struct l_unnamed12 _ZZ19API_GET_GLOBAL_MEM2vE2ma;
static struct l_unnamed2 _OC_str;
static struct l_unnamed11 _OC_str1;
extern struct l_unnamed10 _ZTV3UES __ATTRIBUTE_WEAK__;
static struct l_unnamed15 _OC_str2;
extern struct l_unnamed15 _ZTS3UES __ATTRIBUTE_WEAK__;
extern struct l_unnamed15 _ZTS3FSM __ATTRIBUTE_WEAK__;
extern struct l_unnamed11 _ZTS8CBaseFSM __ATTRIBUTE_WEAK__;
extern struct l_unnamed7 _ZTI8CBaseFSM __ATTRIBUTE_WEAK__;
extern struct l_unnamed9 _ZTI3FSM __ATTRIBUTE_WEAK__;
extern struct l_unnamed15 _ZTS3Log __ATTRIBUTE_WEAK__;
extern struct l_unnamed1 _ZTS5Test2 __ATTRIBUTE_WEAK__;
extern struct l_unnamed7 _ZTI5Test2 __ATTRIBUTE_WEAK__;
extern struct l_unnamed9 _ZTI3Log __ATTRIBUTE_WEAK__;
extern struct l_unnamed8 _ZTI3UES __ATTRIBUTE_WEAK__;
static struct l_unnamed6 _OC_str3;
extern unsigned int _ZZN3Log11my_priv_funEPiE2xx __attribute__((common));
static struct l_unnamed3 _OC_str4;
extern unsigned int _ZZN3Log5doLogEPcE2kk __attribute__((common));
extern struct l_unnamed10 _ZTV3FSM __ATTRIBUTE_WEAK__;
static struct l_unnamed15 _OC_str5;
extern struct l_unnamed10 _ZTV8SubUES_X __ATTRIBUTE_WEAK__;
extern struct l_unnamed11 _ZTS8SubUES_X __ATTRIBUTE_WEAK__;
extern struct l_unnamed8 _ZTI8SubUES_X __ATTRIBUTE_WEAK__;
static struct l_unnamed15 _OC_str6;


/* Global Variable Definitions and Initialization */
unsigned int API_0;
unsigned int API_1;
static struct l_unnamed12 _ZZ19API_GET_GLOBAL_MEM2vE2ma;
static struct l_unnamed2 _OC_str = { "vector::_M_insert_aux" };
static struct l_unnamed11 _OC_str1 = { "my_string" };
struct l_unnamed10 _ZTV3UES __ATTRIBUTE_WEAK__ = { { ((unsigned char *)/*NULL*/0), ((unsigned char *)(&_ZTI3UES)), ((unsigned char *)_ZN3FSM7FakeFunEP9UEC_Event), ((unsigned char *)_ZN3UES12ReceiveEventEP9UEC_Event), ((unsigned char *)_ZN3FSM4VirtEv), ((unsigned char *)_ZN3UESD1Ev), ((unsigned char *)_ZN3UESD0Ev) } };
static struct l_unnamed15 _OC_str2 = { "gaga" };
struct l_unnamed15 _ZTS3UES __ATTRIBUTE_WEAK__ = { "3UES" };
struct l_unnamed15 _ZTS3FSM __ATTRIBUTE_WEAK__ = { "3FSM" };
struct l_unnamed11 _ZTS8CBaseFSM __ATTRIBUTE_WEAK__ = { "8CBaseFSM" };
struct l_unnamed7 _ZTI8CBaseFSM __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv117__class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS8CBaseFSM.array[((signed int )0u)])) };
struct l_unnamed9 _ZTI3FSM __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv121__vmi_class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS3FSM.array[((signed int )0u)])), 0u, 1u, ((unsigned char *)(&_ZTI8CBaseFSM)), 2050ull };
struct l_unnamed15 _ZTS3Log __ATTRIBUTE_WEAK__ = { "3Log" };
struct l_unnamed1 _ZTS5Test2 __ATTRIBUTE_WEAK__ = { "5Test2" };
struct l_unnamed7 _ZTI5Test2 __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv117__class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS5Test2.array[((signed int )0u)])) };
struct l_unnamed9 _ZTI3Log __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv121__vmi_class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS3Log.array[((signed int )0u)])), 0u, 1u, ((unsigned char *)(&_ZTI5Test2)), 0ull };
struct l_unnamed8 _ZTI3UES __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv121__vmi_class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS3UES.array[((signed int )0u)])), 0u, 2u, ((unsigned char *)(&_ZTI3FSM)), 2ull, ((unsigned char *)(&_ZTI3Log)), 8194ull };
static struct l_unnamed6 _OC_str3 = { "receivedbg_reportd event" };
unsigned int _ZZN3Log11my_priv_funEPiE2xx __attribute__((common));
static struct l_unnamed3 _OC_str4 = { "%s\n" };
unsigned int _ZZN3Log5doLogEPcE2kk __attribute__((common));
struct l_unnamed10 _ZTV3FSM __ATTRIBUTE_WEAK__ = { { ((unsigned char *)/*NULL*/0), ((unsigned char *)(&_ZTI3FSM)), ((unsigned char *)_ZN3FSM7FakeFunEP9UEC_Event), ((unsigned char *)__cxa_pure_virtual), ((unsigned char *)_ZN3FSM4VirtEv), ((unsigned char *)_ZN3FSMD1Ev), ((unsigned char *)_ZN3FSMD0Ev) } };
static struct l_unnamed15 _OC_str5 = { "kill" };
struct l_unnamed10 _ZTV8SubUES_X __ATTRIBUTE_WEAK__ = { { ((unsigned char *)/*NULL*/0), ((unsigned char *)(&_ZTI8SubUES_X)), ((unsigned char *)_ZN3FSM7FakeFunEP9UEC_Event), ((unsigned char *)_ZN8SubUES_X12ReceiveEventEP9UEC_Event), ((unsigned char *)_ZN3FSM4VirtEv), ((unsigned char *)_ZN8SubUES_XD1Ev), ((unsigned char *)_ZN8SubUES_XD0Ev) } };
struct l_unnamed11 _ZTS8SubUES_X __ATTRIBUTE_WEAK__ = { "8SubUES_X" };
struct l_unnamed8 _ZTI8SubUES_X __ATTRIBUTE_WEAK__ = { ((unsigned char *)((&(&_ZTVN10__cxxabiv121__vmi_class_type_infoE)[((signed long long )2ull)]))), ((&_ZTS8SubUES_X.array[((signed int )0u)])), 0u, 2u, ((unsigned char *)(&_ZTI3FSM)), 2ull, ((unsigned char *)(&_ZTI3Log)), 8194ull };
static struct l_unnamed15 _OC_str6 = { "test" };


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

#line 0 "LLVM INTERNAL"
void _Z5__GWNv(void) {
#line 4 "regression.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _Z5__GERv(void) {
#line 5 "regression.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _Z5__GNWv(void) {
#line 6 "regression.h"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int _Z9API_CALL0i(unsigned int llvm_cbe_i) {
  unsigned int llvm_cbe_retval;    /* Address-exposed local */
  unsigned int llvm_cbe_i_2e_addr;    /* Address-exposed local */
  unsigned int llvm_cbe_tmp;
  unsigned int llvm_cbe_tmp__1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_i_2e_addr) = llvm_cbe_i;
#line 96 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_i_2e_addr);
#line 96 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp;
#line 96 "small.cpp"
  llvm_cbe_tmp__1 = *(&llvm_cbe_retval);
#line 96 "small.cpp"
  return llvm_cbe_tmp__1;
}


#line 0 "LLVM INTERNAL"
unsigned int *_Z19API_GET_GLOBAL_MEM2v(void) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  unsigned int *llvm_cbe_tmp__2;

#line 110 "small.cpp"
  *(&llvm_cbe_retval) = ((&_ZZ19API_GET_GLOBAL_MEM2vE2ma.array[((signed int )0u)]));
#line 111 "small.cpp"
  llvm_cbe_tmp__2 = *(&llvm_cbe_retval);
#line 111 "small.cpp"
  return llvm_cbe_tmp__2;
}


void _ZN3UESC1Ev(struct l_class_OC_UES *llvm_cbe_this);

void _ZN3UES16InsertGlobalDataEPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_pglob);

void _ZN14UecManagerBaseC1Ev(struct l_class_OC_Test2 *llvm_cbe_this);

void _ZN10UecFSMImplC1EP14UecManagerBase(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr);

#line 0 "LLVM INTERNAL"
void _Z5dummyv(void) {
  struct l_class_OC_UES llvm_cbe_ues;    /* Address-exposed local */
  unsigned int llvm_cbe_i;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev;    /* Address-exposed local */
  struct l_class_OC_Test2 llvm_cbe_mb;    /* Address-exposed local */
  struct l_class_OC_UecFSMImpl llvm_cbe_fsm;    /* Address-exposed local */
  struct l_class_OC_CBaseFSM *llvm_cbe_pev;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp;
  struct l_class_OC_CBaseFSM *llvm_cbe_call;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp4;
  struct l_class_OC_CBaseFSM *llvm_cbe_call6;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp7;
  struct l_class_OC_CBaseFSM *llvm_cbe_call9;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp10;
  struct l_class_OC_CBaseFSM *llvm_cbe_call12;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp13;
  struct l_class_OC_CBaseFSM *llvm_cbe_call15;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp16;
  unsigned int *llvm_cbe_call18;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp32;
  unsigned int *llvm_cbe_call34;

#line 661 "small.cpp"
  _ZN3UESC1Ev((&llvm_cbe_ues));
#line 663 "small.cpp"
  _ZN3UES16InsertGlobalDataEPi((&llvm_cbe_ues), ((unsigned int *)/*NULL*/0));
#line 667 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_ev);
#line 667 "small.cpp"
  llvm_cbe_call = _ZN3UES8RetTest1EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp);
#line 668 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_ev);
#line 668 "small.cpp"
  llvm_cbe_call6 = _ZN3UES8RetTest2EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp4);
#line 669 "small.cpp"
  llvm_cbe_tmp7 = *(&llvm_cbe_ev);
#line 669 "small.cpp"
  llvm_cbe_call9 = _ZN3UES8RetTest3EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp7);
#line 670 "small.cpp"
  llvm_cbe_tmp10 = *(&llvm_cbe_ev);
#line 670 "small.cpp"
  llvm_cbe_call12 = _ZN3UES8RetTest4EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp10);
#line 671 "small.cpp"
  llvm_cbe_tmp13 = *(&llvm_cbe_ev);
#line 671 "small.cpp"
  llvm_cbe_call15 = _ZN3UES8RetTest5EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp13);
#line 673 "small.cpp"
  llvm_cbe_tmp16 = *(&llvm_cbe_ev);
#line 673 "small.cpp"
  llvm_cbe_call18 = _ZN3UES8RetTest7EP9UEC_Event((&llvm_cbe_ues), llvm_cbe_tmp16);
#line 674 "small.cpp"
  _ZN3UES5EntryEv((&llvm_cbe_ues));
#line 675 "small.cpp"
  _ZN3Log4TestEv((((struct l_class_OC_Log *)((&(((unsigned char *)(&llvm_cbe_ues)))[((signed long long )32ull)])))));
#line 677 "small.cpp"
  _ZN3UES4KillEv((&llvm_cbe_ues));
#line 678 "small.cpp"
  _ZN3UES9TestCycleEv((&llvm_cbe_ues));
#line 680 "small.cpp"
  _ZN3Log10test_cycleEPi((((struct l_class_OC_Log *)((&(((unsigned char *)(&llvm_cbe_ues)))[((signed long long )32ull)])))), ((unsigned int *)/*NULL*/0));
#line 682 "small.cpp"
  _ZN3Log7call_fpEPi((((struct l_class_OC_Log *)((&(((unsigned char *)(&llvm_cbe_ues)))[((signed long long )32ull)])))), ((unsigned int *)/*NULL*/0));
#line 684 "small.cpp"
  _ZN14UecManagerBaseC1Ev((&llvm_cbe_mb));
#line 685 "small.cpp"
  _ZN10UecFSMImplC1EP14UecManagerBase((&llvm_cbe_fsm), (&llvm_cbe_mb));
#line 688 "small.cpp"
  llvm_cbe_tmp32 = *(&llvm_cbe_pev);
#line 688 "small.cpp"
  llvm_cbe_call34 = _ZN10UecFSMImpl22Public_UecFSMImpl_FuncEP6CEvent((&llvm_cbe_fsm), llvm_cbe_tmp32);
#line 691 "small.cpp"
  _ZN3UESD1Ev((&llvm_cbe_ues));
#line 691 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UESC1Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3UESC2Ev(llvm_cbe_this1);
#line 378 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UESD1Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3UESD2Ev(llvm_cbe_this1);
#line 388 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UES16InsertGlobalDataEPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_pglob) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pglob_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  struct l_class_OC_DummyStream *llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_pglob_2e_addr) = llvm_cbe_pglob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 557 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pglob_2e_addr);
#line 557 "small.cpp"
  *((&llvm_cbe_this1->field6)) = llvm_cbe_tmp;
#line 557 "small.cpp"
   // WARN;
#line 558 "small.cpp"
  llvm_cbe_call = _ZN11DummyStreamlsIPKcEERS_T_((&mout), ((&_OC_str1.array[((signed int )0u)])));
#line 558 "small.cpp"
   // NOWARN;
#line 559 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest1EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__3;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 536 "small.cpp"
   // WARN;
#line 536 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_ev_2e_addr);
#line 536 "small.cpp"
  *(&llvm_cbe_retval) = (((struct l_class_OC_CBaseFSM *)llvm_cbe_tmp));
#line 536 "small.cpp"
  llvm_cbe_tmp__3 = *(&llvm_cbe_retval);
#line 536 "small.cpp"
  return llvm_cbe_tmp__3;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest2EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_CBaseFSM *llvm_cbe_pb;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp;
  unsigned int llvm_cbe_tmp3;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp4;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__4;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 540 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_ev_2e_addr);
#line 540 "small.cpp"
  llvm_cbe_tmp3 = *((&llvm_cbe_tmp->field1));
#line 540 "small.cpp"
  *(&llvm_cbe_pb) = (((struct l_class_OC_CBaseFSM *)(unsigned long)(((unsigned long long )(unsigned int )llvm_cbe_tmp3))));
#line 541 "small.cpp"
   // NOWARN;
#line 541 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_pb);
#line 541 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp4;
#line 541 "small.cpp"
  llvm_cbe_tmp__4 = *(&llvm_cbe_retval);
#line 541 "small.cpp"
  return llvm_cbe_tmp__4;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest3EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int llvm_cbe_tmp2;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__5;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 545 "small.cpp"
   // NOWARN;
#line 545 "small.cpp"
  llvm_cbe_tmp2 = *((&llvm_cbe_this1->field3));
#line 545 "small.cpp"
  *(&llvm_cbe_retval) = (((struct l_class_OC_CBaseFSM *)(unsigned long)(((signed long long )(signed int )llvm_cbe_tmp2))));
#line 545 "small.cpp"
  llvm_cbe_tmp__5 = *(&llvm_cbe_retval);
#line 545 "small.cpp"
  return llvm_cbe_tmp__5;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest4EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__6;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 549 "small.cpp"
   // WARN;
#line 549 "small.cpp"
  *(&llvm_cbe_retval) = (((struct l_class_OC_CBaseFSM *)llvm_cbe_this1));
#line 549 "small.cpp"
  llvm_cbe_tmp__6 = *(&llvm_cbe_retval);
#line 549 "small.cpp"
  return llvm_cbe_tmp__6;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES8RetTest5EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__7;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 553 "small.cpp"
   // WARN;
#line 553 "small.cpp"
  *(&llvm_cbe_retval) = (((struct l_class_OC_CBaseFSM *)((&llvm_cbe_this1->field3))));
#line 553 "small.cpp"
  llvm_cbe_tmp__7 = *(&llvm_cbe_retval);
#line 553 "small.cpp"
  return llvm_cbe_tmp__7;
}


void _ZNSt6vectorIPiSaIS0_EEC1Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this);

#line 0 "LLVM INTERNAL"
unsigned int *_ZN3UES8RetTest7EP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pg;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector llvm_cbe_mpIntList;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_basic_string *llvm_cbe_ms;    /* Address-exposed local */
  unsigned int llvm_cbe_cleanup_2e_dst;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_call;
  unsigned int **llvm_cbe_call5;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_call8;
  struct l_class_OC_std_KD__KD_basic_string *llvm_cbe_tmp9;
  unsigned long long llvm_cbe_call11;
  unsigned int *llvm_cbe_tmp12;
  unsigned int *llvm_cbe_tmp15;
  unsigned int llvm_cbe_tmp16;
  unsigned int *llvm_cbe_tmp__8;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 522 "small.cpp"
  llvm_cbe_call = _Z18API_GET_GLOBAL_MEMv();
#line 522 "small.cpp"
  *(&llvm_cbe_pg) = llvm_cbe_call;
#line 524 "small.cpp"
  _ZNSt6vectorIPiSaIS0_EEC1Ev((&llvm_cbe_mpIntList));
#line 525 "small.cpp"
  _ZNSt6vectorIPiSaIS0_EE9push_backERKS0_((&llvm_cbe_mpIntList), (&llvm_cbe_pg));
#line 526 "small.cpp"
  llvm_cbe_call5 = _ZNSt6vectorIPiSaIS0_EEixEm((&llvm_cbe_mpIntList), 0ull);
#line 526 "small.cpp"
  llvm_cbe_tmp = *llvm_cbe_call5;
#line 526 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 528 "small.cpp"
  llvm_cbe_call8 = _Z18API_GET_GLOBAL_MEMv();
#line 528 "small.cpp"
  *(&llvm_cbe_ms) = (((struct l_class_OC_std_KD__KD_basic_string *)llvm_cbe_call8));
#line 529 "small.cpp"
  llvm_cbe_tmp9 = *(&llvm_cbe_ms);
#line 529 "small.cpp"
  llvm_cbe_call11 = _ZNKSs6lengthEv(llvm_cbe_tmp9);
#line 531 "small.cpp"
  llvm_cbe_tmp12 = *(&llvm_cbe_pg);
#line 531 "small.cpp"
  *llvm_cbe_tmp12 = 0u;
#line 531 "small.cpp"
   // WARN;
#line 532 "small.cpp"
   // WARN;
#line 532 "small.cpp"
  llvm_cbe_tmp15 = *(&llvm_cbe_pg);
#line 532 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp15;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_cleanup_2e_dst) = 1u;
#line 532 "small.cpp"
  _ZNSt6vectorIPiSaIS0_EED1Ev((&llvm_cbe_mpIntList));
#line 532 "small.cpp"
  llvm_cbe_tmp16 = *(&llvm_cbe_cleanup_2e_dst);
#line 532 "small.cpp"
  llvm_cbe_tmp__8 = *(&llvm_cbe_retval);
#line 532 "small.cpp"
  return llvm_cbe_tmp__8;
}


#line 0 "LLVM INTERNAL"
void _ZN3UES5EntryEv(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_pfsm;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  struct l_class_OC_FSM *llvm_cbe_tmp;
  struct l_class_OC_CBaseFSM * (**llvm_cbe_tmp__9) (struct l_class_OC_FSM *, struct l_struct_OC_UEC_Event *);
  struct l_class_OC_CBaseFSM * (*llvm_cbe_tmp__10) (struct l_class_OC_FSM *, struct l_struct_OC_UEC_Event *);
  struct l_class_OC_CBaseFSM *llvm_cbe_call;
  struct l_class_OC_FSM *llvm_cbe_tmp2;
  void  (**llvm_cbe_tmp__11) (struct l_class_OC_FSM *);
  void  (*llvm_cbe_tmp__12) (struct l_class_OC_FSM *);

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 510 "small.cpp"
  _ZN3UES14PrivateMember5Ev(llvm_cbe_this1);
#line 512 "small.cpp"
  *(&llvm_cbe_pfsm) = (((struct l_class_OC_FSM *)llvm_cbe_this1));
#line 516 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pfsm);
#line 516 "small.cpp"
  llvm_cbe_tmp__9 = *(((struct l_class_OC_CBaseFSM * (***) (struct l_class_OC_FSM *, struct l_struct_OC_UEC_Event *))llvm_cbe_tmp));
#line 516 "small.cpp"
  llvm_cbe_tmp__10 = *((&llvm_cbe_tmp__9[((signed long long )1ull)]));
#line 516 "small.cpp"
  llvm_cbe_call = llvm_cbe_tmp__10(llvm_cbe_tmp, ((struct l_struct_OC_UEC_Event *)/*NULL*/0));
#line 517 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_pfsm);
#line 517 "small.cpp"
  llvm_cbe_tmp__11 = *(((void  (***) (struct l_class_OC_FSM *))llvm_cbe_tmp2));
#line 517 "small.cpp"
  llvm_cbe_tmp__12 = *((&llvm_cbe_tmp__11[((signed long long )2ull)]));
#line 517 "small.cpp"
  llvm_cbe_tmp__12(llvm_cbe_tmp2);
#line 518 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3Log4TestEv(struct l_class_OC_Log *llvm_cbe_this) {
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pi;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned char *llvm_cbe_call;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp3;
  unsigned int llvm_cbe_call4;
  unsigned int *llvm_cbe_tmp5;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 250 "small.cpp"
  llvm_cbe_call = _Znam(40ull);
#line 250 "small.cpp"
  *(&llvm_cbe_pi) = (((unsigned int *)llvm_cbe_call));
#line 252 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pi);
#line 252 "small.cpp"
  *((&llvm_cbe_this1->field24)) = llvm_cbe_tmp;
#line 252 "small.cpp"
   // WARN;
#line 253 "small.cpp"
  llvm_cbe_tmp3 = *(&llvm_cbe_pi);
#line 253 "small.cpp"
  llvm_cbe_call4 = _Z9API_CALL1iPv(0u, (((unsigned char *)llvm_cbe_tmp3)));
#line 253 "small.cpp"
   // WARN;
#line 254 "small.cpp"
  llvm_cbe_tmp5 = *(&llvm_cbe_pi);
#line 254 "small.cpp"
  *((&(*llvm_cbe_tmp5))) = 0u;
#line 254 "small.cpp"
   // WARN;
#line 255 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UES4KillEv(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  void  (**llvm_cbe_tmp__13) (struct l_class_OC_UES *);
  void  (*llvm_cbe_tmp__14) (struct l_class_OC_UES *);

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 382 "small.cpp"
  if ((llvm_cbe_this1 == ((struct l_class_OC_UES *)/*NULL*/0))) {    goto llvm_cbe_delete_2e_end;  } else {    goto llvm_cbe_delete_2e_notnull;  }


llvm_cbe_delete_2e_notnull:
#line 382 "small.cpp"
  llvm_cbe_tmp__13 = *(((void  (***) (struct l_class_OC_UES *))llvm_cbe_this1));
#line 382 "small.cpp"
  llvm_cbe_tmp__14 = *((&llvm_cbe_tmp__13[((signed long long )4ull)]));
#line 382 "small.cpp"
  llvm_cbe_tmp__14(llvm_cbe_this1);
#line 383 "small.cpp"
  return;

llvm_cbe_delete_2e_end:
#line 383 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UES9TestCycleEv(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_a;    /* Address-exposed local */
  unsigned int *llvm_cbe_b;    /* Address-exposed local */
  unsigned int *llvm_cbe_c;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 393 "small.cpp"
  *(&llvm_cbe_b) = (((unsigned int *)(&llvm_cbe_a)));
#line 394 "small.cpp"
  *(&llvm_cbe_c) = (((unsigned int *)(&llvm_cbe_b)));
#line 395 "small.cpp"
  *(&llvm_cbe_a) = (((unsigned int *)(&llvm_cbe_c)));
#line 396 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_a);
#line 396 "small.cpp"
  *((&(*llvm_cbe_tmp))) = 0u;
#line 397 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3Log10test_cycleEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_glob) {
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_a;    /* Address-exposed local */
  unsigned int **llvm_cbe_b;    /* Address-exposed local */
  unsigned int ***llvm_cbe_c;    /* Address-exposed local */
  unsigned int ****llvm_cbe_pa;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int ***llvm_cbe_tmp2;
  unsigned int **llvm_cbe_tmp3;
  unsigned int *llvm_cbe_tmp4;
  unsigned int **llvm_cbe_tmp5;
  unsigned int *llvm_cbe_tmp6;
  unsigned int ***llvm_cbe_tmp7;
  unsigned int **llvm_cbe_tmp8;
  unsigned int *llvm_cbe_tmp9;
  unsigned int ****llvm_cbe_tmp10;
  unsigned int ***llvm_cbe_tmp11;
  unsigned int **llvm_cbe_tmp12;
  unsigned int *llvm_cbe_tmp13;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_2e_addr) = llvm_cbe_glob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 278 "small.cpp"
  *(&llvm_cbe_b) = (&llvm_cbe_a);
#line 279 "small.cpp"
  *(&llvm_cbe_c) = (&llvm_cbe_b);
#line 281 "small.cpp"
  *(&llvm_cbe_pa) = (&llvm_cbe_c);
#line 284 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_glob_2e_addr);
#line 284 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_c);
#line 284 "small.cpp"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 284 "small.cpp"
  *llvm_cbe_tmp3 = llvm_cbe_tmp;
#line 286 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_a);
#line 286 "small.cpp"
  *llvm_cbe_tmp4 = 0u;
#line 286 "small.cpp"
   // WARN;
#line 287 "small.cpp"
  llvm_cbe_tmp5 = *(&llvm_cbe_b);
#line 287 "small.cpp"
  llvm_cbe_tmp6 = *llvm_cbe_tmp5;
#line 287 "small.cpp"
  *llvm_cbe_tmp6 = 0u;
#line 287 "small.cpp"
   // WARN;
#line 288 "small.cpp"
  llvm_cbe_tmp7 = *(&llvm_cbe_c);
#line 288 "small.cpp"
  llvm_cbe_tmp8 = *llvm_cbe_tmp7;
#line 288 "small.cpp"
  llvm_cbe_tmp9 = *llvm_cbe_tmp8;
#line 288 "small.cpp"
  *llvm_cbe_tmp9 = 0u;
#line 288 "small.cpp"
   // WARN;
#line 289 "small.cpp"
  llvm_cbe_tmp10 = *(&llvm_cbe_pa);
#line 289 "small.cpp"
  llvm_cbe_tmp11 = *llvm_cbe_tmp10;
#line 289 "small.cpp"
  llvm_cbe_tmp12 = *llvm_cbe_tmp11;
#line 289 "small.cpp"
  llvm_cbe_tmp13 = *llvm_cbe_tmp12;
#line 289 "small.cpp"
  *llvm_cbe_tmp13 = 0u;
#line 289 "small.cpp"
   // WARN;
#line 290 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3Log7call_fpEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_glob) {
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pg;    /* Address-exposed local */
  struct l_unnamed16 llvm_cbe_mem_2e_fn;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp2;
  unsigned int llvm_cbe_tmp3;
  unsigned int llvm_cbe_call;
  unsigned int *llvm_cbe_tmp4;
  unsigned int llvm_cbe_tmp5;
  unsigned char *llvm_cbe_tmp__15;
  unsigned long long llvm_cbe_mem_2e_fn_2e_adj;
  struct l_class_OC_Log *llvm_cbe_this10;
  unsigned long long *llvm_cbe_mem_2e_fn_2e_ptr;
  unsigned long long llvm_cbe_fn;
  unsigned int * (**llvm_cbe_tmp__16) (struct l_class_OC_Log *, unsigned int *);
  unsigned int * (*llvm_cbe_virtualfn) (struct l_class_OC_Log *, unsigned int *);
  unsigned long long llvm_cbe_fn12;
  unsigned int * (*llvm_cbe_tmp__17) (struct l_class_OC_Log *, unsigned int *);
  unsigned int * (*llvm_cbe_tmp__18) (struct l_class_OC_Log *, unsigned int *);
  unsigned int * (*llvm_cbe_tmp__18__PHI_TEMPORARY) (struct l_class_OC_Log *, unsigned int *);
  unsigned int *llvm_cbe_tmp13;
  unsigned int *llvm_cbe_call14;
  unsigned int *llvm_cbe_tmp15;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_2e_addr) = llvm_cbe_glob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 297 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_glob_2e_addr);
#line 297 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 297 "small.cpp"
   // WARN;
#line 299 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_glob_2e_addr);
#line 299 "small.cpp"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 299 "small.cpp"
  llvm_cbe_call = _Z9API_CALL0i(llvm_cbe_tmp3);
#line 301 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_glob_2e_addr);
#line 301 "small.cpp"
  llvm_cbe_tmp5 = *llvm_cbe_tmp4;
#line 301 "small.cpp"
  if ((llvm_cbe_tmp5 == 0u)) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp__15 = memcpy((((unsigned char *)(&llvm_cbe_mem_2e_fn))), (((unsigned char *)((&llvm_cbe_this1->field7)))), 16ull);
#line 303 "small.cpp"
  llvm_cbe_mem_2e_fn_2e_adj = *((&llvm_cbe_mem_2e_fn.field1));
#line 303 "small.cpp"
  llvm_cbe_this10 = ((struct l_class_OC_Log *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )llvm_cbe_mem_2e_fn_2e_adj)])));
#line 303 "small.cpp"
  llvm_cbe_mem_2e_fn_2e_ptr = (&llvm_cbe_mem_2e_fn.field0);
#line 303 "small.cpp"
  llvm_cbe_fn = *llvm_cbe_mem_2e_fn_2e_ptr;
#line 303 "small.cpp"
  if ((((((bool )(llvm_cbe_fn & 1ull)&1u))&1))) {    goto llvm_cbe_fn_2e_virtual;  } else {    goto llvm_cbe_fn_2e_nonvirtual;  }


llvm_cbe_fn_2e_virtual:
#line 303 "small.cpp"
  llvm_cbe_tmp__16 = *(((unsigned int * (***) (struct l_class_OC_Log *, unsigned int *))llvm_cbe_this10));
#line 303 "small.cpp"
  llvm_cbe_virtualfn = *(((unsigned int * (**) (struct l_class_OC_Log *, unsigned int *))((&(((unsigned char *)llvm_cbe_tmp__16))[((signed long long )(((unsigned long long )(((unsigned long long )llvm_cbe_fn) - ((unsigned long long )1ull)))))]))));
#line 303 "small.cpp"
  llvm_cbe_tmp__18__PHI_TEMPORARY = llvm_cbe_virtualfn;   /* for PHI node */
  goto llvm_cbe_fn_2e_end;

llvm_cbe_fn_2e_nonvirtual:
#line 303 "small.cpp"
  llvm_cbe_fn12 = *llvm_cbe_mem_2e_fn_2e_ptr;
#line 303 "small.cpp"
  llvm_cbe_tmp__17 = ((unsigned int * (*) (struct l_class_OC_Log *, unsigned int *))(unsigned long)llvm_cbe_fn12);
#line 303 "small.cpp"
  llvm_cbe_tmp__18__PHI_TEMPORARY = llvm_cbe_tmp__17;   /* for PHI node */
  goto llvm_cbe_fn_2e_end;

llvm_cbe_fn_2e_end:
#line 303 "small.cpp"
  llvm_cbe_tmp__18 = llvm_cbe_tmp__18__PHI_TEMPORARY;
#line 303 "small.cpp"
  llvm_cbe_tmp13 = *(&llvm_cbe_glob_2e_addr);
#line 303 "small.cpp"
  llvm_cbe_call14 = llvm_cbe_tmp__18(llvm_cbe_this10, llvm_cbe_tmp13);
#line 303 "small.cpp"
  *(&llvm_cbe_pg) = llvm_cbe_call14;
#line 303 "small.cpp"
   // WARN;
#line 304 "small.cpp"
  llvm_cbe_tmp15 = *(&llvm_cbe_pg);
#line 304 "small.cpp"
  *llvm_cbe_tmp15 = 0u;
#line 304 "small.cpp"
   // WARN;
#line 307 "small.cpp"
  return;

llvm_cbe_if_2e_end:
#line 307 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN14UecManagerBaseC1Ev(struct l_class_OC_Test2 *llvm_cbe_this) {
  struct l_class_OC_Test2 *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN14UecManagerBaseC2Ev(llvm_cbe_this1);
#line 7 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN10UecFSMImplC1EP14UecManagerBase(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr) {
  struct l_class_OC_UecFSMImpl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UecFSMImpl *llvm_cbe_this1;
  struct l_class_OC_Test2 *llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_p_uecManagerBasePtr_2e_addr) = llvm_cbe_p_uecManagerBasePtr;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp = *(&llvm_cbe_p_uecManagerBasePtr_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN10UecFSMImplC2EP14UecManagerBase(llvm_cbe_this1, llvm_cbe_tmp);
#line 20 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN10UecFSMImpl22Public_UecFSMImpl_FuncEP6CEvent(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_CBaseFSM *llvm_cbe_pev) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UecFSMImpl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_CBaseFSM *llvm_cbe_pev_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_l_uecUeContextDataWrite_ptr;    /* Address-exposed local */
  struct l_class_OC_UecFSMImpl *llvm_cbe_this1;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp2;
  unsigned int llvm_cbe_tmp3;
  struct l_class_OC_Test2 *llvm_cbe_tmp6;
  unsigned int *llvm_cbe_call;
  unsigned int *llvm_cbe_tmp7;
  unsigned int *llvm_cbe_arrayidx;
  unsigned int llvm_cbe_tmp8;
  unsigned int *llvm_cbe_tmp__19;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_pev_2e_addr) = llvm_cbe_pev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 24 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pev_2e_addr);
#line 24 "small.cpp"
  llvm_cbe_tmp2 = (&llvm_cbe_tmp->field0);
#line 24 "small.cpp"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 24 "small.cpp"
  *llvm_cbe_tmp2 = (((unsigned int )(((unsigned int )llvm_cbe_tmp3) + ((unsigned int )1u))));
#line 26 "small.cpp"
  llvm_cbe_tmp6 = *((&llvm_cbe_this1->field1));
#line 26 "small.cpp"
  llvm_cbe_call = _ZN14UecManagerBase13GetSharedDataEv(llvm_cbe_tmp6);
#line 26 "small.cpp"
  *(&llvm_cbe_l_uecUeContextDataWrite_ptr) = llvm_cbe_call;
#line 27 "small.cpp"
  llvm_cbe_tmp7 = *(&llvm_cbe_l_uecUeContextDataWrite_ptr);
#line 27 "small.cpp"
  llvm_cbe_arrayidx = (&(*llvm_cbe_tmp7));
#line 27 "small.cpp"
  llvm_cbe_tmp8 = *llvm_cbe_arrayidx;
#line 27 "small.cpp"
  *llvm_cbe_arrayidx = (((unsigned int )(((unsigned int )llvm_cbe_tmp8) + ((unsigned int )1u))));
#line 28 "small.cpp"
  _Z8API_FUNCPi(((&llvm_cbe_this1->field0)));
#line 29 "small.cpp"
  *(&llvm_cbe_retval) = ((&llvm_cbe_this1->field0));
#line 29 "small.cpp"
  llvm_cbe_tmp__19 = *(&llvm_cbe_retval);
#line 29 "small.cpp"
  return llvm_cbe_tmp__19;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN14UecManagerBase13GetSharedDataEv(struct l_class_OC_Test2 *llvm_cbe_this) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp__20;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 8 "small.cpp"
  llvm_cbe_tmp2 = *((&llvm_cbe_this1->field0));
#line 8 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp2;
#line 8 "small.cpp"
  llvm_cbe_tmp__20 = *(&llvm_cbe_retval);
#line 8 "small.cpp"
  return llvm_cbe_tmp__20;
}


#line 0 "LLVM INTERNAL"
void _ZN10UecFSMImplC2EP14UecManagerBase(struct l_class_OC_UecFSMImpl *llvm_cbe_this, struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr) {
  struct l_class_OC_UecFSMImpl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_p_uecManagerBasePtr_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UecFSMImpl *llvm_cbe_this1;
  struct l_class_OC_Test2 *llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_p_uecManagerBasePtr_2e_addr) = llvm_cbe_p_uecManagerBasePtr;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 20 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_p_uecManagerBasePtr_2e_addr);
#line 20 "small.cpp"
  *((&llvm_cbe_this1->field1)) = llvm_cbe_tmp;
#line 20 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN14UecManagerBaseC2Ev(struct l_class_OC_Test2 *llvm_cbe_this) {
  struct l_class_OC_Test2 *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_this1;
  unsigned char *llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 7 "small.cpp"
  llvm_cbe_call = _Znam(40ull);
#line 7 "small.cpp"
  *((&llvm_cbe_this1->field0)) = (((unsigned int *)llvm_cbe_call));
#line 7 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UES14PrivateMember5Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_pl;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_call;
  unsigned int **llvm_cbe_tmp3;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 499 "small.cpp"
  *(&llvm_cbe_pl) = ((&llvm_cbe_this1->field13));
#line 499 "small.cpp"
   // WARN;
#line 500 "small.cpp"
  *((&llvm_cbe_this1->field13)) = ((unsigned int *)/*NULL*/0);
#line 500 "small.cpp"
   // WARN;
#line 501 "small.cpp"
  llvm_cbe_call = _Z18API_GET_GLOBAL_MEMv();
#line 501 "small.cpp"
  *(&llvm_cbe_pl) = (((unsigned int **)llvm_cbe_call));
#line 501 "small.cpp"
   // WARN;
#line 502 "small.cpp"
  llvm_cbe_tmp3 = *(&llvm_cbe_pl);
#line 502 "small.cpp"
  *llvm_cbe_tmp3 = ((unsigned int *)/*NULL*/0);
#line 502 "small.cpp"
   // WARN;
#line 503 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EEC1Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt6vectorIPiSaIS0_EEC2Ev(llvm_cbe_this1);
#line 208 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EED1Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt6vectorIPiSaIS0_EED2Ev(llvm_cbe_this1);
#line 314 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EE9push_backERKS0_(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned int **llvm_cbe___x) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___x_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator llvm_cbe_agg_2e_tmp;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp6;
  unsigned int **llvm_cbe_tmp10;
  unsigned int **llvm_cbe_tmp11;
  unsigned int ***llvm_cbe_tmp13;
  unsigned int **llvm_cbe_tmp14;
  unsigned long long llvm_cbe_call;
  unsigned int **llvm_cbe_tmp15;
  unsigned long long llvm_cbe_tmp__21;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___x_2e_addr) = llvm_cbe___x;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 735 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 735 "stl_vector.h"
  llvm_cbe_tmp6 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field2));
#line 735 "stl_vector.h"
  if ((llvm_cbe_tmp3 != llvm_cbe_tmp6)) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_else;  }


llvm_cbe_if_2e_then:
#line 737 "stl_vector.h"
  llvm_cbe_tmp10 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 737 "stl_vector.h"
  llvm_cbe_tmp11 = *(&llvm_cbe___x_2e_addr);
#line 737 "stl_vector.h"
  _ZN9__gnu_cxx13new_allocatorIPiE9constructEPS1_RKS1_((((struct l_class_OC_DummyStream *)((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0)))), llvm_cbe_tmp10, llvm_cbe_tmp11);
#line 738 "stl_vector.h"
  llvm_cbe_tmp13 = (&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1);
#line 738 "stl_vector.h"
  llvm_cbe_tmp14 = *llvm_cbe_tmp13;
#line 738 "stl_vector.h"
  *llvm_cbe_tmp13 = ((&llvm_cbe_tmp14[((signed int )1u)]));
#line 742 "stl_vector.h"
  return;

llvm_cbe_if_2e_else:
#line 741 "stl_vector.h"
  llvm_cbe_call = _ZNSt6vectorIPiSaIS0_EE3endEv(llvm_cbe_this1);
#line 741 "stl_vector.h"
  ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe_agg_2e_tmp))))->data = llvm_cbe_call;
#line 741 "stl_vector.h"
  llvm_cbe_tmp15 = *(&llvm_cbe___x_2e_addr);
#line 741 "stl_vector.h"
  llvm_cbe_tmp__21 = ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe_agg_2e_tmp))))->data;
#line 741 "stl_vector.h"
  _ZNSt6vectorIPiSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(llvm_cbe_this1, llvm_cbe_tmp__21, llvm_cbe_tmp15);
#line 742 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt6vectorIPiSaIS0_EEixEm(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe___n) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___n_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned long long llvm_cbe_tmp4;
  unsigned int **llvm_cbe_tmp__22;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___n_2e_addr) = llvm_cbe___n;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 611 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 611 "stl_vector.h"
  llvm_cbe_tmp4 = *(&llvm_cbe___n_2e_addr);
#line 611 "stl_vector.h"
  *(&llvm_cbe_retval) = ((&llvm_cbe_tmp3[((signed long long )llvm_cbe_tmp4)]));
#line 611 "stl_vector.h"
  llvm_cbe_tmp__22 = *(&llvm_cbe_retval);
#line 611 "stl_vector.h"
  return llvm_cbe_tmp__22;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx13new_allocatorIPiE9constructEPS1_RKS1_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned int **llvm_cbe___val) {
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___p_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___val_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp;
  unsigned char *llvm_cbe_call;
  unsigned int **llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp3;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___p_2e_addr) = llvm_cbe___p;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___val_2e_addr) = llvm_cbe___val;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 105 "new_allocator.h"
  llvm_cbe_tmp = *(&llvm_cbe___p_2e_addr);
#line 105 "new_allocator.h"
  llvm_cbe_call = _ZnwmPv(8ull, (((unsigned char *)llvm_cbe_tmp)));
#line 105 "new_allocator.h"
  if ((llvm_cbe_call == ((unsigned char *)/*NULL*/0))) {    goto llvm_cbe_new_2e_end;  } else {    goto llvm_cbe_new_2e_notnull;  }


llvm_cbe_new_2e_notnull:
#line 105 "new_allocator.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___val_2e_addr);
#line 105 "new_allocator.h"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 105 "new_allocator.h"
  *(((unsigned int **)llvm_cbe_call)) = llvm_cbe_tmp3;
#line 105 "new_allocator.h"
  return;

llvm_cbe_new_2e_end:
#line 105 "new_allocator.h"
  return;
}


unsigned long long _ZNKSt6vectorIPiSaIS0_EE12_M_check_lenEmPKc(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe___n, unsigned char *llvm_cbe___s);

unsigned long long _ZNSt6vectorIPiSaIS0_EE5beginEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this);

#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe_tmp__23, unsigned int **llvm_cbe___x) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator llvm_cbe___position;    /* Address-exposed local */
  unsigned int **llvm_cbe___x_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe___x_copy;    /* Address-exposed local */
  unsigned long long llvm_cbe___len;    /* Address-exposed local */
  unsigned long long llvm_cbe___elems_before;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator llvm_cbe_agg_2e_tmp;    /* Address-exposed local */
  unsigned int **llvm_cbe___new_start;    /* Address-exposed local */
  unsigned int **llvm_cbe___new_finish;    /* Address-exposed local */
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  unsigned int llvm_cbe_cleanup_2e_dst;    /* Address-exposed local */
  unsigned int llvm_cbe_cleanup_2e_dst92;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp6;
  unsigned int **llvm_cbe_tmp10;
  unsigned int **llvm_cbe_tmp13;
  unsigned int ***llvm_cbe_tmp15;
  unsigned int **llvm_cbe_tmp16;
  unsigned int **llvm_cbe_tmp18;
  unsigned int *llvm_cbe_tmp19;
  unsigned int ***llvm_cbe_call;
  unsigned int **llvm_cbe_tmp20;
  unsigned int **llvm_cbe_tmp23;
  unsigned int **llvm_cbe_tmp27;
  unsigned int **llvm_cbe_call29;
  unsigned int *llvm_cbe_tmp30;
  unsigned int **llvm_cbe_call31;
  unsigned long long llvm_cbe_call33;
  unsigned long long llvm_cbe_call35;
  unsigned long long llvm_cbe_call36;
  unsigned long long llvm_cbe_tmp38;
  unsigned int **llvm_cbe_call39;
  unsigned int **llvm_cbe_tmp41;
  unsigned int **llvm_cbe_tmp43;
  unsigned long long llvm_cbe_tmp44;
  unsigned int **llvm_cbe_tmp45;
  unsigned int **llvm_cbe_tmp48;
  unsigned int ***llvm_cbe_call50;
  unsigned int **llvm_cbe_tmp51;
  unsigned int **llvm_cbe_tmp52;
  struct l_class_OC_DummyStream *llvm_cbe_call54;
  unsigned int **llvm_cbe_call56;
  unsigned int **llvm_cbe_tmp57;
  unsigned int ***llvm_cbe_call60;
  unsigned int **llvm_cbe_tmp61;
  unsigned int **llvm_cbe_tmp64;
  unsigned int **llvm_cbe_tmp65;
  struct l_class_OC_DummyStream *llvm_cbe_call67;
  unsigned int **llvm_cbe_call69;
  unsigned int llvm_cbe_tmp93;
  unsigned char *llvm_cbe_tmp__24;
  unsigned int **llvm_cbe_tmp98;
  unsigned int **llvm_cbe_tmp101;
  struct l_class_OC_DummyStream *llvm_cbe_call102;
  unsigned int **llvm_cbe_tmp105;
  unsigned int **llvm_cbe_tmp108;
  unsigned int **llvm_cbe_tmp111;
  unsigned int **llvm_cbe_tmp112;
  unsigned int **llvm_cbe_tmp115;
  unsigned int **llvm_cbe_tmp118;
  unsigned long long llvm_cbe_tmp119;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe___position))))->data = llvm_cbe_tmp__23;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___x_2e_addr) = llvm_cbe___x;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 299 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 299 "stl_vector.h"
  llvm_cbe_tmp6 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field2));
#line 299 "stl_vector.h"
  if ((llvm_cbe_tmp3 != llvm_cbe_tmp6)) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_else;  }


llvm_cbe_if_2e_then:
#line 301 "stl_vector.h"
  llvm_cbe_tmp10 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 301 "stl_vector.h"
  llvm_cbe_tmp13 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 301 "stl_vector.h"
  _ZN9__gnu_cxx13new_allocatorIPiE9constructEPS1_RKS1_((((struct l_class_OC_DummyStream *)((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0)))), llvm_cbe_tmp10, ((&llvm_cbe_tmp13[((signed long long )18446744073709551615ull)])));
#line 304 "stl_vector.h"
  llvm_cbe_tmp15 = (&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1);
#line 304 "stl_vector.h"
  llvm_cbe_tmp16 = *llvm_cbe_tmp15;
#line 304 "stl_vector.h"
  *llvm_cbe_tmp15 = ((&llvm_cbe_tmp16[((signed int )1u)]));
#line 306 "stl_vector.h"
  llvm_cbe_tmp18 = *(&llvm_cbe___x_2e_addr);
#line 306 "stl_vector.h"
  llvm_cbe_tmp19 = *llvm_cbe_tmp18;
#line 306 "stl_vector.h"
  *(&llvm_cbe___x_copy) = llvm_cbe_tmp19;
#line 308 "stl_vector.h"
  llvm_cbe_call = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv((&llvm_cbe___position));
#line 308 "stl_vector.h"
  llvm_cbe_tmp20 = *llvm_cbe_call;
#line 308 "stl_vector.h"
  llvm_cbe_tmp23 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 308 "stl_vector.h"
  llvm_cbe_tmp27 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 308 "stl_vector.h"
  llvm_cbe_call29 = _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_(llvm_cbe_tmp20, ((&llvm_cbe_tmp23[((signed long long )18446744073709551614ull)])), ((&llvm_cbe_tmp27[((signed long long )18446744073709551615ull)])));
#line 312 "stl_vector.h"
  llvm_cbe_tmp30 = *(&llvm_cbe___x_copy);
#line 312 "stl_vector.h"
  llvm_cbe_call31 = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEdeEv((&llvm_cbe___position));
#line 312 "stl_vector.h"
  *llvm_cbe_call31 = llvm_cbe_tmp30;
#line 368 "stl_vector.h"
  return;

llvm_cbe_if_2e_else:
#line 320 "stl_vector.h"
  llvm_cbe_call33 = _ZNKSt6vectorIPiSaIS0_EE12_M_check_lenEmPKc(llvm_cbe_this1, 1ull, ((&_OC_str.array[((signed int )0u)])));
#line 320 "stl_vector.h"
  *(&llvm_cbe___len) = llvm_cbe_call33;
#line 321 "stl_vector.h"
  llvm_cbe_call35 = _ZNSt6vectorIPiSaIS0_EE5beginEv(llvm_cbe_this1);
#line 321 "stl_vector.h"
  ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe_agg_2e_tmp))))->data = llvm_cbe_call35;
#line 321 "stl_vector.h"
  llvm_cbe_call36 = _ZN9__gnu_cxxmiIPPiSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_((&llvm_cbe___position), (&llvm_cbe_agg_2e_tmp));
#line 321 "stl_vector.h"
  *(&llvm_cbe___elems_before) = llvm_cbe_call36;
#line 322 "stl_vector.h"
  llvm_cbe_tmp38 = *(&llvm_cbe___len);
#line 322 "stl_vector.h"
  llvm_cbe_call39 = _ZNSt12_Vector_baseIPiSaIS0_EE11_M_allocateEm((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)), llvm_cbe_tmp38);
#line 322 "stl_vector.h"
  *(&llvm_cbe___new_start) = llvm_cbe_call39;
#line 323 "stl_vector.h"
  llvm_cbe_tmp41 = *(&llvm_cbe___new_start);
#line 323 "stl_vector.h"
  *(&llvm_cbe___new_finish) = llvm_cbe_tmp41;
#line 330 "stl_vector.h"
  llvm_cbe_tmp43 = *(&llvm_cbe___new_start);
#line 330 "stl_vector.h"
  llvm_cbe_tmp44 = *(&llvm_cbe___elems_before);
#line 330 "stl_vector.h"
  llvm_cbe_tmp45 = *(&llvm_cbe___x_2e_addr);
#line 330 "stl_vector.h"
  _ZN9__gnu_cxx13new_allocatorIPiE9constructEPS1_RKS1_((((struct l_class_OC_DummyStream *)((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0)))), ((&llvm_cbe_tmp43[((signed long long )llvm_cbe_tmp44)])), llvm_cbe_tmp45);
#line 336 "stl_vector.h"
  *(&llvm_cbe___new_finish) = ((unsigned int **)/*NULL*/0);
#line 338 "stl_vector.h"
  llvm_cbe_tmp48 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 338 "stl_vector.h"
  llvm_cbe_call50 = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv((&llvm_cbe___position));
#line 338 "stl_vector.h"
  llvm_cbe_tmp51 = *llvm_cbe_call50;
#line 338 "stl_vector.h"
  llvm_cbe_tmp52 = *(&llvm_cbe___new_start);
#line 338 "stl_vector.h"
  llvm_cbe_call54 = _ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 338 "stl_vector.h"
  llvm_cbe_call56 = _ZSt22__uninitialized_move_aIPPiS1_SaIS0_EET0_T_S4_S3_RT1_(llvm_cbe_tmp48, llvm_cbe_tmp51, llvm_cbe_tmp52, llvm_cbe_call54);
#line 338 "stl_vector.h"
  *(&llvm_cbe___new_finish) = llvm_cbe_call56;
#line 342 "stl_vector.h"
  llvm_cbe_tmp57 = *(&llvm_cbe___new_finish);
#line 342 "stl_vector.h"
  *(&llvm_cbe___new_finish) = ((&llvm_cbe_tmp57[((signed int )1u)]));
#line 344 "stl_vector.h"
  llvm_cbe_call60 = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv((&llvm_cbe___position));
#line 344 "stl_vector.h"
  llvm_cbe_tmp61 = *llvm_cbe_call60;
#line 344 "stl_vector.h"
  llvm_cbe_tmp64 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 344 "stl_vector.h"
  llvm_cbe_tmp65 = *(&llvm_cbe___new_finish);
#line 344 "stl_vector.h"
  llvm_cbe_call67 = _ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 344 "stl_vector.h"
  llvm_cbe_call69 = _ZSt22__uninitialized_move_aIPPiS1_SaIS0_EET0_T_S4_S3_RT1_(llvm_cbe_tmp61, llvm_cbe_tmp64, llvm_cbe_tmp65, llvm_cbe_call67);
#line 344 "stl_vector.h"
  *(&llvm_cbe___new_finish) = llvm_cbe_call69;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_cleanup_2e_dst92) = 1u;
#line 358 "stl_vector.h"
  llvm_cbe_tmp93 = *(&llvm_cbe_cleanup_2e_dst92);
#line 0 "LLVM INTERNAL"
  if ((llvm_cbe_tmp93 == 2u)) {    goto llvm_cbe_finally_2e_throw;  } else {    goto llvm_cbe_finally_2e_end;  }


llvm_cbe_finally_2e_throw:
#line 358 "stl_vector.h"
  llvm_cbe_tmp__24 = *(&llvm_cbe__rethrow);
#line 358 "stl_vector.h"
  _Unwind_Resume_or_Rethrow(llvm_cbe_tmp__24);
#line 358 "stl_vector.h"
  /*UNREACHABLE*/;

llvm_cbe_finally_2e_end:
#line 359 "stl_vector.h"
  llvm_cbe_tmp98 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 359 "stl_vector.h"
  llvm_cbe_tmp101 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 359 "stl_vector.h"
  llvm_cbe_call102 = _ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 359 "stl_vector.h"
  _ZSt8_DestroyIPPiS0_EvT_S2_RSaIT0_E(llvm_cbe_tmp98, llvm_cbe_tmp101, llvm_cbe_call102);
#line 361 "stl_vector.h"
  llvm_cbe_tmp105 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 361 "stl_vector.h"
  llvm_cbe_tmp108 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field2));
#line 361 "stl_vector.h"
  llvm_cbe_tmp111 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 361 "stl_vector.h"
  _ZNSt12_Vector_baseIPiSaIS0_EE13_M_deallocateEPS0_m((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)), llvm_cbe_tmp105, (((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp108))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp111))))))) / ((signed long long )8ull)))));
#line 364 "stl_vector.h"
  llvm_cbe_tmp112 = *(&llvm_cbe___new_start);
#line 364 "stl_vector.h"
  *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0)) = llvm_cbe_tmp112;
#line 365 "stl_vector.h"
  llvm_cbe_tmp115 = *(&llvm_cbe___new_finish);
#line 365 "stl_vector.h"
  *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1)) = llvm_cbe_tmp115;
#line 366 "stl_vector.h"
  llvm_cbe_tmp118 = *(&llvm_cbe___new_start);
#line 366 "stl_vector.h"
  llvm_cbe_tmp119 = *(&llvm_cbe___len);
#line 366 "stl_vector.h"
  *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field2)) = ((&llvm_cbe_tmp118[((signed long long )llvm_cbe_tmp119)]));
#line 368 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZNSt6vectorIPiSaIS0_EE3endEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned long long llvm_cbe_tmp__25;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 444 "stl_vector.h"
  _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC1ERKS2_((&llvm_cbe_retval), ((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1)));
#line 444 "stl_vector.h"
  llvm_cbe_tmp__25 = ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe_retval))))->data;
#line 444 "stl_vector.h"
  return llvm_cbe_tmp__25;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC1ERKS2_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this, unsigned int ***llvm_cbe___i) {
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int ***llvm_cbe___i_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this1;
  unsigned int ***llvm_cbe_tmp__26;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___i_2e_addr) = llvm_cbe___i;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp__26 = *(&llvm_cbe___i_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC2ERKS2_(llvm_cbe_this1, llvm_cbe_tmp__26);
#line 686 "stl_iterator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC2ERKS2_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this, unsigned int ***llvm_cbe___i) {
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int ***llvm_cbe___i_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this1;
  unsigned int ***llvm_cbe_tmp2;
  unsigned int **llvm_cbe_tmp3;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___i_2e_addr) = llvm_cbe___i;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp2 = *(&llvm_cbe___i_2e_addr);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 0 "LLVM INTERNAL"
  *((&llvm_cbe_this1->field0)) = llvm_cbe_tmp3;
#line 686 "stl_iterator.h"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_call2;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call4;
  unsigned int **llvm_cbe_tmp__27;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 638 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 638 "stl_algobase.h"
  llvm_cbe_call = _ZNSt12__miter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp);
#line 638 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 638 "stl_algobase.h"
  llvm_cbe_call2 = _ZNSt12__miter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp1);
#line 638 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___result_2e_addr);
#line 638 "stl_algobase.h"
  llvm_cbe_call4 = _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_(llvm_cbe_call, llvm_cbe_call2, llvm_cbe_tmp3);
#line 638 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call4;
#line 641 "stl_algobase.h"
  llvm_cbe_tmp__27 = *(&llvm_cbe_retval);
#line 641 "stl_algobase.h"
  return llvm_cbe_tmp__27;
}


#line 0 "LLVM INTERNAL"
unsigned int ***_ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this) {
  unsigned int ***llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this1;
  unsigned int ***llvm_cbe_tmp__28;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 751 "stl_iterator.h"
  *(&llvm_cbe_retval) = ((&llvm_cbe_this1->field0));
#line 751 "stl_iterator.h"
  llvm_cbe_tmp__28 = *(&llvm_cbe_retval);
#line 751 "stl_iterator.h"
  return llvm_cbe_tmp__28;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEdeEv(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_tmp__29;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 699 "stl_iterator.h"
  llvm_cbe_tmp2 = *((&llvm_cbe_this1->field0));
#line 699 "stl_iterator.h"
  *(&llvm_cbe_retval) = llvm_cbe_tmp2;
#line 699 "stl_iterator.h"
  llvm_cbe_tmp__29 = *(&llvm_cbe_retval);
#line 699 "stl_iterator.h"
  return llvm_cbe_tmp__29;
}


unsigned long long _ZNKSt6vectorIPiSaIS0_EE4sizeEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this);

#line 0 "LLVM INTERNAL"
unsigned long long _ZNKSt6vectorIPiSaIS0_EE12_M_check_lenEmPKc(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this, unsigned long long llvm_cbe___n, unsigned char *llvm_cbe___s) {
  unsigned long long llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___n_2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe___s_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___len;    /* Address-exposed local */
  unsigned long long llvm_cbe_reftmp;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned long long llvm_cbe_call;
  unsigned long long llvm_cbe_call2;
  unsigned long long llvm_cbe_tmp;
  unsigned char *llvm_cbe_tmp3;
  unsigned long long llvm_cbe_call5;
  unsigned long long llvm_cbe_call6;
  unsigned long long *llvm_cbe_call7;
  unsigned long long llvm_cbe_tmp8;
  unsigned long long llvm_cbe_tmp9;
  unsigned long long llvm_cbe_call10;
  unsigned long long llvm_cbe_tmp12;
  unsigned long long llvm_cbe_call13;
  unsigned long long llvm_cbe_call15;
  unsigned long long llvm_cbe_tmp16;
  unsigned long long llvm_cbe_cond;
  unsigned long long llvm_cbe_cond__PHI_TEMPORARY;
  unsigned long long llvm_cbe_tmp__30;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___n_2e_addr) = llvm_cbe___n;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___s_2e_addr) = llvm_cbe___s;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 1136 "stl_vector.h"
  llvm_cbe_call = _ZNKSt6vectorIPiSaIS0_EE8max_sizeEv(llvm_cbe_this1);
#line 1136 "stl_vector.h"
  llvm_cbe_call2 = _ZNKSt6vectorIPiSaIS0_EE4sizeEv(llvm_cbe_this1);
#line 1136 "stl_vector.h"
  llvm_cbe_tmp = *(&llvm_cbe___n_2e_addr);
#line 1136 "stl_vector.h"
  if ((((unsigned long long )(((unsigned long long )(((unsigned long long )llvm_cbe_call) - ((unsigned long long )llvm_cbe_call2))))) < ((unsigned long long )llvm_cbe_tmp))) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 1137 "stl_vector.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___s_2e_addr);
#line 1137 "stl_vector.h"
  _ZSt20__throw_length_errorPKc(llvm_cbe_tmp3);
#line 1137 "stl_vector.h"
  /*UNREACHABLE*/;

llvm_cbe_if_2e_end:
#line 1139 "stl_vector.h"
  llvm_cbe_call5 = _ZNKSt6vectorIPiSaIS0_EE4sizeEv(llvm_cbe_this1);
#line 1139 "stl_vector.h"
  llvm_cbe_call6 = _ZNKSt6vectorIPiSaIS0_EE4sizeEv(llvm_cbe_this1);
#line 1139 "stl_vector.h"
  *(&llvm_cbe_reftmp) = llvm_cbe_call6;
#line 1139 "stl_vector.h"
  llvm_cbe_call7 = _ZSt3maxImERKT_S2_S2_((&llvm_cbe_reftmp), (&llvm_cbe___n_2e_addr));
#line 1139 "stl_vector.h"
  llvm_cbe_tmp8 = *llvm_cbe_call7;
#line 1139 "stl_vector.h"
  *(&llvm_cbe___len) = (((unsigned long long )(((unsigned long long )llvm_cbe_call5) + ((unsigned long long )llvm_cbe_tmp8))));
#line 1140 "stl_vector.h"
  llvm_cbe_tmp9 = *(&llvm_cbe___len);
#line 1140 "stl_vector.h"
  llvm_cbe_call10 = _ZNKSt6vectorIPiSaIS0_EE4sizeEv(llvm_cbe_this1);
#line 1140 "stl_vector.h"
  if ((((unsigned long long )llvm_cbe_tmp9) < ((unsigned long long )llvm_cbe_call10))) {    goto llvm_cbe_cond_2e_true;  } else {    goto llvm_cbe_lor_2e_lhs_2e_false;  }


llvm_cbe_lor_2e_lhs_2e_false:
#line 1140 "stl_vector.h"
  llvm_cbe_tmp12 = *(&llvm_cbe___len);
#line 1140 "stl_vector.h"
  llvm_cbe_call13 = _ZNKSt6vectorIPiSaIS0_EE8max_sizeEv(llvm_cbe_this1);
#line 1140 "stl_vector.h"
  if ((((unsigned long long )llvm_cbe_tmp12) > ((unsigned long long )llvm_cbe_call13))) {    goto llvm_cbe_cond_2e_true;  } else {    goto llvm_cbe_cond_2e_false;  }


llvm_cbe_cond_2e_true:
#line 1140 "stl_vector.h"
  llvm_cbe_call15 = _ZNKSt6vectorIPiSaIS0_EE8max_sizeEv(llvm_cbe_this1);
#line 1140 "stl_vector.h"
  llvm_cbe_cond__PHI_TEMPORARY = llvm_cbe_call15;   /* for PHI node */
  goto llvm_cbe_cond_2e_end;

llvm_cbe_cond_2e_false:
#line 1140 "stl_vector.h"
  llvm_cbe_tmp16 = *(&llvm_cbe___len);
#line 1140 "stl_vector.h"
  llvm_cbe_cond__PHI_TEMPORARY = llvm_cbe_tmp16;   /* for PHI node */
  goto llvm_cbe_cond_2e_end;

llvm_cbe_cond_2e_end:
#line 1140 "stl_vector.h"
  llvm_cbe_cond = llvm_cbe_cond__PHI_TEMPORARY;
#line 1140 "stl_vector.h"
  *(&llvm_cbe_retval) = llvm_cbe_cond;
#line 1141 "stl_vector.h"
  llvm_cbe_tmp__30 = *(&llvm_cbe_retval);
#line 1141 "stl_vector.h"
  return llvm_cbe_tmp__30;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZN9__gnu_cxxmiIPPiSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___lhs, struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___rhs) {
  unsigned long long llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___lhs_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe___rhs_2e_addr;    /* Address-exposed local */
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_tmp;
  unsigned int ***llvm_cbe_call;
  unsigned int **llvm_cbe_tmp1;
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator *llvm_cbe_tmp2;
  unsigned int ***llvm_cbe_call3;
  unsigned int **llvm_cbe_tmp4;
  unsigned long long llvm_cbe_tmp__31;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___lhs_2e_addr) = llvm_cbe___lhs;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___rhs_2e_addr) = llvm_cbe___rhs;
#line 858 "stl_iterator.h"
  llvm_cbe_tmp = *(&llvm_cbe___lhs_2e_addr);
#line 858 "stl_iterator.h"
  llvm_cbe_call = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv(llvm_cbe_tmp);
#line 858 "stl_iterator.h"
  llvm_cbe_tmp1 = *llvm_cbe_call;
#line 858 "stl_iterator.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___rhs_2e_addr);
#line 858 "stl_iterator.h"
  llvm_cbe_call3 = _ZNK9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEE4baseEv(llvm_cbe_tmp2);
#line 858 "stl_iterator.h"
  llvm_cbe_tmp4 = *llvm_cbe_call3;
#line 858 "stl_iterator.h"
  *(&llvm_cbe_retval) = (((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp1))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp4))))))) / ((signed long long )8ull))));
#line 858 "stl_iterator.h"
  llvm_cbe_tmp__31 = *(&llvm_cbe_retval);
#line 858 "stl_iterator.h"
  return llvm_cbe_tmp__31;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZNSt6vectorIPiSaIS0_EE5beginEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC___gnu_cxx_KD__KD___normal_iterator llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned long long llvm_cbe_tmp__32;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 426 "stl_vector.h"
  _ZN9__gnu_cxx17__normal_iteratorIPPiSt6vectorIS1_SaIS1_EEEC1ERKS2_((&llvm_cbe_retval), ((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0)));
#line 426 "stl_vector.h"
  llvm_cbe_tmp__32 = ((struct __attribute__ ((packed, aligned(1))) {unsigned long long data; } *)(((unsigned long long *)(&llvm_cbe_retval))))->data;
#line 426 "stl_vector.h"
  return llvm_cbe_tmp__32;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt12_Vector_baseIPiSaIS0_EE11_M_allocateEm(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this, unsigned long long llvm_cbe___n) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___n_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;
  unsigned long long llvm_cbe_tmp;
  unsigned long long llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_cond;
  unsigned int **llvm_cbe_cond__PHI_TEMPORARY;
  unsigned int **llvm_cbe_tmp__33;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___n_2e_addr) = llvm_cbe___n;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 140 "stl_vector.h"
  llvm_cbe_tmp = *(&llvm_cbe___n_2e_addr);
#line 140 "stl_vector.h"
  if ((llvm_cbe_tmp != 0ull)) {    goto llvm_cbe_cond_2e_true;  } else {    llvm_cbe_cond__PHI_TEMPORARY = ((unsigned int **)/*NULL*/0);   /* for PHI node */
    goto llvm_cbe_cond_2e_end;  }


llvm_cbe_cond_2e_true:
#line 140 "stl_vector.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___n_2e_addr);
#line 140 "stl_vector.h"
  llvm_cbe_call = _ZN9__gnu_cxx13new_allocatorIPiE8allocateEmPKv((((struct l_class_OC_DummyStream *)((&llvm_cbe_this1->field0)))), llvm_cbe_tmp3, ((unsigned char *)/*NULL*/0));
#line 140 "stl_vector.h"
  llvm_cbe_cond__PHI_TEMPORARY = llvm_cbe_call;   /* for PHI node */
  goto llvm_cbe_cond_2e_end;

llvm_cbe_cond_2e_end:
#line 140 "stl_vector.h"
  llvm_cbe_cond = llvm_cbe_cond__PHI_TEMPORARY;
#line 140 "stl_vector.h"
  *(&llvm_cbe_retval) = llvm_cbe_cond;
#line 140 "stl_vector.h"
  llvm_cbe_tmp__33 = *(&llvm_cbe_retval);
#line 140 "stl_vector.h"
  return llvm_cbe_tmp__33;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt22__uninitialized_move_aIPPiS1_SaIS0_EET0_T_S4_S3_RT1_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result, struct l_class_OC_DummyStream *llvm_cbe___alloc) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe___alloc_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  struct l_class_OC_DummyStream *llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__34;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___alloc_2e_addr) = llvm_cbe___alloc;
#line 265 "stl_uninitialized.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 265 "stl_uninitialized.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 265 "stl_uninitialized.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 265 "stl_uninitialized.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___alloc_2e_addr);
#line 265 "stl_uninitialized.h"
  llvm_cbe_call = _ZSt22__uninitialized_copy_aIPPiS1_S0_ET0_T_S3_S2_RSaIT1_E(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2, llvm_cbe_tmp3);
#line 265 "stl_uninitialized.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 268 "stl_uninitialized.h"
  llvm_cbe_tmp__34 = *(&llvm_cbe_retval);
#line 268 "stl_uninitialized.h"
  return llvm_cbe_tmp__34;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_DummyStream *_ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) {
  struct l_class_OC_DummyStream *llvm_cbe_retval;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;
  struct l_class_OC_DummyStream *llvm_cbe_tmp__35;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 94 "stl_vector.h"
  *(&llvm_cbe_retval) = (((struct l_class_OC_DummyStream *)((&llvm_cbe_this1->field0))));
#line 94 "stl_vector.h"
  llvm_cbe_tmp__35 = *(&llvm_cbe_retval);
#line 94 "stl_vector.h"
  return llvm_cbe_tmp__35;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx13new_allocatorIPiE7destroyEPS1_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p) {
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___p_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___p_2e_addr) = llvm_cbe___p;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 115 "new_allocator.h"
  llvm_cbe_tmp = *(&llvm_cbe___p_2e_addr);
#line 115 "new_allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZSt8_DestroyIPPiS0_EvT_S2_RSaIT0_E(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, struct l_class_OC_DummyStream *llvm_cbe_tmp__36) {
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe__2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__36;
#line 142 "stl_construct.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 142 "stl_construct.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 142 "stl_construct.h"
  _ZSt8_DestroyIPPiEvT_S2_(llvm_cbe_tmp, llvm_cbe_tmp1);
#line 143 "stl_construct.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EE13_M_deallocateEPS0_m(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned long long llvm_cbe___n) {
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___p_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___n_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp3;
  unsigned long long llvm_cbe_tmp4;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___p_2e_addr) = llvm_cbe___p;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___n_2e_addr) = llvm_cbe___n;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 145 "stl_vector.h"
  llvm_cbe_tmp = *(&llvm_cbe___p_2e_addr);
#line 145 "stl_vector.h"
  if ((llvm_cbe_tmp != ((unsigned int **)/*NULL*/0))) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 146 "stl_vector.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___p_2e_addr);
#line 146 "stl_vector.h"
  llvm_cbe_tmp4 = *(&llvm_cbe___n_2e_addr);
#line 146 "stl_vector.h"
  _ZN9__gnu_cxx13new_allocatorIPiE10deallocateEPS1_m((((struct l_class_OC_DummyStream *)((&llvm_cbe_this1->field0)))), llvm_cbe_tmp3, llvm_cbe_tmp4);
#line 147 "stl_vector.h"
  return;

llvm_cbe_if_2e_end:
#line 147 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx13new_allocatorIPiE10deallocateEPS1_m(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned int **llvm_cbe___p, unsigned long long llvm_cbe_tmp__37) {
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___p_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe__2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___p_2e_addr) = llvm_cbe___p;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__37;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 95 "new_allocator.h"
  llvm_cbe_tmp = *(&llvm_cbe___p_2e_addr);
#line 95 "new_allocator.h"
  _ZdlPv((((unsigned char *)llvm_cbe_tmp)));
#line 95 "new_allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZSt8_DestroyIPPiEvT_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last) {
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 116 "stl_construct.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 116 "stl_construct.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 116 "stl_construct.h"
  _ZNSt12_Destroy_auxILb1EE9__destroyIPPiEEvT_S4_(llvm_cbe_tmp, llvm_cbe_tmp1);
#line 118 "stl_construct.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Destroy_auxILb1EE9__destroyIPPiEEvT_S4_(unsigned int **llvm_cbe_tmp__38, unsigned int **llvm_cbe_tmp__39) {
  unsigned int **llvm_cbe__2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe__2e_addr1;    /* Address-exposed local */

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__38;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr1) = llvm_cbe_tmp__39;
#line 102 "stl_construct.h"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt22__uninitialized_copy_aIPPiS1_S0_ET0_T_S3_S2_RSaIT1_E(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result, struct l_class_OC_DummyStream *llvm_cbe_tmp__40) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe__2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__41;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__40;
#line 257 "stl_uninitialized.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 257 "stl_uninitialized.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 257 "stl_uninitialized.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 257 "stl_uninitialized.h"
  llvm_cbe_call = _ZSt18uninitialized_copyIPPiS1_ET0_T_S3_S2_(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2);
#line 257 "stl_uninitialized.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 257 "stl_uninitialized.h"
  llvm_cbe_tmp__41 = *(&llvm_cbe_retval);
#line 257 "stl_uninitialized.h"
  return llvm_cbe_tmp__41;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt18uninitialized_copyIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__42;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 115 "stl_uninitialized.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 115 "stl_uninitialized.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 115 "stl_uninitialized.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 115 "stl_uninitialized.h"
  llvm_cbe_call = _ZNSt20__uninitialized_copyILb1EE18uninitialized_copyIPPiS3_EET0_T_S5_S4_(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2);
#line 115 "stl_uninitialized.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 118 "stl_uninitialized.h"
  llvm_cbe_tmp__42 = *(&llvm_cbe_retval);
#line 118 "stl_uninitialized.h"
  return llvm_cbe_tmp__42;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt20__uninitialized_copyILb1EE18uninitialized_copyIPPiS3_EET0_T_S5_S4_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__43;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 93 "stl_uninitialized.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 93 "stl_uninitialized.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 93 "stl_uninitialized.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 93 "stl_uninitialized.h"
  llvm_cbe_call = _ZSt4copyIPPiS1_ET0_T_S3_S2_(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2);
#line 93 "stl_uninitialized.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 93 "stl_uninitialized.h"
  llvm_cbe_tmp__43 = *(&llvm_cbe_retval);
#line 93 "stl_uninitialized.h"
  return llvm_cbe_tmp__43;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt4copyIPPiS1_ET0_T_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_call2;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call4;
  unsigned int **llvm_cbe_tmp__44;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 466 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 466 "stl_algobase.h"
  llvm_cbe_call = _ZNSt12__miter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp);
#line 466 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 466 "stl_algobase.h"
  llvm_cbe_call2 = _ZNSt12__miter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp1);
#line 466 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___result_2e_addr);
#line 466 "stl_algobase.h"
  llvm_cbe_call4 = _ZSt14__copy_move_a2ILb0EPPiS1_ET1_T0_S3_S2_(llvm_cbe_call, llvm_cbe_call2, llvm_cbe_tmp3);
#line 466 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call4;
#line 469 "stl_algobase.h"
  llvm_cbe_tmp__44 = *(&llvm_cbe_retval);
#line 469 "stl_algobase.h"
  return llvm_cbe_tmp__44;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt14__copy_move_a2ILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_call2;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call4;
  unsigned int **llvm_cbe_call5;
  unsigned int **llvm_cbe_tmp__45;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 433 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 433 "stl_algobase.h"
  llvm_cbe_call = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp);
#line 433 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 433 "stl_algobase.h"
  llvm_cbe_call2 = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp1);
#line 433 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___result_2e_addr);
#line 433 "stl_algobase.h"
  llvm_cbe_call4 = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp3);
#line 433 "stl_algobase.h"
  llvm_cbe_call5 = _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_(llvm_cbe_call, llvm_cbe_call2, llvm_cbe_call4);
#line 433 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call5;
#line 437 "stl_algobase.h"
  llvm_cbe_tmp__45 = *(&llvm_cbe_retval);
#line 437 "stl_algobase.h"
  return llvm_cbe_tmp__45;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt12__miter_baseIPPiLb0EE3__bES1_(unsigned int **llvm_cbe___it) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___it_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp__46;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___it_2e_addr) = llvm_cbe___it;
#line 288 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___it_2e_addr);
#line 288 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_tmp;
#line 288 "stl_algobase.h"
  llvm_cbe_tmp__46 = *(&llvm_cbe_retval);
#line 288 "stl_algobase.h"
  return llvm_cbe_tmp__46;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned char llvm_cbe___simple;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__47;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 394 "stl_algobase.h"
  *(&llvm_cbe___simple) = ((unsigned char )1);
#line 396 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 396 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 396 "stl_algobase.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 396 "stl_algobase.h"
  llvm_cbe_call = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIPiEEPT_PKS4_S7_S5_(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2);
#line 396 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 398 "stl_algobase.h"
  llvm_cbe_tmp__47 = *(&llvm_cbe_retval);
#line 398 "stl_algobase.h"
  return llvm_cbe_tmp__47;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt12__niter_baseIPPiLb0EE3__bES1_(unsigned int **llvm_cbe___it) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___it_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp__48;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___it_2e_addr) = llvm_cbe___it;
#line 270 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___it_2e_addr);
#line 270 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_tmp;
#line 270 "stl_algobase.h"
  llvm_cbe_tmp__48 = *(&llvm_cbe_retval);
#line 270 "stl_algobase.h"
  return llvm_cbe_tmp__48;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIPiEEPT_PKS4_S7_S5_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp4;
  unsigned char *llvm_cbe_tmp__49;
  unsigned int **llvm_cbe_tmp5;
  unsigned int **llvm_cbe_tmp6;
  unsigned int **llvm_cbe_tmp7;
  unsigned int **llvm_cbe_tmp__50;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 378 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___result_2e_addr);
#line 378 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___first_2e_addr);
#line 378 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___last_2e_addr);
#line 378 "stl_algobase.h"
  llvm_cbe_tmp4 = *(&llvm_cbe___first_2e_addr);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp__49 = memmove((((unsigned char *)llvm_cbe_tmp)), (((unsigned char *)llvm_cbe_tmp1)), (((unsigned long long )(((unsigned long long )8ull) * ((unsigned long long )(((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp3))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp4))))))) / ((signed long long )8ull)))))))));
#line 380 "stl_algobase.h"
  llvm_cbe_tmp5 = *(&llvm_cbe___result_2e_addr);
#line 380 "stl_algobase.h"
  llvm_cbe_tmp6 = *(&llvm_cbe___last_2e_addr);
#line 380 "stl_algobase.h"
  llvm_cbe_tmp7 = *(&llvm_cbe___first_2e_addr);
#line 380 "stl_algobase.h"
  *(&llvm_cbe_retval) = ((&llvm_cbe_tmp5[((signed long long )(((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp6))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp7))))))) / ((signed long long )8ull)))))]));
#line 381 "stl_algobase.h"
  llvm_cbe_tmp__50 = *(&llvm_cbe_retval);
#line 381 "stl_algobase.h"
  return llvm_cbe_tmp__50;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZN9__gnu_cxx13new_allocatorIPiE8allocateEmPKv(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned long long llvm_cbe___n, unsigned char *llvm_cbe_tmp__51) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe___n_2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe__2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  unsigned long long llvm_cbe_tmp;
  unsigned long long llvm_cbe_call;
  unsigned long long llvm_cbe_tmp2;
  unsigned char *llvm_cbe_call3;
  unsigned int **llvm_cbe_tmp__52;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___n_2e_addr) = llvm_cbe___n;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__51;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 86 "new_allocator.h"
  llvm_cbe_tmp = *(&llvm_cbe___n_2e_addr);
#line 86 "new_allocator.h"
  llvm_cbe_call = _ZNK9__gnu_cxx13new_allocatorIPiE8max_sizeEv(llvm_cbe_this1);
#line 86 "new_allocator.h"
  if ((((unsigned long long )llvm_cbe_tmp) > ((unsigned long long )llvm_cbe_call))) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 87 "new_allocator.h"
  _ZSt17__throw_bad_allocv();
#line 87 "new_allocator.h"
  /*UNREACHABLE*/;

llvm_cbe_if_2e_end:
#line 89 "new_allocator.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___n_2e_addr);
#line 89 "new_allocator.h"
  llvm_cbe_call3 = _Znwm((((unsigned long long )(((unsigned long long )llvm_cbe_tmp2) * ((unsigned long long )8ull)))));
#line 89 "new_allocator.h"
  *(&llvm_cbe_retval) = (((unsigned int **)llvm_cbe_call3));
#line 90 "new_allocator.h"
  llvm_cbe_tmp__52 = *(&llvm_cbe_retval);
#line 90 "new_allocator.h"
  return llvm_cbe_tmp__52;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZNK9__gnu_cxx13new_allocatorIPiE8max_sizeEv(struct l_class_OC_DummyStream *llvm_cbe_this) {
  unsigned long long llvm_cbe_retval;    /* Address-exposed local */
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  unsigned long long llvm_cbe_tmp__53;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 99 "new_allocator.h"
  *(&llvm_cbe_retval) = 2305843009213693951ull;
#line 99 "new_allocator.h"
  llvm_cbe_tmp__53 = *(&llvm_cbe_retval);
#line 99 "new_allocator.h"
  return llvm_cbe_tmp__53;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZNKSt6vectorIPiSaIS0_EE8max_sizeEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  unsigned long long llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  struct l_class_OC_DummyStream *llvm_cbe_call;
  unsigned long long llvm_cbe_call2;
  unsigned long long llvm_cbe_tmp__54;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 538 "stl_vector.h"
  llvm_cbe_call = _ZNKSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 538 "stl_vector.h"
  llvm_cbe_call2 = _ZNK9__gnu_cxx13new_allocatorIPiE8max_sizeEv(llvm_cbe_call);
#line 538 "stl_vector.h"
  *(&llvm_cbe_retval) = llvm_cbe_call2;
#line 538 "stl_vector.h"
  llvm_cbe_tmp__54 = *(&llvm_cbe_retval);
#line 538 "stl_vector.h"
  return llvm_cbe_tmp__54;
}


#line 0 "LLVM INTERNAL"
unsigned long long _ZNKSt6vectorIPiSaIS0_EE4sizeEv(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  unsigned long long llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp6;
  unsigned long long llvm_cbe_tmp__55;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 533 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 533 "stl_vector.h"
  llvm_cbe_tmp6 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 533 "stl_vector.h"
  *(&llvm_cbe_retval) = (((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp3))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp6))))))) / ((signed long long )8ull))));
#line 533 "stl_vector.h"
  llvm_cbe_tmp__55 = *(&llvm_cbe_retval);
#line 533 "stl_vector.h"
  return llvm_cbe_tmp__55;
}


#line 0 "LLVM INTERNAL"
unsigned long long *_ZSt3maxImERKT_S2_S2_(unsigned long long *llvm_cbe___a, unsigned long long *llvm_cbe___b) {
  unsigned long long *llvm_cbe_retval;    /* Address-exposed local */
  unsigned long long *llvm_cbe___a_2e_addr;    /* Address-exposed local */
  unsigned long long *llvm_cbe___b_2e_addr;    /* Address-exposed local */
  unsigned long long *llvm_cbe_tmp;
  unsigned long long llvm_cbe_tmp1;
  unsigned long long *llvm_cbe_tmp2;
  unsigned long long llvm_cbe_tmp3;
  unsigned long long *llvm_cbe_tmp4;
  unsigned long long *llvm_cbe_tmp5;
  unsigned long long *llvm_cbe_tmp__56;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___a_2e_addr) = llvm_cbe___a;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___b_2e_addr) = llvm_cbe___b;
#line 214 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___a_2e_addr);
#line 214 "stl_algobase.h"
  llvm_cbe_tmp1 = *llvm_cbe_tmp;
#line 214 "stl_algobase.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___b_2e_addr);
#line 214 "stl_algobase.h"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 214 "stl_algobase.h"
  if ((((unsigned long long )llvm_cbe_tmp1) < ((unsigned long long )llvm_cbe_tmp3))) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 215 "stl_algobase.h"
  llvm_cbe_tmp4 = *(&llvm_cbe___b_2e_addr);
#line 215 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_tmp4;
#line 215 "stl_algobase.h"
  goto llvm_cbe_return;

llvm_cbe_if_2e_end:
#line 216 "stl_algobase.h"
  llvm_cbe_tmp5 = *(&llvm_cbe___a_2e_addr);
#line 216 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_tmp5;
#line 216 "stl_algobase.h"
  goto llvm_cbe_return;

llvm_cbe_return:
#line 217 "stl_algobase.h"
  llvm_cbe_tmp__56 = *(&llvm_cbe_retval);
#line 217 "stl_algobase.h"
  return llvm_cbe_tmp__56;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_DummyStream *_ZNKSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) {
  struct l_class_OC_DummyStream *llvm_cbe_retval;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;
  struct l_class_OC_DummyStream *llvm_cbe_tmp__57;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 98 "stl_vector.h"
  *(&llvm_cbe_retval) = (((struct l_class_OC_DummyStream *)((&llvm_cbe_this1->field0))));
#line 98 "stl_vector.h"
  llvm_cbe_tmp__57 = *(&llvm_cbe_retval);
#line 98 "stl_vector.h"
  return llvm_cbe_tmp__57;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_call2;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_call4;
  unsigned int **llvm_cbe_call5;
  unsigned int **llvm_cbe_tmp__58;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 602 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 602 "stl_algobase.h"
  llvm_cbe_call = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp);
#line 602 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 602 "stl_algobase.h"
  llvm_cbe_call2 = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp1);
#line 602 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe___result_2e_addr);
#line 602 "stl_algobase.h"
  llvm_cbe_call4 = _ZNSt12__niter_baseIPPiLb0EE3__bES1_(llvm_cbe_tmp3);
#line 602 "stl_algobase.h"
  llvm_cbe_call5 = _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_(llvm_cbe_call, llvm_cbe_call2, llvm_cbe_call4);
#line 602 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call5;
#line 606 "stl_algobase.h"
  llvm_cbe_tmp__58 = *(&llvm_cbe_retval);
#line 606 "stl_algobase.h"
  return llvm_cbe_tmp__58;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned char llvm_cbe___simple;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned int **llvm_cbe_call;
  unsigned int **llvm_cbe_tmp__59;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 590 "stl_algobase.h"
  *(&llvm_cbe___simple) = ((unsigned char )1);
#line 592 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___first_2e_addr);
#line 592 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___last_2e_addr);
#line 592 "stl_algobase.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 592 "stl_algobase.h"
  llvm_cbe_call = _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIPiEEPT_PKS4_S7_S5_(llvm_cbe_tmp, llvm_cbe_tmp1, llvm_cbe_tmp2);
#line 592 "stl_algobase.h"
  *(&llvm_cbe_retval) = llvm_cbe_call;
#line 596 "stl_algobase.h"
  llvm_cbe_tmp__59 = *(&llvm_cbe_retval);
#line 596 "stl_algobase.h"
  return llvm_cbe_tmp__59;
}


#line 0 "LLVM INTERNAL"
unsigned int **_ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIPiEEPT_PKS4_S7_S5_(unsigned int **llvm_cbe___first, unsigned int **llvm_cbe___last, unsigned int **llvm_cbe___result) {
  unsigned int **llvm_cbe_retval;    /* Address-exposed local */
  unsigned int **llvm_cbe___first_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___last_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe___result_2e_addr;    /* Address-exposed local */
  unsigned long long llvm_cbe__Num;    /* Address-exposed local */
  unsigned int **llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp1;
  unsigned int **llvm_cbe_tmp2;
  unsigned long long llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp4;
  unsigned long long llvm_cbe_tmp6;
  unsigned char *llvm_cbe_tmp__60;
  unsigned int **llvm_cbe_tmp7;
  unsigned long long llvm_cbe_tmp8;
  unsigned int **llvm_cbe_tmp__61;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___first_2e_addr) = llvm_cbe___first;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___last_2e_addr) = llvm_cbe___last;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___result_2e_addr) = llvm_cbe___result;
#line 574 "stl_algobase.h"
  llvm_cbe_tmp = *(&llvm_cbe___last_2e_addr);
#line 574 "stl_algobase.h"
  llvm_cbe_tmp1 = *(&llvm_cbe___first_2e_addr);
#line 574 "stl_algobase.h"
  *(&llvm_cbe__Num) = (((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp1))))))) / ((signed long long )8ull))));
#line 575 "stl_algobase.h"
  llvm_cbe_tmp2 = *(&llvm_cbe___result_2e_addr);
#line 575 "stl_algobase.h"
  llvm_cbe_tmp3 = *(&llvm_cbe__Num);
#line 575 "stl_algobase.h"
  llvm_cbe_tmp4 = *(&llvm_cbe___first_2e_addr);
#line 575 "stl_algobase.h"
  llvm_cbe_tmp6 = *(&llvm_cbe__Num);
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp__60 = memmove((((unsigned char *)((&llvm_cbe_tmp2[((signed long long )(-(llvm_cbe_tmp3)))])))), (((unsigned char *)llvm_cbe_tmp4)), (((unsigned long long )(((unsigned long long )8ull) * ((unsigned long long )llvm_cbe_tmp6)))));
#line 576 "stl_algobase.h"
  llvm_cbe_tmp7 = *(&llvm_cbe___result_2e_addr);
#line 576 "stl_algobase.h"
  llvm_cbe_tmp8 = *(&llvm_cbe__Num);
#line 576 "stl_algobase.h"
  *(&llvm_cbe_retval) = ((&llvm_cbe_tmp7[((signed long long )(-(llvm_cbe_tmp8)))]));
#line 577 "stl_algobase.h"
  llvm_cbe_tmp__61 = *(&llvm_cbe_retval);
#line 577 "stl_algobase.h"
  return llvm_cbe_tmp__61;
}


#line 0 "LLVM INTERNAL"
unsigned char *_ZnwmPv(unsigned long long llvm_cbe_tmp__62, unsigned char *llvm_cbe___p) {
  unsigned char *llvm_cbe_retval;    /* Address-exposed local */
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  unsigned long long llvm_cbe__2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe___p_2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe_tmp;
  unsigned char *llvm_cbe_tmp__63;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe__2e_addr) = llvm_cbe_tmp__62;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe___p_2e_addr) = llvm_cbe___p;
#line 101 "new"
  llvm_cbe_tmp = *(&llvm_cbe___p_2e_addr);
#line 101 "new"
  *(&llvm_cbe_retval) = llvm_cbe_tmp;
#line 101 "new"
  llvm_cbe_tmp__63 = *(&llvm_cbe_retval);
#line 101 "new"
  return llvm_cbe_tmp__63;
}


#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EED2Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp6;
  struct l_class_OC_DummyStream *llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 313 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field0));
#line 313 "stl_vector.h"
  llvm_cbe_tmp6 = *((&((&(((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1))->field0))->field1));
#line 313 "stl_vector.h"
  llvm_cbe_call = _ZNSt12_Vector_baseIPiSaIS0_EE19_M_get_Tp_allocatorEv((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 313 "stl_vector.h"
  _ZSt8_DestroyIPPiS0_EvT_S2_RSaIT0_E(llvm_cbe_tmp3, llvm_cbe_tmp6, llvm_cbe_call);
#line 314 "stl_vector.h"
  _ZNSt12_Vector_baseIPiSaIS0_EED2Ev((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 314 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EED2Ev(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp6;
  unsigned int **llvm_cbe_tmp9;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 132 "stl_vector.h"
  llvm_cbe_tmp3 = *((&((&llvm_cbe_this1->field0))->field0));
#line 132 "stl_vector.h"
  llvm_cbe_tmp6 = *((&((&llvm_cbe_this1->field0))->field2));
#line 132 "stl_vector.h"
  llvm_cbe_tmp9 = *((&((&llvm_cbe_this1->field0))->field0));
#line 132 "stl_vector.h"
  _ZNSt12_Vector_baseIPiSaIS0_EE13_M_deallocateEPS0_m(llvm_cbe_this1, llvm_cbe_tmp3, (((signed long long )(((signed long long )(((unsigned long long )(((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp6))) - ((unsigned long long )(((unsigned long long )(unsigned long)llvm_cbe_tmp9))))))) / ((signed long long )8ull)))));
#line 133 "stl_vector.h"
  _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD1Ev(((&llvm_cbe_this1->field0)));
#line 133 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD1Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD2Ev(llvm_cbe_this1);
#line 73 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implD2Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSaIPiED2Ev((((struct l_class_OC_DummyStream *)llvm_cbe_this1)));
#line 73 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSaIPiED2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) {
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 109 "allocator.h"
  _ZN9__gnu_cxx13new_allocatorIPiED2Ev(llvm_cbe_this1);
#line 109 "allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx13new_allocatorIPiED2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) {
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 73 "new_allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt6vectorIPiSaIS0_EEC2Ev(struct l_class_OC_std_KD__KD_vector *llvm_cbe_this) {
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_std_KD__KD_vector *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt12_Vector_baseIPiSaIS0_EEC2Ev((((struct l_struct_OC_std_KD__KD__Vector_base *)llvm_cbe_this1)));
#line 208 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EEC2Ev(struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC1Ev(((&llvm_cbe_this1->field0)));
#line 105 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC1Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC2Ev(llvm_cbe_this1);
#line 82 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSt12_Vector_baseIPiSaIS0_EE12_Vector_implC2Ev(struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this) {
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_std_KD__KD__Vector_base_MD_int_AC__KC__MC__AC_std_KD__KD_allocator_MD_int_AC__KC__OD__AC__OD__KD__KD__Vector_impl *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZNSaIPiEC2Ev((((struct l_class_OC_DummyStream *)llvm_cbe_this1)));
#line 0 "LLVM INTERNAL"
  *((&llvm_cbe_this1->field0)) = ((unsigned int **)/*NULL*/0);
#line 0 "LLVM INTERNAL"
  *((&llvm_cbe_this1->field1)) = ((unsigned int **)/*NULL*/0);
#line 0 "LLVM INTERNAL"
  *((&llvm_cbe_this1->field2)) = ((unsigned int **)/*NULL*/0);
#line 82 "stl_vector.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZNSaIPiEC2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) {
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN9__gnu_cxx13new_allocatorIPiEC2Ev(llvm_cbe_this1);
#line 101 "allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN9__gnu_cxx13new_allocatorIPiEC2Ev(struct l_class_OC_DummyStream *llvm_cbe_this) {
  unsigned char *llvm_cbe__rethrow;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 66 "new_allocator.h"
  return;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_DummyStream *_ZN11DummyStreamlsIPKcEERS_T_(struct l_class_OC_DummyStream *llvm_cbe_this, unsigned char *llvm_cbe_arg) {
  struct l_class_OC_DummyStream *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe_arg_2e_addr;    /* Address-exposed local */
  struct l_class_OC_DummyStream *llvm_cbe_this1;
  struct l_class_OC_DummyStream *llvm_cbe_tmp__64;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_arg_2e_addr) = llvm_cbe_arg;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 87 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_this1;
#line 88 "small.cpp"
  llvm_cbe_tmp__64 = *(&llvm_cbe_retval);
#line 88 "small.cpp"
  return llvm_cbe_tmp__64;
}


#line 0 "LLVM INTERNAL"
void _ZN3UESD2Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV3UES.array[((signed long long )2ull)]));
#line 387 "small.cpp"
  llvm_cbe_call = printf(((&_OC_str2.array[((signed int )0u)])));
#line 388 "small.cpp"
  _ZN8SubUES_XD1Ev(((&llvm_cbe_this1->field5)));
#line 388 "small.cpp"
  _ZN3FSMD2Ev((((struct l_class_OC_FSM *)llvm_cbe_this1)));
#line 388 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_XD1Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN8SubUES_XD2Ev(llvm_cbe_this1);
#line 340 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3FSMD2Ev(struct l_class_OC_FSM *llvm_cbe_this) {
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;
  unsigned int llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV3FSM.array[((signed long long )2ull)]));
#line 175 "small.cpp"
  llvm_cbe_call = printf(((&_OC_str5.array[((signed int )0u)])));
#line 176 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3FSM7FakeFunEP9UEC_Event(struct l_class_OC_FSM *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__65;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 164 "small.cpp"
  *(&llvm_cbe_retval) = ((struct l_class_OC_CBaseFSM *)/*NULL*/0);
#line 164 "small.cpp"
  llvm_cbe_tmp__65 = *(&llvm_cbe_retval);
#line 164 "small.cpp"
  return llvm_cbe_tmp__65;
}


void _ZN5DummyC1Ev(struct l_class_OC_Dummy *llvm_cbe_this);

#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN3UES12ReceiveEventEP9UEC_Event(struct l_class_OC_UES *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pt1;    /* Address-exposed local */
  unsigned int *llvm_cbe_pt2;    /* Address-exposed local */
  unsigned int *llvm_cbe_pt3;    /* Address-exposed local */
  unsigned int llvm_cbe_abc;    /* Address-exposed local */
  unsigned int llvm_cbe_mi;    /* Address-exposed local */
  unsigned int *llvm_cbe_will_be_glob;    /* Address-exposed local */
  unsigned int *llvm_cbe_might_be_glob;    /* Address-exposed local */
  unsigned int **llvm_cbe_p1;    /* Address-exposed local */
  unsigned int *llvm_cbe_p2;    /* Address-exposed local */
  unsigned int *llvm_cbe_p3;    /* Address-exposed local */
  unsigned int llvm_cbe_tmp52;    /* Address-exposed local */
  unsigned int *llvm_cbe_pno_ext;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_lev;    /* Address-exposed local */
  unsigned int *llvm_cbe_psx;    /* Address-exposed local */
  struct l_class_OC_Dummy llvm_cbe_d;    /* Address-exposed local */
  unsigned int *llvm_cbe_di;    /* Address-exposed local */
  struct l_unnamed16 llvm_cbe_coerce;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_call;
  unsigned int *llvm_cbe_call2;
  unsigned int *llvm_cbe_tmp3;
  unsigned int *llvm_cbe_tmp4;
  unsigned int *llvm_cbe_tmp5;
  unsigned int *llvm_cbe_call7;
  unsigned int *llvm_cbe_tmp10;
  unsigned int llvm_cbe_tmp12;
  unsigned int *llvm_cbe_tmp15;
  unsigned int *llvm_cbe_tmp16;
  unsigned int *llvm_cbe_tmp19;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp24;
  unsigned char *llvm_cbe_call26;
  unsigned int *llvm_cbe_call27;
  unsigned int **llvm_cbe_tmp28;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp30;
  unsigned char *llvm_cbe_call32;
  unsigned int *llvm_cbe_tmp33;
  unsigned int *llvm_cbe_tmp35;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp36;
  unsigned char *llvm_cbe_call38;
  unsigned int *llvm_cbe_tmp39;
  unsigned char *llvm_cbe_call41;
  unsigned int *llvm_cbe_call43;
  unsigned int *llvm_cbe_tmp44;
  unsigned int llvm_cbe_tmp45;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp46;
  unsigned int *llvm_cbe_tmp48;
  unsigned int llvm_cbe_tmp49;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp53;
  unsigned int llvm_cbe_tmp55;
  unsigned int llvm_cbe_tmp56;
  unsigned int *llvm_cbe_call60;
  unsigned int llvm_cbe_tmp62;
  unsigned int *llvm_cbe_tmp63;
  unsigned int llvm_cbe_tmp65;
  unsigned int llvm_cbe_call66;
  unsigned int llvm_cbe_tmp68;
  struct l_class_OC_SubUES_X *llvm_cbe_tmp74;
  struct l_class_OC_CBaseFSM * (**llvm_cbe_tmp__66) (struct l_class_OC_SubUES_X *, struct l_struct_OC_UEC_Event *);
  struct l_class_OC_CBaseFSM * (*llvm_cbe_tmp__67) (struct l_class_OC_SubUES_X *, struct l_struct_OC_UEC_Event *);
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp75;
  struct l_class_OC_CBaseFSM *llvm_cbe_call76;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp77;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp79;
  struct l_unnamed16 llvm_cbe_call85;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__68;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 578 "small.cpp"
  *(&llvm_cbe_pt1) = ((unsigned int *)/*NULL*/0);
#line 579 "small.cpp"
  *(&llvm_cbe_pt2) = ((unsigned int *)/*NULL*/0);
#line 580 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pt2);
#line 580 "small.cpp"
  llvm_cbe_call = _ZN3UES3PrvEPPiS0_(llvm_cbe_this1, (&llvm_cbe_pt1), llvm_cbe_tmp);
#line 580 "small.cpp"
  *(&llvm_cbe_pt3) = llvm_cbe_call;
#line 583 "small.cpp"
  llvm_cbe_call2 = _ZN3UES7GetGlobEv(llvm_cbe_this1);
#line 583 "small.cpp"
  *(&llvm_cbe_pt2) = llvm_cbe_call2;
#line 583 "small.cpp"
   // WARN;
#line 585 "small.cpp"
  llvm_cbe_tmp3 = *(&llvm_cbe_pt1);
#line 585 "small.cpp"
  *llvm_cbe_tmp3 = 0u;
#line 585 "small.cpp"
   // WARN;
#line 586 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_pt2);
#line 586 "small.cpp"
  *llvm_cbe_tmp4 = 0u;
#line 586 "small.cpp"
   // WARN;
#line 587 "small.cpp"
  llvm_cbe_tmp5 = *(&llvm_cbe_pt3);
#line 587 "small.cpp"
  *llvm_cbe_tmp5 = 0u;
#line 587 "small.cpp"
   // WARN;
#line 589 "small.cpp"
  *(&llvm_cbe_abc) = 0u;
#line 591 "small.cpp"
  llvm_cbe_call7 = _ZN3UES7GetGlobEv(llvm_cbe_this1);
#line 591 "small.cpp"
  *((&(*llvm_cbe_call7))) = 0u;
#line 591 "small.cpp"
   // WARN;
#line 593 "small.cpp"
  llvm_cbe_tmp10 = *((&llvm_cbe_this1->field6));
#line 593 "small.cpp"
  llvm_cbe_tmp12 = *((&(*llvm_cbe_tmp10)));
#line 593 "small.cpp"
  *(&llvm_cbe_mi) = llvm_cbe_tmp12;
#line 593 "small.cpp"
   // WARN;
#line 596 "small.cpp"
  llvm_cbe_tmp15 = *((&llvm_cbe_this1->field6));
#line 596 "small.cpp"
  _Z8COPY_BADPPiS_((&llvm_cbe_will_be_glob), llvm_cbe_tmp15);
#line 596 "small.cpp"
   // WARN;
#line 598 "small.cpp"
  llvm_cbe_tmp16 = *(&llvm_cbe_will_be_glob);
#line 598 "small.cpp"
  *((&(*llvm_cbe_tmp16))) = 0u;
#line 598 "small.cpp"
   // WARN;
#line 601 "small.cpp"
  _Z8COPY_BADPPiS_((&llvm_cbe_might_be_glob), ((unsigned int *)/*NULL*/0));
#line 602 "small.cpp"
  llvm_cbe_tmp19 = *(&llvm_cbe_might_be_glob);
#line 602 "small.cpp"
  *((&(*llvm_cbe_tmp19))) = 0u;
#line 602 "small.cpp"
   // WARN;
#line 604 "small.cpp"
  llvm_cbe_tmp24 = *(&llvm_cbe_ev_2e_addr);
#line 604 "small.cpp"
  llvm_cbe_call26 = _ZN3UES14PrivateMember0EPiS0_iPj(llvm_cbe_this1, ((&llvm_cbe_this1->field3)), ((&llvm_cbe_this1->field4)), 0u, ((&llvm_cbe_tmp24->field1)));
#line 604 "small.cpp"
  *(&llvm_cbe_p1) = (((unsigned int **)llvm_cbe_call26));
#line 604 "small.cpp"
   // NOWARN;
#line 606 "small.cpp"
  llvm_cbe_call27 = _ZN3UES7GetGlobEv(llvm_cbe_this1);
#line 606 "small.cpp"
  *(&llvm_cbe_p1) = (((unsigned int **)llvm_cbe_call27));
#line 606 "small.cpp"
   // WARN;
#line 607 "small.cpp"
  llvm_cbe_tmp28 = *(&llvm_cbe_p1);
#line 607 "small.cpp"
  *llvm_cbe_tmp28 = ((unsigned int *)/*NULL*/0);
#line 607 "small.cpp"
   // WARN;
#line 609 "small.cpp"
  llvm_cbe_tmp30 = *(&llvm_cbe_ev_2e_addr);
#line 609 "small.cpp"
  llvm_cbe_call32 = _ZN3UES14PrivateMember2EPiiPj(llvm_cbe_this1, (&llvm_cbe_mi), 0u, ((&llvm_cbe_tmp30->field1)));
#line 609 "small.cpp"
  *(&llvm_cbe_p2) = (((unsigned int *)llvm_cbe_call32));
#line 609 "small.cpp"
   // NOWARN;
#line 611 "small.cpp"
  llvm_cbe_tmp33 = *(&llvm_cbe_p2);
#line 611 "small.cpp"
  *llvm_cbe_tmp33 = 0u;
#line 611 "small.cpp"
   // WARN;
#line 614 "small.cpp"
  llvm_cbe_tmp35 = *(&llvm_cbe_might_be_glob);
#line 614 "small.cpp"
  llvm_cbe_tmp36 = *(&llvm_cbe_ev_2e_addr);
#line 614 "small.cpp"
  llvm_cbe_call38 = _ZN3UES14PrivateMember3EPiiPj(llvm_cbe_this1, llvm_cbe_tmp35, 0u, ((&llvm_cbe_tmp36->field1)));
#line 614 "small.cpp"
  *(&llvm_cbe_p3) = (((unsigned int *)llvm_cbe_call38));
#line 614 "small.cpp"
   // NOWARN;
#line 615 "small.cpp"
  llvm_cbe_tmp39 = *(&llvm_cbe_p3);
#line 615 "small.cpp"
  *llvm_cbe_tmp39 = 0u;
#line 615 "small.cpp"
   // NOWARN;
#line 617 "small.cpp"
  llvm_cbe_call41 = _ZN3UES14PrivateMember4EPPi(llvm_cbe_this1, ((&llvm_cbe_this1->field9)));
#line 617 "small.cpp"
   // WARN;
#line 619 "small.cpp"
  llvm_cbe_call43 = _ZN3UES8RetTest6EPi(llvm_cbe_this1, ((&llvm_cbe_this1->field3)));
#line 619 "small.cpp"
   // NOWARN;
#line 621 "small.cpp"
  _ZN3Log5doLogEPc(((&_OC_str3.array[((signed int )0u)])));
#line 621 "small.cpp"
   // NOWARN;
#line 622 "small.cpp"
  llvm_cbe_tmp44 = (&(((struct l_class_OC_Log *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )32ull)]))))->field9);
#line 622 "small.cpp"
  llvm_cbe_tmp45 = *llvm_cbe_tmp44;
#line 622 "small.cpp"
  *llvm_cbe_tmp44 = (((unsigned int )(((unsigned int )llvm_cbe_tmp45) + ((unsigned int )1u))));
#line 622 "small.cpp"
   // NOWARN;
#line 624 "small.cpp"
  llvm_cbe_tmp46 = *(&llvm_cbe_ev_2e_addr);
#line 624 "small.cpp"
  *((&llvm_cbe_tmp46->field1)) = 0u;
#line 624 "small.cpp"
   // WARN;
#line 626 "small.cpp"
  llvm_cbe_tmp48 = (&llvm_cbe_this1->field3);
#line 626 "small.cpp"
  llvm_cbe_tmp49 = *llvm_cbe_tmp48;
#line 626 "small.cpp"
  *llvm_cbe_tmp48 = (((unsigned int )(((unsigned int )llvm_cbe_tmp49) + ((unsigned int )1u))));
#line 626 "small.cpp"
   // NOWARN;
#line 628 "small.cpp"
  llvm_cbe_tmp53 = *(&llvm_cbe_ev_2e_addr);
#line 628 "small.cpp"
  llvm_cbe_tmp55 = *((&llvm_cbe_tmp53->field1));
#line 628 "small.cpp"
  *(&llvm_cbe_tmp52) = llvm_cbe_tmp55;
#line 629 "small.cpp"
  llvm_cbe_tmp56 = *(&llvm_cbe_tmp52);
#line 629 "small.cpp"
  *((&llvm_cbe_this1->field3)) = llvm_cbe_tmp56;
#line 629 "small.cpp"
   // NOWARN;
#line 631 "small.cpp"
  llvm_cbe_call60 = _Z11TS_API_SOMEPi(((&llvm_cbe_this1->field3)));
#line 631 "small.cpp"
  *(&llvm_cbe_pno_ext) = llvm_cbe_call60;
#line 631 "small.cpp"
   // NOWARN;
#line 632 "small.cpp"
  llvm_cbe_tmp62 = *((&llvm_cbe_this1->field3));
#line 632 "small.cpp"
  llvm_cbe_tmp63 = *(&llvm_cbe_pno_ext);
#line 632 "small.cpp"
  *llvm_cbe_tmp63 = llvm_cbe_tmp62;
#line 632 "small.cpp"
   // NOWARN;
#line 634 "small.cpp"
  llvm_cbe_tmp65 = *((&llvm_cbe_this1->field3));
#line 634 "small.cpp"
  if (((((signed int )(((signed int )llvm_cbe_tmp65) % ((signed int )2u)))) == 0u)) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 635 "small.cpp"
  llvm_cbe_call66 = _Z9API_CALL0i(0u);
#line 635 "small.cpp"
  goto llvm_cbe_if_2e_end;

llvm_cbe_if_2e_end:
#line 635 "small.cpp"
   // NOWARN;
#line 637 "small.cpp"
  llvm_cbe_tmp68 = *((&llvm_cbe_this1->field3));
#line 637 "small.cpp"
  if (((((signed int )(((signed int )llvm_cbe_tmp68) % ((signed int )2u)))) != 0u)) {    goto llvm_cbe_if_2e_then71;  } else {    goto llvm_cbe_if_2e_else;  }


llvm_cbe_if_2e_then71:
#line 639 "small.cpp"
  _ZN8SubUES_X3ADDEv(((&llvm_cbe_this1->field5)));
#line 642 "small.cpp"
  llvm_cbe_tmp74 = (&llvm_cbe_this1->field5);
#line 642 "small.cpp"
  llvm_cbe_tmp__66 = *(((struct l_class_OC_CBaseFSM * (***) (struct l_class_OC_SubUES_X *, struct l_struct_OC_UEC_Event *))llvm_cbe_tmp74));
#line 642 "small.cpp"
  llvm_cbe_tmp__67 = *((&llvm_cbe_tmp__66[((signed long long )1ull)]));
#line 642 "small.cpp"
  llvm_cbe_tmp75 = *(&llvm_cbe_lev);
#line 642 "small.cpp"
  llvm_cbe_call76 = llvm_cbe_tmp__67(llvm_cbe_tmp74, llvm_cbe_tmp75);
#line 642 "small.cpp"
   // WARN;
#line 643 "small.cpp"
  llvm_cbe_tmp77 = *(&llvm_cbe_lev);
#line 643 "small.cpp"
  *((&llvm_cbe_tmp77->field1)) = 0u;
#line 643 "small.cpp"
   // WARN;
#line 644 "small.cpp"
  goto llvm_cbe_if_2e_end80;

llvm_cbe_if_2e_else:
#line 646 "small.cpp"
  llvm_cbe_tmp79 = *(&llvm_cbe_ev_2e_addr);
#line 646 "small.cpp"
  if ((llvm_cbe_tmp79 == ((struct l_struct_OC_UEC_Event *)/*NULL*/0))) {    goto llvm_cbe_if_2e_end80;  } else {    goto llvm_cbe_delete_2e_notnull;  }


llvm_cbe_delete_2e_notnull:
#line 646 "small.cpp"
  _ZdlPv((((unsigned char *)llvm_cbe_tmp79)));
#line 646 "small.cpp"
  goto llvm_cbe_if_2e_end80;

llvm_cbe_if_2e_end80:
#line 646 "small.cpp"
   // NOWARN;
#line 648 "small.cpp"
  *(&llvm_cbe_psx) = (((unsigned int *)llvm_cbe_this1));
#line 648 "small.cpp"
   // ERROR;
#line 650 "small.cpp"
  _ZN5DummyC1Ev((&llvm_cbe_d));
#line 651 "small.cpp"
  *(&llvm_cbe_di) = (((unsigned int *)(&llvm_cbe_d)));
#line 651 "small.cpp"
   // NOWARN;
#line 653 "small.cpp"
  llvm_cbe_call85 = _ZN3Log12get_priv_funEv((((struct l_class_OC_Log *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )32ull)])))));
#line 653 "small.cpp"
  ((struct __attribute__ ((packed, aligned(1))) {struct l_unnamed16 data; } *)(&llvm_cbe_coerce))->data = llvm_cbe_call85;
#line 653 "small.cpp"
   // NOWARN;
#line 655 "small.cpp"
   // NOWARN;
#line 655 "small.cpp"
  *(&llvm_cbe_retval) = ((struct l_class_OC_CBaseFSM *)/*NULL*/0);
#line 655 "small.cpp"
  llvm_cbe_tmp__68 = *(&llvm_cbe_retval);
#line 655 "small.cpp"
  return llvm_cbe_tmp__68;
}


#line 0 "LLVM INTERNAL"
void _ZN3FSM4VirtEv(struct l_class_OC_FSM *llvm_cbe_this) {
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 166 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UESD0Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3UESD1Ev(llvm_cbe_this1);
#line 0 "LLVM INTERNAL"
  _ZdlPv((((unsigned char *)llvm_cbe_this1)));
#line 388 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN3UES3PrvEPPiS0_(struct l_class_OC_UES *llvm_cbe_this, unsigned int **llvm_cbe_i, unsigned int *llvm_cbe_q) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_i_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_q_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int **llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp3;
  unsigned int *llvm_cbe_tmp__69;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_i_2e_addr) = llvm_cbe_i;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_q_2e_addr) = llvm_cbe_q;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 563 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_q_2e_addr);
#line 563 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_i_2e_addr);
#line 563 "small.cpp"
  *llvm_cbe_tmp2 = llvm_cbe_tmp;
#line 564 "small.cpp"
  llvm_cbe_tmp3 = *(&llvm_cbe_q_2e_addr);
#line 564 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp3;
#line 565 "small.cpp"
  llvm_cbe_tmp__69 = *(&llvm_cbe_retval);
#line 565 "small.cpp"
  return llvm_cbe_tmp__69;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN3UES7GetGlobEv(struct l_class_OC_UES *llvm_cbe_this) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp__70;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 495 "small.cpp"
   // WARN;
#line 495 "small.cpp"
  llvm_cbe_tmp2 = *((&llvm_cbe_this1->field6));
#line 495 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp2;
#line 495 "small.cpp"
  llvm_cbe_tmp__70 = *(&llvm_cbe_retval);
#line 495 "small.cpp"
  return llvm_cbe_tmp__70;
}


#line 0 "LLVM INTERNAL"
unsigned char *_ZN3UES14PrivateMember0EPiS0_iPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_i, unsigned int *llvm_cbe_i2, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) {
  unsigned char *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_i_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_i2_2e_addr;    /* Address-exposed local */
  unsigned int llvm_cbe_y_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_2e_addr;    /* Address-exposed local */
  unsigned int llvm_cbe_xx;    /* Address-exposed local */
  unsigned int *llvm_cbe_pxx;    /* Address-exposed local */
  unsigned int *llvm_cbe_pp;    /* Address-exposed local */
  unsigned int *llvm_cbe_mlpi;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp4;
  unsigned int llvm_cbe_tmp5;
  unsigned int llvm_cbe_call;
  unsigned int *llvm_cbe_tmp6;
  unsigned int llvm_cbe_call8;
  unsigned int *llvm_cbe_tmp9;
  unsigned int llvm_cbe_call11;
  unsigned int llvm_cbe_tmp13;
  unsigned int llvm_cbe_call14;
  unsigned int *llvm_cbe_call16;
  unsigned int *llvm_cbe_tmp17;
  unsigned int *llvm_cbe_tmp18;
  unsigned int llvm_cbe_call21;
  unsigned int *llvm_cbe_tmp22;
  unsigned int *llvm_cbe_tmp23;
  unsigned char *llvm_cbe_tmp__71;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_i_2e_addr) = llvm_cbe_i;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_i2_2e_addr) = llvm_cbe_i2;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_y_2e_addr) = llvm_cbe_y;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_2e_addr) = llvm_cbe_glob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 444 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_i_2e_addr);
#line 444 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 444 "small.cpp"
   // NOWARN;
#line 447 "small.cpp"
  *(&llvm_cbe_pxx) = (&llvm_cbe_xx);
#line 449 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_i_2e_addr);
#line 449 "small.cpp"
  llvm_cbe_tmp5 = *llvm_cbe_tmp4;
#line 449 "small.cpp"
  llvm_cbe_call = _Z9API_CALL1iPv(llvm_cbe_tmp5, (((unsigned char *)(&llvm_cbe_y_2e_addr))));
#line 449 "small.cpp"
   // NOWARN;
#line 450 "small.cpp"
  llvm_cbe_tmp6 = *(&llvm_cbe_pxx);
#line 450 "small.cpp"
  llvm_cbe_call8 = _Z9API_CALL1iPv(0u, (((unsigned char *)llvm_cbe_tmp6)));
#line 450 "small.cpp"
   // NOWARN;
#line 452 "small.cpp"
  llvm_cbe_tmp9 = *(&llvm_cbe_glob_2e_addr);
#line 452 "small.cpp"
  llvm_cbe_call11 = _Z9API_CALL1iPv(0u, (((unsigned char *)llvm_cbe_tmp9)));
#line 452 "small.cpp"
   // WARN;
#line 453 "small.cpp"
  llvm_cbe_tmp13 = *((&llvm_cbe_this1->field3));
#line 453 "small.cpp"
  llvm_cbe_call14 = _Z9API_CALL0i(llvm_cbe_tmp13);
#line 453 "small.cpp"
   // NOWARN;
#line 455 "small.cpp"
  llvm_cbe_call16 = _ZN3UES9undef_funEv(llvm_cbe_this1);
#line 455 "small.cpp"
  *(&llvm_cbe_pp) = llvm_cbe_call16;
#line 455 "small.cpp"
   // WARN;
#line 456 "small.cpp"
  llvm_cbe_tmp17 = *(&llvm_cbe_pp);
#line 456 "small.cpp"
  *llvm_cbe_tmp17 = 0u;
#line 456 "small.cpp"
   // WARN;
#line 458 "small.cpp"
  llvm_cbe_tmp18 = *(&llvm_cbe_glob_2e_addr);
#line 458 "small.cpp"
  *llvm_cbe_tmp18 = 0u;
#line 458 "small.cpp"
   // WARN;
#line 461 "small.cpp"
  llvm_cbe_call21 = _Z9API_CALL1iPv(0u, (((unsigned char *)(&llvm_cbe_mlpi))));
#line 462 "small.cpp"
  llvm_cbe_tmp22 = *(&llvm_cbe_mlpi);
#line 462 "small.cpp"
  *((&(*llvm_cbe_tmp22))) = 0u;
#line 462 "small.cpp"
   // WARN;
#line 464 "small.cpp"
   // NOWARN;
#line 464 "small.cpp"
  llvm_cbe_tmp23 = *(&llvm_cbe_i2_2e_addr);
#line 464 "small.cpp"
  *(&llvm_cbe_retval) = (((unsigned char *)llvm_cbe_tmp23));
#line 464 "small.cpp"
  llvm_cbe_tmp__71 = *(&llvm_cbe_retval);
#line 464 "small.cpp"
  return llvm_cbe_tmp__71;
}


#line 0 "LLVM INTERNAL"
unsigned char *_ZN3UES14PrivateMember2EPiiPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_stack_i, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) {
  unsigned char *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_stack_i_2e_addr;    /* Address-exposed local */
  unsigned int llvm_cbe_y_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp2;
  unsigned int llvm_cbe_tmp3;
  unsigned int *llvm_cbe_tmp4;
  unsigned int llvm_cbe_call;
  unsigned int *llvm_cbe_tmp5;
  unsigned char *llvm_cbe_tmp__72;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_stack_i_2e_addr) = llvm_cbe_stack_i;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_y_2e_addr) = llvm_cbe_y;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_2e_addr) = llvm_cbe_glob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 468 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_stack_i_2e_addr);
#line 468 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 468 "small.cpp"
   // NOWARN;
#line 470 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_stack_i_2e_addr);
#line 470 "small.cpp"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 470 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_stack_i_2e_addr);
#line 470 "small.cpp"
  llvm_cbe_call = _Z9API_CALL1iPv(llvm_cbe_tmp3, (((unsigned char *)llvm_cbe_tmp4)));
#line 470 "small.cpp"
   // NOWARN;
#line 472 "small.cpp"
   // NOWARN;
#line 472 "small.cpp"
  llvm_cbe_tmp5 = *(&llvm_cbe_stack_i_2e_addr);
#line 472 "small.cpp"
  *(&llvm_cbe_retval) = (((unsigned char *)llvm_cbe_tmp5));
#line 472 "small.cpp"
  llvm_cbe_tmp__72 = *(&llvm_cbe_retval);
#line 472 "small.cpp"
  return llvm_cbe_tmp__72;
}


#line 0 "LLVM INTERNAL"
unsigned char *_ZN3UES14PrivateMember3EPiiPj(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_glob_i, unsigned int llvm_cbe_y, unsigned int *llvm_cbe_glob) {
  unsigned char *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_i_2e_addr;    /* Address-exposed local */
  unsigned int llvm_cbe_y_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_glob_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int llvm_cbe_call;
  unsigned int *llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp3;
  unsigned int *llvm_cbe_tmp6;
  unsigned char *llvm_cbe_tmp__73;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_i_2e_addr) = llvm_cbe_glob_i;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_y_2e_addr) = llvm_cbe_y;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_glob_2e_addr) = llvm_cbe_glob;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 476 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_glob_i_2e_addr);
#line 476 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 476 "small.cpp"
   // WARN;
#line 478 "small.cpp"
  llvm_cbe_call = _Z9API_CALL1iPv(0u, (((unsigned char *)(&llvm_cbe_glob_i_2e_addr))));
#line 478 "small.cpp"
   // WARN;
#line 479 "small.cpp"
  llvm_cbe_tmp2 = *(&llvm_cbe_glob_i_2e_addr);
#line 479 "small.cpp"
  *((&(*llvm_cbe_tmp2))) = 0u;
#line 479 "small.cpp"
   // WARN;
#line 481 "small.cpp"
  llvm_cbe_tmp3 = *(&llvm_cbe_glob_i_2e_addr);
#line 481 "small.cpp"
  *((&llvm_cbe_this1->field8)) = llvm_cbe_tmp3;
#line 481 "small.cpp"
   // WARN;
#line 482 "small.cpp"
  llvm_cbe_tmp6 = *((&llvm_cbe_this1->field8));
#line 482 "small.cpp"
  *llvm_cbe_tmp6 = 0u;
#line 482 "small.cpp"
   // WARN;
#line 486 "small.cpp"
   // NOWARN;
#line 486 "small.cpp"
  *(&llvm_cbe_retval) = ((unsigned char *)/*NULL*/0);
#line 486 "small.cpp"
  llvm_cbe_tmp__73 = *(&llvm_cbe_retval);
#line 486 "small.cpp"
  return llvm_cbe_tmp__73;
}


#line 0 "LLVM INTERNAL"
unsigned char *_ZN3UES14PrivateMember4EPPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int **llvm_cbe_ipppppq) {
  unsigned char *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int **llvm_cbe_ipppppq_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_p1;    /* Address-exposed local */
  unsigned int **llvm_cbe___p2;    /* Address-exposed local */
  unsigned int **llvm_cbe__p2;    /* Address-exposed local */
  unsigned int *llvm_cbe_mpg;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int **llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp2;
  unsigned int llvm_cbe_tmp3;
  unsigned int **llvm_cbe_tmp4;
  unsigned int llvm_cbe_call;
  unsigned int *llvm_cbe_tmp6;
  unsigned int **llvm_cbe_tmp7;
  unsigned int *llvm_cbe_tmp8;
  unsigned int *llvm_cbe_call11;
  unsigned int *llvm_cbe_tmp12;
  unsigned int **llvm_cbe_tmp13;
  unsigned int *llvm_cbe_tmp14;
  unsigned int *llvm_cbe_call17;
  unsigned int **llvm_cbe_tmp18;
  unsigned int *llvm_cbe_call22;
  unsigned int *llvm_cbe_call24;
  unsigned int *llvm_cbe_tmp26;
  unsigned int **llvm_cbe_tmp29;
  unsigned int *llvm_cbe_tmp30;
  unsigned char *llvm_cbe_tmp__74;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ipppppq_2e_addr) = llvm_cbe_ipppppq;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 405 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_ipppppq_2e_addr);
#line 405 "small.cpp"
  llvm_cbe_tmp2 = *llvm_cbe_tmp;
#line 405 "small.cpp"
  llvm_cbe_tmp3 = *llvm_cbe_tmp2;
#line 405 "small.cpp"
  llvm_cbe_tmp4 = *(&llvm_cbe_ipppppq_2e_addr);
#line 405 "small.cpp"
  llvm_cbe_call = _Z10XXXXXXXXXXiPv(llvm_cbe_tmp3, (((unsigned char *)llvm_cbe_tmp4)));
#line 405 "small.cpp"
   // WARN;
#line 408 "small.cpp"
  llvm_cbe_tmp6 = *((&llvm_cbe_this1->field9));
#line 408 "small.cpp"
  *((&(*llvm_cbe_tmp6))) = 0u;
#line 408 "small.cpp"
   // WARN;
#line 411 "small.cpp"
  llvm_cbe_tmp7 = *(&llvm_cbe_ipppppq_2e_addr);
#line 411 "small.cpp"
  llvm_cbe_tmp8 = *llvm_cbe_tmp7;
#line 411 "small.cpp"
  *llvm_cbe_tmp8 = 0u;
#line 411 "small.cpp"
   // WARN;
#line 414 "small.cpp"
  *(&llvm_cbe___p2) = (&llvm_cbe_p1);
#line 416 "small.cpp"
  llvm_cbe_call11 = _Z18API_GET_GLOBAL_MEMv();
#line 416 "small.cpp"
  *(&llvm_cbe_p1) = llvm_cbe_call11;
#line 419 "small.cpp"
  llvm_cbe_tmp12 = *(&llvm_cbe_p1);
#line 419 "small.cpp"
  *llvm_cbe_tmp12 = 0u;
#line 419 "small.cpp"
   // WARN;
#line 420 "small.cpp"
  llvm_cbe_tmp13 = *(&llvm_cbe___p2);
#line 420 "small.cpp"
  llvm_cbe_tmp14 = *llvm_cbe_tmp13;
#line 420 "small.cpp"
  *llvm_cbe_tmp14 = 0u;
#line 420 "small.cpp"
   // WARN;
#line 424 "small.cpp"
  *(&llvm_cbe__p2) = ((&llvm_cbe_this1->field10));
#line 424 "small.cpp"
   // WARN;
#line 426 "small.cpp"
  llvm_cbe_call17 = _Z18API_GET_GLOBAL_MEMv();
#line 426 "small.cpp"
  llvm_cbe_tmp18 = *(&llvm_cbe__p2);
#line 426 "small.cpp"
  *llvm_cbe_tmp18 = llvm_cbe_call17;
#line 426 "small.cpp"
   // WARN;
#line 429 "small.cpp"
  *((&llvm_cbe_this1->field12)) = ((&llvm_cbe_this1->field11));
#line 429 "small.cpp"
   // WARN;
#line 432 "small.cpp"
  llvm_cbe_call22 = _Z18API_GET_GLOBAL_MEMv();
#line 432 "small.cpp"
  *(&llvm_cbe_mpg) = llvm_cbe_call22;
#line 433 "small.cpp"
  llvm_cbe_call24 = _Z6memcpyPiS_i((((unsigned int *)((&llvm_cbe_this1->field11)))), (((unsigned int *)(&llvm_cbe_mpg))), 8u);
#line 433 "small.cpp"
   // WARN;
#line 435 "small.cpp"
  llvm_cbe_tmp26 = *((&llvm_cbe_this1->field11));
#line 435 "small.cpp"
  *((&(*llvm_cbe_tmp26))) = 0u;
#line 435 "small.cpp"
   // WARN;
#line 436 "small.cpp"
  llvm_cbe_tmp29 = *((&llvm_cbe_this1->field12));
#line 436 "small.cpp"
  llvm_cbe_tmp30 = *llvm_cbe_tmp29;
#line 436 "small.cpp"
  *((&(*llvm_cbe_tmp30))) = 0u;
#line 436 "small.cpp"
   // WARN;
#line 438 "small.cpp"
  *(&llvm_cbe_retval) = ((unsigned char *)/*NULL*/0);
#line 439 "small.cpp"
  llvm_cbe_tmp__74 = *(&llvm_cbe_retval);
#line 439 "small.cpp"
  return llvm_cbe_tmp__74;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN3UES8RetTest6EPi(struct l_class_OC_UES *llvm_cbe_this, unsigned int *llvm_cbe_pi) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pi_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int *llvm_cbe_tmp__75;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_pi_2e_addr) = llvm_cbe_pi;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 491 "small.cpp"
   // NOWARN;
#line 491 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pi_2e_addr);
#line 491 "small.cpp"
  *(&llvm_cbe_retval) = llvm_cbe_tmp;
#line 491 "small.cpp"
  llvm_cbe_tmp__75 = *(&llvm_cbe_retval);
#line 491 "small.cpp"
  return llvm_cbe_tmp__75;
}


#line 0 "LLVM INTERNAL"
void _ZN3Log5doLogEPc(unsigned char *llvm_cbe_txt) {
  unsigned char *llvm_cbe_txt_2e_addr;    /* Address-exposed local */
  unsigned char *llvm_cbe_tmp;
  unsigned int llvm_cbe_call;
  unsigned char *llvm_cbe_tmp1;
  unsigned int llvm_cbe_tmp2;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_txt_2e_addr) = llvm_cbe_txt;
#line 259 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_txt_2e_addr);
#line 259 "small.cpp"
  llvm_cbe_call = printf(((&_OC_str4.array[((signed int )0u)])), llvm_cbe_tmp);
#line 259 "small.cpp"
   // NOWARN;
#line 260 "small.cpp"
  llvm_cbe_tmp1 = *(&llvm_cbe_txt_2e_addr);
#line 260 "small.cpp"
  *llvm_cbe_tmp1 = ((unsigned char )0);
#line 260 "small.cpp"
   // WARN;
#line 262 "small.cpp"
  llvm_cbe_tmp2 = *(&_ZZN3Log5doLogEPcE2kk);
#line 262 "small.cpp"
  *(&_ZZN3Log5doLogEPcE2kk) = (((unsigned int )(((unsigned int )llvm_cbe_tmp2) + ((unsigned int )1u))));
#line 262 "small.cpp"
   // WARN;
#line 263 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_X3ADDEv(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int llvm_cbe_tmp2;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 333 "small.cpp"
  llvm_cbe_tmp = (&llvm_cbe_this1->field3);
#line 333 "small.cpp"
  llvm_cbe_tmp2 = *llvm_cbe_tmp;
#line 333 "small.cpp"
  *llvm_cbe_tmp = (((unsigned int )(((unsigned int )llvm_cbe_tmp2) + ((unsigned int )1u))));
#line 335 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN5DummyC1Ev(struct l_class_OC_Dummy *llvm_cbe_this) {
  struct l_class_OC_Dummy *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Dummy *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN5DummyC2Ev(llvm_cbe_this1);
#line 317 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
struct l_unnamed16 _ZN3Log12get_priv_funEv(struct l_class_OC_Log *llvm_cbe_this) {
  struct l_unnamed16 llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_unnamed16 llvm_cbe_mfp;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned char *llvm_cbe_tmp__76;
  struct l_unnamed16 llvm_cbe_tmp__77;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 312 "small.cpp"
  *((&llvm_cbe_mfp.field0)) = ((unsigned long long )(unsigned long)_ZN3Log11my_priv_funEPi);
#line 312 "small.cpp"
  *((&llvm_cbe_mfp.field1)) = 0ull;
#line 312 "small.cpp"
   // WARN;
#line 0 "LLVM INTERNAL"
  llvm_cbe_tmp__76 = memcpy((((unsigned char *)(&llvm_cbe_retval))), (((unsigned char *)(&llvm_cbe_mfp))), 16ull);
#line 313 "small.cpp"
  llvm_cbe_tmp__77 = ((struct __attribute__ ((packed, aligned(1))) {struct l_unnamed16 data; } *)(&llvm_cbe_retval))->data;
#line 313 "small.cpp"
  return llvm_cbe_tmp__77;
}


#line 0 "LLVM INTERNAL"
unsigned int *_ZN3Log11my_priv_funEPi(struct l_class_OC_Log *llvm_cbe_this, unsigned int *llvm_cbe_pi) {
  unsigned int *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  unsigned int *llvm_cbe_pi_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int llvm_cbe_tmp2;
  unsigned int *llvm_cbe_tmp__78;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_pi_2e_addr) = llvm_cbe_pi;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 209 "small.cpp"
  llvm_cbe_tmp = *(&llvm_cbe_pi_2e_addr);
#line 209 "small.cpp"
  *llvm_cbe_tmp = 0u;
#line 209 "small.cpp"
   // WARN;
#line 212 "small.cpp"
  llvm_cbe_tmp2 = *(&_ZZN3Log11my_priv_funEPiE2xx);
#line 212 "small.cpp"
  *(&_ZZN3Log11my_priv_funEPiE2xx) = (((unsigned int )(((unsigned int )llvm_cbe_tmp2) + ((unsigned int )1u))));
#line 212 "small.cpp"
   // WARN;
#line 213 "small.cpp"
  *(&llvm_cbe_retval) = ((&llvm_cbe_this1->field11));
#line 213 "small.cpp"
  llvm_cbe_tmp__78 = *(&llvm_cbe_retval);
#line 213 "small.cpp"
  return llvm_cbe_tmp__78;
}


#line 0 "LLVM INTERNAL"
void _ZN5DummyC2Ev(struct l_class_OC_Dummy *llvm_cbe_this) {
  struct l_class_OC_Dummy *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Dummy *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN5Test2C2Ev((((struct l_class_OC_Test2 *)llvm_cbe_this1)));
#line 317 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN5Test2C2Ev(struct l_class_OC_Test2 *llvm_cbe_this) {
  struct l_class_OC_Test2 *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Test2 *llvm_cbe_this1;
  unsigned int *llvm_cbe_call;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 141 "small.cpp"
  llvm_cbe_call = _Z18API_GET_GLOBAL_MEMv();
#line 141 "small.cpp"
  *((&llvm_cbe_this1->field0)) = llvm_cbe_call;
#line 142 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3FSMD1Ev(struct l_class_OC_FSM *llvm_cbe_this) {
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3FSMD2Ev(llvm_cbe_this1);
#line 176 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3FSMD0Ev(struct l_class_OC_FSM *llvm_cbe_this) {
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3FSMD1Ev(llvm_cbe_this1);
#line 0 "LLVM INTERNAL"
  _ZdlPv((((unsigned char *)llvm_cbe_this1)));
#line 176 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_XD2Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV8SubUES_X.array[((signed long long )2ull)]));
#line 339 "small.cpp"
  *((&llvm_cbe_this1->field3)) = 0u;
#line 340 "small.cpp"
  _ZN3FSMD2Ev((((struct l_class_OC_FSM *)llvm_cbe_this1)));
#line 340 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
struct l_class_OC_CBaseFSM *_ZN8SubUES_X12ReceiveEventEP9UEC_Event(struct l_class_OC_SubUES_X *llvm_cbe_this, struct l_struct_OC_UEC_Event *llvm_cbe_ev) {
  struct l_class_OC_CBaseFSM *llvm_cbe_retval;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_struct_OC_UEC_Event *llvm_cbe_ev_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp;
  unsigned int llvm_cbe_tmp2;
  unsigned int llvm_cbe_tmp4;
  unsigned int llvm_cbe_call;
  struct l_struct_OC_UEC_Event *llvm_cbe_tmp6;
  struct l_class_OC_CBaseFSM *llvm_cbe_tmp__79;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_ev_2e_addr) = llvm_cbe_ev;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 344 "small.cpp"
  llvm_cbe_tmp = (&llvm_cbe_this1->field3);
#line 344 "small.cpp"
  llvm_cbe_tmp2 = *llvm_cbe_tmp;
#line 344 "small.cpp"
  *llvm_cbe_tmp = (((unsigned int )(((unsigned int )llvm_cbe_tmp2) + ((unsigned int )1u))));
#line 345 "small.cpp"
  llvm_cbe_tmp4 = *((&llvm_cbe_this1->field3));
#line 345 "small.cpp"
  if (((((signed int )(((signed int )llvm_cbe_tmp4) % ((signed int )5u)))) != 0u)) {    goto llvm_cbe_if_2e_then;  } else {    goto llvm_cbe_if_2e_end;  }


llvm_cbe_if_2e_then:
#line 346 "small.cpp"
  llvm_cbe_call = _Z9API_CALL1iPv(0u, (((unsigned char *)((&llvm_cbe_this1->field3)))));
#line 346 "small.cpp"
  goto llvm_cbe_if_2e_end;

llvm_cbe_if_2e_end:
#line 348 "small.cpp"
  llvm_cbe_tmp6 = *(&llvm_cbe_ev_2e_addr);
#line 348 "small.cpp"
  if ((llvm_cbe_tmp6 == ((struct l_struct_OC_UEC_Event *)/*NULL*/0))) {    goto llvm_cbe_delete_2e_end;  } else {    goto llvm_cbe_delete_2e_notnull;  }


llvm_cbe_delete_2e_notnull:
#line 348 "small.cpp"
  _ZdlPv((((unsigned char *)llvm_cbe_tmp6)));
#line 348 "small.cpp"
  goto llvm_cbe_delete_2e_end;

llvm_cbe_delete_2e_end:
#line 348 "small.cpp"
   // NOWARN;
#line 349 "small.cpp"
  *(&llvm_cbe_retval) = ((struct l_class_OC_CBaseFSM *)/*NULL*/0);
#line 350 "small.cpp"
  llvm_cbe_tmp__79 = *(&llvm_cbe_retval);
#line 350 "small.cpp"
  return llvm_cbe_tmp__79;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_XD0Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN8SubUES_XD1Ev(llvm_cbe_this1);
#line 0 "LLVM INTERNAL"
  _ZdlPv((((unsigned char *)llvm_cbe_this1)));
#line 340 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3UESC2Ev(struct l_class_OC_UES *llvm_cbe_this) {
  struct l_class_OC_UES *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_UES *llvm_cbe_this1;
  unsigned int *llvm_cbe_tmp15;
  unsigned int llvm_cbe_tmp16;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3FSMC2Ev((((struct l_class_OC_FSM *)llvm_cbe_this1)));
#line 0 "LLVM INTERNAL"
  _ZN3LogC2Ev((((struct l_class_OC_Log *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )32ull)])))));
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV3UES.array[((signed long long )2ull)]));
#line 0 "LLVM INTERNAL"
  _ZN8SubUES_XC1Ev(((&llvm_cbe_this1->field5)));
#line 375 "small.cpp"
  *((&llvm_cbe_this1->field6)) = ((unsigned int *)/*NULL*/0);
#line 375 "small.cpp"
   // WARN;
#line 376 "small.cpp"
  *((&llvm_cbe_this1->field3)) = 0u;
#line 376 "small.cpp"
   // NOWARN;
#line 377 "small.cpp"
  llvm_cbe_tmp15 = *((&llvm_cbe_this1->field6));
#line 377 "small.cpp"
  llvm_cbe_tmp16 = *llvm_cbe_tmp15;
#line 377 "small.cpp"
  *llvm_cbe_tmp15 = (((unsigned int )(((unsigned int )llvm_cbe_tmp16) + ((unsigned int )4294967295u))));
#line 377 "small.cpp"
   // WARN;
#line 378 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3FSMC2Ev(struct l_class_OC_FSM *llvm_cbe_this) {
  struct l_class_OC_FSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_FSM *llvm_cbe_this1;
  unsigned int llvm_cbe_call;
  unsigned int llvm_cbe_tmp;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN8CBaseFSMC2Ev((((struct l_class_OC_CBaseFSM *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )8ull)])))));
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV3FSM.array[((signed long long )2ull)]));
#line 170 "small.cpp"
  llvm_cbe_call = printf(((&_OC_str6.array[((signed int )0u)])));
#line 170 "small.cpp"
   // NOWARN;
#line 171 "small.cpp"
  llvm_cbe_tmp = *(&_ZN8CBaseFSM5fubarE);
#line 171 "small.cpp"
  *(&_ZN8CBaseFSM5fubarE) = (((unsigned int )(((unsigned int )llvm_cbe_tmp) + ((unsigned int )1u))));
#line 171 "small.cpp"
   // WARN;
#line 172 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3LogC2Ev(struct l_class_OC_Log *llvm_cbe_this) {
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  struct l_unnamed16 *llvm_cbe_tmp;
  struct l_unnamed16 *llvm_cbe_tmp2;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN5Test2C2Ev((((struct l_class_OC_Test2 *)llvm_cbe_this1)));
#line 267 "small.cpp"
  _ZN3Log10TestFieldsEv(llvm_cbe_this1);
#line 269 "small.cpp"
  llvm_cbe_tmp = (&llvm_cbe_this1->field7);
#line 269 "small.cpp"
  *((&llvm_cbe_tmp->field0)) = ((unsigned long long )(unsigned long)_ZN3Log11my_priv_funEPi);
#line 269 "small.cpp"
  *((&llvm_cbe_tmp->field1)) = 0ull;
#line 271 "small.cpp"
  llvm_cbe_tmp2 = (&llvm_cbe_this1->field8);
#line 271 "small.cpp"
  *((&llvm_cbe_tmp2->field0)) = ((unsigned long long )(unsigned long)_ZN3Log15my_undef_fp_funEPi);
#line 271 "small.cpp"
  *((&llvm_cbe_tmp2->field1)) = 0ull;
#line 272 "small.cpp"
  *((&llvm_cbe_this1->field12)) = ((unsigned int *)/*NULL*/0);
#line 273 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_XC1Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN8SubUES_XC2Ev(llvm_cbe_this1);
#line 329 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8SubUES_XC2Ev(struct l_class_OC_SubUES_X *llvm_cbe_this) {
  struct l_class_OC_SubUES_X *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_SubUES_X *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 0 "LLVM INTERNAL"
  _ZN3FSMC2Ev((((struct l_class_OC_FSM *)llvm_cbe_this1)));
#line 0 "LLVM INTERNAL"
  _ZN3LogC2Ev((((struct l_class_OC_Log *)((&(((unsigned char *)llvm_cbe_this1))[((signed long long )32ull)])))));
#line 0 "LLVM INTERNAL"
  *(((unsigned char ***)llvm_cbe_this1)) = ((&_ZTV8SubUES_X.array[((signed long long )2ull)]));
#line 0 "LLVM INTERNAL"
  *((&llvm_cbe_this1->field3)) = 0u;
#line 329 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN3Log10TestFieldsEv(struct l_class_OC_Log *llvm_cbe_this) {
  struct l_class_OC_Log *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_Log *llvm_cbe_this1;
  unsigned int *llvm_cbe_call;
  unsigned int *llvm_cbe_call2;
  unsigned int *llvm_cbe_call4;
  unsigned int *llvm_cbe_call6;
  unsigned int *llvm_cbe_call8;
  unsigned int *llvm_cbe_call10;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 195 "small.cpp"
  llvm_cbe_call = _Z18API_GET_GLOBAL_MEMv();
#line 195 "small.cpp"
  *((&llvm_cbe_this1->field1)) = llvm_cbe_call;
#line 196 "small.cpp"
  llvm_cbe_call2 = _Z18API_GET_GLOBAL_MEMv();
#line 196 "small.cpp"
  *((&llvm_cbe_this1->field2)) = llvm_cbe_call2;
#line 197 "small.cpp"
  llvm_cbe_call4 = _Z18API_GET_GLOBAL_MEMv();
#line 197 "small.cpp"
  *((&llvm_cbe_this1->field3)) = llvm_cbe_call4;
#line 198 "small.cpp"
  llvm_cbe_call6 = _Z18API_GET_GLOBAL_MEMv();
#line 198 "small.cpp"
  *((&llvm_cbe_this1->field4)) = llvm_cbe_call6;
#line 199 "small.cpp"
  llvm_cbe_call8 = _Z18API_GET_GLOBAL_MEMv();
#line 199 "small.cpp"
  *((&llvm_cbe_this1->field5)) = llvm_cbe_call8;
#line 200 "small.cpp"
  llvm_cbe_call10 = _Z18API_GET_GLOBAL_MEMv();
#line 200 "small.cpp"
  *((&llvm_cbe_this1->field6)) = llvm_cbe_call10;
#line 201 "small.cpp"
  return;
}


#line 0 "LLVM INTERNAL"
void _ZN8CBaseFSMC2Ev(struct l_class_OC_CBaseFSM *llvm_cbe_this) {
  struct l_class_OC_CBaseFSM *llvm_cbe_this_2e_addr;    /* Address-exposed local */
  struct l_class_OC_CBaseFSM *llvm_cbe_this1;

#line 0 "LLVM INTERNAL"
  *(&llvm_cbe_this_2e_addr) = llvm_cbe_this;
#line 0 "LLVM INTERNAL"
  llvm_cbe_this1 = *(&llvm_cbe_this_2e_addr);
#line 155 "small.cpp"
  *(&_ZN8CBaseFSM5fubarE) = 0u;
#line 155 "small.cpp"
   // WARN;
#line 156 "small.cpp"
  return;
}


/* generated by Id 1.0 at 2007-03-26 15:36:27 Z */
/* with the command: -I/usr/local/lib/idc/i386-apple-darwin8.8.1/ -I. -I../../objects -I../../jolt-burg -m jolt.st -o jolt.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
  typedef HINSTANCE dlhandle_t;
# define dlopen(path, mode)	LoadLibrary(path)
# define dlsym(handle, name)	((void *)GetProcAddress(handle, name))
# define dlclose(handle)	FreeLibrary(handle)
# include <winbase.h>
  inline int gettimeofday(struct timeval *tp, void *tzp)
  {
     union {
       long long ns100;
       FILETIME ft;
     } _now;
     GetSystemTimeAsFileTime(&_now.ft);
     tp->tv_usec= (long)((_now.ns100 / 10LL) % 1000000LL);
     tp->tv_sec= (long)((_now.ns100 - (116444736000000000LL)) / 10000000LL);
     return 0;
   }
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

typedef oop (*_imp_t)(oop _thunk, oop receiver, ...);

struct __closure
{
  _imp_t method;
  oop	 data;
};

static void              *(*_local_param   )(int index)= 0;
static oop  		  (*_local_intern  )(const char *string)= 0;
static oop  		  (*_local_proto   )(oop base)= 0;
static oop  		  (*_local_import  )(const char *name)= 0;
static oop  		  (*_local_export  )(const char *name, oop value)= 0;
static void 		  (*_local_method  )(oop type, oop selector, _imp_t method)= 0;
static oop  		  (*_local_alloc   )(oop type, size_t size)= 0;
static oop  		 *(*_local_palloc  )(size_t size)= 0;
static void  		 *(*_local_balloc  )(size_t size)= 0;
static struct __closure  *(*_local_bind    )(oop selector, oop receiver)= 0;
static oop                (*_local_nlreturn)(oop nlr, oop result)= 0;
static oop                (*_local_nlresult)(void)= 0;
static oop  		    _local_object= 0;
static oop  		   *_local_tag_vtable= 0;
static oop  		   *_local_nil_vtable= 0;
static void               (*_local_gc_addRoots)(char *lo, char *hi)= 0;
static void	          (*_local_gc_unregisterDisappearingLink)(void *ptr)= 0;
static void		  (*_local_gc_generalRegisterDisappearingLink)(void *link, void *ptr)= 0;
static void		  (*_local_gc_gcollect)(void)= 0;

#define _param(INDEX)		_local_param(INDEX)
#define _selector(NAME)		_local_intern(NAME)
#define _proto(BASE)		_local_proto(BASE)
#define _id_import(NAME)	_local_import(NAME)
#define _id_export(NAME, VAL)	_local_export((NAME), (VAL))
#define _method(TYPE, SEL, IMP)	_local_method((TYPE), (SEL), (_imp_t)(IMP))
#define _alloc(RCV, LBS)	_local_alloc((RCV), (LBS))
#define _palloc(LBS)		_local_palloc((LBS))
#define _balloc(LBS)		_local_balloc((LBS))
#define _nlreturn(NLR, ARG)	_local_nlreturn((NLR), (ARG))
#define _nlresult()		_local_nlresult()

#define _send(MSG, RCV, ARG...) ({					\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), _r);	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

#define _super(TYP, MSG, RCV, ARG...) ({				\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), (TYP));	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

static oop s_next= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_readStream= 0;
static oop s__5fdebugName= 0;
static oop s_whileFalse_= 0;
static oop s__5fimport_= 0;
static oop s_initialise= 0;
static oop s__5fsizeof= 0;
static oop s_on_= 0;
static oop s_isNil= 0;
static oop s__5feval= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "next", &s_next },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "readStream", &s_readStream },
  { "_debugName", &s__5fdebugName },
  { "whileFalse:", &s_whileFalse_ },
  { "_import:", &s__5fimport_ },
  { "initialise", &s_initialise },
  { "_sizeof", &s__5fsizeof },
  { "on:", &s_on_ },
  { "isNil", &s_isNil },
  { "_eval", &s__5feval },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Date {
  struct _vtable *_vtable[0];
  oop v__seconds;
  oop v__microseconds;
};
struct t_Time {
  struct _vtable *_vtable[0];
  oop v__seconds;
  oop v__nanoseconds;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargeInteger {
  struct _vtable *_vtable[0];
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__oops;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_firstIndex;
  oop v_lastIndex;
  oop v_array;
};
struct t_IdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
};
struct t_IdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
};
struct t_FastIdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
};
struct t_SlotDictionary {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__tally;
  oop v__keys;
  oop v__values;
  oop v_default;
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_SinkStream {
  struct _vtable *_vtable[0];
};
struct t_ReadStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_WriteStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
  oop v_writeLimit;
};
struct t_FileStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
  oop v_file;
};
struct t_ConsoleFileStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
  oop v_file;
  oop v__prompt;
};
struct t_File {
  struct _vtable *_vtable[0];
  oop v__fd;
  oop v_name;
};
struct t_Function {
  struct _vtable *_vtable[0];
};
struct t_Random {
  struct _vtable *_vtable[0];
  oop v_seed;
  oop v_a;
  oop v_m;
  oop v_q;
  oop v_r;
};
struct t_Link {
  struct _vtable *_vtable[0];
  oop v_prevLink;
  oop v_nextLink;
};
struct t_LinkedList {
  struct _vtable *_vtable[0];
  oop v_firstLink;
  oop v_lastLink;
};
struct t_OS {
  struct _vtable *_vtable[0];
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_FastIdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
};
struct t_MemoDictionary {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__tally;
  oop v__keys;
  oop v__values;
  oop v_default;
};
struct t_SharedFile {
  struct _vtable *_vtable[0];
  oop v__fd;
  oop v_name;
  oop v_readStream;
};
struct t_Expression {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__oops;
  oop v_type;
};
struct t_Type {
  struct _vtable *_vtable[0];
};
struct t_VoidType {
  struct _vtable *_vtable[0];
};
struct t_NumericType {
  struct _vtable *_vtable[0];
};
struct t_IntegralType {
  struct _vtable *_vtable[0];
};
struct t_I1 {
  struct _vtable *_vtable[0];
};
struct t_U1 {
  struct _vtable *_vtable[0];
};
struct t_I2 {
  struct _vtable *_vtable[0];
};
struct t_U2 {
  struct _vtable *_vtable[0];
};
struct t_I4 {
  struct _vtable *_vtable[0];
};
struct t_U4 {
  struct _vtable *_vtable[0];
};
struct t_I8 {
  struct _vtable *_vtable[0];
};
struct t_U8 {
  struct _vtable *_vtable[0];
};
struct t_FloatingType {
  struct _vtable *_vtable[0];
};
struct t_F4 {
  struct _vtable *_vtable[0];
};
struct t_F8 {
  struct _vtable *_vtable[0];
};
struct t_PointerType {
  struct _vtable *_vtable[0];
  oop v_referentType;
};
struct t_P4 {
  struct _vtable *_vtable[0];
  oop v_referentType;
};
struct t_P8 {
  struct _vtable *_vtable[0];
  oop v_referentType;
};
struct t_StructureType {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v_alignment;
  oop v_members;
};
struct t_MemberType {
  struct _vtable *_vtable[0];
  oop v_offset;
  oop v_type;
};
struct t_Scanner {
  struct _vtable *_vtable[0];
  oop v_characterTable;
  oop v_stream;
  oop v_nextChar;
};
struct t_CokeScanner {
  struct _vtable *_vtable[0];
  oop v_characterTable;
  oop v_stream;
  oop v_nextChar;
  oop v_characterEscapes;
  oop v_tokenType;
  oop v_tokenValue;
  oop v_quasiquoting;
};
struct t_Resource {
  struct _vtable *_vtable[0];
  oop v_refCount;
  oop v_used;
};
struct t_Register {
  struct _vtable *_vtable[0];
  oop v_refCount;
  oop v_used;
  oop v_class;
  oop v_name;
  oop v__encoding;
};
struct t_RegisterSet {
  struct _vtable *_vtable[0];
  oop v_firstIndex;
  oop v_lastIndex;
  oop v_array;
};
struct t_Temporary {
  struct _vtable *_vtable[0];
  oop v_refCount;
  oop v_used;
  oop v_base;
  oop v_offset;
};
struct t_CompilerOptions {
  struct _vtable *_vtable[0];
  oop v_verboseList;
  oop v_verboseTree;
  oop v_verboseRegs;
  oop v_verboseExec;
  oop v_verboseSyntax;
};
struct t_Instruction {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
};
struct t_Statement {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
};
struct t_Leaf {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_Unary {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_Binary {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_Sink {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_Block {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_scope;
  oop v_instructions;
  oop v_inputs;
};
struct t_Call {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arguments;
};
struct t_Spill {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_location;
};
struct t_Branch {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_destination;
};
struct t_ConditionalBranch {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_destination;
};
struct t_Label {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_ordinal;
  oop v__address;
};
struct t_ADDI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_ADDRFP4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_ADDRGP4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_ADDRJP4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_ADDRLP4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_ANDI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_ASGNI1 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_ASGNI2 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_ASGNI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_BRA {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_destination;
};
struct t_BRNZ {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_destination;
};
struct t_BRZ {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_destination;
};
struct t_CALLI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arguments;
};
struct t_CNSTI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_CNSTP4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_DIVI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_DROP {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_ENTER {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
};
struct t_EQI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_GEI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_GTI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_INDIRI1 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_INDIRI2 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_INDIRI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_LEI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_LTI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_MODI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_MULI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_NEGI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_NEI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_NOP {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
};
struct t_NOTI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_ORI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_PARAMI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_arg;
};
struct t_RETV {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
};
struct t_RETI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
};
struct t_SHLI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_SHRI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_SPILLI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_location;
};
struct t_SUBI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_XORI4 {
  struct _vtable *_vtable[0];
  oop v_id;
  oop v_parent;
  oop v_type;
  oop v_source;
  oop v_output;
  oop v_clobbered;
  oop v_nextLive;
  oop v_generator;
  oop v_lhs;
  oop v_rhs;
};
struct t_CodeGenerator {
  struct _vtable *_vtable[0];
  oop v_ccrs;
  oop v_csrs;
  oop v_spills;
  oop v_temps;
  oop v_params;
  oop v_lastLive;
  oop v_labels;
  oop v_needsFrame;
  oop v_parametersSize;
  oop v_frameSize;
};
struct t_RegisterAllocator {
  struct _vtable *_vtable[0];
  oop v_codeGenerator;
};
struct t_Variable {
  struct _vtable *_vtable[0];
  oop v_name;
};
struct t_GlobalVariable {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v__storage;
};
struct t_LocalVariable {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_location;
};
struct t_ParameterVariable {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_location;
};
struct t_CompilerVariable {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v__value;
};
struct t_Environment {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
  oop v_syntax;
};
struct t_GlobalEnvironment {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
  oop v_syntax;
};
struct t_LocalEnvironment {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_lists;
  oop v_syntax;
  oop v_parent;
};
struct t_Compiler {
  struct _vtable *_vtable[0];
  oop v_environment;
  oop v_labels;
  oop v_generatorType;
  oop v_breaks;
  oop v_continues;
};
struct t_Intel32CodeGenerator {
  struct _vtable *_vtable[0];
  oop v_ccrs;
  oop v_csrs;
  oop v_spills;
  oop v_temps;
  oop v_params;
  oop v_lastLive;
  oop v_labels;
  oop v_needsFrame;
  oop v_parametersSize;
  oop v_frameSize;
  oop v_tempsSize;
  oop v_eax;
  oop v_ecx;
  oop v_edx;
  oop v_ebx;
  oop v_esp;
  oop v_ebp;
  oop v_esi;
  oop v_edi;
  oop v_cx;
  oop v_cl;
};
struct t_StaticIntel32CodeGenerator {
  struct _vtable *_vtable[0];
  oop v_ccrs;
  oop v_csrs;
  oop v_spills;
  oop v_temps;
  oop v_params;
  oop v_lastLive;
  oop v_labels;
  oop v_needsFrame;
  oop v_parametersSize;
  oop v_frameSize;
  oop v_tempsSize;
  oop v_eax;
  oop v_ecx;
  oop v_edx;
  oop v_ebx;
  oop v_esp;
  oop v_ebp;
  oop v_esi;
  oop v_edi;
  oop v_cx;
  oop v_cl;
};
struct t_DynamicIntel32CodeGenerator {
  struct _vtable *_vtable[0];
  oop v_ccrs;
  oop v_csrs;
  oop v_spills;
  oop v_temps;
  oop v_params;
  oop v_lastLive;
  oop v_labels;
  oop v_needsFrame;
  oop v_parametersSize;
  oop v_frameSize;
  oop v_tempsSize;
  oop v_eax;
  oop v_ecx;
  oop v_edx;
  oop v_ebx;
  oop v_esp;
  oop v_ebp;
  oop v_esi;
  oop v_edi;
  oop v_cx;
  oop v_cl;
};
struct t_GrammarProduction {
  struct _vtable *_vtable[0];
  oop v_symbol;
  oop v_pattern;
  oop v_predicate;
  oop v_action;
};
struct t_ReductionGrammar {
  struct _vtable *_vtable[0];
  oop v_startSets;
  oop v_insnSets;
};
struct t_Intel32RegisterFilter {
  struct _vtable *_vtable[0];
  oop v_codeGenerator;
};
struct t_Intel32RegisterAllocator {
  struct _vtable *_vtable[0];
  oop v_codeGenerator;
};
static oop l_1= 0;
struct t_Jolt {
  struct _vtable *_vtable[0];
};
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_OrderedCollection= 0;
static oop v_IdentitySet= 0;
static oop v_IdentityDictionary= 0;
static oop v_SlotDictionary= 0;
static oop v_StaticBlockClosure= 0;
static oop v_ReadStream= 0;
static oop v_FileStream= 0;
static oop v_File= 0;
static oop v_Type= 0;
static oop v_NumericType= 0;
static oop v_IntegralType= 0;
static oop v_I1= 0;
static oop v_I2= 0;
static oop v_I4= 0;
static oop v_I8= 0;
static oop v_FloatingType= 0;
static oop v_PointerType= 0;
static oop v_Scanner= 0;
static oop v_CokeScanner= 0;
static oop v_Resource= 0;
static oop v_Instruction= 0;
static oop v_Statement= 0;
static oop v_Leaf= 0;
static oop v_Unary= 0;
static oop v_Binary= 0;
static oop v_Sink= 0;
static oop v_Call= 0;
static oop v_Spill= 0;
static oop v_Branch= 0;
static oop v_ConditionalBranch= 0;
static oop v_CodeGenerator= 0;
static oop v_RegisterAllocator= 0;
static oop v_Variable= 0;
static oop v_LocalVariable= 0;
static oop v_Environment= 0;
static oop v_Intel32CodeGenerator= 0;
static oop v_Initialisation= 0;
static oop v_Jolt= 0;
static size_t Jolt___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_Jolt); }
static char *Jolt___5fdebugName(oop _closure, oop v_self) { return "Jolt"; }
static oop Jolt__initialise(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop v_scanner= 0;
  oop v_expr= 0;
  oop v_result= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v_scanner;
  (void)v_expr;
  (void)v_result;
  _1= v_CokeScanner;
  _2= v_Initialisation;
  _2=_send(s_readStream, _2);
  _1=_send(s_on_, _1, _2);
  v_scanner= _1;
  /* whileFalse: */
  goto _l2;
 _l1:;
 {
  _1= v_expr;
  _1=_send(s__5feval, _1);
  v_result= _1;
 }
 _l2:;
 {
  _1= v_scanner;
  _1=_send(s_next, _1);
  v_expr= _1;
  _1=_send(s_isNil, _1);
 }
  if (!_1) goto _l1;
  _1= 0;
  _1= v_result;
  return _1;
 }

void __id__init__(void)
{
  if (_local_object) return;
  { 
    dlhandle_t global= dlopen(0, RTLD_LAZY);
    _local_object= *(oop *)dlsym(global, "_libid_object");
    _local_param= dlsym(global, "_libid_param");
    _local_intern= dlsym(global, "_libid_intern");
    _local_proto= dlsym(global, "_libid_proto");
    _local_import= dlsym(global, "_libid_import");
    _local_export= dlsym(global, "_libid_export");
    _local_method= dlsym(global, "_libid_method");
    _local_alloc= dlsym(global, "_libid_alloc");
    _local_palloc= dlsym(global, "_libid_palloc");
    _local_balloc= dlsym(global, "_libid_balloc");
    _local_bind= dlsym(global, "_libid_bind");
    _local_nlreturn= dlsym(global, "_libid_nlreturn");
    _local_nlresult= dlsym(global, "_libid_nlresult");
    _local_tag_vtable= dlsym(global, "_libid_tag_vtable");
    _local_nil_vtable= dlsym(global, "_libid_nil_vtable");
    _local_gc_addRoots= dlsym(global, "GC_add_roots");
    _local_gc_unregisterDisappearingLink= dlsym(global, "GC_unregister_disappearing_link");
    _local_gc_generalRegisterDisappearingLink= dlsym(global, "GC_general_register_disappearing_link");
    _local_gc_gcollect= dlsym(global, "GC_gcollect");
    dlclose(global);
  }
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _selector(s->name);
  }

  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "Objects", "__id__init__Objects");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_Magnitude= _id_import("Magnitude");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_OrderedCollection= _id_import("OrderedCollection");
  v_IdentitySet= _id_import("IdentitySet");
  v_IdentityDictionary= _id_import("IdentityDictionary");
  v_SlotDictionary= _id_import("SlotDictionary");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_ReadStream= _id_import("ReadStream");
  v_FileStream= _id_import("FileStream");
  v_File= _id_import("File");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "Symbol", "__id__init__Symbol");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "IdentitySet", "__id__init__IdentitySet");
  _send(s__5fimport_, _local_object, "Association", "__id__init__Association");
  _send(s__5fimport_, _local_object, "IdentityDictionary", "__id__init__IdentityDictionary");
  _send(s__5fimport_, _local_object, "SlotDictionary", "__id__init__SlotDictionary");
  _send(s__5fimport_, _local_object, "MemoDictionary", "__id__init__MemoDictionary");
  _send(s__5fimport_, _local_object, "OrderedCollection", "__id__init__OrderedCollection");
  _send(s__5fimport_, _local_object, "File", "__id__init__File");
  _send(s__5fimport_, _local_object, "Stream", "__id__init__Stream");
  _send(s__5fimport_, _local_object, "Link", "__id__init__Link");
  _send(s__5fimport_, _local_object, "LinkedList", "__id__init__LinkedList");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "OS", "__id__init__OS");
  _send(s__5fimport_, _local_object, "Function", "__id__init__Function");
  _send(s__5fimport_, _local_object, "Time", "__id__init__Time");
  _send(s__5fimport_, _local_object, "Date", "__id__init__Date");
  _send(s__5fimport_, _local_object, "Random", "__id__init__Random");
  _send(s__5fimport_, _local_object, "deprecated", "__id__init__deprecated");
  _send(s__5fimport_, _local_object, "Scanner", "__id__init__Scanner");
  _send(s__5fimport_, _local_object, "Expression", "__id__init__Expression");
  v_Type= _id_import("Type");
  v_NumericType= _id_import("NumericType");
  v_IntegralType= _id_import("IntegralType");
  v_I1= _id_import("I1");
  v_I2= _id_import("I2");
  v_I4= _id_import("I4");
  v_I8= _id_import("I8");
  v_FloatingType= _id_import("FloatingType");
  v_PointerType= _id_import("PointerType");
  v_Scanner= _id_import("Scanner");
  v_CokeScanner= _id_import("CokeScanner");
  _send(s__5fimport_, _local_object, "Compiler", "__id__init__Compiler");
  _send(s__5fimport_, _local_object, "CodeGenerator", "__id__init__CodeGenerator");
  _send(s__5fimport_, _local_object, "Resource", "__id__init__Resource");
  v_Resource= _id_import("Resource");
  _send(s__5fimport_, _local_object, "Instruction", "__id__init__Instruction");
  _send(s__5fimport_, _local_object, "CompilerOptions", "__id__init__CompilerOptions");
  v_Instruction= _id_import("Instruction");
  v_Statement= _id_import("Statement");
  v_Leaf= _id_import("Leaf");
  v_Unary= _id_import("Unary");
  v_Binary= _id_import("Binary");
  v_Sink= _id_import("Sink");
  v_Call= _id_import("Call");
  v_Spill= _id_import("Spill");
  v_Branch= _id_import("Branch");
  v_ConditionalBranch= _id_import("ConditionalBranch");
  v_CodeGenerator= _id_import("CodeGenerator");
  v_RegisterAllocator= _id_import("RegisterAllocator");
  v_Variable= _id_import("Variable");
  v_LocalVariable= _id_import("LocalVariable");
  v_Environment= _id_import("Environment");
  _send(s__5fimport_, _local_object, "CodeGenerator-local", "__id__init__CodeGenerator_2dlocal");
  v_Intel32CodeGenerator= _id_import("Intel32CodeGenerator");
  _send(s__5fimport_, _local_object, "Grammar", "__id__init__Grammar");
  l_1= _send(s_size_5f_value_5f_, v_String, 3572, "\012(define printf\011\011\011(_dlsym _RTLD_DEFAULT \"printf\"))\012(define exit\011\011\011(_dlsym _RTLD_DEFAULT \"exit\"))\012\012(define dlsym\012  (lambda (name)\012    (let ((addr (_dlsym _RTLD_DEFAULT name)))\012      (if addr\012\011  addr\012\011  (let ()\012\011    (printf \"%s: symbol lookup failed\012\" name)\012\011    (exit 1))))))\012\012(define sprintf\011\011\011(dlsym \"sprintf\"))\012(define malloc\011\011\011(dlsym \"malloc\"))\012(define realloc\011\011\011(dlsym \"realloc\"))\012(define free\011\011\011(dlsym \"free\"))\012(define strcmp\011\011\011(dlsym \"strcmp\"))\012(define usleep\011\011\011(dlsym \"usleep\"))\012\012(define _dlopen\011\011\011(dlsym \"dlopen\"))\012\012(define %%dlopen\012  (lambda (dir lib ext)\012    (let ((buf (malloc 1024)))\012      (sprintf buf \"%s%s%s\" dir lib ext)\012      (let ((handle (_dlopen buf _RTLD_NOW)))\012\011(free buf)\012\011handle))))\012\012(define %dlopen\012  (lambda (dir lib)\012    (let ((handle 0))\012      (or handle (set handle (%%dlopen dir lib \"\")))\012      (or handle (set handle (%%dlopen dir lib \".so\")))\012      (or handle (set handle (%%dlopen dir lib \".dylib\")))\012      handle)))\012\012(define dlopen\012  (lambda (lib)\012    (printf \"; loading: %s\012\" lib)\012    (let ((handle 0))\012      (or handle (set handle (%dlopen \"./\"              lib)))\012      (or handle (set handle (%dlopen \"\"                lib)))\012      (or handle (set handle (%dlopen \"/usr/local/lib/\" lib)))\012      (or handle (set handle (%dlopen \"/usr/X11R6/lib/\" lib)))\012      (if handle\012\011  handle\012\011  (let ()\012\011    (printf \"%s: cannot load library\012\" lib)\012\011    (exit 1))))))\012\012;; import/export to/from the object namespace\012\012(define import\011\011\011(dlsym\011\"_libid_import\"))\012(define export\011\011\011(dlsym\011\"_libid_export\"))\012\012(define Object\011\011\011(import \"Object\"))\012(define OS\011\011\011(import \"OS\"))\012(define CokeScanner\011\011(import \"CokeScanner\"))\012(define Expression\011\011(import \"Expression\"))\012(define Compiler\011\011(import \"Compiler\"))\012(define File\011\011\011(import \"File\"))\012(define ReadStream\011\011(import \"ReadStream\"))\012(define WriteStream\011\011(import \"WriteStream\"))\012(define String\011\011\011(import \"String\"))\012(define StdIn\011\011\011(import \"StdIn\"))\012(define StdOut\011\011\011(import \"StdOut\"))\012(define StdErr\011\011\011(import \"StdErr\"))\012\012;; message send syntax\012\012(define _bind\011(dlsym \"_libid_bind\"))\012\012(define Array\011\011\011(import \"Array\"))\012(define Array__new_\011\011(long@ (_bind 'new:\011\011Array)))\012(define Array__copyWithFirst_\011(long@ (_bind 'copyWithFirst:\011Array)))\012(define Array__withParameters_\011(long@ (_bind 'withParameters:\011Array)))\012(define Array__at_\011\011(long@ (_bind 'at:\011\011Array)))\012(define Array__at_put_\011\011(long@ (_bind 'at:put:\011\011Array)))\012\012(syntax send ; (send selector receiver args...)\012  (lambda (form compiler)\012    (let ((call   (Array__copyWithFirst_ 0 form form 0))\012\011  (params (Array__new_           0 Array Array '3)))\012      (Array__at_put_ 0 call call   '0 '(long@ __c))\012      (Array__at_put_ 0 call call   '1 '__c)\012      (Array__at_put_ 0 call call   '2 '__r)\012      (Array__at_put_ 0 call call   '3 '__r)\012      (Array__at_put_ 0 params params '0 (Array__at_ 0 form form '1))\012      (Array__at_put_ 0 params params '1 (Array__at_ 0 form form '2))\012      (Array__at_put_ 0 params params '2 call)\012      (let ((send '(let ((__s : 0) (__r : 1))\012\011\011     (let ((__c (_bind __s __r)))\012\011\011       : 2))))\012\011(Array__withParameters_ 0 send send params)))))\012\012(define herald\012  (lambda (path)\012    [StdErr nextPutAll: '\"; \"]\012    [StdErr nextPutAll: [String value_: path]]\012    [StdErr cr]))\012\012(herald \"JitBlit initialised\")\012\012;; read and evaluate a stream of s-expressions\012\012(lambda (cString)\012  (let ((string  [String value_: cString])\012        (scanner [CokeScanner on: [string readStream]])\012        (expr    0)\012        (result  0))\012    (while (set expr [scanner next])\012      ;;[StdOut print: expr][StdOut cr]\012      (set result [expr _eval]))\012    result))\012");
 {
  oop _1= 0;
  _1= l_1;
  v_Initialisation= _1;
  _id_export("Initialisation", v_Initialisation);
 }
  v_Jolt= _proto(v_Object);
  _method(v_Jolt, s__5fsizeof, Jolt___5fsizeof);
  _method(v_Jolt, s__5fdebugName, Jolt___5fdebugName);
  _id_export("Jolt", v_Jolt);
  _method(v_Jolt, s_initialise, Jolt__initialise);
}

int main(int argc, char **argv, char **envp)
{
  dlhandle_t global= dlopen(0, RTLD_LAZY);
  void *_local_init= dlsym(global, "_libid_init");
  if (!_local_init) { fprintf(stderr, "id runtime not found\n");  abort(); }
  ((void (*)(int *, char ***, char ***))_local_init)(&argc, &argv, &envp);
  __id__init__();
  dlclose(global);
  return 0;
}

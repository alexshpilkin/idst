/* generated by Id 1.1 at 2007-09-03 20:38:20 Z */
/* with the command: -I../stage1/ -I../st80 -c VarargNode.st -o ../stage2/VarargNode.o.c */

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
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

typedef oop (*_imp_t)(oop _thunk, oop receiver, ...);

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(NM, TYPE, FILE)	void *__id_debug= _libid->enter(NM, TYPE, FILE)
# define _line(lno)		_libid->line(lno)
# define _leave()		_libid->leave(__id_debug)
# define _backtrace()		_libid->backtrace()
#else
# define _enter(NM, TYPE, FILE)
# define _line(lno)
# define _leave()
# define _backtrace()		"(no debugging information)"
#endif
#define _return			_leave(); return

#define _send(MSG, RCV, ARG...) ({					\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_libid->bind((MSG), _r);	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

#define _super(TYP, MSG, RCV, ARG...) ({				\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_libid->bind((MSG), (TYP));	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

static oop s_push= 0;
static oop s_loadVararg_location_= 0;
static oop s__5fdebugName= 0;
static oop s_encode_= 0;
static oop s_generate_= 0;
static oop s__5fimport_= 0;
static oop s_printIndent_= 0;
static oop s__5fsizeof= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_println_= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "push", &s_push },
  { "loadVararg:location:", &s_loadVararg_location_ },
  { "_debugName", &s__5fdebugName },
  { "encode:", &s_encode_ },
  { "generate:", &s_generate_ },
  { "_import:", &s__5fimport_ },
  { "printIndent:", &s_printIndent_ },
  { "_sizeof", &s__5fsizeof },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "println:", &s_println_ },
  { "println", &s_println },
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
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
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
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
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
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
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
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
struct t_VarargNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
static oop l_1= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_ParseNode= 0;
static oop v_VarargNode= 0;
static size_t VarargNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_VarargNode); }
static char *VarargNode___5fdebugName(oop _closure, oop v_self) { return "VarargNode"; }
static oop VarargNode__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder)
 {
  _enter("encode:", "VarargNode", "/home/piumarta/src/idst/object/idc/VarargNode.st");
  oop _1= 0;
  _line(27);
  _1= v_encoder;
  _line(29);
  _1=_send(s_push, _1);
  ((struct t_VarargNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop VarargNode__generate_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter("generate:", "VarargNode", "/home/piumarta/src/idst/object/idc/VarargNode.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(32);
  _1= v_gen;
  _2= v_self;
  _3= ((struct t_VarargNode *)v_stateful_self)->v_location;
  _line(34);
  _1=_send(s_loadVararg_location_, _1, _2, _3);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop VarargNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter("println:", "VarargNode", "/home/piumarta/src/idst/object/idc/VarargNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(37);
  _1= v_self;
  _2= v_indent;
  _line(39);
  _1=_send(s_printIndent_, _1, _2);
  _1= l_1;
  _line(40);
  _1=_send(s_println, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

void __id__init__VarargNode(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter("__id__init__", "<initialisation>", "VarargNode.st");

  _send(s__5fimport_, _libid->_object, "ParseNode", "__id__init__ParseNode");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_ParseNode= _libid->import("ParseNode");
  v_VarargNode= _libid->proto(v_ParseNode);
  _libid->method(v_VarargNode, s__5fsizeof, (_imp_t)VarargNode___5fsizeof);
  _libid->method(v_VarargNode, s__5fdebugName, (_imp_t)VarargNode___5fdebugName);
  _libid->export("VarargNode", v_VarargNode);
  _libid->method(v_VarargNode, s_encode_, (_imp_t)VarargNode__encode_);
  _libid->method(v_VarargNode, s_generate_, (_imp_t)VarargNode__generate_);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 3, "...");
  _libid->method(v_VarargNode, s_println_, (_imp_t)VarargNode__println_);
  _leave();
}

/* generated by Id 1.1 at 2007-09-03 20:37:27 Z */
/* with the command: -I../stage1/ -c Association.st -o ../stage2/Association.o.c */

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

static oop s_hash= 0;
static oop s__3d= 0;
static oop s_withKey_value_= 0;
static oop s__5fdebugName= 0;
static oop s_nextPutAll_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_yourself= 0;
static oop s_and_= 0;
static oop s_bitXor_= 0;
static oop s_printOn_= 0;
static oop s_withKey_= 0;
static oop s_value_= 0;
static oop s__2d_3e= 0;
static oop s_value= 0;
static oop s__5fsizeof= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "hash", &s_hash },
  { "=", &s__3d },
  { "withKey:value:", &s_withKey_value_ },
  { "_debugName", &s__5fdebugName },
  { "nextPutAll:", &s_nextPutAll_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "yourself", &s_yourself },
  { "and:", &s_and_ },
  { "bitXor:", &s_bitXor_ },
  { "printOn:", &s_printOn_ },
  { "withKey:", &s_withKey_ },
  { "value:", &s_value_ },
  { "->", &s__2d_3e },
  { "value", &s_value },
  { "_sizeof", &s__5fsizeof },
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
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
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
static oop v_true= 0;
static oop v_false= 0;
static oop v_LookupKey= 0;
static oop v_Association= 0;
static size_t Association___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_Association); }
static char *Association___5fdebugName(oop _closure, oop v_self) { return "Association"; }
static oop Association__withKey_value_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aKey, oop v_anObject)
 {
  _enter("withKey:value:", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  oop _2= 0;
  _line(25);
  _1= v_self;
  _2= v_aKey;
  _line(27);
  _1=_super(v_LookupKey, s_withKey_, _1, _2);
  _2= v_anObject;
  _line(27);
  _send(s_value_, _1, _2);
  _1=_send(s_yourself, _1);
  _leave();
  return _1;
  _leave();
 }
static oop Association__value(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("value", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  _line(30);
  _1= ((struct t_Association *)v_stateful_self)->v_value;
  _leave();
  return _1;
  _leave();
 }
static oop Association__value_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anObject)
 {
  _enter("value:", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  _line(31);
  _1= v_anObject;
  ((struct t_Association *)v_stateful_self)->v_value= _1;
  _leave();
  return _1;
  _leave();
 }
static oop Association___3d(oop v__closure, oop v_stateful_self, oop v_self, oop v_anAssociation)
 {
  _enter("=", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  oop _2= 0;
  _line(33);
  /* and: */
  _1= v_self;
  _2= v_anAssociation;
  _line(33);
  _1=_super(v_LookupKey, s__3d, _1, _2);
  if (!_1) goto _l1;
 {
  _1= ((struct t_Association *)v_stateful_self)->v_value;
  _2= v_anAssociation;
  _line(33);
  _2=_send(s_value, _2);
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
 }
 _l1:;
  _leave();
  return _1;
  _leave();
 }
static oop Association__hash(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("hash", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  oop _2= 0;
  _line(34);
  _1= ((struct t_Association *)v_stateful_self)->v_key;
  _line(34);
  _1=_send(s_hash, _1);
  _2= ((struct t_Association *)v_stateful_self)->v_value;
  _line(34);
  _2=_send(s_hash, _2);
  if ((1 & (int)_1 & (int)_2) && (_1 > 0) && (_2 > 0)) {
    _1= (oop)(((int)_1 ^ (int)_2) | 1);
  } else _1= _send(s_bitXor_, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static oop Association__printOn_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aStream)
 {
  _enter("printOn:", "Association", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  oop _2= 0;
  _line(36);
  _1= v_self;
  _2= v_aStream;
  _line(38);
  _1=_super(v_LookupKey, s_printOn_, _1, _2);
  _1= v_aStream;
  _2= l_1;
  _line(39);
  _1=_send(s_nextPutAll_, _1, _2);
  _1= ((struct t_Association *)v_stateful_self)->v_value;
  _2= v_aStream;
  _line(40);
  _1=_send(s_printOn_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop Object___2d_3e(oop v__closure, oop v_stateful_self, oop v_self, oop v_anObject)
 {
  _enter("->", "Object", "/home/piumarta/src/idst/object/st80/Association.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(44);
  _1= v_Association;
  _2= v_self;
  _3= v_anObject;
  _line(44);
  _1=_send(s_withKey_value_, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }

void __id__init__Association(struct __libid *__libid)
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
  _enter("__id__init__", "<initialisation>", "Association.st");

  _send(s__5fimport_, _libid->_object, "LookupKey", "__id__init__LookupKey");
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
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  v_LookupKey= _libid->import("LookupKey");
  v_Association= _libid->proto(v_LookupKey);
  _libid->method(v_Association, s__5fsizeof, (_imp_t)Association___5fsizeof);
  _libid->method(v_Association, s__5fdebugName, (_imp_t)Association___5fdebugName);
  _libid->export("Association", v_Association);
  _libid->method(v_Association, s_withKey_value_, (_imp_t)Association__withKey_value_);
  _libid->method(v_Association, s_value, (_imp_t)Association__value);
  _libid->method(v_Association, s_value_, (_imp_t)Association__value_);
  _libid->method(v_Association, s__3d, (_imp_t)Association___3d);
  _libid->method(v_Association, s_hash, (_imp_t)Association__hash);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 2, "->");
  _libid->method(v_Association, s_printOn_, (_imp_t)Association__printOn_);
  _libid->method(v_Object, s__2d_3e, (_imp_t)Object___2d_3e);
  _leave();
}

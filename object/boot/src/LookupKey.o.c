/* generated by Id 1.1 at � */
/* with the command: -I../stage1/ -c LookupKey.st -o ../stage2/LookupKey.o.c */

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

struct __send;
typedef oop (*_imp_t)(struct __send *_send, ...);

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s_hash= 0;
static oop s_key= 0;
static oop s__3d= 0;
static oop s_isLookupKey= 0;
static oop s__5fdebugName= 0;
static oop s__3c= 0;
static oop s_new= 0;
static oop s__5fimport_= 0;
static oop s_yourself= 0;
static oop s_and_= 0;
static oop s_printOn_= 0;
static oop s__5fslots= 0;
static oop s_key_= 0;
static oop s_withKey_= 0;
static oop s__5fsizeof= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "hash", &s_hash },
  { "key", &s_key },
  { "=", &s__3d },
  { "isLookupKey", &s_isLookupKey },
  { "_debugName", &s__5fdebugName },
  { "<", &s__3c },
  { "new", &s_new },
  { "_import:", &s__5fimport_ },
  { "yourself", &s_yourself },
  { "and:", &s_and_ },
  { "printOn:", &s_printOn_ },
  { "_slots", &s__5fslots },
  { "key:", &s_key_ },
  { "withKey:", &s_withKey_ },
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
static size_t LookupKey___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_LookupKey); }
static char *LookupKey___5fdebugName(oop _closure, oop v_self) { return "LookupKey"; }
static struct __slotinfo *LookupKey___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "key", 0, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "isLookupKey", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 25, 26, 0 };
static oop LookupKey__isLookupKey(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isLookupKey", "Object", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 26, 28, &__info1 };
static oop Object__isLookupKey(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(26);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "withKey:", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 28, 30, &__info2 };
static oop LookupKey__withKey_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aKey)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(28);
  _1= v_self;
  _line(28);
  _1=_sendv(s_new, 1, _1);
  _2= v_aKey;
  _line(28);
  _sendv(s_key_, 2, _1, _2);
  _1=_sendv(s_yourself, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "key:", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 30, 31, &__info3 };
static oop LookupKey__key_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anObject)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(30);
  _1= v_anObject;
  ((struct t_LookupKey *)v_stateful_self)->v_key= _1;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "key", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 31, 33, &__info4 };
static oop LookupKey__key(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(31);
  _1= ((struct t_LookupKey *)v_stateful_self)->v_key;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "<", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 33, 34, &__info5 };
static oop LookupKey___3c(oop v__closure, oop v_stateful_self, oop v_self, oop v_aLookupKey)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  _line(33);
  _1= ((struct t_LookupKey *)v_stateful_self)->v_key;
  _2= v_aLookupKey;
  _line(33);
  _2=_sendv(s_key, 1, _2);
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 < (int)_2) ? v_true : v_false);
  } else _1= _sendv(s__3c, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "=", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 34, 35, &__info6 };
static oop LookupKey___3d(oop v__closure, oop v_stateful_self, oop v_self, oop v_anObject)
 {
  _enter(&__info7);
  oop _1= 0;
  oop _2= 0;
  _line(34);
  /* and: */
  _1= v_anObject;
  _line(34);
  _1=_sendv(s_isLookupKey, 1, _1);
  if (!_1) goto _l1;
 {
  _1= ((struct t_LookupKey *)v_stateful_self)->v_key;
  _2= v_anObject;
  _line(34);
  _2=_sendv(s_key, 1, _2);
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _sendv(s__3d, 2, _1, _2);
 }
 _l1:;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "hash", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 35, 37, &__info7 };
static oop LookupKey__hash(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info8);
  oop _1= 0;
  _line(35);
  _1= ((struct t_LookupKey *)v_stateful_self)->v_key;
  _line(35);
  _1=_sendv(s_hash, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "printOn:", "LookupKey", "/Users/piumarta/src/idst/object/st80/LookupKey.st", 0, 37, 41, &__info8 };
static oop LookupKey__printOn_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aStream)
 {
  _enter(&__info9);
  oop _1= 0;
  oop _2= 0;
  _line(37);
  _1= ((struct t_LookupKey *)v_stateful_self)->v_key;
  _2= v_aStream;
  _line(39);
  _1=_sendv(s_printOn_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "LookupKey.st", 0, 0, 0, &__info9 };
void __id__init__LookupKey(struct __libid *__libid)
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
  _enter(&__info);
  _libid->infos(&__info, &__info1);

  _sendv(s__5fimport_, 3, _libid->_object, "Object", "__id__init__Object");
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
  v_LookupKey= _libid->proto2(v_Object, LookupKey___5fsizeof(0, 0));
  _libid->method(v_LookupKey, s__5fsizeof, (_imp_t)LookupKey___5fsizeof);
  _libid->method(v_LookupKey, s__5fdebugName, (_imp_t)LookupKey___5fdebugName);
  _libid->method(v_LookupKey, s__5fslots, (_imp_t)LookupKey___5fslots);
  _libid->export("LookupKey", v_LookupKey);
  _libid->method(v_LookupKey, s_isLookupKey, (_imp_t)LookupKey__isLookupKey);
  _libid->method(v_Object, s_isLookupKey, (_imp_t)Object__isLookupKey);
  _libid->method(v_LookupKey, s_withKey_, (_imp_t)LookupKey__withKey_);
  _libid->method(v_LookupKey, s_key_, (_imp_t)LookupKey__key_);
  _libid->method(v_LookupKey, s_key, (_imp_t)LookupKey__key);
  _libid->method(v_LookupKey, s__3c, (_imp_t)LookupKey___3c);
  _libid->method(v_LookupKey, s__3d, (_imp_t)LookupKey___3d);
  _libid->method(v_LookupKey, s_hash, (_imp_t)LookupKey__hash);
  _libid->method(v_LookupKey, s_printOn_, (_imp_t)LookupKey__printOn_);
  _leave();
}

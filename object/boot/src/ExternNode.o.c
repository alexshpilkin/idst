/* generated by Id 1.1 at � */
/* with the command: -I../stage1/ -I../st80 -c ExternNode.st -o ../stage2/ExternNode.o.c */

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

static oop s_println= 0;
static oop s_genInitialisation_= 0;
static oop s_withPosition_= 0;
static oop s_withCode_position_= 0;
static oop s__5fdebugName= 0;
static oop s__5fimport_= 0;
static oop s_genDeclaration_= 0;
static oop s_genDefinition_= 0;
static oop s_genImplementation_= 0;
static oop s_println_= 0;
static oop s_print= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__5fslots= 0;
static oop s_addTo_= 0;
static oop s_encode_= 0;
static oop s__5fsizeof= 0;
static oop s_addExtern_= 0;
static oop s_genExtern_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "println", &s_println },
  { "genInitialisation:", &s_genInitialisation_ },
  { "withPosition:", &s_withPosition_ },
  { "withCode:position:", &s_withCode_position_ },
  { "_debugName", &s__5fdebugName },
  { "_import:", &s__5fimport_ },
  { "genDeclaration:", &s_genDeclaration_ },
  { "genDefinition:", &s_genDefinition_ },
  { "genImplementation:", &s_genImplementation_ },
  { "println:", &s_println_ },
  { "print", &s_print },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "_slots", &s__5fslots },
  { "addTo:", &s_addTo_ },
  { "encode:", &s_encode_ },
  { "_sizeof", &s__5fsizeof },
  { "addExtern:", &s_addExtern_ },
  { "genExtern:", &s_genExtern_ },
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
struct t_ExternNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_code;
};
static oop l_9= 0;
static oop l_10= 0;
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
static oop v_ExternNode= 0;
static size_t ExternNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_ExternNode); }
static char *ExternNode___5fdebugName(oop _closure, oop v_self) { return "ExternNode"; }
static struct __slotinfo *ExternNode___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "position", 0, 4 }, { "location", 4, 4 }, { "code", 8, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "withCode:position:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 26, 32, 0 };
static oop ExternNode__withCode_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_codeString, oop v_aPosition)
 {
  _enter(&__info1);
  oop _1= 0;
  oop _2= 0;
  _line(26);
  _1= v_self;
  _2= v_aPosition;
  _line(28);
  _1=_sendv(s_withPosition_, 2, _1, _2);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_codeString;
  ((struct t_ExternNode *)v_stateful_self)->v_code= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "addTo:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 32, 34, &__info1 };
static oop ExternNode__addTo_(oop v__closure, oop v_stateful_self, oop v_self, oop v_client)
 {
  _enter(&__info2);
  oop _1= 0;
  oop _2= 0;
  _line(32);
  _1= v_client;
  _2= v_self;
  _line(32);
  _1=_sendv(s_addExtern_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "encode:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 34, 36, &__info2 };
static oop ExternNode__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(34);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "genDeclaration:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 36, 37, &__info3 };
static oop ExternNode__genDeclaration_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(36);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "genDefinition:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 37, 38, &__info4 };
static oop ExternNode__genDefinition_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(37);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "genImplementation:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 38, 39, &__info5 };
static oop ExternNode__genImplementation_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(38);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "genInitialisation:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 39, 41, &__info6 };
static oop ExternNode__genInitialisation_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info7);
  oop _1= 0;
  oop _2= 0;
  _line(39);
  _1= v_gen;
  _2= ((struct t_ExternNode *)v_stateful_self)->v_code;
  _line(39);
  _1=_sendv(s_genExtern_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "println:", "ExternNode", "/Users/piumarta/src/idst/object/idc/ExternNode.st", 0, 41, 47, &__info7 };
static oop ExternNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter(&__info8);
  oop _1= 0;
  _line(41);
  _1= l_9;
  _line(43);
  _1=_sendv(s_print, 1, _1);
  _1= ((struct t_ExternNode *)v_stateful_self)->v_code;
  _line(44);
  _1=_sendv(s_print, 1, _1);
  _1= l_10;
  _line(45);
  _1=_sendv(s_println, 1, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "ExternNode.st", 0, 0, 0, &__info8 };
void __id__init__ExternNode(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "ParseNode", "__id__init__ParseNode");
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
  v_ExternNode= _libid->proto2(v_ParseNode, ExternNode___5fsizeof(0, 0));
  _libid->method(v_ExternNode, s__5fsizeof, (_imp_t)ExternNode___5fsizeof);
  _libid->method(v_ExternNode, s__5fdebugName, (_imp_t)ExternNode___5fdebugName);
  _libid->method(v_ExternNode, s__5fslots, (_imp_t)ExternNode___5fslots);
  _libid->export("ExternNode", v_ExternNode);
  _libid->method(v_ExternNode, s_withCode_position_, (_imp_t)ExternNode__withCode_position_);
  _libid->method(v_ExternNode, s_addTo_, (_imp_t)ExternNode__addTo_);
  _libid->method(v_ExternNode, s_encode_, (_imp_t)ExternNode__encode_);
  _libid->method(v_ExternNode, s_genDeclaration_, (_imp_t)ExternNode__genDeclaration_);
  _libid->method(v_ExternNode, s_genDefinition_, (_imp_t)ExternNode__genDefinition_);
  _libid->method(v_ExternNode, s_genImplementation_, (_imp_t)ExternNode__genImplementation_);
  _libid->method(v_ExternNode, s_genInitialisation_, (_imp_t)ExternNode__genInitialisation_);
  l_9= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 9, "Extern { ");
  l_10= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 2, " }");
  _libid->method(v_ExternNode, s_println_, (_imp_t)ExternNode__println_);
  _leave();
}

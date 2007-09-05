/* generated by Id 1.1 at 2007-09-03 20:38:18 Z */
/* with the command: -I../stage1/ -I../st80 -c SequenceNode.st -o ../stage2/SequenceNode.o.c */

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

static oop s_new_5f_= 0;
static oop s_add_= 0;
static oop s_printIndent_= 0;
static oop s_addTemporary_= 0;
static oop s__5fdebugName= 0;
static oop s_addStatement_= 0;
static oop s_new= 0;
static oop s__5fimport_= 0;
static oop s_lastStatement= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_last= 0;
static oop s_println_= 0;
static oop s_printString= 0;
static oop s_initialize= 0;
static oop s_do_= 0;
static oop s_value_5f_= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s__2b= 0;
static oop s__2c= 0;
static oop s_addBlock_= 0;
static oop s__5fsizeof= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new_:", &s_new_5f_ },
  { "add:", &s_add_ },
  { "printIndent:", &s_printIndent_ },
  { "addTemporary:", &s_addTemporary_ },
  { "_debugName", &s__5fdebugName },
  { "addStatement:", &s_addStatement_ },
  { "new", &s_new },
  { "_import:", &s__5fimport_ },
  { "lastStatement", &s_lastStatement },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "last", &s_last },
  { "println:", &s_println_ },
  { "printString", &s_printString },
  { "initialize", &s_initialize },
  { "do:", &s_do_ },
  { "value_:", &s_value_5f_ },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "+", &s__2b },
  { ",", &s__2c },
  { "addBlock:", &s_addBlock_ },
  { "_sizeof", &s__5fsizeof },
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
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_SequenceNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_temporaries;
  oop v_statements;
  oop v_scope;
  oop v_literals;
  oop v_blocks;
};
static oop l_1= 0;
static oop l_2= 0;
static oop l_4= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_nil= 0;
static oop v_ParseNode= 0;
static oop v_OrderedCollection= 0;
static oop v_SequenceNode= 0;
static size_t SequenceNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_SequenceNode); }
static char *SequenceNode___5fdebugName(oop _closure, oop v_self) { return "SequenceNode"; }
static oop SequenceNode__initialize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("initialize", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  _line(31);
  _1= v_self;
  _line(33);
  _1=_super(v_ParseNode, s_initialize, _1);
  _1= v_OrderedCollection;
  _line(34);
  _1=_send(s_new, _1);
  ((struct t_SequenceNode *)v_stateful_self)->v_temporaries= _1;
  _1= v_OrderedCollection;
  _line(35);
  _1=_send(s_new, _1);
  ((struct t_SequenceNode *)v_stateful_self)->v_statements= _1;
  _1= v_nil;
  ((struct t_SequenceNode *)v_stateful_self)->v_scope= _1;
  _1= v_nil;
  ((struct t_SequenceNode *)v_stateful_self)->v_literals= _1;
  _1= v_OrderedCollection;
  _line(38);
  _1=_send(s_new, _1);
  ((struct t_SequenceNode *)v_stateful_self)->v_blocks= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop SequenceNode__addTemporary_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aVariableNode)
 {
  _enter("addTemporary:", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(41);
  _1= ((struct t_SequenceNode *)v_stateful_self)->v_temporaries;
  _2= v_aVariableNode;
  _line(41);
  _1=_send(s_add_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop SequenceNode__addStatement_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aNode)
 {
  _enter("addStatement:", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(42);
  _1= ((struct t_SequenceNode *)v_stateful_self)->v_statements;
  _2= v_aNode;
  _line(42);
  _1=_send(s_add_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop SequenceNode__lastStatement(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter("lastStatement", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  _line(43);
  _1= ((struct t_SequenceNode *)v_stateful_self)->v_statements;
  _line(43);
  _1=_send(s_last, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop SequenceNode__addBlock_(oop v__closure, oop v_stateful_self, oop v_self, oop v_blockNode)
 {
  _enter("addBlock:", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(44);
  _1= ((struct t_SequenceNode *)v_stateful_self)->v_blocks;
  _2= v_blockNode;
  _line(44);
  _1=_send(s_add_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop b_3(oop v__closure, oop v__self, oop v_stmt)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(50);
  _1= v_stmt;
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* indent */
  _3= l_4;
  {
    int _l= (int)_2 >> 1;
    int _r= (int)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (int)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(_s << 1 | 1);  else _2= _send(s__2b, _2, _3);
  }
  _line(50);
  _1=_send(s_println_, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static oop SequenceNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter("println:", "SequenceNode", "/home/piumarta/src/idst/object/idc/SequenceNode.st");
  oop _state1= _send(s_new_5f_, v__vector, 2);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[1]= v_indent;
  _line(46);
  _1= v_self;
  _2= ((oop *)_state1)[1];  /* indent */
  _line(48);
  _1=_send(s_printIndent_, _1, _2);
  _1= l_1;
  _2= ((struct t_SequenceNode *)v_stateful_self)->v_temporaries;
  _line(49);
  _2=_send(s_printString, _2);
  _line(49);
  _1=_send(s__2c, _1, _2);
  _2= l_2;
  _line(49);
  _1=_send(s__2c, _1, _2);
  _line(49);
  _1=_send(s_println, _1);
  _1= ((struct t_SequenceNode *)v_stateful_self)->v_statements;
  /* Scope('stmt'->ArgumentVariableNode) */
  /* Scope('position'->SlotVariableNode 'location'->SlotVariableNode 'temporaries'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'scope'->SlotVariableNode 'self'->ArgumentVariableNode 'literals'->SlotVariableNode 'indent'->ArgumentVariableNode 'blocks'->SlotVariableNode 'statements'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_3, 1, 0, ((oop *)_state1), 0);
  _line(50);
  _1=_send(s_do_, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

void __id__init__SequenceNode(struct __libid *__libid)
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
  _enter("__id__init__", "<initialisation>", "SequenceNode.st");

  _send(s__5fimport_, _libid->_object, "ParseNode", "__id__init__ParseNode");
  v__object= _libid->import("_object");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_nil= _libid->import("nil");
  v_ParseNode= _libid->import("ParseNode");
  _send(s__5fimport_, _libid->_object, "OrderedCollection", "__id__init__OrderedCollection");
  v_OrderedCollection= _libid->import("OrderedCollection");
  v_SequenceNode= _libid->proto(v_ParseNode);
  _libid->method(v_SequenceNode, s__5fsizeof, (_imp_t)SequenceNode___5fsizeof);
  _libid->method(v_SequenceNode, s__5fdebugName, (_imp_t)SequenceNode___5fdebugName);
  _libid->export("SequenceNode", v_SequenceNode);
  _libid->method(v_SequenceNode, s_initialize, (_imp_t)SequenceNode__initialize);
  _libid->method(v_SequenceNode, s_addTemporary_, (_imp_t)SequenceNode__addTemporary_);
  _libid->method(v_SequenceNode, s_addStatement_, (_imp_t)SequenceNode__addStatement_);
  _libid->method(v_SequenceNode, s_lastStatement, (_imp_t)SequenceNode__lastStatement);
  _libid->method(v_SequenceNode, s_addBlock_, (_imp_t)SequenceNode__addBlock_);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 2, "| ");
  l_2= _send(s_size_5f_value_5f_, v_ImmutableString, 2, " |");
  l_4= _send(s_value_5f_, v_SmallInteger, 1);
  _libid->method(v_SequenceNode, s_println_, (_imp_t)SequenceNode__println_);
  _leave();
}

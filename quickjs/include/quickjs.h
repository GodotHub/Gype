/*
 * QuickJS Javascript Engine
 *
 * Copyright (c) 2017-2021 Fabrice Bellard
 * Copyright (c) 2017-2021 Charlie Gordon
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef QUICKJS_H
#define QUICKJS_H

#include "cutils.h"
#include "libbf.h"
#include "list.h"
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GNUC__) || defined(__clang__)
#define js_likely(x) __builtin_expect(!!(x), 1)
#define js_unlikely(x) __builtin_expect(!!(x), 0)
#define js_force_inline inline __attribute__((always_inline))
#define __js_printf_like(f, a) __attribute__((format(printf, f, a)))
#else
#define js_likely(x) (x)
#define js_unlikely(x) (x)
#define js_force_inline inline
#define __js_printf_like(a, b)
#endif

#define JS_BOOL int

typedef struct JSRuntime JSRuntime;
typedef struct JSContext JSContext;
typedef struct JSObject JSObject;
typedef struct JSClass JSClass;
typedef struct BlockEnv BlockEnv;
typedef struct JSGlobalVar JSGlobalVar;
typedef struct RelocEntry RelocEntry;
typedef struct JumpSlot JumpSlot;
typedef struct LabelSlot LabelSlot;
typedef struct LineNumberSlot LineNumberSlot;
typedef struct JSFunctionDef JSFunctionDef;
typedef struct JSToken JSToken;
typedef struct JSClosureVar JSClosureVar;
typedef struct JSVarScope JSVarScope;
typedef struct JSVarDef JSVarDef;
typedef struct JSModuleDef JSModuleDef;
typedef struct JSVarRef JSVarRef;
typedef uint32_t JSClassID;
typedef uint32_t JSAtom;

/* C module definition */
typedef int JSModuleInitFunc(JSContext *ctx, JSModuleDef *m);

#if INTPTR_MAX >= INT64_MAX
#define JS_PTR64
#define JS_PTR64_DEF(a) a
#else
#define JS_PTR64_DEF(a)
#endif

#ifndef JS_PTR64
#define JS_NAN_BOXING
#endif

enum {
	TOK_NUMBER = -128,
	TOK_STRING,
	TOK_TEMPLATE,
	TOK_IDENT,
	TOK_REGEXP,
	/* warning: order matters (see js_parse_assign_expr) */
	TOK_MUL_ASSIGN,
	TOK_DIV_ASSIGN,
	TOK_MOD_ASSIGN,
	TOK_PLUS_ASSIGN,
	TOK_MINUS_ASSIGN,
	TOK_SHL_ASSIGN,
	TOK_SAR_ASSIGN,
	TOK_SHR_ASSIGN,
	TOK_AND_ASSIGN,
	TOK_XOR_ASSIGN,
	TOK_OR_ASSIGN,
#ifdef CONFIG_BIGNUM
	TOK_MATH_POW_ASSIGN,
#endif
	TOK_POW_ASSIGN,
	TOK_LAND_ASSIGN,
	TOK_LOR_ASSIGN,
	TOK_DOUBLE_QUESTION_MARK_ASSIGN,
	TOK_DEC,
	TOK_INC,
	TOK_SHL,
	TOK_SAR,
	TOK_SHR,
	TOK_LT,
	TOK_LTE,
	TOK_GT,
	TOK_GTE,
	TOK_EQ,
	TOK_STRICT_EQ,
	TOK_NEQ,
	TOK_STRICT_NEQ,
	TOK_LAND,
	TOK_LOR,
#ifdef CONFIG_BIGNUM
	TOK_MATH_POW,
#endif
	TOK_POW,
	TOK_ARROW,
	TOK_ELLIPSIS,
	TOK_DOUBLE_QUESTION_MARK,
	TOK_QUESTION_MARK_DOT,
	TOK_ERROR,
	TOK_PRIVATE_NAME,
	TOK_EOF,
	/* keywords: WARNING: same order as atoms */
	TOK_NULL, /* must be first */
	TOK_FALSE,
	TOK_TRUE,
	TOK_IF,
	TOK_ELSE,
	TOK_RETURN,
	TOK_VAR,
	TOK_THIS,
	TOK_DELETE,
	TOK_VOID,
	TOK_TYPEOF,
	TOK_NEW,
	TOK_IN,
	TOK_INSTANCEOF,
	TOK_DO,
	TOK_WHILE,
	TOK_FOR,
	TOK_BREAK,
	TOK_CONTINUE,
	TOK_SWITCH,
	TOK_CASE,
	TOK_DEFAULT,
	TOK_THROW,
	TOK_TRY,
	TOK_CATCH,
	TOK_FINALLY,
	TOK_FUNCTION,
	TOK_DEBUGGER,
	TOK_WITH,
	/* FutureReservedWord */
	TOK_CLASS,
	TOK_CONST,
	TOK_ENUM,
	TOK_EXPORT,
	TOK_EXTENDS,
	TOK_IMPORT,
	TOK_SUPER,
	/* FutureReservedWords when parsing strict mode code */
	TOK_IMPLEMENTS,
	TOK_INTERFACE,
	TOK_LET,
	TOK_PACKAGE,
	TOK_PRIVATE,
	TOK_PROTECTED,
	TOK_PUBLIC,
	TOK_STATIC,
	TOK_YIELD,
	TOK_AWAIT, /* must be last */
	TOK_OF, /* only used for js_parse_skip_parens_token() */
};

enum {
	/* all tags with a reference count are negative */
	JS_TAG_FIRST = -11, /* first negative tag */
	JS_TAG_BIG_DECIMAL = -11,
	JS_TAG_BIG_INT = -10,
	JS_TAG_BIG_FLOAT = -9,
	JS_TAG_SYMBOL = -8,
	JS_TAG_STRING = -7,
	JS_TAG_MODULE = -3, /* used internally */
	JS_TAG_FUNCTION_BYTECODE = -2, /* used internally */
	JS_TAG_OBJECT = -1,

	JS_TAG_INT = 0,
	JS_TAG_BOOL = 1,
	JS_TAG_NULL = 2,
	JS_TAG_UNDEFINED = 3,
	JS_TAG_UNINITIALIZED = 4,
	JS_TAG_CATCH_OFFSET = 5,
	JS_TAG_EXCEPTION = 6,
	JS_TAG_FLOAT64 = 7,
	/* any larger tag is FLOAT64 if JS_NAN_BOXING */
};

typedef struct JSRefCountHeader {
	int ref_count;
} JSRefCountHeader;

#define JS_FLOAT64_NAN NAN

#ifdef CONFIG_CHECK_JSVALUE
/* JSValue consistency : it is not possible to run the code in this
   mode, but it is useful to detect simple reference counting
   errors. It would be interesting to modify a static C analyzer to
   handle specific annotations (clang has such annotations but only
   for objective C) */
typedef struct __JSValue *JSValue;
typedef const struct __JSValue *JSValueConst;

#define JS_VALUE_GET_TAG(v) (int)((uintptr_t)(v) & 0xf)
/* same as JS_VALUE_GET_TAG, but return JS_TAG_FLOAT64 with NaN boxing */
#define JS_VALUE_GET_NORM_TAG(v) JS_VALUE_GET_TAG(v)
#define JS_VALUE_GET_INT(v) (int)((intptr_t)(v) >> 4)
#define JS_VALUE_GET_BOOL(v) JS_VALUE_GET_INT(v)
#define JS_VALUE_GET_FLOAT64(v) (double)JS_VALUE_GET_INT(v)
#define JS_VALUE_GET_PTR(v) (void *)((intptr_t)(v) & ~0xf)

#define JS_MKVAL(tag, val) (JSValue)(intptr_t)(((val) << 4) | (tag))
#define JS_MKPTR(tag, p) (JSValue)((intptr_t)(p) | (tag))

#define JS_TAG_IS_FLOAT64(tag) ((unsigned)(tag) == JS_TAG_FLOAT64)

#define JS_NAN JS_MKVAL(JS_TAG_FLOAT64, 1)

static inline JSValue __JS_NewFloat64(JSContext *ctx, double d) {
	return JS_MKVAL(JS_TAG_FLOAT64, (int)d);
}

static inline JS_BOOL JS_VALUE_IS_NAN(JSValue v) {
	return 0;
}

#elif defined(JS_NAN_BOXING)

typedef uint64_t JSValue;

#define JSValueConst JSValue

#define JS_VALUE_GET_TAG(v) (int)((v) >> 32)
#define JS_VALUE_GET_INT(v) (int)(v)
#define JS_VALUE_GET_BOOL(v) (int)(v)
#define JS_VALUE_GET_PTR(v) (void *)(intptr_t)(v)

#define JS_MKVAL(tag, val) (((uint64_t)(tag) << 32) | (uint32_t)(val))
#define JS_MKPTR(tag, ptr) (((uint64_t)(tag) << 32) | (uintptr_t)(ptr))

#define JS_FLOAT64_TAG_ADDEND (0x7ff80000 - JS_TAG_FIRST + 1) /* quiet NaN encoding */

static inline double JS_VALUE_GET_FLOAT64(JSValue v) {
	union {
		JSValue v;
		double d;
	} u;
	u.v = v;
	u.v += (uint64_t)JS_FLOAT64_TAG_ADDEND << 32;
	return u.d;
}

#define JS_NAN (0x7ff8000000000000 - ((uint64_t)JS_FLOAT64_TAG_ADDEND << 32))

static inline JSValue __JS_NewFloat64(JSContext *ctx, double d) {
	union {
		double d;
		uint64_t u64;
	} u;
	JSValue v;
	u.d = d;
	/* normalize NaN */
	if (js_unlikely((u.u64 & 0x7fffffffffffffff) > 0x7ff0000000000000))
		v = JS_NAN;
	else
		v = u.u64 - ((uint64_t)JS_FLOAT64_TAG_ADDEND << 32);
	return v;
}

#define JS_TAG_IS_FLOAT64(tag) ((unsigned)((tag) - JS_TAG_FIRST) >= (JS_TAG_FLOAT64 - JS_TAG_FIRST))

/* same as JS_VALUE_GET_TAG, but return JS_TAG_FLOAT64 with NaN boxing */
static inline int JS_VALUE_GET_NORM_TAG(JSValue v) {
	uint32_t tag;
	tag = JS_VALUE_GET_TAG(v);
	if (JS_TAG_IS_FLOAT64(tag))
		return JS_TAG_FLOAT64;
	else
		return tag;
}

static inline JS_BOOL JS_VALUE_IS_NAN(JSValue v) {
	uint32_t tag;
	tag = JS_VALUE_GET_TAG(v);
	return tag == (JS_NAN >> 32);
}

#else /* !JS_NAN_BOXING */

typedef union JSValueUnion {
	int32_t int32;
	double float64;
	void *ptr;
} JSValueUnion;

typedef struct JSValue {
	JSValueUnion u;
	int64_t tag;
} JSValue;

#define JSValueConst JSValue

#define JS_VALUE_GET_TAG(v) ((int32_t)(v).tag)
/* same as JS_VALUE_GET_TAG, but return JS_TAG_FLOAT64 with NaN boxing */
#define JS_VALUE_GET_NORM_TAG(v) JS_VALUE_GET_TAG(v)
#define JS_VALUE_GET_INT(v) ((v).u.int32)
#define JS_VALUE_GET_BOOL(v) ((v).u.int32)
#define JS_VALUE_GET_FLOAT64(v) ((v).u.float64)
#define JS_VALUE_GET_PTR(v) ((v).u.ptr)

#define JS_MKVAL(tag, val) \
	(JSValue) { (JSValueUnion){ .int32 = val }, tag }
#define JS_MKPTR(tag, p) \
	(JSValue) { (JSValueUnion){ .ptr = p }, tag }

#define JS_TAG_IS_FLOAT64(tag) ((unsigned)(tag) == JS_TAG_FLOAT64)

#define JS_NAN \
	(JSValue) { .u.float64 = JS_FLOAT64_NAN, JS_TAG_FLOAT64 }


typedef struct JSReqModuleEntry {
    JSAtom module_name;
    JSModuleDef *module; /* used using resolution */
} JSReqModuleEntry;

typedef enum JSExportTypeEnum {
    JS_EXPORT_TYPE_LOCAL,
    JS_EXPORT_TYPE_INDIRECT,
} JSExportTypeEnum;

typedef struct JSExportEntry {
    union {
        struct {
            int var_idx; /* closure variable index */
            JSVarRef *var_ref; /* if != NULL, reference to the variable */
        } local; /* for local export */
        int req_module_idx; /* module for indirect export */
    } u;
    JSExportTypeEnum export_type;
    JSAtom local_name; /* '*' if export ns from. not used for local
                          export after compilation */
    JSAtom export_name; /* exported variable name */
} JSExportEntry;

typedef struct JSStarExportEntry {
    int req_module_idx; /* in req_module_entries */
} JSStarExportEntry;

typedef struct JSImportEntry {
    int var_idx; /* closure variable index */
    JSAtom import_name;
    int req_module_idx; /* in req_module_entries */
} JSImportEntry;

typedef enum {
    JS_MODULE_STATUS_UNLINKED,
    JS_MODULE_STATUS_LINKING,
    JS_MODULE_STATUS_LINKED,
    JS_MODULE_STATUS_EVALUATING,
    JS_MODULE_STATUS_EVALUATING_ASYNC,
    JS_MODULE_STATUS_EVALUATED,
} JSModuleStatus;


typedef enum {
    JS_GC_OBJ_TYPE_JS_OBJECT,
    JS_GC_OBJ_TYPE_FUNCTION_BYTECODE,
    JS_GC_OBJ_TYPE_SHAPE,
    JS_GC_OBJ_TYPE_VAR_REF,
    JS_GC_OBJ_TYPE_ASYNC_FUNCTION,
    JS_GC_OBJ_TYPE_JS_CONTEXT,
} JSGCObjectTypeEnum;

/* header for GC objects. GC objects are C data structures with a
   reference count that can reference other GC objects. JS Objects are
   a particular type of GC object. */
struct JSGCObjectHeader {
    int ref_count; /* must come first, 32-bit */
    JSGCObjectTypeEnum gc_obj_type : 4;
    uint8_t mark : 4; /* used by the GC */
    uint8_t dummy1; /* not used by the GC */
    uint16_t dummy2; /* not used by the GC */
    struct list_head link;
};

typedef enum JSFunctionKindEnum {
	JS_FUNC_NORMAL = 0,
	JS_FUNC_GENERATOR = (1 << 0),
	JS_FUNC_ASYNC = (1 << 1),
	JS_FUNC_ASYNC_GENERATOR = (JS_FUNC_GENERATOR | JS_FUNC_ASYNC),
} JSFunctionKindEnum;

typedef struct JSVarScope {
	int parent; /* index into fd->scopes of the enclosing scope */
	int first; /* index into fd->vars of the last variable in this scope */
} JSVarScope;

typedef struct BlockEnv {
	struct BlockEnv *prev;
	JSAtom label_name; /* JS_ATOM_NULL if none */
	int label_break; /* -1 if none */
	int label_cont; /* -1 if none */
	int drop_count; /* number of stack elements to drop */
	int label_finally; /* -1 if none */
	int scope_level;
	int has_iterator;
} BlockEnv;

typedef struct JSGlobalVar {
	int cpool_idx; /* if >= 0, index in the constant pool for hoisted
					  function defintion*/
	uint8_t force_init : 1; /* force initialization to undefined */
	uint8_t is_lexical : 1; /* global let/const definition */
	uint8_t is_const : 1; /* const definition */
	int scope_level; /* scope of definition */
	JSAtom var_name; /* variable name */
} JSGlobalVar;

typedef struct RelocEntry {
	struct RelocEntry *next;
	uint32_t addr; /* address to patch */
	int size; /* address size: 1, 2 or 4 bytes */
} RelocEntry;

typedef struct JumpSlot {
	int op;
	int size;
	int pos;
	int label;
} JumpSlot;

typedef struct LabelSlot {
	int ref_count;
	int pos; /* phase 1 address, -1 means not resolved yet */
	int pos2; /* phase 2 address, -1 means not resolved yet */
	int addr; /* phase 3 address, -1 means not resolved yet */
	RelocEntry *first_reloc;
} LabelSlot;

typedef struct LineNumberSlot {
	uint32_t pc;
	int line_num;
} LineNumberSlot;

typedef enum JSParseFunctionEnum {
	JS_PARSE_FUNC_STATEMENT,
	JS_PARSE_FUNC_VAR,
	JS_PARSE_FUNC_EXPR,
	JS_PARSE_FUNC_ARROW,
	JS_PARSE_FUNC_GETTER,
	JS_PARSE_FUNC_SETTER,
	JS_PARSE_FUNC_METHOD,
	JS_PARSE_FUNC_CLASS_STATIC_INIT,
	JS_PARSE_FUNC_CLASS_CONSTRUCTOR,
	JS_PARSE_FUNC_DERIVED_CLASS_CONSTRUCTOR,
} JSParseFunctionEnum;

typedef enum JSParseExportEnum {
	JS_PARSE_EXPORT_NONE,
	JS_PARSE_EXPORT_NAMED,
	JS_PARSE_EXPORT_DEFAULT,
} JSParseExportEnum;

typedef struct JSFunctionDef {
	JSContext *ctx;
	struct JSFunctionDef *parent;
	int parent_cpool_idx; /* index in the constant pool of the parent
							 or -1 if none */
	int parent_scope_level; /* scope level in parent at point of definition */
	struct list_head child_list; /* list of JSFunctionDef.link */
	struct list_head link;

	BOOL is_eval; /* TRUE if eval code */
	int eval_type; /* only valid if is_eval = TRUE */
	BOOL is_global_var; /* TRUE if variables are not defined locally:
						   eval global, eval module or non strict eval */
	BOOL is_func_expr; /* TRUE if function expression */
	BOOL has_home_object; /* TRUE if the home object is available */
	BOOL has_prototype; /* true if a prototype field is necessary */
	BOOL has_simple_parameter_list;
	BOOL has_parameter_expressions; /* if true, an argument scope is created */
	BOOL has_use_strict; /* to reject directive in special cases */
	BOOL has_eval_call; /* true if the function contains a call to eval() */
	BOOL has_arguments_binding; /* true if the 'arguments' binding is
								   available in the function */
	BOOL has_this_binding; /* true if the 'this' and new.target binding are
							  available in the function */
	BOOL new_target_allowed; /* true if the 'new.target' does not
								throw a syntax error */
	BOOL super_call_allowed; /* true if super() is allowed */
	BOOL super_allowed; /* true if super. or super[] is allowed */
	BOOL arguments_allowed; /* true if the 'arguments' identifier is allowed */
	BOOL is_derived_class_constructor;
	BOOL in_function_body;
	BOOL backtrace_barrier;
	JSFunctionKindEnum func_kind : 8;
	JSParseFunctionEnum func_type : 8;
	uint8_t js_mode; /* bitmap of JS_MODE_x */
	JSAtom func_name; /* JS_ATOM_NULL if no name */

	JSVarDef *vars;
	int var_size; /* allocated size for vars[] */
	int var_count;
	JSVarDef *args;
	int arg_size; /* allocated size for args[] */
	int arg_count; /* number of arguments */
	int defined_arg_count;
	int var_object_idx; /* -1 if none */
	int arg_var_object_idx; /* -1 if none (var object for the argument scope) */
	int arguments_var_idx; /* -1 if none */
	int arguments_arg_idx; /* argument variable definition in argument scope,
							  -1 if none */
	int func_var_idx; /* variable containing the current function (-1
						 if none, only used if is_func_expr is true) */
	int eval_ret_idx; /* variable containing the return value of the eval, -1 if none */
	int this_var_idx; /* variable containg the 'this' value, -1 if none */
	int new_target_var_idx; /* variable containg the 'new.target' value, -1 if none */
	int this_active_func_var_idx; /* variable containg the 'this.active_func' value, -1 if none */
	int home_object_var_idx;
	BOOL need_home_object;

	int scope_level; /* index into fd->scopes if the current lexical scope */
	int scope_first; /* index into vd->vars of first lexically scoped variable */
	int scope_size; /* allocated size of fd->scopes array */
	int scope_count; /* number of entries used in the fd->scopes array */
	JSVarScope *scopes;
	JSVarScope def_scope_array[4];
	int body_scope; /* scope of the body of the function or eval */

	int global_var_count;
	int global_var_size;
	JSGlobalVar *global_vars;

	DynBuf byte_code;
	int last_opcode_pos; /* -1 if no last opcode */
	int last_opcode_line_num;
	BOOL use_short_opcodes; /* true if short opcodes are used in byte_code */

	LabelSlot *label_slots;
	int label_size; /* allocated size for label_slots[] */
	int label_count;
	BlockEnv *top_break; /* break/continue label stack */

	/* constant pool (strings, functions, numbers) */
	JSValue *cpool;
	int cpool_count;
	int cpool_size;

	/* list of variables in the closure */
	int closure_var_count;
	int closure_var_size;
	JSClosureVar *closure_var;

	JumpSlot *jump_slots;
	int jump_size;
	int jump_count;

	LineNumberSlot *line_number_slots;
	int line_number_size;
	int line_number_count;
	int line_number_last;
	int line_number_last_pc;

	/* pc2line table */
	JSAtom filename;
	int line_num;
	DynBuf pc2line;

	char *source; /* raw source, utf-8 encoded */
	int source_len;

	JSModuleDef *module; /* != NULL when parsing a module */
	BOOL has_await; /* TRUE if await is used (used in module eval) */
} JSFunctionDef;

typedef struct JSToken {
	int val;
	int line_num; /* line number of token start */
	const uint8_t *ptr;
	union {
		struct {
			JSValue str;
			int sep;
		} str;
		struct {
			JSValue val;
#ifdef CONFIG_BIGNUM
			slimb_t exponent; /* may be != 0 only if val is a float */
#endif
		} num;
		struct {
			JSAtom atom;
			BOOL has_escape;
			BOOL is_reserved;
		} ident;
		struct {
			JSValue body;
			JSValue flags;
		} regexp;
	} u;
} JSToken;

typedef struct JSClosureVar {
	uint8_t is_local : 1;
	uint8_t is_arg : 1;
	uint8_t is_const : 1;
	uint8_t is_lexical : 1;
	uint8_t var_kind : 4; /* see JSVarKindEnum */
	/* 8 bits available */
	uint16_t var_idx; /* is_local = TRUE: index to a normal variable of the
					parent function. otherwise: index to a closure
					variable of the parent function */
	JSAtom var_name;
} JSClosureVar;

#define ARG_SCOPE_INDEX 1
#define ARG_SCOPE_END (-2)

#define DECL_MASK_FUNC (1 << 0) /* allow normal function declaration */
/* ored with DECL_MASK_FUNC if function declarations are allowed with a label */
#define DECL_MASK_FUNC_WITH_LABEL (1 << 1)
#define DECL_MASK_OTHER (1 << 2) /* all other declarations */
#define DECL_MASK_ALL (DECL_MASK_FUNC | DECL_MASK_FUNC_WITH_LABEL | DECL_MASK_OTHER)

typedef struct JSParseState {
	JSContext *ctx;
	int last_line_num; /* line number of last token */
	int line_num; /* line number of current offset */
	const char *filename;
	JSToken token;
	BOOL got_lf; /* true if got line feed before the current token */
	const uint8_t *last_ptr;
	const uint8_t *buf_ptr;
	const uint8_t *buf_end;

	/* current function code */
	JSFunctionDef *cur_func;
	BOOL is_module; /* parsing a module */
	BOOL allow_html_comments;
	BOOL ext_json; /* true if accepting JSON superset */
} JSParseState;

typedef enum {
	/* XXX: add more variable kinds here instead of using bit fields */
	JS_VAR_NORMAL,
	JS_VAR_FUNCTION_DECL, /* lexical var with function declaration */
	JS_VAR_NEW_FUNCTION_DECL, /* lexical var with async/generator
								 function declaration */
	JS_VAR_CATCH,
	JS_VAR_FUNCTION_NAME, /* function expression name */
	JS_VAR_PRIVATE_FIELD,
	JS_VAR_PRIVATE_METHOD,
	JS_VAR_PRIVATE_GETTER,
	JS_VAR_PRIVATE_SETTER, /* must come after JS_VAR_PRIVATE_GETTER */
	JS_VAR_PRIVATE_GETTER_SETTER, /* must come after JS_VAR_PRIVATE_SETTER */
} JSVarKindEnum;

/* XXX: could use a different structure in bytecode functions to save
   memory */
typedef struct JSVarDef {
	JSAtom var_name;
	/* index into fd->scopes of this variable lexical scope */
	int scope_level;
	/* during compilation:
		- if scope_level = 0: scope in which the variable is defined
		- if scope_level != 0: index into fd->vars of the next
		  variable in the same or enclosing lexical scope
	   in a bytecode function:
	   index into fd->vars of the next
	   variable in the same or enclosing lexical scope
	*/
	int scope_next;
	uint8_t is_const : 1;
	uint8_t is_lexical : 1;
	uint8_t is_captured : 1;
	uint8_t is_static_private : 1; /* only used during private class field parsing */
	uint8_t var_kind : 4; /* see JSVarKindEnum */
	/* only used during compilation: function pool index for lexical
	   variables with var_kind =
	   JS_VAR_FUNCTION_DECL/JS_VAR_NEW_FUNCTION_DECL or scope level of
	   the definition of the 'var' variables (they have scope_level =
	   0) */
	int func_pool_idx : 24; /* only used during compilation : index in
							   the constant pool for hoisted function
							   definition */
} JSVarDef;

struct JSModuleDef {
    JSRefCountHeader header; /* must come first, 32-bit */
    JSAtom module_name;
    struct list_head link;

    JSReqModuleEntry *req_module_entries;
    int req_module_entries_count;
    int req_module_entries_size;

    JSExportEntry *export_entries;
    int export_entries_count;
    int export_entries_size;

    JSStarExportEntry *star_export_entries;
    int star_export_entries_count;
    int star_export_entries_size;

    JSImportEntry *import_entries;
    int import_entries_count;
    int import_entries_size;

    JSValue module_ns;
    JSValue func_obj; /* only used for JS modules */
    JSModuleInitFunc *init_func; /* only used for C modules */
    BOOL has_tla : 8; /* true if func_obj contains await */
    BOOL resolved : 8;
    BOOL func_created : 8;
    JSModuleStatus status : 8;
    /* temp use during js_module_link() & js_module_evaluate() */
    int dfs_index, dfs_ancestor_index;
    JSModuleDef *stack_prev;
    /* temp use during js_module_evaluate() */
    JSModuleDef **async_parent_modules;
    int async_parent_modules_count;
    int async_parent_modules_size;
    int pending_async_dependencies;
    BOOL async_evaluation;
    int64_t async_evaluation_timestamp;
    JSModuleDef *cycle_root;
    JSValue promise; /* corresponds to spec field: capability */
    JSValue resolving_funcs[2]; /* corresponds to spec field: capability */

    /* true if evaluation yielded an exception. It is saved in
       eval_exception */
    BOOL eval_has_exception : 8;
    JSValue eval_exception;
    JSValue meta_obj; /* for import.meta */
};

static inline JSValue __JS_NewFloat64(JSContext *ctx, double d) {
	JSValue v;
	v.tag = JS_TAG_FLOAT64;
	v.u.float64 = d;
	return v;
}

static inline JS_BOOL JS_VALUE_IS_NAN(JSValue v) {
	union {
		double d;
		uint64_t u64;
	} u;
	if (v.tag != JS_TAG_FLOAT64)
		return 0;
	u.d = v.u.float64;
	return (u.u64 & 0x7fffffffffffffff) > 0x7ff0000000000000;
}

#endif /* !JS_NAN_BOXING */

#define JS_VALUE_IS_BOTH_INT(v1, v2) ((JS_VALUE_GET_TAG(v1) | JS_VALUE_GET_TAG(v2)) == 0)
#define JS_VALUE_IS_BOTH_FLOAT(v1, v2) (JS_TAG_IS_FLOAT64(JS_VALUE_GET_TAG(v1)) && JS_TAG_IS_FLOAT64(JS_VALUE_GET_TAG(v2)))

#define JS_VALUE_GET_OBJ(v) ((JSObject *)JS_VALUE_GET_PTR(v))
#define JS_VALUE_GET_STRING(v) ((JSString *)JS_VALUE_GET_PTR(v))
#define JS_VALUE_HAS_REF_COUNT(v) ((unsigned)JS_VALUE_GET_TAG(v) >= (unsigned)JS_TAG_FIRST)

/* special values */
#define JS_NULL JS_MKVAL(JS_TAG_NULL, 0)
#define JS_UNDEFINED JS_MKVAL(JS_TAG_UNDEFINED, 0)
#define JS_FALSE JS_MKVAL(JS_TAG_BOOL, 0)
#define JS_TRUE JS_MKVAL(JS_TAG_BOOL, 1)
#define JS_EXCEPTION JS_MKVAL(JS_TAG_EXCEPTION, 0)
#define JS_UNINITIALIZED JS_MKVAL(JS_TAG_UNINITIALIZED, 0)

/* flags for object properties */
#define JS_PROP_CONFIGURABLE (1 << 0)
#define JS_PROP_WRITABLE (1 << 1)
#define JS_PROP_ENUMERABLE (1 << 2)
#define JS_PROP_C_W_E (JS_PROP_CONFIGURABLE | JS_PROP_WRITABLE | JS_PROP_ENUMERABLE)
#define JS_PROP_LENGTH (1 << 3) /* used internally in Arrays */
#define JS_PROP_TMASK (3 << 4) /* mask for NORMAL, GETSET, VARREF, AUTOINIT */
#define JS_PROP_NORMAL (0 << 4)
#define JS_PROP_GETSET (1 << 4)
#define JS_PROP_VARREF (2 << 4) /* used internally */
#define JS_PROP_AUTOINIT (3 << 4) /* used internally */

/* flags for JS_DefineProperty */
#define JS_PROP_HAS_SHIFT 8
#define JS_PROP_HAS_CONFIGURABLE (1 << 8)
#define JS_PROP_HAS_WRITABLE (1 << 9)
#define JS_PROP_HAS_ENUMERABLE (1 << 10)
#define JS_PROP_HAS_GET (1 << 11)
#define JS_PROP_HAS_SET (1 << 12)
#define JS_PROP_HAS_VALUE (1 << 13)

/* throw an exception if false would be returned
   (JS_DefineProperty/JS_SetProperty) */
#define JS_PROP_THROW (1 << 14)
/* throw an exception if false would be returned in strict mode
   (JS_SetProperty) */
#define JS_PROP_THROW_STRICT (1 << 15)

#define JS_PROP_NO_ADD (1 << 16) /* internal use */
#define JS_PROP_NO_EXOTIC (1 << 17) /* internal use */

#define JS_DEFAULT_STACK_SIZE (256 * 1024)

/* JS_Eval() flags */
#define JS_EVAL_TYPE_GLOBAL (0 << 0) /* global code (default) */
#define JS_EVAL_TYPE_MODULE (1 << 0) /* module code */
#define JS_EVAL_TYPE_DIRECT (2 << 0) /* direct call (internal use) */
#define JS_EVAL_TYPE_INDIRECT (3 << 0) /* indirect call (internal use) */
#define JS_EVAL_TYPE_MASK (3 << 0)

#define JS_EVAL_FLAG_STRICT (1 << 3) /* force 'strict' mode */
#define JS_EVAL_FLAG_STRIP (1 << 4) /* force 'strip' mode */
/* compile but do not run. The result is an object with a
   JS_TAG_FUNCTION_BYTECODE or JS_TAG_MODULE tag. It can be executed
   with JS_EvalFunction(). */
#define JS_EVAL_FLAG_COMPILE_ONLY (1 << 5)
/* don't include the stack frames before this eval in the Error() backtraces */
#define JS_EVAL_FLAG_BACKTRACE_BARRIER (1 << 6)
/* allow top-level await in normal script. JS_Eval() returns a
   promise. Only allowed with JS_EVAL_TYPE_GLOBAL */
#define JS_EVAL_FLAG_ASYNC (1 << 7)

typedef JSValue JSCFunction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv);
typedef JSValue JSCFunctionMagic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv, int magic);
typedef JSValue JSCFunctionData(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv, int magic, JSValue *func_data);

typedef struct JSMallocState {
	size_t malloc_count;
	size_t malloc_size;
	size_t malloc_limit;
	void *opaque; /* user opaque */
} JSMallocState;

typedef struct JSMallocFunctions {
	void *(*js_malloc)(JSMallocState *s, size_t size);
	void (*js_free)(JSMallocState *s, void *ptr);
	void *(*js_realloc)(JSMallocState *s, void *ptr, size_t size);
	size_t (*js_malloc_usable_size)(const void *ptr);
} JSMallocFunctions;

typedef struct JSGCObjectHeader JSGCObjectHeader;

typedef struct JSFunctionBytecode {
    JSGCObjectHeader header; /* must come first */
    uint8_t js_mode;
    uint8_t has_prototype : 1; /* true if a prototype field is necessary */
    uint8_t has_simple_parameter_list : 1;
    uint8_t is_derived_class_constructor : 1;
    /* true if home_object needs to be initialized */
    uint8_t need_home_object : 1;
    uint8_t func_kind : 2;
    uint8_t new_target_allowed : 1;
    uint8_t super_call_allowed : 1;
    uint8_t super_allowed : 1;
    uint8_t arguments_allowed : 1;
    uint8_t has_debug : 1;
    uint8_t backtrace_barrier : 1; /* stop backtrace on this function */
    uint8_t read_only_bytecode : 1;
    uint8_t is_direct_or_indirect_eval : 1; /* used by JS_GetScriptOrModuleName() */
    /* XXX: 10 bits available */
    uint8_t *byte_code_buf; /* (self pointer) */
    int byte_code_len;
    JSAtom func_name;
    JSVarDef *vardefs; /* arguments + local variables (arg_count + var_count) (self pointer) */
    JSClosureVar *closure_var; /* list of variables in the closure (self pointer) */
    uint16_t arg_count;
    uint16_t var_count;
    uint16_t defined_arg_count; /* for length function property */
    uint16_t stack_size; /* maximum stack size */
    JSContext *realm; /* function realm */
    JSValue *cpool; /* constant pool (self pointer) */
    int cpool_count;
    int closure_var_count;
    struct {
        /* debug info, move to separate structure to save memory? */
        JSAtom filename;
        int line_num;
        int source_len;
        int pc2line_len;
        uint8_t *pc2line_buf;
        char *source;
    } debug;
} JSFunctionBytecode;

JSRuntime *JS_NewRuntime(void);
/* info lifetime must exceed that of rt */
void JS_SetRuntimeInfo(JSRuntime *rt, const char *info);
void JS_SetMemoryLimit(JSRuntime *rt, size_t limit);
void JS_SetGCThreshold(JSRuntime *rt, size_t gc_threshold);
/* use 0 to disable maximum stack size check */
void JS_SetMaxStackSize(JSRuntime *rt, size_t stack_size);
/* should be called when changing thread to update the stack top value
   used to check stack overflow. */
void JS_UpdateStackTop(JSRuntime *rt);
JSRuntime *JS_NewRuntime2(const JSMallocFunctions *mf, void *opaque);
void JS_FreeRuntime(JSRuntime *rt);
void *JS_GetRuntimeOpaque(JSRuntime *rt);
void JS_SetRuntimeOpaque(JSRuntime *rt, void *opaque);
typedef void JS_MarkFunc(JSRuntime *rt, JSGCObjectHeader *gp);
void JS_MarkValue(JSRuntime *rt, JSValueConst val, JS_MarkFunc *mark_func);
void JS_RunGC(JSRuntime *rt);
JS_BOOL JS_IsLiveObject(JSRuntime *rt, JSValueConst obj);

JSContext *JS_NewContext(JSRuntime *rt);
void JS_FreeContext(JSContext *s);
JSContext *JS_DupContext(JSContext *ctx);
void *JS_GetContextOpaque(JSContext *ctx);
void JS_SetContextOpaque(JSContext *ctx, void *opaque);
JSRuntime *JS_GetRuntime(JSContext *ctx);
void JS_SetClassProto(JSContext *ctx, JSClassID class_id, JSValue obj);
JSValue JS_GetClassProto(JSContext *ctx, JSClassID class_id);

/* the following functions are used to select the intrinsic object to
   save memory */
JSContext *JS_NewContextRaw(JSRuntime *rt);
void JS_AddIntrinsicBaseObjects(JSContext *ctx);
void JS_AddIntrinsicDate(JSContext *ctx);
void JS_AddIntrinsicEval(JSContext *ctx);
void JS_AddIntrinsicStringNormalize(JSContext *ctx);
void JS_AddIntrinsicRegExpCompiler(JSContext *ctx);
void JS_AddIntrinsicRegExp(JSContext *ctx);
void JS_AddIntrinsicJSON(JSContext *ctx);
void JS_AddIntrinsicProxy(JSContext *ctx);
void JS_AddIntrinsicMapSet(JSContext *ctx);
void JS_AddIntrinsicTypedArrays(JSContext *ctx);
void JS_AddIntrinsicPromise(JSContext *ctx);
void JS_AddIntrinsicBigInt(JSContext *ctx);
void JS_AddIntrinsicBigFloat(JSContext *ctx);
void JS_AddIntrinsicBigDecimal(JSContext *ctx);
/* enable operator overloading */
void JS_AddIntrinsicOperators(JSContext *ctx);
/* enable "use math" */
void JS_EnableBignumExt(JSContext *ctx, JS_BOOL enable);

JSValue js_string_codePointRange(JSContext *ctx, JSValueConst this_val,
		int argc, JSValueConst *argv);

void *js_malloc_rt(JSRuntime *rt, size_t size);
void js_free_rt(JSRuntime *rt, void *ptr);
void *js_realloc_rt(JSRuntime *rt, void *ptr, size_t size);
size_t js_malloc_usable_size_rt(JSRuntime *rt, const void *ptr);
void *js_mallocz_rt(JSRuntime *rt, size_t size);

void *js_malloc(JSContext *ctx, size_t size);
void js_free(JSContext *ctx, void *ptr);
void *js_realloc(JSContext *ctx, void *ptr, size_t size);
size_t js_malloc_usable_size(JSContext *ctx, const void *ptr);
void *js_realloc2(JSContext *ctx, void *ptr, size_t size, size_t *pslack);
void *js_mallocz(JSContext *ctx, size_t size);
char *js_strdup(JSContext *ctx, const char *str);
char *js_strndup(JSContext *ctx, const char *s, size_t n);

typedef struct JSMemoryUsage {
	int64_t malloc_size, malloc_limit, memory_used_size;
	int64_t malloc_count;
	int64_t memory_used_count;
	int64_t atom_count, atom_size;
	int64_t str_count, str_size;
	int64_t obj_count, obj_size;
	int64_t prop_count, prop_size;
	int64_t shape_count, shape_size;
	int64_t js_func_count, js_func_size, js_func_code_size;
	int64_t js_func_pc2line_count, js_func_pc2line_size;
	int64_t c_func_count, array_count;
	int64_t fast_array_count, fast_array_elements;
	int64_t binary_object_count, binary_object_size;
} JSMemoryUsage;

void JS_ComputeMemoryUsage(JSRuntime *rt, JSMemoryUsage *s);
void JS_DumpMemoryUsage(FILE *fp, const JSMemoryUsage *s, JSRuntime *rt);

/* atom support */
#define JS_ATOM_NULL 0

JSAtom JS_NewAtomLen(JSContext *ctx, const char *str, size_t len);
JSAtom JS_NewAtom(JSContext *ctx, const char *str);
JSAtom JS_NewAtomUInt32(JSContext *ctx, uint32_t n);
JSAtom JS_DupAtom(JSContext *ctx, JSAtom v);
void JS_FreeAtom(JSContext *ctx, JSAtom v);
void JS_FreeAtomRT(JSRuntime *rt, JSAtom v);
JSValue JS_AtomToValue(JSContext *ctx, JSAtom atom);
JSValue JS_AtomToString(JSContext *ctx, JSAtom atom);
const char *JS_AtomToCString(JSContext *ctx, JSAtom atom);
JSAtom JS_ValueToAtom(JSContext *ctx, JSValueConst val);

/* object class support */

typedef struct JSPropertyEnum {
	JS_BOOL is_enumerable;
	JSAtom atom;
} JSPropertyEnum;

typedef struct JSPropertyDescriptor {
	int flags;
	JSValue value;
	JSValue getter;
	JSValue setter;
} JSPropertyDescriptor;

typedef struct JSClassExoticMethods {
	/* Return -1 if exception (can only happen in case of Proxy object),
	   FALSE if the property does not exists, TRUE if it exists. If 1 is
	   returned, the property descriptor 'desc' is filled if != NULL. */
	int (*get_own_property)(JSContext *ctx, JSPropertyDescriptor *desc,
			JSValueConst obj, JSAtom prop);
	/* '*ptab' should hold the '*plen' property keys. Return 0 if OK,
	   -1 if exception. The 'is_enumerable' field is ignored.
	*/
	int (*get_own_property_names)(JSContext *ctx, JSPropertyEnum **ptab,
			uint32_t *plen,
			JSValueConst obj);
	/* return < 0 if exception, or TRUE/FALSE */
	int (*delete_property)(JSContext *ctx, JSValueConst obj, JSAtom prop);
	/* return < 0 if exception or TRUE/FALSE */
	int (*define_own_property)(JSContext *ctx, JSValueConst this_obj,
			JSAtom prop, JSValueConst val,
			JSValueConst getter, JSValueConst setter,
			int flags);
	/* The following methods can be emulated with the previous ones,
	   so they are usually not needed */
	/* return < 0 if exception or TRUE/FALSE */
	int (*has_property)(JSContext *ctx, JSValueConst obj, JSAtom atom);
	JSValue (*get_property)(JSContext *ctx, JSValueConst obj, JSAtom atom,
			JSValueConst receiver);
	/* return < 0 if exception or TRUE/FALSE */
	int (*set_property)(JSContext *ctx, JSValueConst obj, JSAtom atom,
			JSValueConst value, JSValueConst receiver, int flags);
} JSClassExoticMethods;

typedef void JSClassFinalizer(JSRuntime *rt, JSValue val);
typedef void JSClassGCMark(JSRuntime *rt, JSValueConst val,
		JS_MarkFunc *mark_func);
#define JS_CALL_FLAG_CONSTRUCTOR (1 << 0)
typedef JSValue JSClassCall(JSContext *ctx, JSValueConst func_obj,
		JSValueConst this_val, int argc, JSValueConst *argv,
		int flags);

typedef struct JSClassDef {
	const char *class_name;
	JSClassFinalizer *finalizer;
	JSClassGCMark *gc_mark;
	/* if call != NULL, the object is a function. If (flags &
	   JS_CALL_FLAG_CONSTRUCTOR) != 0, the function is called as a
	   constructor. In this case, 'this_val' is new.target. A
	   constructor call only happens if the object constructor bit is
	   set (see JS_SetConstructorBit()). */
	JSClassCall *call;
	/* XXX: suppress this indirection ? It is here only to save memory
	   because only a few classes need these methods */
	JSClassExoticMethods *exotic;
} JSClassDef;

#define JS_INVALID_CLASS_ID 0
JSClassID JS_NewClassID(JSClassID *pclass_id);
/* Returns the class ID if `v` is an object, otherwise returns JS_INVALID_CLASS_ID. */
JSClassID JS_GetClassID(JSValue v);
int JS_NewClass(JSRuntime *rt, JSClassID class_id, const JSClassDef *class_def);
int JS_IsRegisteredClass(JSRuntime *rt, JSClassID class_id);

/* value handling */

static js_force_inline JSValue JS_NewBool(JSContext *ctx, JS_BOOL val) {
	return JS_MKVAL(JS_TAG_BOOL, (val != 0));
}

static js_force_inline JSValue JS_NewInt32(JSContext *ctx, int32_t val) {
	return JS_MKVAL(JS_TAG_INT, val);
}

static js_force_inline JSValue JS_NewCatchOffset(JSContext *ctx, int32_t val) {
	return JS_MKVAL(JS_TAG_CATCH_OFFSET, val);
}

static js_force_inline JSValue JS_NewInt64(JSContext *ctx, int64_t val) {
	JSValue v;
	if (val == (int32_t)val) {
		v = JS_NewInt32(ctx, val);
	} else {
		v = __JS_NewFloat64(ctx, val);
	}
	return v;
}

static js_force_inline JSValue JS_NewUint32(JSContext *ctx, uint32_t val) {
	JSValue v;
	if (val <= 0x7fffffff) {
		v = JS_NewInt32(ctx, val);
	} else {
		v = __JS_NewFloat64(ctx, val);
	}
	return v;
}

JSValue JS_NewBigInt64(JSContext *ctx, int64_t v);
JSValue JS_NewBigUint64(JSContext *ctx, uint64_t v);

static js_force_inline JSValue JS_NewFloat64(JSContext *ctx, double d) {
	int32_t val;
	union {
		double d;
		uint64_t u;
	} u, t;
	if (d >= INT32_MIN && d <= INT32_MAX) {
		u.d = d;
		val = (int32_t)d;
		t.d = val;
		/* -0 cannot be represented as integer, so we compare the bit
		   representation */
		if (u.u == t.u)
			return JS_MKVAL(JS_TAG_INT, val);
	}
	return __JS_NewFloat64(ctx, d);
}

static inline JS_BOOL JS_IsNumber(JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return tag == JS_TAG_INT || JS_TAG_IS_FLOAT64(tag);
}

static inline JS_BOOL JS_IsInt(JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return tag == JS_TAG_INT;
}

static inline JS_BOOL JS_IsFloat(JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return JS_TAG_IS_FLOAT64(tag);
}

static inline JS_BOOL JS_IsBigInt(JSContext *ctx, JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return tag == JS_TAG_BIG_INT;
}

static inline JS_BOOL JS_IsBigFloat(JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return tag == JS_TAG_BIG_FLOAT;
}

static inline JS_BOOL JS_IsBigDecimal(JSValueConst v) {
	int tag = JS_VALUE_GET_TAG(v);
	return tag == JS_TAG_BIG_DECIMAL;
}

static inline JS_BOOL JS_IsBool(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_BOOL;
}

static inline JS_BOOL JS_IsNull(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_NULL;
}

static inline JS_BOOL JS_IsUndefined(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_UNDEFINED;
}

static inline JS_BOOL JS_IsException(JSValueConst v) {
	return js_unlikely(JS_VALUE_GET_TAG(v) == JS_TAG_EXCEPTION);
}

static inline JS_BOOL JS_IsUninitialized(JSValueConst v) {
	return js_unlikely(JS_VALUE_GET_TAG(v) == JS_TAG_UNINITIALIZED);
}

static inline JS_BOOL JS_IsString(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_STRING;
}

static inline JS_BOOL JS_IsSymbol(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_SYMBOL;
}

static inline JS_BOOL JS_IsObject(JSValueConst v) {
	return JS_VALUE_GET_TAG(v) == JS_TAG_OBJECT;
}

JSValue JS_Throw(JSContext *ctx, JSValue obj);
JSValue JS_GetException(JSContext *ctx);
JS_BOOL JS_HasException(JSContext *ctx);
JS_BOOL JS_IsError(JSContext *ctx, JSValueConst val);
void JS_SetUncatchableError(JSContext *ctx, JSValueConst val, JS_BOOL flag);
void JS_ResetUncatchableError(JSContext *ctx);
JSValue JS_NewError(JSContext *ctx);
JSValue __js_printf_like(2, 3) JS_ThrowSyntaxError(JSContext *ctx, const char *fmt, ...);
JSValue __js_printf_like(2, 3) JS_ThrowTypeError(JSContext *ctx, const char *fmt, ...);
JSValue __js_printf_like(2, 3) JS_ThrowReferenceError(JSContext *ctx, const char *fmt, ...);
JSValue __js_printf_like(2, 3) JS_ThrowRangeError(JSContext *ctx, const char *fmt, ...);
JSValue __js_printf_like(2, 3) JS_ThrowInternalError(JSContext *ctx, const char *fmt, ...);
JSValue JS_ThrowOutOfMemory(JSContext *ctx);

void __JS_FreeValue(JSContext *ctx, JSValue v);
static inline void JS_FreeValue(JSContext *ctx, JSValue v) {
	if (JS_VALUE_HAS_REF_COUNT(v)) {
		JSRefCountHeader *p = (JSRefCountHeader *)JS_VALUE_GET_PTR(v);
		if (--p->ref_count <= 0) {
			__JS_FreeValue(ctx, v);
		}
	}
}
void __JS_FreeValueRT(JSRuntime *rt, JSValue v);
static inline void JS_FreeValueRT(JSRuntime *rt, JSValue v) {
	if (JS_VALUE_HAS_REF_COUNT(v)) {
		JSRefCountHeader *p = (JSRefCountHeader *)JS_VALUE_GET_PTR(v);
		if (--p->ref_count <= 0) {
			__JS_FreeValueRT(rt, v);
		}
	}
}

static inline JSValue JS_DupValue(JSContext *ctx, JSValueConst v) {
	if (JS_VALUE_HAS_REF_COUNT(v)) {
		JSRefCountHeader *p = (JSRefCountHeader *)JS_VALUE_GET_PTR(v);
		p->ref_count++;
	}
	return (JSValue)v;
}

static inline JSValue JS_DupValueRT(JSRuntime *rt, JSValueConst v) {
	if (JS_VALUE_HAS_REF_COUNT(v)) {
		JSRefCountHeader *p = (JSRefCountHeader *)JS_VALUE_GET_PTR(v);
		p->ref_count++;
	}
	return (JSValue)v;
}

JS_BOOL JS_StrictEq(JSContext *ctx, JSValueConst op1, JSValueConst op2);
JS_BOOL JS_SameValue(JSContext *ctx, JSValueConst op1, JSValueConst op2);
JS_BOOL JS_SameValueZero(JSContext *ctx, JSValueConst op1, JSValueConst op2);

int JS_ToBool(JSContext *ctx, JSValueConst val); /* return -1 for JS_EXCEPTION */
int JS_ToInt32(JSContext *ctx, int32_t *pres, JSValueConst val);
static inline int JS_ToUint32(JSContext *ctx, uint32_t *pres, JSValueConst val) {
	return JS_ToInt32(ctx, (int32_t *)pres, val);
}
int JS_ToInt64(JSContext *ctx, int64_t *pres, JSValueConst val);
int JS_ToIndex(JSContext *ctx, uint64_t *plen, JSValueConst val);
int JS_ToFloat64(JSContext *ctx, double *pres, JSValueConst val);
/* return an exception if 'val' is a Number */
int JS_ToBigInt64(JSContext *ctx, int64_t *pres, JSValueConst val);
/* same as JS_ToInt64() but allow BigInt */
int JS_ToInt64Ext(JSContext *ctx, int64_t *pres, JSValueConst val);

JSValue JS_NewStringLen(JSContext *ctx, const char *str1, size_t len1);
JSValue JS_NewString(JSContext *ctx, const char *str);
JSValue JS_NewAtomString(JSContext *ctx, const char *str);
JSValue JS_ToString(JSContext *ctx, JSValueConst val);
JSValue JS_ToPropertyKey(JSContext *ctx, JSValueConst val);
const char *JS_ToCStringLen2(JSContext *ctx, size_t *plen, JSValueConst val1, JS_BOOL cesu8);
static inline const char *JS_ToCStringLen(JSContext *ctx, size_t *plen, JSValueConst val1) {
	return JS_ToCStringLen2(ctx, plen, val1, 0);
}
static inline const char *JS_ToCString(JSContext *ctx, JSValueConst val1) {
	return JS_ToCStringLen2(ctx, NULL, val1, 0);
}
void JS_FreeCString(JSContext *ctx, const char *ptr);

JSValue JS_NewObjectProtoClass(JSContext *ctx, JSValueConst proto, JSClassID class_id);
JSValue JS_NewObjectClass(JSContext *ctx, int class_id);
JSValue JS_NewObjectProto(JSContext *ctx, JSValueConst proto);
JSValue JS_NewObject(JSContext *ctx);

JS_BOOL JS_IsFunction(JSContext *ctx, JSValueConst val);
JS_BOOL JS_IsConstructor(JSContext *ctx, JSValueConst val);
JS_BOOL JS_SetConstructorBit(JSContext *ctx, JSValueConst func_obj, JS_BOOL val);

JSValue JS_NewArray(JSContext *ctx);
int JS_IsArray(JSContext *ctx, JSValueConst val);
int JS_IsArrayInt8(JSContext *ctx, JSValueConst val);

JSValue JS_NewDate(JSContext *ctx, double epoch_ms);

JSValue JS_GetPropertyInternal(JSContext *ctx, JSValueConst obj,
		JSAtom prop, JSValueConst receiver,
		JS_BOOL throw_ref_error);
static js_force_inline JSValue JS_GetProperty(JSContext *ctx, JSValueConst this_obj,
		JSAtom prop) {
	return JS_GetPropertyInternal(ctx, this_obj, prop, this_obj, 0);
}
JSValue JS_GetPropertyStr(JSContext *ctx, JSValueConst this_obj,
		const char *prop);
JSValue JS_GetPropertyUint32(JSContext *ctx, JSValueConst this_obj,
		uint32_t idx);

int JS_SetPropertyInternal(JSContext *ctx, JSValueConst obj,
		JSAtom prop, JSValue val, JSValueConst this_obj,
		int flags);
static inline int JS_SetProperty(JSContext *ctx, JSValueConst this_obj,
		JSAtom prop, JSValue val) {
	return JS_SetPropertyInternal(ctx, this_obj, prop, val, this_obj, JS_PROP_THROW);
}
int JS_SetPropertyUint32(JSContext *ctx, JSValueConst this_obj,
		uint32_t idx, JSValue val);
int JS_SetPropertyInt64(JSContext *ctx, JSValueConst this_obj,
		int64_t idx, JSValue val);
int JS_SetPropertyStr(JSContext *ctx, JSValueConst this_obj,
		const char *prop, JSValue val);
int JS_HasProperty(JSContext *ctx, JSValueConst this_obj, JSAtom prop);
int JS_IsExtensible(JSContext *ctx, JSValueConst obj);
int JS_PreventExtensions(JSContext *ctx, JSValueConst obj);
int JS_DeleteProperty(JSContext *ctx, JSValueConst obj, JSAtom prop, int flags);
int JS_SetPrototype(JSContext *ctx, JSValueConst obj, JSValueConst proto_val);
JSValue JS_GetPrototype(JSContext *ctx, JSValueConst val);

#define JS_GPN_STRING_MASK (1 << 0)
#define JS_GPN_SYMBOL_MASK (1 << 1)
#define JS_GPN_PRIVATE_MASK (1 << 2)
/* only include the enumerable properties */
#define JS_GPN_ENUM_ONLY (1 << 4)
/* set theJSPropertyEnum.is_enumerable field */
#define JS_GPN_SET_ENUM (1 << 5)

int JS_GetOwnPropertyNames(JSContext *ctx, JSPropertyEnum **ptab,
		uint32_t *plen, JSValueConst obj, int flags);
int JS_GetOwnProperty(JSContext *ctx, JSPropertyDescriptor *desc,
		JSValueConst obj, JSAtom prop);

JSValue JS_Call(JSContext *ctx, JSValueConst func_obj, JSValueConst this_obj,
		int argc, JSValueConst *argv);
JSValue JS_Invoke(JSContext *ctx, JSValueConst this_val, JSAtom atom,
		int argc, JSValueConst *argv);
JSValue JS_CallConstructor(JSContext *ctx, JSValueConst func_obj,
		int argc, JSValueConst *argv);
JSValue JS_CallConstructor2(JSContext *ctx, JSValueConst func_obj,
		JSValueConst new_target,
		int argc, JSValueConst *argv);
JS_BOOL JS_DetectModule(const char *input, size_t input_len);
/* 'input' must be zero terminated i.e. input[input_len] = '\0'. */
JSValue JS_Eval(JSContext *ctx, const char *input, size_t input_len,
		const char *filename, int eval_flags);
/* same as JS_Eval() but with an explicit 'this_obj' parameter */
JSValue JS_EvalThis(JSContext *ctx, JSValueConst this_obj,
		const char *input, size_t input_len,
		const char *filename, int eval_flags);
JSValue JS_GetGlobalObject(JSContext *ctx);
int JS_IsInstanceOf(JSContext *ctx, JSValueConst val, JSValueConst obj);
int JS_DefineProperty(JSContext *ctx, JSValueConst this_obj,
		JSAtom prop, JSValueConst val,
		JSValueConst getter, JSValueConst setter, int flags);
int JS_DefinePropertyValue(JSContext *ctx, JSValueConst this_obj,
		JSAtom prop, JSValue val, int flags);
int JS_DefinePropertyValueUint32(JSContext *ctx, JSValueConst this_obj,
		uint32_t idx, JSValue val, int flags);
int JS_DefinePropertyValueStr(JSContext *ctx, JSValueConst this_obj,
		const char *prop, JSValue val, int flags);
int JS_DefinePropertyGetSet(JSContext *ctx, JSValueConst this_obj,
		JSAtom prop, JSValue getter, JSValue setter,
		int flags);
void JS_SetOpaque(JSValue obj, void *opaque);
void *JS_GetOpaque(JSValueConst obj, JSClassID class_id);
void *JS_GetOpaque2(JSContext *ctx, JSValueConst obj, JSClassID class_id);

/* 'buf' must be zero terminated i.e. buf[buf_len] = '\0'. */
JSValue JS_ParseJSON(JSContext *ctx, const char *buf, size_t buf_len,
		const char *filename);
#define JS_PARSE_JSON_EXT (1 << 0) /* allow extended JSON */
JSValue JS_ParseJSON2(JSContext *ctx, const char *buf, size_t buf_len,
		const char *filename, int flags);
JSValue JS_JSONStringify(JSContext *ctx, JSValueConst obj,
		JSValueConst replacer, JSValueConst space0);

typedef void JSFreeArrayBufferDataFunc(JSRuntime *rt, void *opaque, void *ptr);
JSValue JS_NewArrayBuffer(JSContext *ctx, uint8_t *buf, size_t len,
		JSFreeArrayBufferDataFunc *free_func, void *opaque,
		JS_BOOL is_shared);
JSValue JS_NewArrayBufferCopy(JSContext *ctx, const uint8_t *buf, size_t len);
void JS_DetachArrayBuffer(JSContext *ctx, JSValueConst obj);
uint8_t *JS_GetArrayBuffer(JSContext *ctx, size_t *psize, JSValueConst obj);

typedef enum JSTypedArrayEnum {
	JS_TYPED_ARRAY_UINT8C = 0,
	JS_TYPED_ARRAY_INT8,
	JS_TYPED_ARRAY_UINT8,
	JS_TYPED_ARRAY_INT16,
	JS_TYPED_ARRAY_UINT16,
	JS_TYPED_ARRAY_INT32,
	JS_TYPED_ARRAY_UINT32,
	JS_TYPED_ARRAY_BIG_INT64,
	JS_TYPED_ARRAY_BIG_UINT64,
	JS_TYPED_ARRAY_FLOAT32,
	JS_TYPED_ARRAY_FLOAT64,
} JSTypedArrayEnum;

JSValue JS_NewTypedArray(JSContext *ctx, int argc, JSValueConst *argv,
		JSTypedArrayEnum array_type);
JSValue JS_GetTypedArrayBuffer(JSContext *ctx, JSValueConst obj,
		size_t *pbyte_offset,
		size_t *pbyte_length,
		size_t *pbytes_per_element);
typedef struct {
	void *(*sab_alloc)(void *opaque, size_t size);
	void (*sab_free)(void *opaque, void *ptr);
	void (*sab_dup)(void *opaque, void *ptr);
	void *sab_opaque;
} JSSharedArrayBufferFunctions;
void JS_SetSharedArrayBufferFunctions(JSRuntime *rt,
		const JSSharedArrayBufferFunctions *sf);

typedef enum JSPromiseStateEnum {
	JS_PROMISE_PENDING,
	JS_PROMISE_FULFILLED,
	JS_PROMISE_REJECTED,
} JSPromiseStateEnum;

JSValue JS_NewPromiseCapability(JSContext *ctx, JSValue *resolving_funcs);
JSPromiseStateEnum JS_PromiseState(JSContext *ctx, JSValue promise);
JSValue JS_PromiseResult(JSContext *ctx, JSValue promise);

/* is_handled = TRUE means that the rejection is handled */
typedef void JSHostPromiseRejectionTracker(JSContext *ctx, JSValueConst promise,
		JSValueConst reason,
		JS_BOOL is_handled, void *opaque);
void JS_SetHostPromiseRejectionTracker(JSRuntime *rt, JSHostPromiseRejectionTracker *cb, void *opaque);

/* return != 0 if the JS code needs to be interrupted */
typedef int JSInterruptHandler(JSRuntime *rt, void *opaque);
void JS_SetInterruptHandler(JSRuntime *rt, JSInterruptHandler *cb, void *opaque);
/* if can_block is TRUE, Atomics.wait() can be used */
void JS_SetCanBlock(JSRuntime *rt, JS_BOOL can_block);
/* set the [IsHTMLDDA] internal slot */
void JS_SetIsHTMLDDA(JSContext *ctx, JSValueConst obj);

/* return the module specifier (allocated with js_malloc()) or NULL if
   exception */
typedef char *JSModuleNormalizeFunc(JSContext *ctx,
		const char *module_base_name,
		const char *module_name, void *opaque);
typedef JSModuleDef *JSModuleLoaderFunc(JSContext *ctx,
		const char *module_name, void *opaque);

/* module_normalize = NULL is allowed and invokes the default module
   filename normalizer */
void JS_SetModuleLoaderFunc(JSRuntime *rt,
		JSModuleNormalizeFunc *module_normalize,
		JSModuleLoaderFunc *module_loader, void *opaque);
/* return the import.meta object of a module */
JSValue JS_GetImportMeta(JSContext *ctx, JSModuleDef *m);
JSAtom JS_GetModuleName(JSContext *ctx, JSModuleDef *m);
JSValue JS_GetModuleNamespace(JSContext *ctx, JSModuleDef *m);

/* JS Job support */

typedef JSValue JSJobFunc(JSContext *ctx, int argc, JSValueConst *argv);
int JS_EnqueueJob(JSContext *ctx, JSJobFunc *job_func, int argc, JSValueConst *argv);

JS_BOOL JS_IsJobPending(JSRuntime *rt);
int JS_ExecutePendingJob(JSRuntime *rt, JSContext **pctx);

/* Object Writer/Reader (currently only used to handle precompiled code) */
#define JS_WRITE_OBJ_BYTECODE (1 << 0) /* allow function/module */
#define JS_WRITE_OBJ_BSWAP (1 << 1) /* byte swapped output */
#define JS_WRITE_OBJ_SAB (1 << 2) /* allow SharedArrayBuffer */
#define JS_WRITE_OBJ_REFERENCE (1 << 3) /* allow object references to \
										   encode arbitrary object    \
										   graph */
uint8_t *JS_WriteObject(JSContext *ctx, size_t *psize, JSValueConst obj,
		int flags);
uint8_t *JS_WriteObject2(JSContext *ctx, size_t *psize, JSValueConst obj,
		int flags, uint8_t ***psab_tab, size_t *psab_tab_len);

#define JS_READ_OBJ_BYTECODE (1 << 0) /* allow function/module */
#define JS_READ_OBJ_ROM_DATA (1 << 1) /* avoid duplicating 'buf' data */
#define JS_READ_OBJ_SAB (1 << 2) /* allow SharedArrayBuffer */
#define JS_READ_OBJ_REFERENCE (1 << 3) /* allow object references */
JSValue JS_ReadObject(JSContext *ctx, const uint8_t *buf, size_t buf_len,
		int flags);
/* instantiate and evaluate a bytecode function. Only used when
   reading a script or module with JS_ReadObject() */
JSValue JS_EvalFunction(JSContext *ctx, JSValue fun_obj);
/* load the dependencies of the module 'obj'. Useful when JS_ReadObject()
   returns a module. */
int JS_ResolveModule(JSContext *ctx, JSValueConst obj);

/* only exported for os.Worker() */
JSAtom JS_GetScriptOrModuleName(JSContext *ctx, int n_stack_levels);
/* only exported for os.Worker() */
JSValue JS_LoadModule(JSContext *ctx, const char *basename,
		const char *filename);

/* C function definition */
typedef enum JSCFunctionEnum { /* XXX: should rename for namespace isolation */
	JS_CFUNC_generic,
	JS_CFUNC_generic_magic,
	JS_CFUNC_constructor,
	JS_CFUNC_constructor_magic,
	JS_CFUNC_constructor_or_func,
	JS_CFUNC_constructor_or_func_magic,
	JS_CFUNC_f_f,
	JS_CFUNC_f_f_f,
	JS_CFUNC_getter,
	JS_CFUNC_setter,
	JS_CFUNC_getter_magic,
	JS_CFUNC_setter_magic,
	JS_CFUNC_iterator_next,
} JSCFunctionEnum;

typedef union JSCFunctionType {
	JSCFunction *generic;
	JSValue (*generic_magic)(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv, int magic);
	JSCFunction *constructor;
	JSValue (*constructor_magic)(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv, int magic);
	JSCFunction *constructor_or_func;
	double (*f_f)(double);
	double (*f_f_f)(double, double);
	JSValue (*getter)(JSContext *ctx, JSValueConst this_val);
	JSValue (*setter)(JSContext *ctx, JSValueConst this_val, JSValueConst val);
	JSValue (*getter_magic)(JSContext *ctx, JSValueConst this_val, int magic);
	JSValue (*setter_magic)(JSContext *ctx, JSValueConst this_val, JSValueConst val, int magic);
	JSValue (*iterator_next)(JSContext *ctx, JSValueConst this_val,
			int argc, JSValueConst *argv, int *pdone, int magic);
} JSCFunctionType;

JSValue JS_NewCFunction2(JSContext *ctx, JSCFunction *func,
		const char *name,
		int length, JSCFunctionEnum cproto, int magic);
JSValue JS_NewCFunctionData(JSContext *ctx, JSCFunctionData *func,
		int length, int magic, int data_len,
		JSValueConst *data);

static inline JSValue JS_NewCFunction(JSContext *ctx, JSCFunction *func, const char *name,
		int length) {
	return JS_NewCFunction2(ctx, func, name, length, JS_CFUNC_generic, 0);
}

static inline JSValue JS_NewCFunctionMagic(JSContext *ctx, JSCFunctionMagic *func,
		const char *name,
		int length, JSCFunctionEnum cproto, int magic) {
	return JS_NewCFunction2(ctx, (JSCFunction *)func, name, length, cproto, magic);
}
void JS_SetConstructor(JSContext *ctx, JSValueConst func_obj,
		JSValueConst proto);

/* C property definition */

typedef struct JSCFunctionListEntry {
	const char *name;
	uint8_t prop_flags;
	uint8_t def_type;
	int16_t magic;
	union {
		struct {
			uint8_t length; /* XXX: should move outside union */
			uint8_t cproto; /* XXX: should move outside union */
			JSCFunctionType cfunc;
		} func;
		struct {
			JSCFunctionType get;
			JSCFunctionType set;
		} getset;
		struct {
			const char *name;
			int base;
		} alias;
		struct {
			const struct JSCFunctionListEntry *tab;
			int len;
		} prop_list;
		const char *str;
		int32_t i32;
		int64_t i64;
		double f64;
	} u;
} JSCFunctionListEntry;

#define JS_DEF_CFUNC 0
#define JS_DEF_CGETSET 1
#define JS_DEF_CGETSET_MAGIC 2
#define JS_DEF_PROP_STRING 3
#define JS_DEF_PROP_INT32 4
#define JS_DEF_PROP_INT64 5
#define JS_DEF_PROP_DOUBLE 6
#define JS_DEF_PROP_UNDEFINED 7
#define JS_DEF_OBJECT 8
#define JS_DEF_ALIAS 9

/* Note: c++ does not like nested designators */
#define JS_CFUNC_DEF(name, length, func1)                                                                                                  \
	{                                                                                                                                      \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_CFUNC, 0, .u = {.func = { length, JS_CFUNC_generic, { .generic = func1 } } } \
	}
#define JS_CFUNC_MAGIC_DEF(name, length, func1, magic)                                                                                                     \
	{                                                                                                                                                      \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_CFUNC, magic, .u = {.func = { length, JS_CFUNC_generic_magic, { .generic_magic = func1 } } } \
	}
#define JS_CFUNC_SPECIAL_DEF(name, length, cproto, func1)                                                                                  \
	{                                                                                                                                      \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_CFUNC, 0, .u = {.func = { length, JS_CFUNC_##cproto, { .cproto = func1 } } } \
	}
#define JS_ITERATOR_NEXT_DEF(name, length, func1, magic)                                                                                                   \
	{                                                                                                                                                      \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_CFUNC, magic, .u = {.func = { length, JS_CFUNC_iterator_next, { .iterator_next = func1 } } } \
	}
#define JS_CGETSET_DEF(name, fgetter, fsetter)                                                                                          \
	{                                                                                                                                   \
		name, JS_PROP_CONFIGURABLE, JS_DEF_CGETSET, 0, .u = {.getset = { .get = { .getter = fgetter }, .set = { .setter = fsetter } } } \
	}
#define JS_CGETSET_MAGIC_DEF(name, fgetter, fsetter, magic)                                                                                                   \
	{                                                                                                                                                         \
		name, JS_PROP_CONFIGURABLE, JS_DEF_CGETSET_MAGIC, magic, .u = {.getset = { .get = { .getter_magic = fgetter }, .set = { .setter_magic = fsetter } } } \
	}
#define JS_PROP_STRING_DEF(name, cstr, prop_flags)                   \
	{                                                                \
		name, prop_flags, JS_DEF_PROP_STRING, 0, .u = {.str = cstr } \
	}
#define JS_PROP_INT32_DEF(name, val, prop_flags)                   \
	{                                                              \
		name, prop_flags, JS_DEF_PROP_INT32, 0, .u = {.i32 = val } \
	}
#define JS_PROP_INT64_DEF(name, val, prop_flags)                   \
	{                                                              \
		name, prop_flags, JS_DEF_PROP_INT64, 0, .u = {.i64 = val } \
	}
#define JS_PROP_DOUBLE_DEF(name, val, prop_flags)                   \
	{                                                               \
		name, prop_flags, JS_DEF_PROP_DOUBLE, 0, .u = {.f64 = val } \
	}
#define JS_PROP_UNDEFINED_DEF(name, prop_flags)                      \
	{                                                                \
		name, prop_flags, JS_DEF_PROP_UNDEFINED, 0, .u = {.i32 = 0 } \
	}
#define JS_OBJECT_DEF(name, tab, len, prop_flags)                             \
	{                                                                         \
		name, prop_flags, JS_DEF_OBJECT, 0, .u = {.prop_list = { tab, len } } \
	}
#define JS_ALIAS_DEF(name, from)                                                                      \
	{                                                                                                 \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_ALIAS, 0, .u = {.alias = { from, -1 } } \
	}
#define JS_ALIAS_BASE_DEF(name, from, base)                                                             \
	{                                                                                                   \
		name, JS_PROP_WRITABLE | JS_PROP_CONFIGURABLE, JS_DEF_ALIAS, 0, .u = {.alias = { from, base } } \
	}

void JS_SetPropertyFunctionList(JSContext *ctx, JSValueConst obj,
		const JSCFunctionListEntry *tab,
		int len);


JSModuleDef *JS_NewCModule(JSContext *ctx, const char *name_str,
		JSModuleInitFunc *func);
/* can only be called before the module is instantiated */
int JS_AddModuleExport(JSContext *ctx, JSModuleDef *m, const char *name_str);
int JS_AddModuleExportList(JSContext *ctx, JSModuleDef *m,
		const JSCFunctionListEntry *tab, int len);
/* can only be called after the module is instantiated */
int JS_SetModuleExport(JSContext *ctx, JSModuleDef *m, const char *export_name,
		JSValue val);
int JS_SetModuleExportList(JSContext *ctx, JSModuleDef *m,
		const JSCFunctionListEntry *tab, int len);

#undef js_unlikely
#undef js_force_inline

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* QUICKJS_H */

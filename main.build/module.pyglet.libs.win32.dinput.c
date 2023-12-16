/* Generated code for Python module 'pyglet$libs$win32$dinput'
 * created by Nuitka version 1.9.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyglet$libs$win32$dinput" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$win32$dinput;
PyDictObject *moduledict_pyglet$libs$win32$dinput;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[362];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[362];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.win32.dinput"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 362; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyglet$libs$win32$dinput(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 362; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ef26d62a1516b3f53d6e1dc485262e25;
static PyCodeObject *codeobj_064bae3916a982ce2711a3ee2b4cd8e3;
static PyCodeObject *codeobj_6b5792abc4194052ec91328d7beb5c51;
static PyCodeObject *codeobj_2fe66d54f2c89f32d1acec378db6d1a8;
static PyCodeObject *codeobj_4a06288379c895f3269c2461d53308b3;
static PyCodeObject *codeobj_4fa97dcc9f7cf7af293614431352a2ba;
static PyCodeObject *codeobj_a0b57c20b5426642bfa923297183675d;
static PyCodeObject *codeobj_6aeef40878f2782de337429a415ef260;
static PyCodeObject *codeobj_3c945ee2a3bc25eaecfb8efd47f4cba0;
static PyCodeObject *codeobj_21dec76ba35ef04615754b13bd788400;
static PyCodeObject *codeobj_f2a167c40e6def15c6a99e46b15545d5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[357]); CHECK_OBJECT(module_filename_obj);
    codeobj_ef26d62a1516b3f53d6e1dc485262e25 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[358], mod_consts[358], NULL, NULL, 0, 0, 0);
    codeobj_064bae3916a982ce2711a3ee2b4cd8e3 = MAKE_CODE_OBJECT(module_filename_obj, 297, 0, mod_consts[292], mod_consts[292], mod_consts[359], NULL, 0, 0, 0);
    codeobj_6b5792abc4194052ec91328d7beb5c51 = MAKE_CODE_OBJECT(module_filename_obj, 250, 0, mod_consts[250], mod_consts[250], mod_consts[359], NULL, 0, 0, 0);
    codeobj_2fe66d54f2c89f32d1acec378db6d1a8 = MAKE_CODE_OBJECT(module_filename_obj, 309, 0, mod_consts[298], mod_consts[298], mod_consts[359], NULL, 0, 0, 0);
    codeobj_4a06288379c895f3269c2461d53308b3 = MAKE_CODE_OBJECT(module_filename_obj, 265, 0, mod_consts[272], mod_consts[272], mod_consts[359], NULL, 0, 0, 0);
    codeobj_4fa97dcc9f7cf7af293614431352a2ba = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[167], mod_consts[167], mod_consts[360], NULL, 1, 0, 0);
    codeobj_a0b57c20b5426642bfa923297183675d = MAKE_CODE_OBJECT(module_filename_obj, 287, 0, mod_consts[287], mod_consts[287], mod_consts[359], NULL, 0, 0, 0);
    codeobj_6aeef40878f2782de337429a415ef260 = MAKE_CODE_OBJECT(module_filename_obj, 328, 0, mod_consts[309], mod_consts[309], mod_consts[359], NULL, 0, 0, 0);
    codeobj_3c945ee2a3bc25eaecfb8efd47f4cba0 = MAKE_CODE_OBJECT(module_filename_obj, 319, 0, mod_consts[304], mod_consts[304], mod_consts[359], NULL, 0, 0, 0);
    codeobj_21dec76ba35ef04615754b13bd788400 = MAKE_CODE_OBJECT(module_filename_obj, 402, 0, mod_consts[344], mod_consts[344], mod_consts[359], NULL, 0, 0, 0);
    codeobj_f2a167c40e6def15c6a99e46b15545d5 = MAKE_CODE_OBJECT(module_filename_obj, 340, 0, mod_consts[312], mod_consts[312], mod_consts[359], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE();


// The module function definitions.
static PyObject *impl_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    struct Nuitka_FrameObject *frame_4fa97dcc9f7cf7af293614431352a2ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4fa97dcc9f7cf7af293614431352a2ba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4fa97dcc9f7cf7af293614431352a2ba)) {
        Py_XDECREF(cache_frame_4fa97dcc9f7cf7af293614431352a2ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fa97dcc9f7cf7af293614431352a2ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fa97dcc9f7cf7af293614431352a2ba = MAKE_FUNCTION_FRAME(tstate, codeobj_4fa97dcc9f7cf7af293614431352a2ba, module_pyglet$libs$win32$dinput, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fa97dcc9f7cf7af293614431352a2ba->m_type_description == NULL);
    frame_4fa97dcc9f7cf7af293614431352a2ba = cache_frame_4fa97dcc9f7cf7af293614431352a2ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4fa97dcc9f7cf7af293614431352a2ba);
    assert(Py_REFCNT(frame_4fa97dcc9f7cf7af293614431352a2ba) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(par_n);
        tmp_rshift_expr_left_1 = par_n;
        tmp_rshift_expr_right_1 = mod_consts[0];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[1];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4fa97dcc9f7cf7af293614431352a2ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fa97dcc9f7cf7af293614431352a2ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fa97dcc9f7cf7af293614431352a2ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fa97dcc9f7cf7af293614431352a2ba,
        type_description_1,
        par_n
    );


    // Release cached frame if used for exception.
    if (frame_4fa97dcc9f7cf7af293614431352a2ba == cache_frame_4fa97dcc9f7cf7af293614431352a2ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fa97dcc9f7cf7af293614431352a2ba);
        cache_frame_4fa97dcc9f7cf7af293614431352a2ba = NULL;
    }

    assertFrameObject(frame_4fa97dcc9f7cf7af293614431352a2ba);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4fa97dcc9f7cf7af293614431352a2ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyglet$libs$win32$dinput,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pyglet$libs$win32$dinput[] = {
    impl_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pyglet$libs$win32$dinput);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pyglet$libs$win32$dinput,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pyglet$libs$win32$dinput,
        sizeof(function_table_pyglet$libs$win32$dinput) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyglet$libs$win32$dinput(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet$libs$win32$dinput");

    // Store the module for future use.
    module_pyglet$libs$win32$dinput = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyglet$libs$win32$dinput: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet$libs$win32$dinput: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$win32$dinput\n");

    moduledict_pyglet$libs$win32$dinput = MODULE_DICT(module_pyglet$libs$win32$dinput);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$win32$dinput,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32$dinput,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[361]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32$dinput,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32$dinput,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32$dinput,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$win32$dinput);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$win32$dinput);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var_n = NULL;
    PyObject *outline_3_var_t = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var_n = NULL;
    PyObject *outline_5_var_t = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp_1__$0 = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp_1__contraction = NULL;
    PyObject *tmp_DIDATAFORMAT$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp_1__$0 = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction = NULL;
    PyObject *tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_ef26d62a1516b3f53d6e1dc485262e25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6b5792abc4194052ec91328d7beb5c51_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265 = NULL;
    struct Nuitka_FrameObject *frame_4a06288379c895f3269c2461d53308b3_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287 = NULL;
    struct Nuitka_FrameObject *frame_a0b57c20b5426642bfa923297183675d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297 = NULL;
    struct Nuitka_FrameObject *frame_064bae3916a982ce2711a3ee2b4cd8e3_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309 = NULL;
    struct Nuitka_FrameObject *frame_2fe66d54f2c89f32d1acec378db6d1a8_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319 = NULL;
    struct Nuitka_FrameObject *frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328 = NULL;
    struct Nuitka_FrameObject *frame_6aeef40878f2782de337429a415ef260_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340 = NULL;
    struct Nuitka_FrameObject *frame_f2a167c40e6def15c6a99e46b15545d5_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402 = NULL;
    struct Nuitka_FrameObject *frame_21dec76ba35ef04615754b13bd788400_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_ef26d62a1516b3f53d6e1dc485262e25 = MAKE_MODULE_FRAME(codeobj_ef26d62a1516b3f53d6e1dc485262e25, module_pyglet$libs$win32$dinput);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ef26d62a1516b3f53d6e1dc485262e25);
    assert(Py_REFCNT(frame_ef26d62a1516b3f53d6e1dc485262e25) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$win32$dinput;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[10];
        tmp_level_value_1 = mod_consts[11];
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 37;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyglet$libs$win32$dinput,
                mod_consts[12],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[13]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[18]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[20]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 44;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[22], tmp_args_element_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[24]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[26]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[28]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assign_source_15 == NULL)) {
            tmp_assign_source_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assign_source_62 == NULL)) {
            tmp_assign_source_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assign_source_62 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assign_source_64 == NULL)) {
            tmp_assign_source_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assign_source_64 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assign_source_67 == NULL)) {
            tmp_assign_source_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assign_source_67 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assign_source_72 == NULL)) {
            tmp_assign_source_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assign_source_72 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assign_source_76 == NULL)) {
            tmp_assign_source_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assign_source_76 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;


        tmp_assign_source_115 = MAKE_FUNCTION_pyglet$libs$win32$dinput$$$function__1_DIDFT_GETINSTANCE();

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_assign_source_127 == NULL)) {
            tmp_assign_source_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        assert(!(tmp_assign_source_127 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 247;
        tmp_assign_source_179 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_2,
            mod_consts[245],
            &PyTuple_GET_ITEM(mod_consts[246], 0)
        );

        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_179);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[248]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_assign_source_180 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_180, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_181 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_182;
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_11 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[11];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_183 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_12 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_13 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[249]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[250];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 250;
        tmp_assign_source_184 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_184;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_14 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_15 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[253];
        tmp_default_value_1 = mod_consts[254];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[253]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 250;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_185;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_186;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[250];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_3;
        }
        frame_6b5792abc4194052ec91328d7beb5c51_2 = MAKE_CLASS_FRAME(tstate, codeobj_6b5792abc4194052ec91328d7beb5c51, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6b5792abc4194052ec91328d7beb5c51_2);
        assert(Py_REFCNT(frame_6b5792abc4194052ec91328d7beb5c51_2) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = mod_consts[258];
            tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[21]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 252;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(9);
            {
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
                tmp_tuple_element_6 = mod_consts[259];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_6);
                    tmp_expression_value_17 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[12]);

                    if (tmp_expression_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_17 == NULL)) {
                                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 253;
                                type_description_2 = "o";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_value_17);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[245]);
                    Py_DECREF(tmp_expression_value_17);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
                tmp_tuple_element_7 = mod_consts[260];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_7);
                    tmp_expression_value_18 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[12]);

                    if (tmp_expression_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_18 == NULL)) {
                                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 254;
                                type_description_2 = "o";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_18);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[245]);
                    Py_DECREF(tmp_expression_value_18);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
                tmp_tuple_element_8 = mod_consts[261];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[21]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
                tmp_tuple_element_9 = mod_consts[262];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_9);
                    tmp_mult_expr_left_1 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[27]);

                    if (tmp_mult_expr_left_1 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_mult_expr_left_1 == NULL)) {
                                tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_mult_expr_left_1 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 256;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_mult_expr_left_1);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_mult_expr_right_1 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[33]);

                    if (tmp_mult_expr_right_1 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_mult_expr_right_1 == NULL)) {
                                tmp_mult_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_mult_expr_right_1 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_mult_expr_left_1);

                                exception_lineno = 256;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_mult_expr_right_1);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    Py_DECREF(tmp_mult_expr_right_1);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
                tmp_tuple_element_10 = mod_consts[263];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_2;
                    PyObject *tmp_mult_expr_right_2;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_10);
                    tmp_mult_expr_left_2 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[27]);

                    if (tmp_mult_expr_left_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_mult_expr_left_2 == NULL)) {
                                tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_mult_expr_left_2 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 257;
                                type_description_2 = "o";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_mult_expr_left_2);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_mult_expr_right_2 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[33]);

                    if (tmp_mult_expr_right_2 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_mult_expr_right_2 == NULL)) {
                                tmp_mult_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_mult_expr_right_2 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_mult_expr_left_2);

                                exception_lineno = 257;
                                type_description_2 = "o";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_mult_expr_right_2);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_tuple_element_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                    Py_DECREF(tmp_mult_expr_left_2);
                    Py_DECREF(tmp_mult_expr_right_2);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_4);
                tmp_tuple_element_11 = mod_consts[264];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_19;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_11);
                    tmp_expression_value_19 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[12]);

                    if (tmp_expression_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_19 == NULL)) {
                                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 258;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_expression_value_19);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[245]);
                    Py_DECREF(tmp_expression_value_19);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 258;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_4);
                tmp_tuple_element_12 = mod_consts[265];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[19]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 259;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_4);
                tmp_tuple_element_13 = mod_consts[266];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[19]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 260;
                            type_description_2 = "o";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_13);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b5792abc4194052ec91328d7beb5c51_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b5792abc4194052ec91328d7beb5c51_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b5792abc4194052ec91328d7beb5c51_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b5792abc4194052ec91328d7beb5c51_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6b5792abc4194052ec91328d7beb5c51_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_187;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_14 = mod_consts[250];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_14 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 250;
            tmp_assign_source_187 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_187 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_187;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_186 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_186);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250);
        locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250);
        locals_pyglet$libs$win32$dinput$$$class__1_DIDEVICEINSTANCE_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 250;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_186);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_20 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 262;
        tmp_assign_source_188 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_21 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[270]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[269]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[269]);
        }

        assert(!(tmp_args_element_value_4 == NULL));
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_189 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_189);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[248]);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_assign_source_190 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_190, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_190;
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_191 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_191;
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_192;
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_23 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[11];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_193 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_193;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_24 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_25 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[249]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_tuple_element_16 = mod_consts[272];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_16 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 265;
        tmp_assign_source_194 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_194;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_26 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_27 = tmp_class_creation_2__metaclass;
        tmp_name_value_3 = mod_consts[253];
        tmp_default_value_2 = mod_consts[254];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[253]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 265;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_195;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_196;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[272];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_6;
        }
        frame_4a06288379c895f3269c2461d53308b3_3 = MAKE_CLASS_FRAME(tstate, codeobj_4a06288379c895f3269c2461d53308b3, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4a06288379c895f3269c2461d53308b3_3);
        assert(Py_REFCNT(frame_4a06288379c895f3269c2461d53308b3_3) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            tmp_tuple_element_19 = mod_consts[258];
            tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

            if (tmp_tuple_element_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_tuple_element_19 == NULL)) {
                        tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                    }

                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 267;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    Py_INCREF(tmp_tuple_element_19);
                } else {
                    goto tuple_build_exception_13;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_tuple_element_18);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(15);
            {
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_tuple_element_33;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_18);
                tmp_tuple_element_20 = mod_consts[273];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_29;
                    PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_20);
                    tmp_expression_value_29 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[12]);

                    if (tmp_expression_value_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_29 == NULL)) {
                                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 268;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_29);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[245]);
                    Py_DECREF(tmp_expression_value_29);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_18);
                tmp_tuple_element_21 = mod_consts[274];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_21);
                tmp_tuple_element_21 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_21 == NULL)) {
                            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 269;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_21);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_21);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_18);
                tmp_tuple_element_22 = mod_consts[275];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_22);
                tmp_tuple_element_22 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_22 == NULL)) {
                            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 270;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_22);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_22);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_18);
                tmp_tuple_element_23 = mod_consts[276];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 271;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_23);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_18);
                tmp_tuple_element_24 = mod_consts[277];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_3;
                    PyObject *tmp_mult_expr_right_3;
                    PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_24);
                    tmp_mult_expr_left_3 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[27]);

                    if (tmp_mult_expr_left_3 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_mult_expr_left_3 == NULL)) {
                                tmp_mult_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_mult_expr_left_3 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 272;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_mult_expr_left_3);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_mult_expr_right_3 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[33]);

                    if (tmp_mult_expr_right_3 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_mult_expr_right_3 == NULL)) {
                                tmp_mult_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                            }

                            if (tmp_mult_expr_right_3 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_mult_expr_left_3);

                                exception_lineno = 272;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_mult_expr_right_3);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_tuple_element_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
                    Py_DECREF(tmp_mult_expr_left_3);
                    Py_DECREF(tmp_mult_expr_right_3);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_18);
                tmp_tuple_element_25 = mod_consts[278];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 273;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_18);
                tmp_tuple_element_26 = mod_consts[279];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 274;
                            type_description_2 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_18);
                tmp_tuple_element_27 = mod_consts[280];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_27 == NULL)) {
                            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 275;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_27);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_27);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_18);
                tmp_tuple_element_28 = mod_consts[281];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 276;
                            type_description_2 = "o";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_18);
                tmp_tuple_element_29 = mod_consts[265];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_29 == NULL)) {
                            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_29);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_29);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_18);
                tmp_tuple_element_30 = mod_consts[266];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 278;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_18);
                tmp_tuple_element_31 = mod_consts[282];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[21]);

                if (tmp_tuple_element_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_31 == NULL)) {
                            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 279;
                            type_description_2 = "o";
                            goto tuple_build_exception_26;
                        }
                        Py_INCREF(tmp_tuple_element_31);
                    } else {
                        goto tuple_build_exception_26;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_31);
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_18);
                tmp_tuple_element_32 = mod_consts[283];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_32);
                tmp_tuple_element_32 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_32 == NULL)) {
                            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 280;
                            type_description_2 = "o";
                            goto tuple_build_exception_27;
                        }
                        Py_INCREF(tmp_tuple_element_32);
                    } else {
                        goto tuple_build_exception_27;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_32);
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_18);
                tmp_tuple_element_33 = mod_consts[284];
                tmp_tuple_element_18 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_18, 0, tmp_tuple_element_33);
                tmp_tuple_element_33 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[19]);

                if (tmp_tuple_element_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_tuple_element_33 == NULL)) {
                            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                        }

                        if (tmp_tuple_element_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 281;
                            type_description_2 = "o";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_tuple_element_33);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_18, 1, tmp_tuple_element_33);
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_tuple_element_18);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4a06288379c895f3269c2461d53308b3_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4a06288379c895f3269c2461d53308b3_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4a06288379c895f3269c2461d53308b3_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4a06288379c895f3269c2461d53308b3_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_4a06288379c895f3269c2461d53308b3_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_197;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_34 = mod_consts[272];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_34 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 265;
            tmp_assign_source_197 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_197 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_197;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_196 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_196);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265);
        locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265);
        locals_pyglet$libs$win32$dinput$$$class__2_DIDEVICEOBJECTINSTANCE_265 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 265;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_196);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_30 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[272]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[272]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 283;
        tmp_assign_source_198 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_31 == NULL));
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[270]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[285]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[285]);
        }

        assert(!(tmp_args_element_value_8 == NULL));
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_199 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_199);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_32 == NULL));
        tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[248]);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_assign_source_200 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_200, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_200;
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_201 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_201;
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_33 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[11];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_203 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_203;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_34 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_35 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[249]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_tuple_element_36 = mod_consts[287];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_36 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 287;
        tmp_assign_source_204 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_204;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_36 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_37 = tmp_class_creation_3__metaclass;
        tmp_name_value_4 = mod_consts[253];
        tmp_default_value_3 = mod_consts[254];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[253]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 287;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_205;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_206;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[287];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_9;
        }
        frame_a0b57c20b5426642bfa923297183675d_4 = MAKE_CLASS_FRAME(tstate, codeobj_a0b57c20b5426642bfa923297183675d, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a0b57c20b5426642bfa923297183675d_4);
        assert(Py_REFCNT(frame_a0b57c20b5426642bfa923297183675d_4) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            tmp_tuple_element_39 = mod_consts[288];
            tmp_tuple_element_38 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_expression_value_40;
                PyTuple_SET_ITEM0(tmp_tuple_element_38, 0, tmp_tuple_element_39);
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                }

                assert(!(tmp_expression_value_39 == NULL));
                tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[22]);
                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                tmp_expression_value_40 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[12]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_10);

                            exception_lineno = 289;
                            type_description_2 = "o";
                            goto tuple_build_exception_30;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto tuple_build_exception_30;
                    }
                }

                tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[245]);
                Py_DECREF(tmp_expression_value_40);
                if (tmp_args_element_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_10);

                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                frame_a0b57c20b5426642bfa923297183675d_4->m_frame.f_lineno = 289;
                tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_10);
                if (tmp_tuple_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_38, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_tuple_element_38);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_38);
                tmp_tuple_element_40 = mod_consts[274];
                tmp_tuple_element_38 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_38, 0, tmp_tuple_element_40);
                tmp_tuple_element_40 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[21]);

                if (tmp_tuple_element_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_40 == NULL)) {
                            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto tuple_build_exception_32;
                        }
                        Py_INCREF(tmp_tuple_element_40);
                    } else {
                        goto tuple_build_exception_32;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_38, 1, tmp_tuple_element_40);
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_tuple_element_38);
                goto tuple_build_exception_31;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_38);
                tmp_tuple_element_41 = mod_consts[275];
                tmp_tuple_element_38 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_38, 0, tmp_tuple_element_41);
                tmp_tuple_element_41 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[21]);

                if (tmp_tuple_element_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_41 == NULL)) {
                            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 291;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_tuple_element_41);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_38, 1, tmp_tuple_element_41);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_tuple_element_38);
                goto tuple_build_exception_31;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_38);
                tmp_tuple_element_42 = mod_consts[276];
                tmp_tuple_element_38 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_38, 0, tmp_tuple_element_42);
                tmp_tuple_element_42 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[21]);

                if (tmp_tuple_element_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_42 == NULL)) {
                            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 292;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_tuple_element_42);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_38, 1, tmp_tuple_element_42);
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_tuple_element_38);
                goto tuple_build_exception_31;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_38);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_207;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[267]);

            if (unlikely(tmp_iter_arg_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[267]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 294;
                type_description_2 = "o";
                goto try_except_handler_10;
            }

            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_assign_source_207 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_207 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0 == NULL);
            tmp_DIOBJECTDATAFORMAT$listcomp_1__$0 = tmp_assign_source_207;
        }
        {
            PyObject *tmp_assign_source_208;
            tmp_assign_source_208 = MAKE_LIST_EMPTY(0);
            assert(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction == NULL);
            tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction = tmp_assign_source_208;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_209;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0);
            tmp_next_source_1 = tmp_DIOBJECTDATAFORMAT$listcomp_1__$0;
            tmp_assign_source_209 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_209 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 294;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0;
                tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0 = tmp_assign_source_209;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_210;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0;
            tmp_assign_source_210 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_210 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
                tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter = tmp_assign_source_210;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_211;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_211 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_211 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 294;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1;
                tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1 = tmp_assign_source_211;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_212;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_212 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_212 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 294;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2;
                tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2 = tmp_assign_source_212;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 294;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[289];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 294;
                goto try_except_handler_13;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_12;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_11;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_213;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_213 = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_3_var_n;
                outline_3_var_n = tmp_assign_source_213;
                Py_INCREF(outline_3_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_214;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_214 = tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_3_var_t;
                outline_3_var_t = tmp_assign_source_214;
                Py_INCREF(outline_3_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2);
        tmp_DIOBJECTDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
            tmp_append_list_1 = tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction;
            CHECK_OBJECT(outline_3_var_n);
            tmp_append_value_1 = outline_3_var_n;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
        tmp_dictset_value = tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__$0);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
        Py_DECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0);
        tmp_DIOBJECTDATAFORMAT$listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_3_var_n);
        outline_3_var_n = NULL;
        Py_XDECREF(outline_3_var_t);
        outline_3_var_t = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_n);
        outline_3_var_n = NULL;
        Py_XDECREF(outline_3_var_t);
        outline_3_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 294;
        goto frame_exception_exit_4;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[290], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0b57c20b5426642bfa923297183675d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0b57c20b5426642bfa923297183675d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0b57c20b5426642bfa923297183675d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0b57c20b5426642bfa923297183675d_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a0b57c20b5426642bfa923297183675d_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_215;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_11 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_43 = mod_consts[287];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_43 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 287;
            tmp_assign_source_215 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_215 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_215;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_206 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_206);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287);
        locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287);
        locals_pyglet$libs$win32$dinput$$$class__3_DIOBJECTDATAFORMAT_287 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 287;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_206);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_41 == NULL));
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[22]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[287]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[287]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 295;
        tmp_assign_source_216 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_216);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_42 == NULL));
        tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[248]);
        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_assign_source_217 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_217, 0, tmp_tuple_element_44);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_217;
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_218 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_218;
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_219;
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_43 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[11];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_220 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_220;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_44 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_45 = tmp_class_creation_4__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[249]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_tuple_element_45 = mod_consts[292];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_45 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 297;
        tmp_assign_source_221 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_221;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_46 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_47 = tmp_class_creation_4__metaclass;
        tmp_name_value_5 = mod_consts[253];
        tmp_default_value_4 = mod_consts[254];
        tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_5, tmp_default_value_4);
        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[253]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 297;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_222;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_223;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[292];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_16;
        }
        frame_064bae3916a982ce2711a3ee2b4cd8e3_5 = MAKE_CLASS_FRAME(tstate, codeobj_064bae3916a982ce2711a3ee2b4cd8e3, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_064bae3916a982ce2711a3ee2b4cd8e3_5);
        assert(Py_REFCNT(frame_064bae3916a982ce2711a3ee2b4cd8e3_5) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            tmp_tuple_element_48 = mod_consts[258];
            tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[21]);

            if (tmp_tuple_element_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_tuple_element_48 == NULL)) {
                        tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                    }

                    if (tmp_tuple_element_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    Py_INCREF(tmp_tuple_element_48);
                } else {
                    goto tuple_build_exception_36;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_48);
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_tuple_element_47);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(6);
            {
                PyObject *tmp_tuple_element_49;
                PyObject *tmp_tuple_element_50;
                PyObject *tmp_tuple_element_51;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_47);
                tmp_tuple_element_49 = mod_consts[293];
                tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_49);
                tmp_tuple_element_49 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[21]);

                if (tmp_tuple_element_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_49 == NULL)) {
                            tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 300;
                            type_description_2 = "o";
                            goto tuple_build_exception_38;
                        }
                        Py_INCREF(tmp_tuple_element_49);
                    } else {
                        goto tuple_build_exception_38;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_49);
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_tuple_element_47);
                goto tuple_build_exception_37;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_47);
                tmp_tuple_element_50 = mod_consts[276];
                tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_50);
                tmp_tuple_element_50 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[21]);

                if (tmp_tuple_element_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_50 == NULL)) {
                            tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_50 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 301;
                            type_description_2 = "o";
                            goto tuple_build_exception_39;
                        }
                        Py_INCREF(tmp_tuple_element_50);
                    } else {
                        goto tuple_build_exception_39;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_50);
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_tuple_element_47);
                goto tuple_build_exception_37;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_47);
                tmp_tuple_element_51 = mod_consts[294];
                tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_51);
                tmp_tuple_element_51 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[21]);

                if (tmp_tuple_element_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_51 == NULL)) {
                            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 302;
                            type_description_2 = "o";
                            goto tuple_build_exception_40;
                        }
                        Py_INCREF(tmp_tuple_element_51);
                    } else {
                        goto tuple_build_exception_40;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_51);
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_tuple_element_47);
                goto tuple_build_exception_37;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_47);
                tmp_tuple_element_52 = mod_consts[295];
                tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_52);
                tmp_tuple_element_52 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[21]);

                if (tmp_tuple_element_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_52 == NULL)) {
                            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 303;
                            type_description_2 = "o";
                            goto tuple_build_exception_41;
                        }
                        Py_INCREF(tmp_tuple_element_52);
                    } else {
                        goto tuple_build_exception_41;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_52);
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_tuple_element_47);
                goto tuple_build_exception_37;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_47);
                tmp_tuple_element_53 = mod_consts[296];
                tmp_tuple_element_47 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_47, 0, tmp_tuple_element_53);
                tmp_tuple_element_53 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[291]);

                if (tmp_tuple_element_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[291]);

                        if (unlikely(tmp_tuple_element_53 == NULL)) {
                            tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[291]);
                        }

                        if (tmp_tuple_element_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 304;
                            type_description_2 = "o";
                            goto tuple_build_exception_42;
                        }
                        Py_INCREF(tmp_tuple_element_53);
                    } else {
                        goto tuple_build_exception_42;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_47, 1, tmp_tuple_element_53);
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_tuple_element_47);
                goto tuple_build_exception_37;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_224;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[267]);

            if (unlikely(tmp_iter_arg_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[267]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 306;
                type_description_2 = "o";
                goto try_except_handler_17;
            }

            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_assign_source_224 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_224 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_DIDATAFORMAT$listcomp_1__$0 == NULL);
            tmp_DIDATAFORMAT$listcomp_1__$0 = tmp_assign_source_224;
        }
        {
            PyObject *tmp_assign_source_225;
            tmp_assign_source_225 = MAKE_LIST_EMPTY(0);
            assert(tmp_DIDATAFORMAT$listcomp_1__contraction == NULL);
            tmp_DIDATAFORMAT$listcomp_1__contraction = tmp_assign_source_225;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_226;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__$0);
            tmp_next_source_2 = tmp_DIDATAFORMAT$listcomp_1__$0;
            tmp_assign_source_226 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_226 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 306;
                    goto try_except_handler_18;
                }
            }

            {
                PyObject *old = tmp_DIDATAFORMAT$listcomp_1__iter_value_0;
                tmp_DIDATAFORMAT$listcomp_1__iter_value_0 = tmp_assign_source_226;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_227;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__iter_value_0);
            tmp_iter_arg_4 = tmp_DIDATAFORMAT$listcomp_1__iter_value_0;
            tmp_assign_source_227 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_227 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
                tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter = tmp_assign_source_227;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_228;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_228 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_228 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 306;
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1;
                tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1 = tmp_assign_source_228;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_229;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_229 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_229 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 306;
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2;
                tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2 = tmp_assign_source_229;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 306;
                        goto try_except_handler_20;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[289];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 306;
                goto try_except_handler_20;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_19;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_230;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_230 = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_5_var_n;
                outline_5_var_n = tmp_assign_source_230;
                Py_INCREF(outline_5_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_231;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_231 = tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_5_var_t;
                outline_5_var_t = tmp_assign_source_231;
                Py_INCREF(outline_5_var_t);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2);
        tmp_DIDATAFORMAT$listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__contraction);
            tmp_append_list_2 = tmp_DIDATAFORMAT$listcomp_1__contraction;
            CHECK_OBJECT(outline_5_var_n);
            tmp_append_value_2 = outline_5_var_n;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__contraction);
        tmp_dictset_value = tmp_DIDATAFORMAT$listcomp_1__contraction;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__$0);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp_1__$0);
        tmp_DIDATAFORMAT$listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__contraction);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp_1__contraction);
        tmp_DIDATAFORMAT$listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_DIDATAFORMAT$listcomp_1__iter_value_0);
        tmp_DIDATAFORMAT$listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__$0);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp_1__$0);
        tmp_DIDATAFORMAT$listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_DIDATAFORMAT$listcomp_1__contraction);
        Py_DECREF(tmp_DIDATAFORMAT$listcomp_1__contraction);
        tmp_DIDATAFORMAT$listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_DIDATAFORMAT$listcomp_1__iter_value_0);
        tmp_DIDATAFORMAT$listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_XDECREF(outline_5_var_n);
        outline_5_var_n = NULL;
        Py_XDECREF(outline_5_var_t);
        outline_5_var_t = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_n);
        outline_5_var_n = NULL;
        Py_XDECREF(outline_5_var_t);
        outline_5_var_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 306;
        goto frame_exception_exit_5;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[290], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_064bae3916a982ce2711a3ee2b4cd8e3_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_064bae3916a982ce2711a3ee2b4cd8e3_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_064bae3916a982ce2711a3ee2b4cd8e3_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_064bae3916a982ce2711a3ee2b4cd8e3_5,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_064bae3916a982ce2711a3ee2b4cd8e3_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_16;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_16;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_232;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_54 = mod_consts[292];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_54 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 297;
            tmp_assign_source_232 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_232 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_232;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_223 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_223);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297);
        locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297);
        locals_pyglet$libs$win32$dinput$$$class__4_DIDATAFORMAT_297 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 297;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_223);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[22]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[292]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[292]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 307;
        tmp_assign_source_233 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_233);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_50 == NULL));
        tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[248]);
        if (tmp_tuple_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_assign_source_234 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_234, 0, tmp_tuple_element_55);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_234;
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_235 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_235;
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_236;
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_51 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[11];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_237 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_237;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_52 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_53 = tmp_class_creation_5__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[249]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_tuple_element_56 = mod_consts[298];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_56 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 309;
        tmp_assign_source_238 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_238;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_54 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_55 = tmp_class_creation_5__metaclass;
        tmp_name_value_6 = mod_consts[253];
        tmp_default_value_5 = mod_consts[254];
        tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_6, tmp_default_value_5);
        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[253]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 309;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_239;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_240;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[298];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_23;
        }
        frame_2fe66d54f2c89f32d1acec378db6d1a8_6 = MAKE_CLASS_FRAME(tstate, codeobj_2fe66d54f2c89f32d1acec378db6d1a8, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2fe66d54f2c89f32d1acec378db6d1a8_6);
        assert(Py_REFCNT(frame_2fe66d54f2c89f32d1acec378db6d1a8_6) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_tuple_element_59;
            tmp_tuple_element_59 = mod_consts[274];
            tmp_tuple_element_58 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[21]);

            if (tmp_tuple_element_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_tuple_element_59 == NULL)) {
                        tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                    }

                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    Py_INCREF(tmp_tuple_element_59);
                } else {
                    goto tuple_build_exception_44;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_59);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_tuple_element_58);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_58);
                tmp_tuple_element_60 = mod_consts[299];
                tmp_tuple_element_58 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_60);
                tmp_tuple_element_60 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[21]);

                if (tmp_tuple_element_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_60 == NULL)) {
                            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 312;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_tuple_element_60);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_60);
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_tuple_element_58);
                goto tuple_build_exception_45;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_58);
                tmp_tuple_element_61 = mod_consts[300];
                tmp_tuple_element_58 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_61);
                tmp_tuple_element_61 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[21]);

                if (tmp_tuple_element_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_61 == NULL)) {
                            tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 313;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_tuple_element_61);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_61);
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_tuple_element_58);
                goto tuple_build_exception_45;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_58);
                tmp_tuple_element_62 = mod_consts[301];
                tmp_tuple_element_58 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_62);
                tmp_tuple_element_62 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[21]);

                if (tmp_tuple_element_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_62 == NULL)) {
                            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_48;
                        }
                        Py_INCREF(tmp_tuple_element_62);
                    } else {
                        goto tuple_build_exception_48;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_62);
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_tuple_element_58);
                goto tuple_build_exception_45;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_58);
                tmp_tuple_element_63 = mod_consts[302];
                tmp_tuple_element_58 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_17;
                    PyObject *tmp_expression_value_57;
                    PyObject *tmp_args_element_value_13;
                    PyTuple_SET_ITEM0(tmp_tuple_element_58, 0, tmp_tuple_element_63);
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                    }

                    assert(!(tmp_expression_value_57 == NULL));
                    tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[22]);
                    if (tmp_called_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 315;
                        type_description_2 = "o";
                        goto tuple_build_exception_49;
                    }
                    tmp_args_element_value_13 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[29]);

                    if (tmp_args_element_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[29]);

                            if (unlikely(tmp_args_element_value_13 == NULL)) {
                                tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                            }

                            if (tmp_args_element_value_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_17);

                                exception_lineno = 315;
                                type_description_2 = "o";
                                goto tuple_build_exception_49;
                            }
                            Py_INCREF(tmp_args_element_value_13);
                        } else {
                            goto tuple_build_exception_49;
                        }
                    }

                    frame_2fe66d54f2c89f32d1acec378db6d1a8_6->m_frame.f_lineno = 315;
                    tmp_tuple_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
                    Py_DECREF(tmp_called_value_17);
                    Py_DECREF(tmp_args_element_value_13);
                    if (tmp_tuple_element_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 315;
                        type_description_2 = "o";
                        goto tuple_build_exception_49;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_58, 1, tmp_tuple_element_63);
                }
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_tuple_element_58);
                goto tuple_build_exception_45;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2fe66d54f2c89f32d1acec378db6d1a8_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2fe66d54f2c89f32d1acec378db6d1a8_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2fe66d54f2c89f32d1acec378db6d1a8_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2fe66d54f2c89f32d1acec378db6d1a8_6,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_2fe66d54f2c89f32d1acec378db6d1a8_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_23;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto try_except_handler_23;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_241;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_18 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_64 = mod_consts[298];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_64 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_64);
            tmp_tuple_element_64 = locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_64);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 309;
            tmp_assign_source_241 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_241 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_241;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_240 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_240);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309);
        locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309);
        locals_pyglet$libs$win32$dinput$$$class__5_DIDEVICEOBJECTDATA_309 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 309;
        goto try_except_handler_21;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_240);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_58 == NULL));
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[22]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[298]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[298]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 317;
        tmp_assign_source_242 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_242);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_59 == NULL));
        tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[248]);
        if (tmp_tuple_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_assign_source_243 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_243, 0, tmp_tuple_element_65);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_243;
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_244 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_244;
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_245;
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_60 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[11];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_246 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_246;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_61 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_62 = tmp_class_creation_6__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[249]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_tuple_element_66 = mod_consts[304];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_66 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_66);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 319;
        tmp_assign_source_247 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_247;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_63 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_64 = tmp_class_creation_6__metaclass;
        tmp_name_value_7 = mod_consts[253];
        tmp_default_value_6 = mod_consts[254];
        tmp_tuple_element_67 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_7, tmp_default_value_6);
        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_65;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_65 == NULL));
            tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[253]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_50;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_50:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_50:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 319;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_248;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_249;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[304];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_26;
        }
        frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7 = MAKE_CLASS_FRAME(tstate, codeobj_3c945ee2a3bc25eaecfb8efd47f4cba0, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7);
        assert(Py_REFCNT(frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            tmp_tuple_element_69 = mod_consts[258];
            tmp_tuple_element_68 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_68, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[21]);

            if (tmp_tuple_element_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_tuple_element_69 == NULL)) {
                        tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                    }

                    if (tmp_tuple_element_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 321;
                        type_description_2 = "o";
                        goto tuple_build_exception_51;
                    }
                    Py_INCREF(tmp_tuple_element_69);
                } else {
                    goto tuple_build_exception_51;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_68, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_tuple_element_68);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_tuple_element_70;
                PyObject *tmp_tuple_element_71;
                PyObject *tmp_tuple_element_72;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_68);
                tmp_tuple_element_70 = mod_consts[305];
                tmp_tuple_element_68 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_68, 0, tmp_tuple_element_70);
                tmp_tuple_element_70 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[21]);

                if (tmp_tuple_element_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_70 == NULL)) {
                            tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 322;
                            type_description_2 = "o";
                            goto tuple_build_exception_53;
                        }
                        Py_INCREF(tmp_tuple_element_70);
                    } else {
                        goto tuple_build_exception_53;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_68, 1, tmp_tuple_element_70);
                goto tuple_build_noexception_52;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_53:;
                Py_DECREF(tmp_tuple_element_68);
                goto tuple_build_exception_52;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_52:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_68);
                tmp_tuple_element_71 = mod_consts[306];
                tmp_tuple_element_68 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_68, 0, tmp_tuple_element_71);
                tmp_tuple_element_71 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[21]);

                if (tmp_tuple_element_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_71 == NULL)) {
                            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_71 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 323;
                            type_description_2 = "o";
                            goto tuple_build_exception_54;
                        }
                        Py_INCREF(tmp_tuple_element_71);
                    } else {
                        goto tuple_build_exception_54;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_68, 1, tmp_tuple_element_71);
                goto tuple_build_noexception_53;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_54:;
                Py_DECREF(tmp_tuple_element_68);
                goto tuple_build_exception_52;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_53:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_68);
                tmp_tuple_element_72 = mod_consts[307];
                tmp_tuple_element_68 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_68, 0, tmp_tuple_element_72);
                tmp_tuple_element_72 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[21]);

                if (tmp_tuple_element_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_72 == NULL)) {
                            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_72 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 324;
                            type_description_2 = "o";
                            goto tuple_build_exception_55;
                        }
                        Py_INCREF(tmp_tuple_element_72);
                    } else {
                        goto tuple_build_exception_55;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_68, 1, tmp_tuple_element_72);
                goto tuple_build_noexception_54;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_55:;
                Py_DECREF(tmp_tuple_element_68);
                goto tuple_build_exception_52;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_54:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_68);
            }
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_3c945ee2a3bc25eaecfb8efd47f4cba0_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_26;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto try_except_handler_26;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_250;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_21 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_73 = mod_consts[304];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_73 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_73);
            tmp_tuple_element_73 = locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 319;
            tmp_assign_source_250 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_250 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_250;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_249 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_249);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319);
        locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319);
        locals_pyglet$libs$win32$dinput$$$class__6_DIPROPHEADER_319 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 319;
        goto try_except_handler_24;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_249);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_66 == NULL));
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[22]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[304]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[304]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 326;
        tmp_assign_source_251 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_22);
        if (tmp_assign_source_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_251);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_67 == NULL));
        tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[248]);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_assign_source_252 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_252, 0, tmp_tuple_element_74);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_252;
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_253 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_253;
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_254;
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_68 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[11];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_255 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_255;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_69 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_70 = tmp_class_creation_7__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[249]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_tuple_element_75 = mod_consts[309];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_75);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_75 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_75);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 328;
        tmp_assign_source_256 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_256;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_71 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_72 = tmp_class_creation_7__metaclass;
        tmp_name_value_8 = mod_consts[253];
        tmp_default_value_7 = mod_consts[254];
        tmp_tuple_element_76 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_8, tmp_default_value_7);
        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_76);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[253]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 328;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_257;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_258;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[309];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_29;
        }
        frame_6aeef40878f2782de337429a415ef260_8 = MAKE_CLASS_FRAME(tstate, codeobj_6aeef40878f2782de337429a415ef260, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6aeef40878f2782de337429a415ef260_8);
        assert(Py_REFCNT(frame_6aeef40878f2782de337429a415ef260_8) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            tmp_tuple_element_78 = mod_consts[310];
            tmp_tuple_element_77 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_77, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[304]);

            if (tmp_tuple_element_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[304]);

                    if (unlikely(tmp_tuple_element_78 == NULL)) {
                        tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[304]);
                    }

                    if (tmp_tuple_element_78 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 330;
                        type_description_2 = "o";
                        goto tuple_build_exception_57;
                    }
                    Py_INCREF(tmp_tuple_element_78);
                } else {
                    goto tuple_build_exception_57;
                }
            }

            PyTuple_SET_ITEM(tmp_tuple_element_77, 1, tmp_tuple_element_78);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_tuple_element_77);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_tuple_element_79;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_77);
                tmp_tuple_element_79 = mod_consts[299];
                tmp_tuple_element_77 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_77, 0, tmp_tuple_element_79);
                tmp_tuple_element_79 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[21]);

                if (tmp_tuple_element_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_79 == NULL)) {
                            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_79 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 331;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_tuple_element_79);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_77, 1, tmp_tuple_element_79);
                goto tuple_build_noexception_58;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_59:;
                Py_DECREF(tmp_tuple_element_77);
                goto tuple_build_exception_58;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_58:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_77);
            }
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[267], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6aeef40878f2782de337429a415ef260_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6aeef40878f2782de337429a415ef260_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6aeef40878f2782de337429a415ef260_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6aeef40878f2782de337429a415ef260_8,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_6aeef40878f2782de337429a415ef260_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_29;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto try_except_handler_29;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_259;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_24 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_80 = mod_consts[309];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_80);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_80 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_80);
            tmp_tuple_element_80 = locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_80);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 328;
            tmp_assign_source_259 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_259 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_259;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_258 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_258);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328);
        locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328);
        locals_pyglet$libs$win32$dinput$$$class__7_DIPROPDWORD_328 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 328;
        goto try_except_handler_27;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_258);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[311]);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_assign_source_260 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_260, 0, tmp_tuple_element_81);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_260;
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_261 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_261;
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_262;
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_75 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[11];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_263 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_263;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_76 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_77 = tmp_class_creation_8__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[249]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_tuple_element_82 = mod_consts[312];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_82 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 340;
        tmp_assign_source_264 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_264;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_78 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_79 = tmp_class_creation_8__metaclass;
        tmp_name_value_9 = mod_consts[253];
        tmp_default_value_8 = mod_consts[254];
        tmp_tuple_element_83 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_9, tmp_default_value_8);
        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_80 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[253]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_83);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 340;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_265;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_266;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[312];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_32;
        }
        frame_f2a167c40e6def15c6a99e46b15545d5_9 = MAKE_CLASS_FRAME(tstate, codeobj_f2a167c40e6def15c6a99e46b15545d5, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f2a167c40e6def15c6a99e46b15545d5_9);
        assert(Py_REFCNT(frame_f2a167c40e6def15c6a99e46b15545d5_9) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_84;
            tmp_tuple_element_84 = mod_consts[313];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_instance_3;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_84);
                tmp_called_instance_3 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                if (tmp_called_instance_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_called_instance_3 == NULL)) {
                            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                        }

                        if (tmp_called_instance_3 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 343;
                            type_description_2 = "o";
                            goto tuple_build_exception_61;
                        }
                        Py_INCREF(tmp_called_instance_3);
                    } else {
                        goto tuple_build_exception_61;
                    }
                }

                frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 343;
                tmp_tuple_element_84 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[314]);
                Py_DECREF(tmp_called_instance_3);
                if (tmp_tuple_element_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 343;
                    type_description_2 = "o";
                    goto tuple_build_exception_61;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_84);
            }
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            tmp_dictset_value = MAKE_LIST_EMPTY(29);
            {
                PyObject *tmp_tuple_element_85;
                PyObject *tmp_tuple_element_86;
                PyObject *tmp_tuple_element_87;
                PyObject *tmp_tuple_element_88;
                PyObject *tmp_tuple_element_89;
                PyObject *tmp_tuple_element_90;
                PyObject *tmp_tuple_element_91;
                PyObject *tmp_tuple_element_92;
                PyObject *tmp_tuple_element_93;
                PyObject *tmp_tuple_element_94;
                PyObject *tmp_tuple_element_95;
                PyObject *tmp_tuple_element_96;
                PyObject *tmp_tuple_element_97;
                PyObject *tmp_tuple_element_98;
                PyObject *tmp_tuple_element_99;
                PyObject *tmp_tuple_element_100;
                PyObject *tmp_tuple_element_101;
                PyObject *tmp_tuple_element_102;
                PyObject *tmp_tuple_element_103;
                PyObject *tmp_tuple_element_104;
                PyObject *tmp_tuple_element_105;
                PyObject *tmp_tuple_element_106;
                PyObject *tmp_tuple_element_107;
                PyObject *tmp_tuple_element_108;
                PyObject *tmp_tuple_element_109;
                PyObject *tmp_tuple_element_110;
                PyObject *tmp_tuple_element_111;
                PyObject *tmp_tuple_element_112;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_85 = mod_consts[315];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_26;
                    PyObject *tmp_expression_value_81;
                    PyObject *tmp_args_element_value_16;
                    PyObject *tmp_args_element_value_17;
                    PyObject *tmp_args_element_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_85);
                    tmp_expression_value_81 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_81 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_81 == NULL)) {
                                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_81 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 345;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_expression_value_81);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_81);
                    if (tmp_called_value_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_2 = "o";
                        goto tuple_build_exception_62;
                    }
                    tmp_args_element_value_16 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[286]);

                    if (tmp_args_element_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[286]);

                            if (unlikely(tmp_args_element_value_16 == NULL)) {
                                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[286]);
                            }

                            if (tmp_args_element_value_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_26);

                                exception_lineno = 345;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_args_element_value_16);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    tmp_args_element_value_17 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[17]);

                    if (tmp_args_element_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

                            if (unlikely(tmp_args_element_value_17 == NULL)) {
                                tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                            }

                            if (tmp_args_element_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_26);
                                Py_DECREF(tmp_args_element_value_16);

                                exception_lineno = 345;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_args_element_value_17);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    tmp_args_element_value_18 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[21]);

                    if (tmp_args_element_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_18 == NULL)) {
                                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_26);
                                Py_DECREF(tmp_args_element_value_16);
                                Py_DECREF(tmp_args_element_value_17);

                                exception_lineno = 345;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_args_element_value_18);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 345;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                        tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
                    }

                    Py_DECREF(tmp_called_value_26);
                    Py_DECREF(tmp_args_element_value_16);
                    Py_DECREF(tmp_args_element_value_17);
                    Py_DECREF(tmp_args_element_value_18);
                    if (tmp_tuple_element_85 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_2 = "o";
                        goto tuple_build_exception_62;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_85);
                }
                goto tuple_build_noexception_62;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_62:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_62:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_86 = mod_consts[316];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_4;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_86);
                    tmp_called_instance_4 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_4 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_4 == NULL)) {
                                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_4 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 347;
                                type_description_2 = "o";
                                goto tuple_build_exception_63;
                            }
                            Py_INCREF(tmp_called_instance_4);
                        } else {
                            goto tuple_build_exception_63;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 347;
                    tmp_tuple_element_86 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_4);
                    if (tmp_tuple_element_86 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_2 = "o";
                        goto tuple_build_exception_63;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_86);
                }
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_87 = mod_consts[317];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_27;
                    PyObject *tmp_expression_value_82;
                    PyObject *tmp_args_element_value_19;
                    PyObject *tmp_args_element_value_20;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_87);
                    tmp_expression_value_82 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_82 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_82 == NULL)) {
                                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_82 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 349;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_expression_value_82);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_82);
                    if (tmp_called_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 349;
                        type_description_2 = "o";
                        goto tuple_build_exception_64;
                    }
                    tmp_args_element_value_19 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[17]);

                    if (tmp_args_element_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

                            if (unlikely(tmp_args_element_value_19 == NULL)) {
                                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                            }

                            if (tmp_args_element_value_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);

                                exception_lineno = 349;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_args_element_value_19);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    tmp_args_element_value_20 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[308]);

                    if (tmp_args_element_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[308]);

                            if (unlikely(tmp_args_element_value_20 == NULL)) {
                                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[308]);
                            }

                            if (tmp_args_element_value_20 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_27);
                                Py_DECREF(tmp_args_element_value_19);

                                exception_lineno = 349;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_args_element_value_20);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 349;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                        tmp_tuple_element_87 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
                    }

                    Py_DECREF(tmp_called_value_27);
                    Py_DECREF(tmp_args_element_value_19);
                    Py_DECREF(tmp_args_element_value_20);
                    if (tmp_tuple_element_87 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 349;
                        type_description_2 = "o";
                        goto tuple_build_exception_64;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_87);
                }
                goto tuple_build_noexception_64;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_64:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_64:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_88 = mod_consts[318];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_5;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_88);
                    tmp_called_instance_5 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_5 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_5 == NULL)) {
                                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_5 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 351;
                                type_description_2 = "o";
                                goto tuple_build_exception_65;
                            }
                            Py_INCREF(tmp_called_instance_5);
                        } else {
                            goto tuple_build_exception_65;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 351;
                    tmp_tuple_element_88 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_5);
                    if (tmp_tuple_element_88 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 351;
                        type_description_2 = "o";
                        goto tuple_build_exception_65;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_88);
                }
                goto tuple_build_noexception_65;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_65:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_65:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_89 = mod_consts[319];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_6;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_89);
                    tmp_called_instance_6 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_6 == NULL)) {
                                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_6 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 353;
                                type_description_2 = "o";
                                goto tuple_build_exception_66;
                            }
                            Py_INCREF(tmp_called_instance_6);
                        } else {
                            goto tuple_build_exception_66;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 353;
                    tmp_tuple_element_89 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_6);
                    if (tmp_tuple_element_89 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto tuple_build_exception_66;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_89);
                }
                goto tuple_build_noexception_66;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_66:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_66:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
                tmp_tuple_element_90 = mod_consts[320];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_7;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_90);
                    tmp_called_instance_7 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_7 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_7 == NULL)) {
                                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_7 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 355;
                                type_description_2 = "o";
                                goto tuple_build_exception_67;
                            }
                            Py_INCREF(tmp_called_instance_7);
                        } else {
                            goto tuple_build_exception_67;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 355;
                    tmp_tuple_element_90 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_7);
                    if (tmp_tuple_element_90 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 355;
                        type_description_2 = "o";
                        goto tuple_build_exception_67;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_90);
                }
                goto tuple_build_noexception_67;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_67:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_67:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_1);
                tmp_tuple_element_91 = mod_consts[321];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_expression_value_83;
                    PyObject *tmp_args_element_value_21;
                    PyObject *tmp_args_element_value_22;
                    PyObject *tmp_args_element_value_23;
                    PyObject *tmp_args_element_value_24;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_91);
                    tmp_expression_value_83 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_83 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_83 == NULL)) {
                                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_83 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 357;
                                type_description_2 = "o";
                                goto tuple_build_exception_68;
                            }
                            Py_INCREF(tmp_expression_value_83);
                        } else {
                            goto tuple_build_exception_68;
                        }
                    }

                    tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_83);
                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 357;
                        type_description_2 = "o";
                        goto tuple_build_exception_68;
                    }
                    tmp_args_element_value_21 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[21]);

                    if (tmp_args_element_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_21 == NULL)) {
                                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_21 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 357;
                                type_description_2 = "o";
                                goto tuple_build_exception_68;
                            }
                            Py_INCREF(tmp_args_element_value_21);
                        } else {
                            goto tuple_build_exception_68;
                        }
                    }

                    tmp_args_element_value_22 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[303]);

                    if (tmp_args_element_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[303]);

                            if (unlikely(tmp_args_element_value_22 == NULL)) {
                                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[303]);
                            }

                            if (tmp_args_element_value_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);
                                Py_DECREF(tmp_args_element_value_21);

                                exception_lineno = 357;
                                type_description_2 = "o";
                                goto tuple_build_exception_68;
                            }
                            Py_INCREF(tmp_args_element_value_22);
                        } else {
                            goto tuple_build_exception_68;
                        }
                    }

                    tmp_args_element_value_23 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[23]);

                    if (tmp_args_element_value_23 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[23]);

                            if (unlikely(tmp_args_element_value_23 == NULL)) {
                                tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                            }

                            if (tmp_args_element_value_23 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);
                                Py_DECREF(tmp_args_element_value_21);
                                Py_DECREF(tmp_args_element_value_22);

                                exception_lineno = 357;
                                type_description_2 = "o";
                                goto tuple_build_exception_68;
                            }
                            Py_INCREF(tmp_args_element_value_23);
                        } else {
                            goto tuple_build_exception_68;
                        }
                    }

                    tmp_args_element_value_24 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[21]);

                    if (tmp_args_element_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_24 == NULL)) {
                                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);
                                Py_DECREF(tmp_args_element_value_21);
                                Py_DECREF(tmp_args_element_value_22);
                                Py_DECREF(tmp_args_element_value_23);

                                exception_lineno = 357;
                                type_description_2 = "o";
                                goto tuple_build_exception_68;
                            }
                            Py_INCREF(tmp_args_element_value_24);
                        } else {
                            goto tuple_build_exception_68;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 357;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                        tmp_tuple_element_91 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_28, call_args);
                    }

                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_21);
                    Py_DECREF(tmp_args_element_value_22);
                    Py_DECREF(tmp_args_element_value_23);
                    Py_DECREF(tmp_args_element_value_24);
                    if (tmp_tuple_element_91 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 357;
                        type_description_2 = "o";
                        goto tuple_build_exception_68;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_91);
                }
                goto tuple_build_noexception_68;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_68:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_68:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_1);
                tmp_tuple_element_92 = mod_consts[322];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_29;
                    PyObject *tmp_expression_value_84;
                    PyObject *tmp_args_element_value_25;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_92);
                    tmp_expression_value_84 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_84 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_84 == NULL)) {
                                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_84 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 359;
                                type_description_2 = "o";
                                goto tuple_build_exception_69;
                            }
                            Py_INCREF(tmp_expression_value_84);
                        } else {
                            goto tuple_build_exception_69;
                        }
                    }

                    tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_84);
                    if (tmp_called_value_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 359;
                        type_description_2 = "o";
                        goto tuple_build_exception_69;
                    }
                    tmp_args_element_value_25 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[297]);

                    if (tmp_args_element_value_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[297]);

                            if (unlikely(tmp_args_element_value_25 == NULL)) {
                                tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[297]);
                            }

                            if (tmp_args_element_value_25 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_29);

                                exception_lineno = 359;
                                type_description_2 = "o";
                                goto tuple_build_exception_69;
                            }
                            Py_INCREF(tmp_args_element_value_25);
                        } else {
                            goto tuple_build_exception_69;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 359;
                    tmp_tuple_element_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_25);
                    Py_DECREF(tmp_called_value_29);
                    Py_DECREF(tmp_args_element_value_25);
                    if (tmp_tuple_element_92 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 359;
                        type_description_2 = "o";
                        goto tuple_build_exception_69;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_92);
                }
                goto tuple_build_noexception_69;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_69:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_69:;
                PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_1);
                tmp_tuple_element_93 = mod_consts[323];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_expression_value_85;
                    PyObject *tmp_args_element_value_26;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_93);
                    tmp_expression_value_85 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_85 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_85 == NULL)) {
                                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_85 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 361;
                                type_description_2 = "o";
                                goto tuple_build_exception_70;
                            }
                            Py_INCREF(tmp_expression_value_85);
                        } else {
                            goto tuple_build_exception_70;
                        }
                    }

                    tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_85);
                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto tuple_build_exception_70;
                    }
                    tmp_args_element_value_26 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[31]);

                    if (tmp_args_element_value_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_26 == NULL)) {
                                tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_26 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 361;
                                type_description_2 = "o";
                                goto tuple_build_exception_70;
                            }
                            Py_INCREF(tmp_args_element_value_26);
                        } else {
                            goto tuple_build_exception_70;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 361;
                    tmp_tuple_element_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_26);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_26);
                    if (tmp_tuple_element_93 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto tuple_build_exception_70;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_93);
                }
                goto tuple_build_noexception_70;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_70:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_70:;
                PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_1);
                tmp_tuple_element_94 = mod_consts[324];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_31;
                    PyObject *tmp_expression_value_86;
                    PyObject *tmp_args_element_value_27;
                    PyObject *tmp_args_element_value_28;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_94);
                    tmp_expression_value_86 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_expression_value_86 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_86 == NULL)) {
                                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_86 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 363;
                                type_description_2 = "o";
                                goto tuple_build_exception_71;
                            }
                            Py_INCREF(tmp_expression_value_86);
                        } else {
                            goto tuple_build_exception_71;
                        }
                    }

                    tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_86);
                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto tuple_build_exception_71;
                    }
                    tmp_args_element_value_27 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[30]);

                    if (tmp_args_element_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[30]);

                            if (unlikely(tmp_args_element_value_27 == NULL)) {
                                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                            }

                            if (tmp_args_element_value_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);

                                exception_lineno = 363;
                                type_description_2 = "o";
                                goto tuple_build_exception_71;
                            }
                            Py_INCREF(tmp_args_element_value_27);
                        } else {
                            goto tuple_build_exception_71;
                        }
                    }

                    tmp_args_element_value_28 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[21]);

                    if (tmp_args_element_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_28 == NULL)) {
                                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_31);
                                Py_DECREF(tmp_args_element_value_27);

                                exception_lineno = 363;
                                type_description_2 = "o";
                                goto tuple_build_exception_71;
                            }
                            Py_INCREF(tmp_args_element_value_28);
                        } else {
                            goto tuple_build_exception_71;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 363;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                        tmp_tuple_element_94 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
                    }

                    Py_DECREF(tmp_called_value_31);
                    Py_DECREF(tmp_args_element_value_27);
                    Py_DECREF(tmp_args_element_value_28);
                    if (tmp_tuple_element_94 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 363;
                        type_description_2 = "o";
                        goto tuple_build_exception_71;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_94);
                }
                goto tuple_build_noexception_71;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_71:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_71:;
                PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_1);
                tmp_tuple_element_95 = mod_consts[325];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_8;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_95);
                    tmp_called_instance_8 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_8 == NULL)) {
                                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_8 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 365;
                                type_description_2 = "o";
                                goto tuple_build_exception_72;
                            }
                            Py_INCREF(tmp_called_instance_8);
                        } else {
                            goto tuple_build_exception_72;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 365;
                    tmp_tuple_element_95 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_8);
                    if (tmp_tuple_element_95 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto tuple_build_exception_72;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_95);
                }
                goto tuple_build_noexception_72;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_72:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_72:;
                PyList_SET_ITEM(tmp_dictset_value, 11, tmp_list_element_1);
                tmp_tuple_element_96 = mod_consts[326];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_96);
                    tmp_called_instance_9 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_9 == NULL)) {
                                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_9 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 367;
                                type_description_2 = "o";
                                goto tuple_build_exception_73;
                            }
                            Py_INCREF(tmp_called_instance_9);
                        } else {
                            goto tuple_build_exception_73;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 367;
                    tmp_tuple_element_96 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_9);
                    if (tmp_tuple_element_96 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 367;
                        type_description_2 = "o";
                        goto tuple_build_exception_73;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_96);
                }
                goto tuple_build_noexception_73;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_73:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_73:;
                PyList_SET_ITEM(tmp_dictset_value, 12, tmp_list_element_1);
                tmp_tuple_element_97 = mod_consts[327];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_10;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_97);
                    tmp_called_instance_10 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_10 == NULL)) {
                                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_10 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 369;
                                type_description_2 = "o";
                                goto tuple_build_exception_74;
                            }
                            Py_INCREF(tmp_called_instance_10);
                        } else {
                            goto tuple_build_exception_74;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 369;
                    tmp_tuple_element_97 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_10);
                    if (tmp_tuple_element_97 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto tuple_build_exception_74;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_97);
                }
                goto tuple_build_noexception_74;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_74:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_74:;
                PyList_SET_ITEM(tmp_dictset_value, 13, tmp_list_element_1);
                tmp_tuple_element_98 = mod_consts[328];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_11;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_98);
                    tmp_called_instance_11 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_11 == NULL)) {
                                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 371;
                                type_description_2 = "o";
                                goto tuple_build_exception_75;
                            }
                            Py_INCREF(tmp_called_instance_11);
                        } else {
                            goto tuple_build_exception_75;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 371;
                    tmp_tuple_element_98 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_11);
                    if (tmp_tuple_element_98 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 371;
                        type_description_2 = "o";
                        goto tuple_build_exception_75;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_98);
                }
                goto tuple_build_noexception_75;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_75:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_75:;
                PyList_SET_ITEM(tmp_dictset_value, 14, tmp_list_element_1);
                tmp_tuple_element_99 = mod_consts[329];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_12;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_99);
                    tmp_called_instance_12 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_12 == NULL)) {
                                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 373;
                                type_description_2 = "o";
                                goto tuple_build_exception_76;
                            }
                            Py_INCREF(tmp_called_instance_12);
                        } else {
                            goto tuple_build_exception_76;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 373;
                    tmp_tuple_element_99 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_12);
                    if (tmp_tuple_element_99 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_2 = "o";
                        goto tuple_build_exception_76;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_99);
                }
                goto tuple_build_noexception_76;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_76:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_76:;
                PyList_SET_ITEM(tmp_dictset_value, 15, tmp_list_element_1);
                tmp_tuple_element_100 = mod_consts[330];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_13;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_100);
                    tmp_called_instance_13 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_13 == NULL)) {
                                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 375;
                                type_description_2 = "o";
                                goto tuple_build_exception_77;
                            }
                            Py_INCREF(tmp_called_instance_13);
                        } else {
                            goto tuple_build_exception_77;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 375;
                    tmp_tuple_element_100 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_13);
                    if (tmp_tuple_element_100 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 375;
                        type_description_2 = "o";
                        goto tuple_build_exception_77;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_100);
                }
                goto tuple_build_noexception_77;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_77:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_77:;
                PyList_SET_ITEM(tmp_dictset_value, 16, tmp_list_element_1);
                tmp_tuple_element_101 = mod_consts[331];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_14;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_101);
                    tmp_called_instance_14 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_14 == NULL)) {
                                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_14 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 377;
                                type_description_2 = "o";
                                goto tuple_build_exception_78;
                            }
                            Py_INCREF(tmp_called_instance_14);
                        } else {
                            goto tuple_build_exception_78;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 377;
                    tmp_tuple_element_101 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_14);
                    if (tmp_tuple_element_101 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_2 = "o";
                        goto tuple_build_exception_78;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_101);
                }
                goto tuple_build_noexception_78;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_78:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_78:;
                PyList_SET_ITEM(tmp_dictset_value, 17, tmp_list_element_1);
                tmp_tuple_element_102 = mod_consts[332];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_15;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_102);
                    tmp_called_instance_15 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_15 == NULL)) {
                                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_15 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 379;
                                type_description_2 = "o";
                                goto tuple_build_exception_79;
                            }
                            Py_INCREF(tmp_called_instance_15);
                        } else {
                            goto tuple_build_exception_79;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 379;
                    tmp_tuple_element_102 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_15);
                    if (tmp_tuple_element_102 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 379;
                        type_description_2 = "o";
                        goto tuple_build_exception_79;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_102);
                }
                goto tuple_build_noexception_79;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_79:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_79:;
                PyList_SET_ITEM(tmp_dictset_value, 18, tmp_list_element_1);
                tmp_tuple_element_103 = mod_consts[333];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_16;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_103);
                    tmp_called_instance_16 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_16 == NULL)) {
                                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 381;
                                type_description_2 = "o";
                                goto tuple_build_exception_80;
                            }
                            Py_INCREF(tmp_called_instance_16);
                        } else {
                            goto tuple_build_exception_80;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 381;
                    tmp_tuple_element_103 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_16);
                    if (tmp_tuple_element_103 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 381;
                        type_description_2 = "o";
                        goto tuple_build_exception_80;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_103);
                }
                goto tuple_build_noexception_80;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_80:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_80:;
                PyList_SET_ITEM(tmp_dictset_value, 19, tmp_list_element_1);
                tmp_tuple_element_104 = mod_consts[334];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_17;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_104);
                    tmp_called_instance_17 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_17 == NULL)) {
                                tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 383;
                                type_description_2 = "o";
                                goto tuple_build_exception_81;
                            }
                            Py_INCREF(tmp_called_instance_17);
                        } else {
                            goto tuple_build_exception_81;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 383;
                    tmp_tuple_element_104 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_17);
                    if (tmp_tuple_element_104 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto tuple_build_exception_81;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_104);
                }
                goto tuple_build_noexception_81;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_81:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_81:;
                PyList_SET_ITEM(tmp_dictset_value, 20, tmp_list_element_1);
                tmp_tuple_element_105 = mod_consts[335];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_18;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_105);
                    tmp_called_instance_18 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_18 == NULL)) {
                                tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 385;
                                type_description_2 = "o";
                                goto tuple_build_exception_82;
                            }
                            Py_INCREF(tmp_called_instance_18);
                        } else {
                            goto tuple_build_exception_82;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 385;
                    tmp_tuple_element_105 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_18);
                    if (tmp_tuple_element_105 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 385;
                        type_description_2 = "o";
                        goto tuple_build_exception_82;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_105);
                }
                goto tuple_build_noexception_82;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_82:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_82:;
                PyList_SET_ITEM(tmp_dictset_value, 21, tmp_list_element_1);
                tmp_tuple_element_106 = mod_consts[336];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_19;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_106);
                    tmp_called_instance_19 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_19 == NULL)) {
                                tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 387;
                                type_description_2 = "o";
                                goto tuple_build_exception_83;
                            }
                            Py_INCREF(tmp_called_instance_19);
                        } else {
                            goto tuple_build_exception_83;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 387;
                    tmp_tuple_element_106 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_19);
                    if (tmp_tuple_element_106 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 387;
                        type_description_2 = "o";
                        goto tuple_build_exception_83;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_106);
                }
                goto tuple_build_noexception_83;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_83:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_83:;
                PyList_SET_ITEM(tmp_dictset_value, 22, tmp_list_element_1);
                tmp_tuple_element_107 = mod_consts[337];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_20;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_107);
                    tmp_called_instance_20 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_20 == NULL)) {
                                tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_20 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 389;
                                type_description_2 = "o";
                                goto tuple_build_exception_84;
                            }
                            Py_INCREF(tmp_called_instance_20);
                        } else {
                            goto tuple_build_exception_84;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 389;
                    tmp_tuple_element_107 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_20);
                    if (tmp_tuple_element_107 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 389;
                        type_description_2 = "o";
                        goto tuple_build_exception_84;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_107);
                }
                goto tuple_build_noexception_84;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_84:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_84:;
                PyList_SET_ITEM(tmp_dictset_value, 23, tmp_list_element_1);
                tmp_tuple_element_108 = mod_consts[338];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_21;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_108);
                    tmp_called_instance_21 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_21 == NULL)) {
                                tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_21 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 391;
                                type_description_2 = "o";
                                goto tuple_build_exception_85;
                            }
                            Py_INCREF(tmp_called_instance_21);
                        } else {
                            goto tuple_build_exception_85;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 391;
                    tmp_tuple_element_108 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_21);
                    if (tmp_tuple_element_108 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 391;
                        type_description_2 = "o";
                        goto tuple_build_exception_85;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_108);
                }
                goto tuple_build_noexception_85;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_85:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_85:;
                PyList_SET_ITEM(tmp_dictset_value, 24, tmp_list_element_1);
                tmp_tuple_element_109 = mod_consts[339];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_22;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_109);
                    tmp_called_instance_22 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_22 == NULL)) {
                                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 393;
                                type_description_2 = "o";
                                goto tuple_build_exception_86;
                            }
                            Py_INCREF(tmp_called_instance_22);
                        } else {
                            goto tuple_build_exception_86;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 393;
                    tmp_tuple_element_109 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_22);
                    if (tmp_tuple_element_109 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 393;
                        type_description_2 = "o";
                        goto tuple_build_exception_86;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_109);
                }
                goto tuple_build_noexception_86;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_86:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_86:;
                PyList_SET_ITEM(tmp_dictset_value, 25, tmp_list_element_1);
                tmp_tuple_element_110 = mod_consts[340];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_23;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_110);
                    tmp_called_instance_23 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_23 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_23 == NULL)) {
                                tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_23 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 395;
                                type_description_2 = "o";
                                goto tuple_build_exception_87;
                            }
                            Py_INCREF(tmp_called_instance_23);
                        } else {
                            goto tuple_build_exception_87;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 395;
                    tmp_tuple_element_110 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_23);
                    if (tmp_tuple_element_110 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 395;
                        type_description_2 = "o";
                        goto tuple_build_exception_87;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_110);
                }
                goto tuple_build_noexception_87;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_87:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_87:;
                PyList_SET_ITEM(tmp_dictset_value, 26, tmp_list_element_1);
                tmp_tuple_element_111 = mod_consts[341];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_24;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_111);
                    tmp_called_instance_24 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_24 == NULL)) {
                                tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 397;
                                type_description_2 = "o";
                                goto tuple_build_exception_88;
                            }
                            Py_INCREF(tmp_called_instance_24);
                        } else {
                            goto tuple_build_exception_88;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 397;
                    tmp_tuple_element_111 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_24);
                    if (tmp_tuple_element_111 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 397;
                        type_description_2 = "o";
                        goto tuple_build_exception_88;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_111);
                }
                goto tuple_build_noexception_88;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_88:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_88:;
                PyList_SET_ITEM(tmp_dictset_value, 27, tmp_list_element_1);
                tmp_tuple_element_112 = mod_consts[342];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_25;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_112);
                    tmp_called_instance_25 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[12]);

                    if (tmp_called_instance_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_25 == NULL)) {
                                tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_25 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 399;
                                type_description_2 = "o";
                                goto tuple_build_exception_89;
                            }
                            Py_INCREF(tmp_called_instance_25);
                        } else {
                            goto tuple_build_exception_89;
                        }
                    }

                    frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame.f_lineno = 399;
                    tmp_tuple_element_112 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_25);
                    if (tmp_tuple_element_112 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 399;
                        type_description_2 = "o";
                        goto tuple_build_exception_89;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_112);
                }
                goto tuple_build_noexception_89;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_89:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_89:;
                PyList_SET_ITEM(tmp_dictset_value, 28, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[343], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f2a167c40e6def15c6a99e46b15545d5_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f2a167c40e6def15c6a99e46b15545d5_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f2a167c40e6def15c6a99e46b15545d5_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f2a167c40e6def15c6a99e46b15545d5_9,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_f2a167c40e6def15c6a99e46b15545d5_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_32;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto try_except_handler_32;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_267;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_113;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_32 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_113 = mod_consts[312];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_113);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_113 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_113);
            tmp_tuple_element_113 = locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_113);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 340;
            tmp_assign_source_267 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_267 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_267;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_266 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_266);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340);
        locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340);
        locals_pyglet$libs$win32$dinput$$$class__8_IDirectInputDevice8_340 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 340;
        goto try_except_handler_30;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_266);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_tuple_element_114;
        PyObject *tmp_expression_value_87;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_tuple_element_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[311]);
        if (tmp_tuple_element_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_assign_source_268 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_268, 0, tmp_tuple_element_114);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_268;
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_269 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_269;
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_270;
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_88 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[11];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_88, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_271 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_271;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_89 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_89, mod_consts[249]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_115;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_90 = tmp_class_creation_9__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[249]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_tuple_element_115 = mod_consts[344];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_115);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_115 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_115);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 402;
        tmp_assign_source_272 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_272;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_91 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_91, mod_consts[251]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_116;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[252];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_92 = tmp_class_creation_9__metaclass;
        tmp_name_value_10 = mod_consts[253];
        tmp_default_value_9 = mod_consts[254];
        tmp_tuple_element_116 = BUILTIN_GETATTR(tstate, tmp_expression_value_92, tmp_name_value_10, tmp_default_value_9);
        if (tmp_tuple_element_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_93;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_116);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_93 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_93 == NULL));
            tmp_tuple_element_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[253]);
            Py_DECREF(tmp_expression_value_93);
            if (tmp_tuple_element_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto tuple_build_exception_90;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_116);
        }
        goto tuple_build_noexception_90;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_90:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_90:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 402;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_273;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_274;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[255];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[256], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[344];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[257], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_35;
        }
        frame_21dec76ba35ef04615754b13bd788400_10 = MAKE_CLASS_FRAME(tstate, codeobj_21dec76ba35ef04615754b13bd788400, module_pyglet$libs$win32$dinput, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_21dec76ba35ef04615754b13bd788400_10);
        assert(Py_REFCNT(frame_21dec76ba35ef04615754b13bd788400_10) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_117;
            tmp_tuple_element_117 = mod_consts[345];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_34;
                PyObject *tmp_expression_value_94;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_called_value_35;
                PyObject *tmp_expression_value_95;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_expression_value_96;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_called_value_36;
                PyObject *tmp_expression_value_97;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_expression_value_98;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_117);
                tmp_expression_value_94 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                if (tmp_expression_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_94 == NULL)) {
                            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                        }

                        if (tmp_expression_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 405;
                            type_description_2 = "o";
                            goto tuple_build_exception_91;
                        }
                        Py_INCREF(tmp_expression_value_94);
                    } else {
                        goto tuple_build_exception_91;
                    }
                }

                tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[314]);
                Py_DECREF(tmp_expression_value_94);
                if (tmp_called_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_expression_value_95 == NULL)) {
                    tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                }

                assert(!(tmp_expression_value_95 == NULL));
                tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[22]);
                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);

                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                tmp_expression_value_96 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                if (tmp_expression_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                        if (unlikely(tmp_expression_value_96 == NULL)) {
                            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                        }

                        if (tmp_expression_value_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_34);
                            Py_DECREF(tmp_called_value_35);

                            exception_lineno = 405;
                            type_description_2 = "o";
                            goto tuple_build_exception_91;
                        }
                        Py_INCREF(tmp_expression_value_96);
                    } else {
                        goto tuple_build_exception_91;
                    }
                }

                tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[245]);
                Py_DECREF(tmp_expression_value_96);
                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 405;
                tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_30);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_30);
                if (tmp_args_element_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);

                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_expression_value_97 == NULL)) {
                    tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                }

                assert(!(tmp_expression_value_97 == NULL));
                tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[22]);
                if (tmp_called_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_29);

                    exception_lineno = 406;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                tmp_args_element_value_32 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[312]);

                if (tmp_args_element_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[312]);

                        if (unlikely(tmp_args_element_value_32 == NULL)) {
                            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
                        }

                        if (tmp_args_element_value_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_34);
                            Py_DECREF(tmp_args_element_value_29);
                            Py_DECREF(tmp_called_value_36);

                            exception_lineno = 406;
                            type_description_2 = "o";
                            goto tuple_build_exception_91;
                        }
                        Py_INCREF(tmp_args_element_value_32);
                    } else {
                        goto tuple_build_exception_91;
                    }
                }

                frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 406;
                tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_32);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_32);
                if (tmp_args_element_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_29);

                    exception_lineno = 406;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

                if (unlikely(tmp_expression_value_98 == NULL)) {
                    tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
                }

                assert(!(tmp_expression_value_98 == NULL));
                tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[16]);
                if (tmp_args_element_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_29);
                    Py_DECREF(tmp_args_element_value_31);

                    exception_lineno = 407;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 405;
                {
                    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_31, tmp_args_element_value_33};
                    tmp_tuple_element_117 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
                }

                Py_DECREF(tmp_called_value_34);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_33);
                if (tmp_tuple_element_117 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_91;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_117);
            }
            goto tuple_build_noexception_91;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_91:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_91:;
            tmp_dictset_value = MAKE_LIST_EMPTY(8);
            {
                PyObject *tmp_tuple_element_118;
                PyObject *tmp_tuple_element_119;
                PyObject *tmp_tuple_element_120;
                PyObject *tmp_tuple_element_121;
                PyObject *tmp_tuple_element_122;
                PyObject *tmp_tuple_element_123;
                PyObject *tmp_tuple_element_124;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_118 = mod_consts[346];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_37;
                    PyObject *tmp_expression_value_99;
                    PyObject *tmp_args_element_value_34;
                    PyObject *tmp_args_element_value_35;
                    PyObject *tmp_args_element_value_36;
                    PyObject *tmp_args_element_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_118);
                    tmp_expression_value_99 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_expression_value_99 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_expression_value_99 == NULL)) {
                                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_expression_value_99 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 409;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_expression_value_99);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[314]);
                    Py_DECREF(tmp_expression_value_99);
                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 409;
                        type_description_2 = "o";
                        goto tuple_build_exception_92;
                    }
                    tmp_args_element_value_34 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[21]);

                    if (tmp_args_element_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_34 == NULL)) {
                                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_34 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);

                                exception_lineno = 409;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_args_element_value_34);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    tmp_args_element_value_35 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[271]);

                    if (tmp_args_element_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[271]);

                            if (unlikely(tmp_args_element_value_35 == NULL)) {
                                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[271]);
                            }

                            if (tmp_args_element_value_35 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);
                                Py_DECREF(tmp_args_element_value_34);

                                exception_lineno = 409;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_args_element_value_35);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    tmp_args_element_value_36 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[17]);

                    if (tmp_args_element_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[17]);

                            if (unlikely(tmp_args_element_value_36 == NULL)) {
                                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                            }

                            if (tmp_args_element_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);
                                Py_DECREF(tmp_args_element_value_34);
                                Py_DECREF(tmp_args_element_value_35);

                                exception_lineno = 409;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_args_element_value_36);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    tmp_args_element_value_37 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[21]);

                    if (tmp_args_element_value_37 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_37 == NULL)) {
                                tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_37 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_37);
                                Py_DECREF(tmp_args_element_value_34);
                                Py_DECREF(tmp_args_element_value_35);
                                Py_DECREF(tmp_args_element_value_36);

                                exception_lineno = 409;
                                type_description_2 = "o";
                                goto tuple_build_exception_92;
                            }
                            Py_INCREF(tmp_args_element_value_37);
                        } else {
                            goto tuple_build_exception_92;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 409;
                    {
                        PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
                        tmp_tuple_element_118 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_37, call_args);
                    }

                    Py_DECREF(tmp_called_value_37);
                    Py_DECREF(tmp_args_element_value_34);
                    Py_DECREF(tmp_args_element_value_35);
                    Py_DECREF(tmp_args_element_value_36);
                    Py_DECREF(tmp_args_element_value_37);
                    if (tmp_tuple_element_118 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 409;
                        type_description_2 = "o";
                        goto tuple_build_exception_92;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_118);
                }
                goto tuple_build_noexception_92;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_92:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_92:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_119 = mod_consts[347];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_26;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_119);
                    tmp_called_instance_26 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_26 == NULL)) {
                                tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_26 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 411;
                                type_description_2 = "o";
                                goto tuple_build_exception_93;
                            }
                            Py_INCREF(tmp_called_instance_26);
                        } else {
                            goto tuple_build_exception_93;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 411;
                    tmp_tuple_element_119 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_26);
                    if (tmp_tuple_element_119 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 411;
                        type_description_2 = "o";
                        goto tuple_build_exception_93;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_119);
                }
                goto tuple_build_noexception_93;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_93:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_93:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_120 = mod_consts[327];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_27;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_120);
                    tmp_called_instance_27 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_27 == NULL)) {
                                tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_27 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 413;
                                type_description_2 = "o";
                                goto tuple_build_exception_94;
                            }
                            Py_INCREF(tmp_called_instance_27);
                        } else {
                            goto tuple_build_exception_94;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 413;
                    tmp_tuple_element_120 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_27);
                    if (tmp_tuple_element_120 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "o";
                        goto tuple_build_exception_94;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_120);
                }
                goto tuple_build_noexception_94;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_94:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_94:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_121 = mod_consts[328];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_28;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_121);
                    tmp_called_instance_28 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_28 == NULL)) {
                                tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 415;
                                type_description_2 = "o";
                                goto tuple_build_exception_95;
                            }
                            Py_INCREF(tmp_called_instance_28);
                        } else {
                            goto tuple_build_exception_95;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 415;
                    tmp_tuple_element_121 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_28, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_28);
                    if (tmp_tuple_element_121 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 415;
                        type_description_2 = "o";
                        goto tuple_build_exception_95;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_121);
                }
                goto tuple_build_noexception_95;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_95:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_95:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_122 = mod_consts[348];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_29;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_122);
                    tmp_called_instance_29 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_29 == NULL)) {
                                tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 417;
                                type_description_2 = "o";
                                goto tuple_build_exception_96;
                            }
                            Py_INCREF(tmp_called_instance_29);
                        } else {
                            goto tuple_build_exception_96;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 417;
                    tmp_tuple_element_122 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_29, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_29);
                    if (tmp_tuple_element_122 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 417;
                        type_description_2 = "o";
                        goto tuple_build_exception_96;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_122);
                }
                goto tuple_build_noexception_96;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_96:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_96:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_123 = mod_consts[349];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_30;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_123);
                    tmp_called_instance_30 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_30 == NULL)) {
                                tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 419;
                                type_description_2 = "o";
                                goto tuple_build_exception_97;
                            }
                            Py_INCREF(tmp_called_instance_30);
                        } else {
                            goto tuple_build_exception_97;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 419;
                    tmp_tuple_element_123 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_30);
                    if (tmp_tuple_element_123 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 419;
                        type_description_2 = "o";
                        goto tuple_build_exception_97;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_123);
                }
                goto tuple_build_noexception_97;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_97:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_97:;
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_2);
                tmp_tuple_element_124 = mod_consts[350];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_instance_31;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_124);
                    tmp_called_instance_31 = PyObject_GetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[12]);

                    if (tmp_called_instance_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

                            if (unlikely(tmp_called_instance_31 == NULL)) {
                                tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                            }

                            if (tmp_called_instance_31 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 421;
                                type_description_2 = "o";
                                goto tuple_build_exception_98;
                            }
                            Py_INCREF(tmp_called_instance_31);
                        } else {
                            goto tuple_build_exception_98;
                        }
                    }

                    frame_21dec76ba35ef04615754b13bd788400_10->m_frame.f_lineno = 421;
                    tmp_tuple_element_124 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_31, mod_consts[314]);
                    Py_DECREF(tmp_called_instance_31);
                    if (tmp_tuple_element_124 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 421;
                        type_description_2 = "o";
                        goto tuple_build_exception_98;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_124);
                }
                goto tuple_build_noexception_98;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_98:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_98:;
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_10;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[343], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_21dec76ba35ef04615754b13bd788400_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_21dec76ba35ef04615754b13bd788400_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_21dec76ba35ef04615754b13bd788400_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_21dec76ba35ef04615754b13bd788400_10,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_21dec76ba35ef04615754b13bd788400_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_35;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402, mod_consts[268], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_35;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_275;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_125;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_38 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_125 = mod_consts[344];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_125);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_125 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_125);
            tmp_tuple_element_125 = locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_125);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 402;
            tmp_assign_source_275 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_275 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_275;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_274 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_274);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402);
        locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402);
        locals_pyglet$libs$win32$dinput$$$class__9_IDirectInput8_402 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 402;
        goto try_except_handler_33;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_274);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_called_instance_32;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame.f_lineno = 425;
        tmp_assign_source_276 = CALL_METHOD_WITH_ARGS11(
            tstate,
            tmp_called_instance_32,
            mod_consts[245],
            &PyTuple_GET_ITEM(mod_consts[351], 0)
        );

        if (tmp_assign_source_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_expression_value_100;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_278 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[354]);
        if (tmp_assign_source_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_126;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_expression_value_101 == NULL));
        tmp_tuple_element_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[16]);
        if (tmp_tuple_element_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyTuple_SET_ITEM(tmp_assattr_value_3, 0, tmp_tuple_element_126);
            tmp_tuple_element_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[21]);

            if (unlikely(tmp_tuple_element_126 == NULL)) {
                tmp_tuple_element_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
            }

            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_126);
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_99;
            }
            tmp_tuple_element_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[355]);
            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_3, 2, tmp_tuple_element_126);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            assert(!(tmp_expression_value_103 == NULL));
            tmp_tuple_element_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[16]);
            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_3, 3, tmp_tuple_element_126);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            assert(!(tmp_expression_value_104 == NULL));
            tmp_tuple_element_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[16]);
            if (tmp_tuple_element_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_3, 4, tmp_tuple_element_126);
        }
        goto tuple_build_noexception_99;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_99:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_99:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)mod_consts[354]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[354]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[356], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_10;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef26d62a1516b3f53d6e1dc485262e25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef26d62a1516b3f53d6e1dc485262e25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef26d62a1516b3f53d6e1dc485262e25, exception_lineno);
    }



    assertFrameObject(frame_ef26d62a1516b3f53d6e1dc485262e25);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet$libs$win32$dinput", false);

    Py_INCREF(module_pyglet$libs$win32$dinput);
    return module_pyglet$libs$win32$dinput;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$dinput, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$win32$dinput", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}

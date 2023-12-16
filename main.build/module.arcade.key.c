/* Generated code for Python module 'arcade$key'
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

/* The "module_arcade$key" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$key;
PyDictObject *moduledict_arcade$key;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[394];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[394];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.key"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 394; i++) {
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
void checkModuleConstants_arcade$key(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 394; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ada177845381cf0cff013d870f6f4e00;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[391]); CHECK_OBJECT(module_filename_obj);
    codeobj_ada177845381cf0cff013d870f6f4e00 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[392], mod_consts[392], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_arcade$key[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_arcade$key);

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
        module_arcade$key,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_arcade$key,
        sizeof(function_table_arcade$key) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_arcade$key(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade$key");

    // Store the module for future use.
    module_arcade$key = module;

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
        PRINT_STRING("arcade$key: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade$key: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$key\n");

    moduledict_arcade$key = MODULE_DICT(module_arcade$key);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }




#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$key,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[393]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$key,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$key);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$key);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ada177845381cf0cff013d870f6f4e00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_ada177845381cf0cff013d870f6f4e00 = MAKE_MODULE_FRAME(codeobj_ada177845381cf0cff013d870f6f4e00, module_arcade$key);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ada177845381cf0cff013d870f6f4e00);
    assert(Py_REFCNT(frame_ada177845381cf0cff013d870f6f4e00) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[3]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[3]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[6]);


                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[8]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[9];
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[6]);


                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_ada177845381cf0cff013d870f6f4e00->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_4, mod_consts[10]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[15], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ada177845381cf0cff013d870f6f4e00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ada177845381cf0cff013d870f6f4e00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ada177845381cf0cff013d870f6f4e00, exception_lineno);
    }



    assertFrameObject(frame_ada177845381cf0cff013d870f6f4e00);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[155];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[297];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_arcade$key, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_201);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade$key", false);

    Py_INCREF(module_arcade$key);
    return module_arcade$key;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$key, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$key", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}

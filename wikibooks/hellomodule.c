#include <Python.h>


static PyObject*
say_hello(PyObject* self, PyObject* args)
{
    const char* name;

    if (!PyArg_ParseTuple(args, "s", &name))
        return NULL;

    printf("Hello %s!\n", name);

    Py_RETURN_NONE;
}

static PyMethodDef hello_methods[] =
{
     {"say_hello", say_hello, METH_VARARGS, "Greet somebody."},
     {NULL, NULL, 0, NULL}  /* Sentinel */
};

static struct PyModuleDef hellomodule = {
  PyModuleDef_HEAD_INIT,
  "spam",   /* name of module */
  NULL, /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables.
                see also https://docs.python.org/3/howto/cporting.html */
   hello_methods
};

PyMODINIT_FUNC
PyInit_hello(void)
{
    return PyModule_Create(&hellomodule);
}

#include <Python.h>

void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	PyObject *obj

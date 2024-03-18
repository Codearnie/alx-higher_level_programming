#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info -  function that prints some basic info on Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	int len;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (len = 0; len < Py_SIZE(p); len++)
		printf("Element %d: %s\n", len, Py_TYPE(PyList_GetItem(p, len))->tp_name);
}

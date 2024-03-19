#include <object.h>
#include <listobject.h>
#include <Python.h>

/**
 * print_python_list_info - function that prints basic Python lists info
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	long int len = PyList_Size(p);
	int n;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", len);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (n = 0; n < len; n++)
		printf("Element %i: %s\n", n, Py_TYPE(obj->ob_item[n])->tp_name);
}

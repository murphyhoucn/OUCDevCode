#define Py_LIMITED_API
#include <stdio.h>
#include <Windows.h>
#include "python.h"

int py_init(void)
{
	Py_SetPythonHome(L"D:\Python\Python3.8.6");
	return 0;
}

int py_exec(wchar_t *script)
{
	wchar_t *argv[2];
	argv[0] = L"python";
	argv[1] = script;
	return Py_Main(2, argv);
}

int main(void)
{
	int ret;
	wchar_t *script = L"D:\Pycharm\Python projects\Python_Program_Design\hello_world.py";
	ret = py_init();
	ret = py_exec(script);
	return ret;
}
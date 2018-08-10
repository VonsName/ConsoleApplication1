// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char name[] = "appale";
	cout << name<<endl;
	char *sex = "nana";
	cout << sex<<endl;
	char *ps = sex;
	cout << ps<<endl;
	int a = 10;
	int* pa = &a;
	cout << pa;
    return 0;
}


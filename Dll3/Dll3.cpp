﻿// Dll3.cpp: определяет экспортированные функции для приложения DLL.
//
#include "stdafx.h"
# include <iostream>
#include "f.h"

bool v_year(int g) {
	if (g % 100 == 0)
		if (g % 400 == 0)
			return 1;
		else
			return 0;
	if (g % 4 == 0)
		return 1;
	else
		return 0;
	return 0;
}







#include <stdio.h>

#include "module.h"

static void foo_a()
{
	printf("%s\n",__FUNCTION__);
}

static void bar_a()
{
	printf("%s\n",__FUNCTION__);
}

DECLARE_MODULE(module_a, foo_a, bar_a)

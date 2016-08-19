#include <stdio.h>

#include "module.h"

static void foo_b()
{
	printf("%s\n",__FUNCTION__);
}

static void bar_b()
{
	printf("%s\n",__FUNCTION__);
}

DECLARE_MODULE(module_b, foo_b, bar_b)

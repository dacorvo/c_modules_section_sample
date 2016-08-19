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

struct module __attribute__ ((section (".modules"))) module_b = {
	.foo = foo_b,
	.bar = bar_b
};

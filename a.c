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

struct module __attribute__ ((section (".modules"))) module_a = {
	.foo = foo_a,
	.bar = bar_a
};

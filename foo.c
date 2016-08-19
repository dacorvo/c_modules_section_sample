#include "module.h"

void foo()
{
	const struct module *m = modules_start;
	while (m < modules_end) {
		m->foo();
		m++;
	}
}

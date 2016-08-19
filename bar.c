#include "module.h"

void bar()
{
	const struct module *m = modules_start;
	while (m < modules_end) {
		m->bar();
		m++;
	}
}

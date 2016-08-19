#include "module.h"

void bar()
{
	int i;
	for (i = 0; i < modules_size; i++) {
		modules[i]->bar();
	}
}

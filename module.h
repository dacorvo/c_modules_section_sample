struct module {
	void (*foo)();
	void (*bar)();
};

extern const struct module modules_start[];
extern const struct module modules_end[];

#define DECLARE_MODULE(name, ...) \
	struct module __attribute__ ((section (".modules"))) name = { __VA_ARGS__ };

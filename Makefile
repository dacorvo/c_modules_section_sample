OBJS := main.o a.o b.o foo.o bar.o

modules: $(OBJS)
	gcc -o $@ -T module.lds $(OBJS:*.c=*.o)

clean:
	rm modules *.o

OBJS := main.o a.o b.o foo.o bar.o module.o

modules: $(OBJS)
	gcc -o $@ $(OBJS:*.c=*.o)

clean:
	rm modules *.o

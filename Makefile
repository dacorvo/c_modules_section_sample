OBJS := main.o a.o b.o foo.o bar.o

modules: $(OBJS)
	gcc -o $@ $(OBJS:*.c=*.o)

clean:
	rm modules *.o

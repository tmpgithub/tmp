CC=gcc
CFLAGS=-I.
DEPS = tmpsample.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tmpsample: tmpsample.o hellofunc.o datetime.o
	gcc -o tmpsample tmpsample.o hellofunc.o datetime.o -I.

.PHONY: clean

clean:
	rm -f *.o *~ core tmpsample

CC = clang++
CFLAGS = -I .
DEPS = header.h
OBJS = main.o header.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o main
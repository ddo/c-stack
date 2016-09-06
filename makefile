array: example.c stack_array.c
	gcc -o example example.c stack_array.c

clean:
	rm example
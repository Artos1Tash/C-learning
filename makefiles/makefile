# CFLAGS uses any gcc compiler flags
CFLAGS = -Wno-implicit-function-declaration

# All takes the final as a required argument. 
# Then it goes to final. Final takes files main.o and hello.o as an argument
# Clean just clears everything

all: final

final: main.o hello.o
	echo "Proccessing final"
	gcc $(CFLAGS) hello.o main.o -o final

hello.o: hello.c
	echo "Making hello.o"
	gcc $(CFLAGS) -c hello.c 

main.o: main.c
	echo "Making main.o"
	gcc $(CFLAGS) -c main.c 

clean:
	echo "Removing everything except source files"
	rm final hello.o main.o

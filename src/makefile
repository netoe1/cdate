clocktimelib = clocktime
mainfile = main
flags = -Wall
clocktime.o: ${clocktimelib}.h ${clocktimelib}.c
	gcc -c ${clocktimelib}.c -o ${clocktimelib}.o ${flags}
main.o:
	gcc -o ${main}.o ${main}.c ${clocktimelib}.o ${flags}
clean:
	rm -rf *.o
all:
	make clocktime.o main.o
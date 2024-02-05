CLOCKTIME_H 	= 		./include/clocktime.h
CLOCKTIME_C 	= 		./src/clocktime.c
CLOCKTIME_O 	=  		./bin/clocktime.o

MAIN_H			=		./include/clocktime.h
MAIN_C			=		./src/main.c
MAIN_O 			=		./bin/main.o

CCFLAGS = -Wall
clocktime.o: ${CLOCKTIME_H} ${CLOCKTIME_C}
	gcc -c ${CLOCKTIME_C} -o ${CLOCKTIME_O} ${CCFLAGS}
main.o: 
	gcc -o ${MAIN_O} ${MAIN_C} ${CCFLAGS} ${CLOCKTIME_O} 
clean:
	rm -rf ./bin/*.o
all:
	make clocktime.o main.o
run_main:
	./bin/main.o
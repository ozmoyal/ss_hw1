CC = gcc
AR = ar -rcs
OBJECTS_MAIN = main.o
OBJECTS_LIB = power.o basicMath.o
FLAGS = -Wall

all: mymaths mymathd mains maind
mains: $(OBJECTS_MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) mymathd
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymaths: $(OBJECTS_LIB) myMath.h
	$(AR) libmyMath.a $(OBJECTS_LIB)
mymathd: $(OBJECTS_LIB) myMath.h
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
main.o: main.c
	$(CC) $(FLAGS) -c main.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mymaths mymathd mains maind
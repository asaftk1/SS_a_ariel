CC =gcc
AR =ar
OBJECTS_MAIN= main.o
OBJECTS_loops= advancedClassificationLoop.o
OBJECTS_rec= advancedClassificationRecursion.o
OBJECTS_basic= basicClassification.o
FLAGS= -Wall -g 
all : loops recursived recursives loopd mains maindloop maindrec

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS)  -o mains $(OBJECTS_MAIN) libclassrec.a -lm
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS)  -o maindloop $(OBJECTS_MAIN) ./libclassloops.so -lm
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS)  -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm
loops: libclassloops.a
libclassloops.a: $(OBJECTS_loops) $(OBJECTS_basic)
	$(AR) -rcs libclassloops.a $(OBJECTS_loops) $(OBJECTS_basic) 
recursives:	libclassrec.a
libclassrec.a: $(OBJECTS_rec) $(OBJECTS_basic)
	$(AR) -rcs libclassrec.a $(OBJECTS_rec) $(OBJECTS_basic) 
recursived: libclassrec.so
libclassrec.so: $(OBJECTS_rec) $(OBJECTS_basic)
	$(CC) -shared -o libclassrec.so $(OBJECTS_rec) $(OBJECTS_basic) 
loopd: libclassloops.so
libclassloops.so: $(OBJECTS_loops) $(OBJECTS_basic)
	$(CC) -shared -o libclassloops.so $(OBJECTS_loops) $(OBJECTS_basic) 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS)  -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS)  -c advancedClassificationRecursion.c -lm

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS)  -c basicClassification.c -lm

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec


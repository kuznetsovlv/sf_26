#Makefile
# gcc 11.2.0
standard = c++20
objects = main.o createRandomArray.o getSum.o processors.o resultBuilder.o

.PHONY: all
all: sf_26

sf_26: ${objects}
	gcc -o sf_26 ${objects} -lstdc++

main.o: createRandomArray.h
createRandomArray.o: createRandomArray.h randomize.h randomize.cpp
getSum.o: getSum.h
processors.o: processors.h getSum.h resultBuilder.h
resultBuilder.o: resultBuilder.h resultBuilder.cpp
	gcc -o resultBuilder.o resultBuilder.cpp -c -std=${standard}

.PHONY: clean
clean:
	-rm -f sf_26 *.o 2>/dev/null

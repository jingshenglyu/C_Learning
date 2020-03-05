obj = main.o Point.o

point: $(obj)
	g++ $(obj) -o point

main.o: main.cpp point.h
	g++ -c main.cpp

Point.o: Point.cpp point.h
	g++ -c Point.cpp

clean:
	rm -f main.o Point.o

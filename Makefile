

all:
	g++ -o loader main.cpp -ldl
	g++ -shared -fPIC -o object.so object.cpp

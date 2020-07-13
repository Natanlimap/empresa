
all:
	g++ -std=c++11 ./src/main.cpp ./src/funcionario.cpp ./src/empresa.cpp ./src/datetime.cpp -I include -o empresa
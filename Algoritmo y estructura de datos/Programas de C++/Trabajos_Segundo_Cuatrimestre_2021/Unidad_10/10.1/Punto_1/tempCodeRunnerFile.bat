 para el binario y las bibliotecas
MD .\build

:: Compilo el Binario
g++ -Wall -std=c++11 -c Main.cpp 
g++ -Wall -std=c++11 -c Class_Item.cpp 

g++ Main.cpp Class_Item.cpp  -o  Main.exe

::g++ extras.o menus.o registro.o lista.o libro.o main.o  -o .\build\main.exe

:: Limpio los códigos objeto
DEL .\*.o
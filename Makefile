# Compilador y banderas
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -Isrc

# Nombre del ejecutable final y rutas
TARGET = bin/programa
OBJS = bin/main.o bin/BrazoRobot.o

# Regla all: compila el programa principal
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# Reglas de compilación para los archivos objeto en la carpeta bin/
bin/main.o: src/main.cpp src/BrazoRobot.h
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o $@

bin/BrazoRobot.o: src/BrazoRobot.cpp src/BrazoRobot.h
	$(CXX) $(CXXFLAGS) -c src/BrazoRobot.cpp -o $@

# Regla test: ejecuta las pruebas del proyecto
test: all
	@echo "Ejecutando pruebas..."
	# Añade aquí el comando o script para ejecutar tus pruebas de la carpeta test/
	@echo "¡Pruebas finalizadas!"

# Regla clean: limpia los archivos binarios y objetos generados
clean:
	@echo "Limpiando archivos compilados..."
	@rm -f bin/*.o $(TARGET)

# Evitar conflictos con nombres de archivos
.PHONY: all test clean

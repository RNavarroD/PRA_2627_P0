#include <iostream>
#include "BrazoRobot.h"

int main(){
	//Creacion
	RoboticArm r1(10,20,10,false);
	std::cout<< "Robot creado\n"
		 << "Coordenadas: ( " << r1.getCoorX() << " , " << r1.getCoorY() << " , " << r1.getCoorZ() << " )\n";
	//mover
	r1.move(20,10,20);
	std::cout<< "Robot movido\n"
		 << "Coordenadas: ( " << r1.getCoorX() << " , " << r1.getCoorY() << " , " << r1.getCoorZ() << " )\n";
	
	//Cogerpieza
	r1.grab();
	std::cout << "Pieza agarrada.\n";
	r1.release();
	std::cout << "Pieza soltada\n";

	return 0;

}

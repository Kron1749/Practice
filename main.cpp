#include <stdio.h>
#include <iostream>
#include <server.h>

void main() {
	Robot Valle = new Robot();
	Server computer = new Server();
	
	int counter = 1;
	int number;
	int type;

	while(Valle.on()) {
		//сюда пишем команды, аля 
		if(Valle.findPivo(Valle.takeSnap())) {
			type = Valle.stoEtoZaPivo();
			if(type = 2) {
				computer.coord();
			}
		} else {
			computer.moveR(33);
			computer.moveF(5);
		}
		if(counter == 15) {
			Valle.off();
		}
		counter ++;
	} // тут приведен отрезок кода, который в теории заставялет робота фоткать комнату 
	 // в случае, если на фотке робот найдет пиво, сервер передает роботу команду передать координаты пива
	// если же робот не находит пиво, то пока он не выключен, он компьютер будет передавать ему сигналы поворачивать на 33 градуса, двигаться вперед на 5, а затем повторять предыдущий шаг заново
	// данная процедура повторяется 14 раз
}
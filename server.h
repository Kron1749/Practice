#include <stdio.h>
#include <robot.h>

class Server() {
	private:
		bool start(Robot robot) {
			return robot.on();
		} // передает команду on(); роботу
		bool stop(Robot robot) {
			return robot.off();
		} // передает команду off(); роботу

		void moveR(int degree, Robot robot) {
			robot.moveRight(degree);
		} // передает роботу команду повернуть направо на заданные градусы
		void moveL(int degree, Robot robot) {
			robot.moveLeft(degree);
		} // передает роботу команду повернуть налево на заданные градусы
		void moveF(int dist, Robot robot) {
			robot.moveForward(dist);
		} // передает роботу команду ехать прямо на заданное расстояние
		void moveB(int dist, Robot robot) {
			robot.moveBackward(dist);
		} // передает роботу команду ехать назад на заданное расстояние

		int* coord(Robot robot) {
			robot.where();
		} //возвращает координаты бутылки

		int* whereIs(Robot robot) {
			int coordinates[2];
			coordinates[0] = robot.getX();
			coordinates[1] = robot.getY();

			return coordinates;
		}

		// bool grabBottle(); // передает команду grab(); роботу и возвращает true в случае успеха
		// bool giveBottle(); // передеает команду give(); роботу и возвращает true в случае успеха
}
#include <stdio.h>

using namespace std;

class Snap() { //позже сделать класс картинки
	private:
	public:
}

class Robot {
	private: 
		Snap takeSnap(); // возвращает картинку
		bool findPivo(); // возвращает true в случае наличия объекта ПЫВО в кадре
		int roomReview(); // функция возвращающая массив из Snap делая обороты каждые 90 градусов
		double dist(); // возвращает расстояние до любимого прохладительного напитка
		int stoEtoZaPivo(); //определяет тип бутылки пива
	public: 
		int where(); // возвращает координаты бутылки в комнате
		void grab(); // хватает любимый прохладительный напиток
		void bring(); // приносит любимый прохладительный напиток своему хозяину 
		void give(); //отдает любимый прохладительный напиток своему хозяину.
		void moveRight(int degree); // поворачивает направо на заданные граудсы
		void moveLeft(int degree); // поворачивает налево на заданные градусы
		void moveForward(int dist); // едет вперед на заданное расстояние
		void moveBackward(int dist); // едет назад на заданное расстояние
		bool on(); // включает робота
		bool off(); // выключает робота 
}

class Server() {
	private:
		bool start(); // передает команду on(); роботу
		bool stop(); // передает команду off(); роботу
		void moveRight(int degree); // передает роботу команду повернуть направо на заданные градусы
		void moveLeft(int degree); // передает роботу команду повернуть налево на заданные градусы
		void moveForward(int dist); // передает роботу команду ехать прямо на заданное расстояние
		void moveBackward(int dist); // передает роботу команду ехать назад на заданное расстояние
		bool grabBottle(); // передает команду grab(); роботу и возвращает true в случае успеха
		bool giveBottle(); // передеает команду give(); роботу и возвращает true в случае успеха
}


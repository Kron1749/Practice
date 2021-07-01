#include <stdio.h>
#include <cmath.h>
#include <snap.h>
using namespace std;

class Robot {
	private: 
		int x; // координата робота в комнате по x 
		int y; // координата робота в комнате по y
		int azimuth;

		Snap takeSnap() { // возвращает картинку
			return snap;	
		}
		
		bool findPivo(Snap snap) { // возвращает true в случае наличия объекта ПЫВО в кадре
			Snap pivo = new Snap("pivo.bmp");
			return snap.equals(pivo);
		} 

		Snap* roomReview() { // функция возвращающая массив из Snap делая обороты каждые 90 градусов
			Snap snaps[4];
			for(int i = 0; i < 4; i++) {
				snaps[i] = takeSnap();
				moveRight(90);
			}
			return snaps;
		} 

		double dist() { // возвращает расстояние до любимого прохладительного напитка
			return ; // берем данные из дальномера
		} 

		int stoEtoZaPivo(Snap snap) { //определяет тип бутылки пива;
			String path = "pivo0.bmp";
			for(int i = 0; i < 4; i++) {
				path[4] = String(i);
				Snap pivo = new Snap(path);
				if (snap.equals(pivo)) {
					return i;
				}
			}	
		};

	public: 
		Robot() {
			this.x = 0;
			this.y = 0;
			this.azimuth = 0;
		}

		int getX() {
			return this.x;
		}

		int getY() {
			return this.y;
		}
		
		int* where(){// возвращает координаты бутылки в комнате
			int coordinates[2];
			
			if(dist() < 2) {
				coordinates[0] = getX();
				coordinates[1] = getY();
			} else {
				double a;
				double b;
				a = dist()*sin(this.azimuth*3.14/180);
				b = dist()*cos(this.azimuth*3.14/180);  
				coordinates[0] = getX() + a;
				coordinates[1] = getY() + b;
			}
				return coordinates;
		} 

		// void grab(); // хватает любимый прохладительный напиток
		// void bring(); // приносит любимый прохладительный напиток своему хозяину 
		// void give(); //отдает любимый прохладительный напиток своему хозяину.

		void moveRight(int degree) { // поворачивает направо на заданные граудсы
			this.azimuth -= degree;
		} 

		void moveLeft(int degree) { // поворачивает налево на заданные градусы
			this.azimuth += degree;
		} 

		void moveForward(int dist) {
			double a;
			double b;
			a = dist()*sin(this.azimuth*3.14/180);
			b = dist()*cos(this.azimuth*3.14/180);
			this.x += a;
			this.y += b;
		} // едет вперед на заданное расстояние
		
		void moveBackward(int dist) {
			dist *= -1;
			double a;
			double b;
			a = dist()*sin(this.azimuth*3.14/180);
			b = dist()*cos(this.azimuth*3.14/180);
			this.x += a;
			this.y += b;
		} // едет назад на заданное расстояние

		bool on() { // включает робота
		} 
		bool off() { // выключает робота 	
		} ;
}




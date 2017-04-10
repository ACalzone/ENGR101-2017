#include <stdio.h>
#include <time.h>
#include "E101.h"

int sensor_reading() {
		int total = 0;
		int reading;
		int mean;
		for (int i = 0; i <5; i=i+1) {
			reading = read_analog(0);
			total = total + reading
		}
		mean = total/5;
		return mean;
}

int forward(int speed) {
		set_motor(1, speed);
		sleep1(0, 50000);
		set_motor(2, speed);
		sleep1(0, 50000);
		return 0;
}

int turn_right(int speed, int duration) {
		set_motor(1, 0);
		sleep1(0, 50000);
		set_motor(2, speed);
		sleep(0, duration);
		set_motor(2, 0);
		sleep1(0, duration);
		return 0;
}

int turn_left(int speed, int duration) {
		set_motor(2, 0);
		sleep1(0, 50000);
		set_motor(1, speed);
		sleep(0, duration);
		set_motor(1, 0);
		sleep1(0, duration);
		return 0;
}

int reverse() {
		set_motor(1, -51);
		sleep1(0, 50000);
		set_motor(2, -51);
		sleep1(0, duration);
		return 0;
}

int main(){
		init();	
		int reading;
		reading = read_analog(0);
		if(reading < 10) {
			reverse();
		}	
		return 0;
}

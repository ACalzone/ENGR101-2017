#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
		init();
		int total = 0;
		int reading;
		int mean;
		for (int i = 0; i <5; i=i+1) {
			reading = read_analog(0);
			total = total + reading
		}
		mean = total/5;
		printf("Mean: %d\n", mean);
		return 0;
}

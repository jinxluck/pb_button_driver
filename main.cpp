/*
 * main.cpp
 *
 *  Created on: 30 Dec 2019
 *      Author: jinxluck
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"button_driver.h"

struct buttons
{
	char bin1[5];
	char bin2[5];
	char next[5];
	char done[5];
}values;

int main(void)
{
	init_buttons();

	char done[5];
	done[0] = '\0';

	while(done[0] != '1')
	{
		values=read_buttons();
		strcpy(done,values.done);
		printf("bin1= %s \n",values.bin1);
		printf("bin2= %s \n",values.bin2);
		printf("next= %s \n",values.next);
		printf("done= %s \n",values.done);
	}

	return 0;
}

/*
 * button_driver.h
 *
 *  Created on: 30 Dec 2019
 *      Author: jinxluck
 */

/*
 struct to insert into main:
 struct buttons
{
	char bin1[5];
	char bin2[5];
	char next[5];
	char done[5];
}vals;
 */


#ifndef BUTTON_DRIVER_H_
#define BUTTON_DRIVER_H_

//initialisation of the buttons
void init_buttons(void);

//reading of the button values
struct buttons read_buttons(void);

#endif /* BUTTON_DRIVER_H_ */

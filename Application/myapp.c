#include "main.h"
#include "myapp.h"
#include <stdio.h>
#include <string.h>
#include "sens_detect.h"
#include "light_sens.h"
#include "accelerometer_sens.h"
#include "temp_sens.h"
#include "display_driver.h"
#include "spi.h"
#include "display_driver.h"



void myapp(){
	HAL_GPIO_WritePin(GPIOled_GPIO_Port,GPIOled_Pin,1);
    detect_INIT();
    display_INIT();
    light_sens_INIT();
    accelerometer_INIT();
    temp_sens_INIT();
}



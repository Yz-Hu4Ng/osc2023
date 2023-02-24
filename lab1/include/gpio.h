#ifndef __GPIO_H__
#define __GPIO_H__

#include "mmio.h"

#define GPIO_BASE   ((volatile unsigned int*)(MMIO_BASE + 0x2000000))
#define GPFSEL1     ((volatile unsigned int*)(GPIO_BASE + 0x04))
#define GPPUD       ((volatile unsigned int*)(GPIO_BASE + 0x94))
#define GPPUDCLK0   ((volatile unsigned int*)(GPIO_BASE + 0x98))

#endif

#ifndef SENSOR_TI_HDC1000_H__
#define SENSOR_TI_HDC1000_H__

#include <rtthread.h>
#if defined(RTTHREAD_VERSION) && (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 0))
#include "drivers/sensor.h"
#else
#include "sensor.h"
#endif

#include "hdc1000_reg.h"

#define HDC1000_SLAVE_ADDR_DEFAULT       ( HDC1000_DEVICE_IIC_BUS_ADDRESS )


int rt_hw_hdc1000_init(const char *name, struct rt_sensor_config *cfg);

#endif

/* 
 * Copyright (C) 2024 Kevin Kleiman - All Rights Reserved
 * You may use, distribute and modify this code under the
 * for any purpose
 *
 * You should have received a copy of the MIT license with
 * this file. If not, please write to: , or visit :
 */

#pragma once

#include <stdint.h>


/* Define bus read/write functions for mappings */
uint8_t* bus_read(uint8_t* addr);
void bus_write(uint8_t* addr);

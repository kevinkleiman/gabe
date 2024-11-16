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
#include "types.h"

#define CART_MEM_OFFSET 0x8000

/* Define bus read/write functions for mappings */
uint8_t bus_read(context_t* ctx, uint16_t addr);
void bus_write(context_t* ctx, uint16_t addr, uint8_t byte);

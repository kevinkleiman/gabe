#include "stack.h"
#include "cpu.h"

/*
 * @brief Push a byte onto the stack
 *
 * @param ctx Emulator context
 */
void pushb(context_t* ctx, uint8_t byte)
{
    /* Set current stack pointer to byte and decrement */
    ctx->cpu.stack[REG(sp)--] = byte;
}

/*
 * @brief Push a word on to the stack
 *
 * @param ctx Emulator context
 */
void pushw(context_t* ctx, uint16_t word)
{
    /* Set LSB to current stack pointer and decrement */
    ctx->cpu.stack[REG(sp)--] = (word & 0xF0);

    /* Set MSB to current stack pointer and decrement */
    ctx->cpu.stack[REG(sp)--] = (word & 0x0F);
}

/*
 * @brief Pop a byte from the top of the stack
 *
 * @param ctx Emulator context
 */
void popb(context_t* ctx, uint8_t byte)
{

}

/*
 * @brief Pop a word from the top of the stack
 *
 * @param ctx Emulator context
 */
void popw(context_t* ctx, uint16_t word)
{

}

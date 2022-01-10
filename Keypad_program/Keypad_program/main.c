/*
 * Keypad_program.c
 *
 * Created: 05/12/2021 17:34:58
 * Author : Pamela Chemutai
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
    }
}
/* Keypad array holding the keys in a grid arrangement*/ unsigned char keypad[4][4] = { {'7','8','9','/'}, {'4','5','6','*'}, {'1','2','3','-'}, {' ','0','=','+'}};
/* Function that checks the key that has been pressed on the keypad

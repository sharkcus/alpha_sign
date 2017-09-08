/**************************************************

hello_world.c

Sends "hello world" message to alpha sign.

**************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "RS-232/rs232.h"
#include "alpha.h"

int main()
{
  send_alpha_command("E$", ""); // clearn memory
  send_alpha_command("E$", "AAU0100FF00"); // set memory for text file A: 256 bytes
  send_alpha_command("AA", "Hello world!"); // write to text file A
  return 0;
}




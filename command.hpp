#ifndef COMMAND_HPP
#define COMMAND_HPP

int sc_commandDecode (int *command, int *operand, int value);
int sc_commandEncode (int command, int operand, int *value);

#endif

#ifndef SERIAL_H_
#define SERIAL_H_

int serial_init(int index);
int serial_is_send_enable(int index);
int serial_send_byte(int index, unsigned char b);

#endif // SERIAL_H_

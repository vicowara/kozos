PREFIX = /usr
ARCH = h8300-elf
BINDIR = $(PREFIX)/bin
ADDNAME = $(ARCH)-

AR = $(BINDIR)/$(ADDNAME)ar
AS = $(BINDIR)/$(ADDNAME)as
CC = $(BINDIR)/$(ADDNAME)gcc
LD = $(BINDIR)/$(ADDNAME)ld
NM = $(BINDIR)/$(ADDNAME)nm
OBJCOPY = $(BINDIR)/$(ADDNAME)objcopy
OBJDUMP = $(BINDIR)/$(ADDNAME)objdump
RANLIB = $(BINDIR)/$(ADDNAME)ranlib
STRIP = $(BINDIR)/$(ADDNAME)strip

OBJS = startup.o main.o interrupt.o
OBJS += lib.o serial.o
OBJS += kozos.o syscall.o memory.o test10_1.o

TARGET = kozos

CFLAGS = -Wall -Wextra -Wno-pointer-sign -mh -nostdinc -nostdlib -fno-builtin
CFLAGS += -I.
CFLAGS += -Os
CFLAGS += -DKOZOS

LDFLAGS = -static -T ld.scr -L.

.SUFFIXES: .c.o
.SUFFIXES: .s.o
.SUFFIXES: .S.o

all: $(TARGET)

$(TARGET):	$(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS) $(LDFLAGS)
	cp $(TARGET) $(TARGET).elf
	$(STRIP) $(TARGET)

.c.o:	$<
	$(CC) -c $(CFLAGS) $<

.s.o:	$<
	$(CC) -c $(CFLAGS) $<

.S.o:	$<
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).elf $(TARGET).mot

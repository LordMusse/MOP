#Binary's name
BINARY = bin.elf

#Compiler and tools
CC=arm-linux-gnueabihf-gcc
LINKER=arm-linux-gnueabihf-ld
DUMPER=arm-linux-gnueabihf-objdump

#device info
MACH=cortex-m4
MCU=STM32F407
DEVICE= /dev/ttySTM32
FPU= fpv4-sp-d16

#FLAGS
INCLUDE = -Iinc
OPTIMIZATION = -O0
GDBSYMBOLS = -ggdb
INSTRUCTIONSET = -mthumb
FLOAT_TYPE = hard
LANGUAGESTANDARD = c99
#https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html#Overall-Options
STOPFLAG = -c
#Dependency flags, MD creates ".d" text files in the ".obj" directory, these are simply about dependencies
DEPFLAGS = -MD -MP

#FILES

LINKERSCRIPT = ld/linkerscript.ld

BINARY_DIR = bin/
OBJECT_DIR = obj/
SOURCE_DIR = src/
LIBRARY_DIR = libs/
LOG_DIR = logs/

BINARIES =	$(BINARY_DIR)$(BINARY)
SOURCES =	$(wildcard src/*.c)
LIB_SOURCES =	$(wildcard libs/*.c)
OBJECTS =	$(addprefix $(OBJECT_DIR), $(notdir $(SOURCES:.c=.o))) $(addprefix $(OBJECT_DIR), $(notdir $(LIB_SOURCES:.c=.o)))

ASM_LOGS =	$(LOG_DIR)$(BINARY).asm.log

SECT_LOGS =	$(LOG_DIR)$(BINARY).sect.log

LOGS =		$(ASM_LOGS) $(SECT_LOGS)

#combining flags
CFLAGS = $(GDBSYMBOLS) $(INSTRUCTIONSET) -mcpu=$(MACH) -mfpu=$(FPU) -mfloat-abi=$(FLOAT_TYPE) $(OPTIMIZATION) $(DEPFLAGS) -std=$(LANGUAGESTANDARD) $(STOPFLAG)

#Bash-commands

MKDIR	= @mkdir -p $(@D)

#Build Rules
all: $(BINARIES) Makefile 

$(BINARIES): $(OBJECTS)
	$(MKDIR)
	$(LINKER) -T $(LINKERSCRIPT) $(OBJECTS) -o $(BINARIES)

$(OBJECT_DIR)%.o: $(SOURCE_DIR)%.c
	$(MKDIR)              
	$(CC) $(CFLAGS) $< -o $@ $(INCLUDE) 

$(OBJECT_DIR)%.o: $(LIBRARY_DIR)%.c
	$(MKDIR)              
	$(CC) $(CFLAGS) $< -o $@ $(INCLUDE)

dump: $(LOGS)
	
$(LOGS): 
	mkdir -p $(LOG_DIR)
#	$(DUMPER) -d $(OBJECTS) > $(ASM_LOGS)
#	$(DUMPER) -h $(OBJECTS) > $(SECT_LOGS)
	$(DUMPER) -d $(BINARIES) > $(ASM_LOGS)
	$(DUMPER) -h $(BINARIES) > $(SECT_LOGS)
clean:
	rm -rf $(OBJECT_DIR) $(BINARY_DIR) $(LOG_DIR)

.PHONY: all clean dump

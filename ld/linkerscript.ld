ENTRY(Reset_Handler)

MEMORY
{
    RAM (xrw) :
    ORIGIN = 0x20000000,LENGTH =108K
}

SECTIONS
{
    .text :
    {
        _stext = .;
        *(.isr_vector)
        . = ALIGN(4);
        *(.start_section)
        *(.text*)
        *(.data*)
        *(.rodata*)
        . = ALIGN(4);
        _etext = .;
        _sbss = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
        . = ALIGN(4096);
        stack_top = .;
    }> RAM
}

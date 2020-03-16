#include "boards.h"
#include "nrf_sdm.h"

#define UF2_NUM_BLOCKS     8000   // at least 4,1 MB for FAT16

#ifndef UF2_VOLUME_LABEL
#define UF2_VOLUME_LABEL   "CM-300 BOOT"
#endif

#define FLASH_SIZE         (USER_FLASH_END-USER_FLASH_START) // Max flash size

// Only allow to write application TODO dynamic depending on SD size
#if SD_VERSION >= 7000000 && SD_VERSION < 8000000
#define USER_FLASH_START   0x27000
#elif SD_VERSION >= 6000000 && SD_VERSION < 7000000
#define USER_FLASH_START   0x26000
#else
#error "Unsupported version of SoftDevice!"
#endif
#define USER_FLASH_END     BOOTLOADER_REGION_START //0xAD000 // Fat Fs start here

#define FLASH_PAGE_SIZE    4096

#define UF2_FAMILY_ID      0xADA52840

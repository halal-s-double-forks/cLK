#ifndef __BOOTREASON_H__
#define __BOOTREASON_H__

enum boot_reason {
	BOOT_UNKNOWN,
	BOOT_WARM,
	BOOT_COLD,
	BOOT_CHARGING,
	BOOT_BATTERY,
	BOOT_UNEXPECTED,
	BOOT_RECOVERY,
	BOOT_FASTBOOT,
};

#endif
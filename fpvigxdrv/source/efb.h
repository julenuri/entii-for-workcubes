#pragma once

enum {
	EFB_PHYS_ADDR = 0x08000000,
	EFB_VIRT_ADDR = 0x88000000,
	EFB_LENGTH = 0x400000, // 4MB RGBA space
	EFB_STRIDE = 1024 * 4, // 1024 RGBA pixels
};
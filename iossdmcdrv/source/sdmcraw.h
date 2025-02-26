#pragma once

typedef struct _SDMC_SECTOR_TRANSFER {
	ULONG SectorStart;
	ULONG SectorCount;
} SDMC_SECTOR_TRANSFER, *PSDMC_SECTOR_TRANSFER;

#define FILE_DEVICE_SDMCRAW (0x5D10 | 0x8000)
#define IOCTL_SDMC_SECTOR_READ CTL_CODE(FILE_DEVICE_SDMCRAW, 0x800, METHOD_BUFFERED, FILE_READ_DATA)
#define IOCTL_SDMC_SECTOR_WRITE CTL_CODE(FILE_DEVICE_SDMCRAW, 0x801, METHOD_BUFFERED, FILE_WRITE_DATA)

NTSTATUS SdmcRawDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp);


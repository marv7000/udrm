#pragma once

#include <udrm/common.h>

UDRM_HEADER_START

void udrm_pci_write8(void* device, uint16_t offset, uint8_t value);
void udrm_pci_write16(void* device, uint16_t offset, uint16_t value);
void udrm_pci_write32(void* device, uint16_t offset, uint32_t value);

uint8_t udrm_pci_read8(void* device, uint16_t offset);
uint16_t udrm_pci_read16(void* device, uint16_t offset);
uint32_t udrm_pci_read32(void* device, uint16_t offset);

UDRM_HEADER_END

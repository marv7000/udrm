#pragma once

#include <udrm/common.h>

UDRM_HEADER_START

void* udrm_malloc(size_t size);
void udrm_free(void* ptr);
ATTR(format(printf, 1, 2)) int udrm_printf(const char* format, ...);

UDRM_HEADER_END

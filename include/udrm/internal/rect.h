#ifndef UDRM_RECT_H
#define UDRM_RECT_H

#include <udrm/uapi/platform/types.h>

typedef struct drm_rect
{
	uapi_u32 x0, x1, y0, y1;
} drm_rect;

#endif

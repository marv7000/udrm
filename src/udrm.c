#include <udrm/kernel_api.h>
#include <udrm/udrm.h>

#include "core/device.c"
#include "core/main.c"
#include "core/plane.c"

uapi_status udrm_initialize()
{
	uapi_kernel_log(UAPI_LOG_INFO, "Initialized uDRM.\n");
	return UAPI_STATUS_OK;
}

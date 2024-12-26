#include <udrm/bochs.h>

uapi_status udrm_bochs_probe(uapi_handle device)
{
	uapi_kernel_log(UAPI_LOG_INFO, "Successfully probed Bochs GPU!\n");
	return UAPI_STATUS_OK;
}

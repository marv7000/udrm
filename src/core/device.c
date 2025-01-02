#include <udrm/core/device.h>
#include <udrm/kernel_api.h>
#include <udrm/udrm.h>

uapi_status udrm_dev_register(uapi_handle dev)
{
	struct udrm_device* const device = dev;

	if (device == NULL)
		return UAPI_STATUS_INVALID_ARGUMENT;

	if (device->ref_count != 0)
	{
		uapi_kernel_log(UAPI_LOG_ERROR, "Device was already registered!\n");
		return UAPI_STATUS_ALREADY_EXISTS;
	}

	device->ref_count = 1;

	return UAPI_STATUS_OK;
}

uapi_status udrm_dev_unregister(uapi_handle dev)
{
	return UAPI_STATUS_UNIMPLEMENTED;
}

uapi_status udrm_dev_unref(uapi_handle dev)
{
	struct udrm_device* const device = dev;

	if (device == NULL)
		return UAPI_STATUS_INVALID_ARGUMENT;

	if (device->ref_count == 0)
		return UAPI_STATUS_INTERNAL_ERROR;

	device->ref_count -= 1;

	return UAPI_STATUS_OK;
}

uapi_handle udrm_dev_new()
{
	return uapi_kernel_calloc(1, sizeof(struct udrm_device));
}

uapi_status udrm_dev_delete(uapi_handle dev)
{
	uapi_kernel_free(dev);
	return UAPI_STATUS_OK;
}

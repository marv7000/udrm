#pragma once

#include <udrm/kernel_api.h>

UAPI_BEGIN_DECLS

struct udrm_device
{
	void* private;			// Driver-specific data.
	uapi_size ref_count;	// Amount of active references to this device.
};

// Registers a device.
uapi_status udrm_dev_register(uapi_handle dev);

// Unregisters a device.
uapi_status udrm_dev_unregister(uapi_handle dev);

// Unreferences a device.
uapi_status udrm_dev_unref(uapi_handle dev);

// Allocates a new device.
uapi_handle udrm_dev_new();

// Destroys a device.
uapi_status udrm_dev_delete(uapi_handle dev);

UAPI_END_DECLS

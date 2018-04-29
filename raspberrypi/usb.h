#ifndef MICROPY_INCLUDED_RPI_USB_H
#define MICROPY_INCLUDED_RPI_USB_H

#define RPI_USB_FLAG_USB_MODE_CALLED    (0x0002)

extern mp_uint_t rpi_usb_flags;

MP_DECLARE_CONST_FUN_OBJ_KW(machine_usb_mode_obj);

#endif // MICROPY_INCLUDED_RPI_USB_H

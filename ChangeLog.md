# Change Log

## v1.5.0

- Integrated hpm_sdk v1.5.0
- Updated:
    - usb stack switched to cherryUSB for usb samples
- Fixed:
    - MCAN sample read data error when enable RT_CAN_USING_HDR
- Added:
    - added interrupt vector mode and preemptive mode
    - pwm sample
    - systemView component

## v1.4.1
- Fixed:
  - Transmission error while enabling DMA transfer in I2C driver

## v1.4.0
- Integrated hpm_sdk v1.4.0
- Upgraded RT-Thread to v5.0.2
- Updated:
  - Improved the SPI driver
  - Improved the I2C Driver
  - Added support for `rt_pin_get` API
- Fixed:
  - Fixed the mismatch data type issue for return value of API in `pwm` driver

## v1.3.0
- Integrated hpm_sdk v1.3.0
- Updated
  - Added EWDT driver
- Added examples:
  - adc_example
  - blink_led
  - flashdb_demo
  - mcan_example
  - timer_demo
  - uart_dma_demo
  - usb_device_generic_hid
  - usb_host_msc_udisk
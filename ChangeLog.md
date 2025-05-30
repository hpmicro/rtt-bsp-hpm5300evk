# Change Log

## v1.9.0

- Integrated hpm_sdk v1.9.0

- Updated:
    - Upgrade `CherryUSB` stack to 1.4.3
    - `uart/uart_v2` driver supports configurable IRQ priority
    - `spi` driver supports for configurable IRQ priority for 
    - `i2c` driver support for configurable IRQ priority
    - `gpio` driver support for configurable IRQ priority
    - `mcan` driver supports configurable IRQ priority

- Added:
    - DSPI/QSPI mode added for `spi` driver

## v1.6.0

- Integrated hpm_sdk v1.6.0
- Updated:
    - Optimized the control of `BRS` bit in CANFD frame
    - Upgraded the `cherryUSB` stack to v1.3.1
    - Added USB descriptor for Full-speed mode to USB examples
    - Upgraded the SoC Datasheet
- Fixed:
    - Macro definition errors related to  TX DMA for UART7 & UART7 
    - Memory leakage issue in uart_v2 driver
- Added:
    - SPI CS pin control option
    - Adapted RT-Thread Cache API

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
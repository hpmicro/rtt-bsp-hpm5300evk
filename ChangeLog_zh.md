# 更新


## v1.5.0

- 整合了hpm_sdk v1.5.0
- 更新:
    - USB相关sample协议栈切换为cherryUSB
- 修复:
    - MCAN sample开启硬件过滤器读取数据错误的问题
- 新增:
    - 增加中断向量模式和可抢占模式
    - pwm sample
    - systemView组件

## v1.4.1
- 修复：
  - 修复了`i2c`驱动开启DMA传输出错的问题

## v1.4.0
- 整合了hpm_sdk v1.4.0
- 升级RT-Thread 到 v5.0.2
- 更新：
  - 增强了SPI驱动
  - 增加了I2C驱动
  - 增加了对`rt_pin_get` API支持
- 修复：
  - 修复了`pwm`驱动返回值类型不匹配的问题

## v1.3.0
- 整合了hpm_sdk v1.3.0
- 更新
  - 增加了ewdt驱动
- 增加了如下示例:
  - adc_example
  - blink_led
  - flashdb_demo
  - mcan_example
  - timer_demo
  - uart_dma_demo
  - usb_device_generic_hid
  - usb_host_msc_udisk
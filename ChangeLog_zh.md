# 更新

## v1.9.0

- 整合了 hpm_sdk v1.9.0

- 更新：
    - 升级CherryUSB协议栈到1.4.3
    - `uart/uart_v2`驱动支持可配置的IRQ优先级
    - `spi`驱动支持可配置的IRQ优先级
    - `i2c`驱动支持可配置的IRQ优先级
    - `gpio`驱动支持可配置的IRQ优先级
    - `mcan`驱动支持可配置的IRQ优先级

- 新增:
    - `spi`驱动增加DSPI/QSPI模式

## v1.6.0

- 整合了hpm_sdk v1.6.0
- 修复:
    - UART7 和 UART8 TX DMA 相关的宏定义错误问题
    - uart_v2 中的内存泄露问题
- 更新：
    - 优化CANFD帧的BRS位控制
    - 升级CherryUSB协议栈到1.3.1
    - 为USB例程增加了全速模式相关的描述符
    - 芯片的数据手册
- 新增:
    - SPI 的CS引脚控制选项
    - 适配了RT-Thread Cache 驱动

## v1.5.0

- 整合了hpm_sdk v1.5.0
- 更新:
    - 给USB示例添加了全速模式的描述符
- 修复:
    - UART7和UART8 TX DMA宏定义错误问题
    - 先楫RT-Thread驱动适配层返回值不统一问题
- 新增:
    - 增加SPI CS引脚控制选项

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
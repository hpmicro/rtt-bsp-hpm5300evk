# rtt-bsp-hpm5300evk

HPM5300EVK 开板的 RT-Thread Studio 板级支持包

## 支持的示例
***
- blink_led
- uart_dma_demo
- timer_demo
- flashdb_demo
- mcan_example
- adc_example
- usb_device_generic_hid
- usb_host_msc_udisk


## 环境设置

## 工具链环境设置
- 安装好BSP包后, 用户在创建示例/工程前需要 设置 `RTT_RISCV_TOOLCHAIN` 环境变量。
    - 假定RISC-V工具链安装于目录： `C:\DevTools\RT-ThreadStudio\repo\Extract\ToolChain_Support_Packages\RISC-V\RISC-V-GCC-RV32\2022-04-12\bin`, 用户可参考下图，配置`RTT_RISCV_TOOLCHAIN`环境变量 
    ![设置 RTT_RISCV_TOOLCHAIN 环境变量](documents/images/set_rtt_riscv_toolchain_env.png)
Board: AlifSemiconductor DevKit
-------------------------------

Device: AE722F80F55D5LS:M55_HE




### System Configuration

| System Component        | Setting
|:------------------------|:----------------------------------------
| Heap                    | 64 kB (configured in M55_HE linker file)
| Stack (MSP)             | 2 kB (configured in M55_HE linker file)

**STDIO** is routed to UART4

### CMSIS-Driver mapping

| CMSIS-Driver | Peripheral
|:-------------|:----------
| ETH_MAC0     | Ethernet
| USART4       | UART4

| CMSIS-Driver VIO  | Physical board hardware
|:------------------|:-----------------------
| vioBUTTON0        | Joystick Select Button
| vioLED0           | RGB LED Red
| vioLED1           | RGB LED Green
| vioLED2           | RGB LED Blue

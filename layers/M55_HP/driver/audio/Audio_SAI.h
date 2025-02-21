/*---------------------------------------------------------------------------
 * Copyright (c) 2025 Arm Limited (or its affiliates).
 * All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include <stddef.h>
#include "audio_drv.h"
#ifdef _RTE_
#include "RTE_Components.h"
#endif
#include CMSIS_device_header
#include CMSIS_target_header

/* Definitions */
#define AUDIO_FLAGS_INIT      (1U << 0)

typedef struct audio_buf_s {
  void    *data;              /* Data buffer pointer     */
  uint32_t block_num;         /* Number of data blocks   */
  uint32_t block_size;        /* Data block size         */
} AudioBuf_t;

typedef struct audio_cb_s {
  ARM_DRIVER_SAI *drv;        /* SAI driver instance     */
  AudioDrv_Event_t  callback; /* Audio driver callback   */
  AudioDrv_Status_t status;   /* Audio driver status     */
  AudioBuf_t tx_buf;          /* Transmit buffer info    */
  AudioBuf_t rx_buf;          /* Receive buffer info     */
  uint32_t   rx_cnt;          /* Receiver block count    */
  uint32_t   tx_cnt;          /* Transmitter block count */
  uint8_t    flags;           /* Audio driver flags      */
} AudioCb_t;

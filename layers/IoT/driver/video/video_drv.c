/*
 * Copyright (c) 2024 Arm Limited. All rights reserved.
 *
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
 */

#include <stddef.h>
#include "video_drv.h"
#include "RTE_Components.h"
#include CMSIS_device_header

// Driver State
static uint8_t Initialized = 0U;

// Event Callback
static VideoDrv_Event_t CB_Event = NULL;

// Initialize Video Interface
int32_t VideoDrv_Initialize (VideoDrv_Event_t cb_event) {

  /* ... */

  CB_Event = cb_event;

  Initialized = 1U;

  return VIDEO_DRV_ERROR;
}

// De-initialize Video Interface
int32_t VideoDrv_Uninitialize (void) {

  Initialized = 0U;

  return VIDEO_DRV_ERROR;
}

// Set Video Interface file
int32_t VideoDrv_SetFile (uint32_t channel, const char *name) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  /* ... */

  return VIDEO_DRV_ERROR;
}

// Configure Video Interface
int32_t VideoDrv_Configure (uint32_t channel, uint32_t frame_width, uint32_t frame_height, uint32_t color_format, uint32_t frame_rate) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  switch (color_format) {
    case VIDEO_DRV_COLOR_GRAYSCALE8:
      /* ... */
      break;
    case VIDEO_DRV_COLOR_YUV420:
      /* ... */
      break;
    case VIDEO_DRV_COLOR_BGR565:
      /* ... */
      break;
    case VIDEO_DRV_COLOR_RGB888:
    case VIDEO_DRV_COLOR_NV12:
    case VIDEO_DRV_COLOR_NV21:
      /* ... */
      break;
    default:
      return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  /* ... */

  return VIDEO_DRV_ERROR;
}

// Set Video Interface buffer
int32_t VideoDrv_SetBuf (uint32_t channel, void *buf, uint32_t buf_size) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  /* ... */

  return VIDEO_DRV_ERROR;
}

// Flush Video Interface buffer
int32_t VideoDrv_FlushBuf (uint32_t channel) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  /* ... */

  return VIDEO_DRV_ERROR;
}

// Start Stream on Video Interface
int32_t VideoDrv_StreamStart (uint32_t channel, uint32_t mode) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  /* ... */

  return VIDEO_DRV_ERROR;
}

// Stop Stream on Video Interface
int32_t VideoDrv_StreamStop (uint32_t channel) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  return VIDEO_DRV_ERROR;
}

// Get Video Frame buffer
void *VideoDrv_GetFrameBuf (uint32_t channel) {

  if (0) {
    return NULL;
  }

  if (Initialized == 0U) {
    return NULL;
  }

  /* ... */

  return NULL;
}

// Release Video Frame
int32_t VideoDrv_ReleaseFrame (uint32_t channel) {

  if (0) {
    return VIDEO_DRV_ERROR_PARAMETER;
  }

  if (Initialized == 0U) {
    return VIDEO_DRV_ERROR;
  }

  return VIDEO_DRV_ERROR;
}


// Get Video Interface status
VideoDrv_Status_t VideoDrv_GetStatus (uint32_t channel) {
  VideoDrv_Status_t status = { 0U, 0U, 0U, 0U, 0U, 0U, 0U };

  status.active    = 0U;
  status.buf_empty = 1U;
  status.buf_full  = 0U;
  status.overflow  = 0U;
  status.underflow = 0U;
  status.eos       = 0U;

  return status;
}

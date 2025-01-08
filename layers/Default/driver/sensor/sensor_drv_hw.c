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

#include <string.h>

#include "sensor_drv.h"
#include "sensor_drv_hw.h"

#include "RTE_Components.h"
#include CMSIS_device_header


static sensorEvent_t EventFunc = NULL;


// Register sensor events
static int32_t RegisterEvents (sensorId_t id, sensorEvent_t event_cb, uint32_t event_mask) {

  /* ... */

  EventFunc = event_cb;

  return SENSOR_OK;
}

// Enable sensor
static int32_t Enable (void) {

  /* ... */

  return SENSOR_ERROR;
}

// Disable sensor
static int32_t Disable (void) {

  /* ... */

  return SENSOR_ERROR;
}

// Get overflow status
static uint32_t GetOverflow (void) {

  /* ... */

  return (1U);
}

// Read samples from sensor
static uint32_t ReadSamples (uint32_t num_samples, void *buf) {

  /* ... */

  return 0U;
}

// Get block data
static void * GetBlockData (void) {

  /* ... */

  return NULL;
}

// Exported sensor functions
sensorDrvHW_t sensorDrvHW_0 = {
  RegisterEvents,
  Enable,
  Disable,
  GetOverflow,
  ReadSamples,
  GetBlockData
};

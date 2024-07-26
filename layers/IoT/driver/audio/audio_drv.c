/*
 * Copyright (c) 2021-2022 Arm Limited. All rights reserved.
 */

#include <stddef.h>
#include "audio_drv.h"
#ifdef _RTE_
#include "RTE_Components.h"
#endif
#include CMSIS_device_header

/* Driver State */
static uint8_t Initialized = 0U;

/* Event Callback */
static AudioDrv_Event_t CB_Event = NULL;


/* Initialize Audio Interface */
int32_t AudioDrv_Initialize (AudioDrv_Event_t cb_event) {

  CB_Event = cb_event;

  /* ... */

  Initialized = 1U;

  return AUDIO_DRV_OK;
}

/* De-initialize Audio Interface */
int32_t AudioDrv_Uninitialize (void) {

  /* ... */

  Initialized = 0U;

  return AUDIO_DRV_OK;
}

/* Configure Audio Interface */
int32_t AudioDrv_Configure (uint32_t interface, uint32_t channels, uint32_t sample_bits, uint32_t sample_rate) {

  if (Initialized == 0U) {
    return AUDIO_DRV_ERROR;
  }

  if ((channels <  1U) ||
      (channels > 32U) ||
      (sample_bits <  8U) ||
      (sample_bits > 32U) ||
      (sample_rate == 0U)) {
    return AUDIO_DRV_ERROR_PARAMETER;
  }

  switch (interface) {
    case AUDIO_DRV_INTERFACE_TX:
      /* ... */
      break;
    case AUDIO_DRV_INTERFACE_RX:
      /* ... */
      break;
    default:
      return AUDIO_DRV_ERROR_PARAMETER;
  }

  return AUDIO_DRV_OK;
}

/* Set Audio Interface buffer */
int32_t AudioDrv_SetBuf (uint32_t interface, void *buf, uint32_t block_num, uint32_t block_size) {

  if (Initialized == 0U) {
    return AUDIO_DRV_ERROR;
  }

  switch (interface) {
    case AUDIO_DRV_INTERFACE_TX:
      /* ... */
      break;
    case AUDIO_DRV_INTERFACE_RX:
      /* ... */
      break;
    default:
      return AUDIO_DRV_ERROR_PARAMETER;
  }

  return AUDIO_DRV_OK;
}

/* Control Audio Interface */
int32_t AudioDrv_Control (uint32_t control) {

  if (Initialized == 0U) {
    return AUDIO_DRV_ERROR;
  }

  if ((control & AUDIO_DRV_CONTROL_TX_DISABLE) != 0U) {
    /* ... */
  } else if ((control & AUDIO_DRV_CONTROL_TX_ENABLE) != 0U) {
    /* ... */
  }

  if ((control & AUDIO_DRV_CONTROL_RX_DISABLE) != 0U) {
    /* ... */
  } else if ((control & AUDIO_DRV_CONTROL_RX_ENABLE) != 0U) {
    /* ... */
  }

  return AUDIO_DRV_OK;
}

/* Get transmitted block count */
uint32_t AudioDrv_GetTxCount (void) {
  return (0U);
}

/* Get received block count */
uint32_t AudioDrv_GetRxCount (void) {
  return (0U);
}

/* Get Audio Interface status */
AudioDrv_Status_t AudioDrv_GetStatus (void) {
  AudioDrv_Status_t status;

  status.tx_active = 0U;
  status.rx_active = 0U;

  return (status);
}

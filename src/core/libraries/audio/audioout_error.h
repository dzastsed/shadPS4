// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/libraries/error_codes.h"

// AudioOut library
constexpr int ORBIS_AUDIO_OUT_ERROR_NOT_OPENED = 0x80260001;
constexpr int ORBIS_AUDIO_OUT_ERROR_BUSY = 0x80260002;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_PORT = 0x80260003;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_POINTER = 0x80260004;
constexpr int ORBIS_AUDIO_OUT_ERROR_PORT_FULL = 0x80260005;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_SIZE = 0x80260006;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_FORMAT = 0x80260007;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_SAMPLE_FREQ = 0x80260008;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_VOLUME = 0x80260009;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_PORT_TYPE = 0x8026000A;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_CONF_TYPE = 0x8026000C;
constexpr int ORBIS_AUDIO_OUT_ERROR_OUT_OF_MEMORY = 0x8026000D;
constexpr int ORBIS_AUDIO_OUT_ERROR_ALREADY_INIT = 0x8026000E;
constexpr int ORBIS_AUDIO_OUT_ERROR_NOT_INIT = 0x8026000F;
constexpr int ORBIS_AUDIO_OUT_ERROR_MEMORY = 0x80260010;
constexpr int ORBIS_AUDIO_OUT_ERROR_SYSTEM_RESOURCE = 0x80260011;
constexpr int ORBIS_AUDIO_OUT_ERROR_TRANS_EVENT = 0x80260012;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_FLAG = 0x80260013;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_MIXLEVEL = 0x80260014;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_ARG = 0x80260015;
constexpr int ORBIS_AUDIO_OUT_ERROR_INVALID_PARAM = 0x80260016;
constexpr int ORBIS_AUDIO_OUT_ERROR_MASTERING_FATAL = 0x80260200;
constexpr int ORBIS_AUDIO_OUT_ERROR_MASTERING_INVALID_API_PARAM = 0x80260201;
constexpr int ORBIS_AUDIO_OUT_ERROR_MASTERING_INVALID_CONFIG = 0x80260202;
constexpr int ORBIS_AUDIO_OUT_ERROR_MASTERING_NOT_INITIALIZED = 0x80260203;
constexpr int ORBIS_AUDIO_OUT_ERROR_MASTERING_INVALID_STATES_ID = 0x80260204;
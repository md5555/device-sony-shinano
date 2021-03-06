/*
 * Copyright (C) 2013-2014, The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <system/audio.h>

#include "tfa9890.h"

int amplifier_open(void) {
    return tfa9890_init();
}

void amplifier_set_devices(int devices __attribute__((unused))) {
    // Do nothing.
}

int amplifier_set_mode(audio_mode_t mode __attribute__((unused))) {
    return 0;
}

int amplifier_close(void) {
    return 0;
}

/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INIT_HW_DATA_H
#define INIT_HW_DATA_H

#include "common/unicode/putil.h"
#include "common/unicode/uvernum.h"

/**
 * convenient method to set icu data file directory to HW_DIRECTORY);
 */
void SetHwIcuDirectory();

/**
 * convenient method to set icu data file directory to dir);
 */
void SetArkuiXIcuDirectory(const char* dir);

/**
 * get icu version
 */
extern "C" const char* GetIcuVersion();

extern "C" void SetOhosIcuDirectory();

#endif
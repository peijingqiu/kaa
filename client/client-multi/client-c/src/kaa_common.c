/*
 * Copyright 2014 CyberVision, Inc.
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

#include <openssl/sha.h>

#include "kaa_common.h"

kaa_error_t kaa_calculate_sha_hash(const char *data, size_t data_size, kaa_digest digest)
{
    KAA_RETURN_IF_NIL3(data, data_size, digest, KAA_ERR_BADPARAM);

    SHA1((const unsigned char *)data, data_size, digest);
    return KAA_ERR_NONE;
}
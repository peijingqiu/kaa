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

#ifndef KAA_PROFILE_H_
#define KAA_PROFILE_H_

#ifdef __cplusplus
extern "C" {
#define CLOSE_EXTERN }
#else
#define CLOSE_EXTERN
#endif

#include <stdbool.h>
#include "kaa_error.h"
#include "gen/kaa_profile_gen.h"
#include "gen/kaa_endpoint_gen.h"

typedef kaa_profile_basic_endpoint_profile_test_t kaa_profile_t;
typedef struct kaa_profile_manager_t kaa_profile_manager_t;

kaa_error_t                     kaa_create_profile_manager(kaa_profile_manager_t **);
void                            kaa_destroy_profile_manager(kaa_profile_manager_t *);

kaa_error_t                     kaa_profile_update_profile(void *, kaa_profile_t *);
bool                            kaa_profile_need_profile_resync(void *);
kaa_profile_sync_request_t *    kaa_profile_compile_request(void *);
void                            kaa_profile_handle_sync(void *, kaa_profile_sync_response_t *);
CLOSE_EXTERN
#endif /* KAA_PROFILE_H_ */
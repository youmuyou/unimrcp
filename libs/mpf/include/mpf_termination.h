/*
 * Copyright 2008 Arsen Chaloyan
 *
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

#ifndef __MPF_TERMINATION_H__
#define __MPF_TERMINATION_H__

/**
 * @file mpf_termination.h
 * @brief MPF Termination
 */ 

#include "mpf_types.h"

APT_BEGIN_EXTERN_C

struct mpf_termination_t {
	apr_pool_t                     *pool;
	void                           *obj;
	void                           *owner;
	const mpf_termination_vtable_t *vtable;
	apr_size_t                      slot;

	mpf_audio_stream_t             *audio_stream;
	mpf_video_stream_t             *video_stream;
};

/**
 * Modify MPF termination.
 * @param termination the termination to modify
 * @param descriptor the termination specific descriptor
 */
apt_bool_t mpf_termination_modify(mpf_termination_t *termination, void *descriptor);

APT_END_EXTERN_C

#endif /*__MPF_TERMINATION_H__*/
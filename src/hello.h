// Copyright (c) 2018 Cisco and/or its affiliates.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at:
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _HELLO_H_
#define _HELLO_H_

#include <stdio.h>
#include <endian.h>
#include <stdlib.h>
#include <vppinfra/string.h>
#include <vapi/vapi.h>

typedef struct {
	bool last_called;
	size_t num_ifs;
	u32 *sw_if_indexes;
	bool *seen;
	int called;
} sw_interface_dump_ctx;

#define GO(api)		while (VAPI_EAGAIN == (rv = (api)));

const char * hello ();

#endif /* _HELLO_H_ */
/*
Copyright (c) 2013-2018 Ubidots.
Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:
The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Developed and maintained by Jose Garcia for IoT Services Inc
@jotathebest at github: https://github.com/jotathebest
*/

#ifndef _UbiTypes_H_
#define _UbiTypes_H_

#include "Particle.h"

typedef struct Value {
  char *variable_label;
  char *dot_context;
  float dot_value;
  unsigned long dot_timestamp_seconds;
  unsigned int dot_timestamp_millis;
} Value;

typedef struct ContextUbi {
  char *key_label;
  char *key_value;
} ContextUbi;

#if PLATFORM_ID == PLATFORM_XENON || PLATFORM_ID == PLATFORM_XENON_SOM || \
    PLATFORM_ID == PLATFORM_ARGON || PLATFORM_ID == PLATFORM_BORON ||     \
    PLATFORM_ID == PLATFORM_ARGON_SOM || PLATFORM_ID == PLATFORM_BORON_SOM
typedef struct MeshUbi {
  char *deviceLabel;
  char *deviceName;
  char *variableLabel;
  char *dotContext;
  float dotValue;
  unsigned long dotTimestampSeconds;
  unsigned int dotTimestampMillis;
} MeshUbi;
#endif

typedef const char *UbiServer;

typedef enum { UBI_HTTP, UBI_TCP, UBI_UDP, UBI_PARTICLE, UBI_MESH } IotProtocol;

typedef struct UbiFlags {
  UbiFlags() : particle_flag(PUBLIC) {}
  PublishFlags particle_flag;
} UbiFlags;

#endif
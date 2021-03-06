//
//  memory_mosq.h
//  MQTTServices
//
//  Created by ml on 2017/4/25.
//  Copyright © 2017年 李博文. All rights reserved.
//

#ifndef memory_mosq_h
#define memory_mosq_h

#include <stdio.h>
#include <stdlib.h>
#include "mosquitto_internal.h"
#include "logger.h"

#endif /* memory_mosq_h */


void *_mosquitto_calloc(size_t nmemb, size_t size);
void *_mosquitto_malloc(size_t size);
void _mosquitto_free(void *mem);
char *_mosquitto_strdup(const char *s);

int _mosquitto_packet_alloc(struct _mosquitto_packet *packet);
void _mosquitto_out_packet_cleanup_all(struct mosquitto *mosq);

void _mosquitto_packet_cleanup(struct _mosquitto_packet *packet);


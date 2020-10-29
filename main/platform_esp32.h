/* 
 *  Squeezelite for esp32
 *
 *  (c) Sebastien 2019
 *      Philippe G. 2019, philippe_44@outlook.com
 *
 *  This software is released under the MIT License.
 *  https://opensource.org/licenses/MIT
 *
 */
 
#pragma once

#include "esp_pthread.h"
#ifndef SQUEEZELITE_ESP32_RELEASE_URL
#define SQUEEZELITE_ESP32_RELEASE_URL "https://github.com/rochuckq/squeezelite-esp32/releases"
#endif

extern void run_command(char * line);
extern  bool wait_for_wifi();
extern void console_start();
extern pthread_cond_t wifi_connect_suspend_cond;
extern pthread_t wifi_connect_suspend_mutex;
typedef enum {
	INFO,
	WARNING,
	ERROR
} message_severity_t;
extern void set_status_message(message_severity_t severity, const char * message);

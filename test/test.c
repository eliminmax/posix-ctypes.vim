// SPDX-FileCopyrightText: 2024 Eli Array Minkoff
//
// SPDX-License-Identifier: 0BSD

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>

// These are some standard types
char test_char;
short test_short;
int test_int;
long test_long;
long long test_long_long;
float test_float;
double test_double;
long double test_long_double;
_Bool test__Bool;

// These are defined in stdbool, stdint, and stdio
FILE test_FILE;
fpos_t test_fpos;
bool test_bool;
int8_t test_int8;
uint8_t test_uint8;
int16_t test_int16;
uint16_t test_uint16;
int32_t test_int32;
uint32_t test_uint32;
int64_t test_int64;
uint64_t test_uint64;

// These should be highlighted as types with the vim plugin
blkcnt_t test_blkcnt;
blksize_t test_blksize;
clock_t test_clock;
clockid_t test_clockid;
dev_t test_dev;
fsblkcnt_t test_fsblkcnt;
fsfilcnt_t test_fsfilcnt;
gid_t test_gid;
id_t test_id;
ino_t test_ino;
key_t test_key;
mode_t test_mode;
nlink_t test_nlink;
off_t test_off;
pid_t test_pid;
pthread_attr_t test_pthread_attr;
pthread_barrier_t test_pthread_barrier;
pthread_barrierattr_t test_pthread_barrierattr;
pthread_cond_t test_pthread_cond;
pthread_condattr_t test_pthread_condattr;
pthread_key_t test_pthread_key;
pthread_mutex_t test_pthread_mutex;
pthread_mutexattr_t test_pthread_mutexattr;
pthread_once_t test_pthread_once;
pthread_rwlock_t test_pthread_rwlock;
pthread_rwlockattr_t test_pthread_rwlockattr;
pthread_spinlock_t test_pthread_spinlock;
pthread_t test_pthread;
size_t test_size;
ssize_t test_ssize;
suseconds_t test_suseconds;
time_t test_time;
timer_t test_timer;
trace_attr_t test_trace_attr;
trace_event_id_t test_trace_event_id;
trace_event_set_t test_trace_event_set;
trace_id_t test_trace_id;
uid_t test_uid;

// These "types" are made up by choosing 6 random letters;
ncpmkp_t test_ncpmkp;
qsgzxw_t test_qsgzxw;
pmpuyz_t test_pmpuyz;
kypomg_t test_kypomg;
dradud_t test_dradud;
aefagp_t test_aefagp;
xizdds_t test_xizdds;

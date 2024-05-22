<!--
SPDX-FileCopyrightText: 2024 Eli Array Minkoff

SPDX-License-Identifier: 0BSD
-->

# POSIX C Types

Highlight extra types used in POSIX programming in C source code

Specifically, it should highlight the types that POSIX says `sys/types.h` must define.

Those are as follows:

* `blkcnt_t`
* `blksize_t`
* `clock_t`\*
* `clockid_t`
* `dev_t`
* `fsblkcnt_t`
* `fsfilcnt_t`
* `gid_t`
* `id_t`
* `ino_t`
* `key_t`
* `mode_t`
* `nlink_t`
* `off_t`\*
* `pid_t`
* `pthread_attr_t`
* `pthread_barrier_t`
* `pthread_barrierattr_t`
* `pthread_cond_t`
* `pthread_condattr_t`
* `pthread_key_t`
* `pthread_mutex_t`
* `pthread_mutexattr_t`
* `pthread_once_t`
* `pthread_rwlock_t`
* `pthread_rwlockattr_t`
* `pthread_spinlock_t`
* `pthread_t`
* `size_t`\*
* `ssize_t`\*
* `suseconds_t`
* `time_t`\*
* `timer_t`
* `trace_attr_t`
* `trace_event_id_t`
* `trace_event_set_t`
* `trace_id_t`

\* type is highlighted by default in Vim 9.0 (packaged as vim-nox in Debian 12), also covered here for the sake of completentess 

" Vim syntax file
" Language: C
" Maintainer: Eli Array Minkoff
" Latest Revision: 22 May 2024
" SPDX-FileCopyrightText: 2024 Eli Array Minkoff
"
" SPDX-License-Identifier: 0BSD

syntax match POSIXcTypesBlk /\v\C<blk(cnt|size)_t/
syntax match POSIXcTypesClock /\v\C<clock(id)?_t/
syntax match POSIXcTypesFs /\v\C<fs(blk|fil)cnt_t>/
syntax match POSIXcTypesThread /\v\C<pthread(_((barrier|cond|mutex|rwlock)(attr)?)|once|key|attr)?_t>/
syntax match POSIXcTypesId /\v\C<[gup]?id_t>/
syntax match POSIXcTypesTime /\v\C<timer?_t>/
syntax match POSIXcTypesTrace /\v\C<trace_(id|event_(id|set)|attr)_t>/
syntax match POSIXcTypesMisc /\v\C<(ino|key|mode|nlink|off|dev|suseconds)_t>/

highlight link POSIXcTypesBlk cType
highlight link POSIXcTypesClock cType
highlight link POSIXcTypesFs cType
highlight link POSIXcTypesThread cType
highlight link POSIXcTypesId cType
highlight link POSIXcTypesTime cType
highlight link POSIXcTypesTrace cType
highlight link POSIXcTypesMisc cType

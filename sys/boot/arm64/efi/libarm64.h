/*-
 * Copyright (c) 2014 Andrew Turner
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _LIBARM64_H_
#define	_LIBARM64_H_

int amd64_autoload(void);
int arm64_getdev(void **vdev, const char *devspec, const char **path);
char *arm64_fmtdev(void *vdev);
int arm64_setcurrdev(struct env_var *ev, int flags, const void *value);

/* cache.c */
void cpu_flush_dcache(const void *, size_t);
void cpu_inval_icache(const void *, size_t);

/* copy.c */
int arm64_efi_copy_init(void);
void *arm64_efi_translate(vm_offset_t ptr);
ssize_t arm64_efi_copyin(const void *src, vm_offset_t dest, const size_t len);
ssize_t arm64_efi_copyout(const vm_offset_t src, void *dest, const size_t len);
ssize_t arm64_efi_readin(const int fd, vm_offset_t dest, const size_t len);

#endif /* _LIBARM64_H_ */


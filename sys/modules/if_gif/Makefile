# $FreeBSD$

SYSDIR?=${.CURDIR}/../..
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/net ${SYSDIR}/netinet ${SYSDIR}/netinet6

KMOD=	if_gif
SRCS=	if_gif.c in_gif.c opt_inet.h opt_inet6.h

.if defined(KERNBUILDDIR)
OPT_INET6!= cat ${KERNBUILDDIR}/opt_inet6.h; echo
.if empty(OPT_INET6)
MK_INET6_SUPPORT=no
.endif
.endif

.if ${MK_INET6_SUPPORT} != "no"
SRCS+=	in6_gif.c
.endif

.include <bsd.kmod.mk>

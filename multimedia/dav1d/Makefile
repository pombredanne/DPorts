# $FreeBSD$

PORTNAME=	dav1d
DISTVERSION=	0.1.0
CATEGORIES=	multimedia

PATCH_SITES=	${GL_SITE}/jbeich/${GL_PROJECT}/commit/
PATCHFILES+=	d3a03bd9939d.patch:-p1
PATCHFILES+=	7f01c6166519.patch:-p1

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Small and fast AV1 decoder

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${BUILD_DEPENDS_${ARCH}}
BUILD_DEPENDS_aarch64=	as:devel/binutils
BUILD_DEPENDS_x86_64=	nasm:devel/nasm
BUILD_DEPENDS_armv6=	${LOCALBASE}/bin/as:devel/binutils
BUILD_DEPENDS_armv7=	${LOCALBASE}/bin/as:devel/binutils
BUILD_DEPENDS_i386=	nasm:devel/nasm

USES=		compiler:c11 meson
USE_GITLAB=	yes
USE_LDCONFIG=	yes
GL_SITE=	https://code.videolan.org
GL_ACCOUNT=	videolan
GL_COMMIT=	a6b903fb6d78f1515b2c50ba17ae50ead8cf5b72
CONFIGURE_ENV=	UNAME_m=${ARCH} # XXX cpu_family()
CFLAGS_aarch64=	-no-integrated-as
CFLAGS_armv6=	-no-integrated-as -B${LOCALBASE}/bin
CFLAGS_armv7=	-no-integrated-as -B${LOCALBASE}/bin
LDFLAGS_i386=	-Wl,-z,notext

OPTIONS_DEFINE=	TEST

TEST_GL_TUPLE=	videolan:dav1d-test-data:0028f7f3d9cdcd0e95643e16d49d5a691807cb77:testdata/tests/dav1d-test-data
TEST_MESON_TRUE=build_tests testdata_tests

.if make(makesum) # for optional distfiles
.MAKEFLAGS:	WITH="${OPTIONS_DEFINE}"
.endif

pre-install-TEST-on: do-test

.include <bsd.port.mk>

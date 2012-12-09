--- process.c.orig	2009-03-06 04:25:10.000000000 +0300
+++ process.c	2009-10-26 16:08:15.000000000 +0300
@@ -101,10 +101,10 @@
    /* do_seekable() strings */
 # ifdef UNIX
    static ZCONST char Far CannotFindZipfileDirMsg[] =
-     "%s:  cannot find zipfile directory in one of %s or\n\
-        %s%s.zip, and cannot find %s, period.\n";
+     "%s:  cannot find zipfile directory in one of %.512s or\n\
+	%s%.512s.zip, and cannot find %.512s, period.\n";
    static ZCONST char Far CannotFindEitherZipfile[] =
-     "%s:  cannot find or open %s, %s.zip or %s.\n";
+     "%s:  cannot find or open %.512s, %.512s.zip or %.512s.\n";
 # else /* !UNIX */
    static ZCONST char Far CannotFindZipfileDirMsg[] =
      "%s:  cannot find zipfile directory in %s,\n\

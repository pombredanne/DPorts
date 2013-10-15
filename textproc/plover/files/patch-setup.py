
$FreeBSD: textproc/plover/files/patch-setup.py 306923 2012-11-03 16:42:40Z olgeni $

--- setup.py.orig
+++ setup.py
@@ -24,8 +24,8 @@
       package_dir={'plover':'plover'},
       packages=['plover', 'plover.dictionary', 'plover.machine', 'plover.gui'],
       package_data={'plover' : ['assets/*']},
-      data_files=[('/usr/share/applications', ['application/Plover.desktop']),
-                  ('/usr/share/pixmaps', ['plover/assets/plover_on.png']),],
+      data_files=[('%%PREFIX%%/share/applications', ['application/Plover.desktop']),
+                  ('%%PREFIX%%/share/pixmaps', ['plover/assets/plover_on.png']),],
       scripts=['application/plover'],
       requires=['serial', 'Xlib', 'wx', 'lockfile'],
       platforms=['GNU/Linux'],

prefix=@CMAKE_INSTALL_PREFIX@
libdir=@CMAKE_INSTALL_FULL_LIBDIR@
includedir=@CMAKE_INSTALL_FULL_INCLUDEDIR@

Name: adwaita-qt@ADWAITAQT_SUFFIX@
Description: Qt Adwaita Style
Version: @ADWAITAQT_VERSION@
Requires: @PC_REQUIRES@
@PC_REQUIRES_PRIVATE@

Libs: -L${libdir} -ladwaitaqt@ADWAITAQT_SUFFIX@
Cflags: -I${includedir}
Requires: Qt@QT_VERSION_MAJOR@Core Qt@QT_VERSION_MAJOR@Widgets

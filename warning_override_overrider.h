// Soong prevents these from being disabled
// So inject this header to talk directly to clang, bypassing
// that attempt to prevent these from being disabled
// TODO: Remove after https://github.com/adobe/XMP-Toolkit-SDK/issues/103 is
// fixed & pulled
#pragma clang diagnostic ignored "-Wpointer-to-int-cast"
#pragma clang diagnostic ignored "-Wint-to-void-pointer-cast"
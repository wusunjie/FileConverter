#ifndef _COMMON_DEFS_H
#define _COMMON_DEFS_H

#if defined _WIN32 || defined __CYGWIN__
  #define COMMON_HELPER_DLL_IMPORT __declspec(dllimport)
  #define COMMON_HELPER_DLL_EXPORT __declspec(dllexport)
  #define COMMON_HELPER_DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define COMMON_HELPER_DLL_IMPORT __attribute__ ((visibility ("default")))
    #define COMMON_HELPER_DLL_EXPORT __attribute__ ((visibility ("default")))
    #define COMMON_HELPER_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
  #else
    #define COMMON_HELPER_DLL_IMPORT
    #define COMMON_HELPER_DLL_EXPORT
    #define COMMON_HELPER_DLL_LOCAL
  #endif
#endif


#ifdef FILE_CONVERTER_DLL
  #ifdef FILE_CONVERTER_DLL_EXPORTS
    #define FILE_CONVERTER_API COMMON_HELPER_DLL_EXPORT
  #else
    #define FILE_CONVERTER_API COMMON_HELPER_DLL_IMPORT
  #endif
  #define FILE_CONVERTER_LOCAL COMMON_HELPER_DLL_LOCAL
#else
  #define FILE_CONVERTER_API
  #define FILE_CONVERTER_LOCAL
#endif

#ifdef __cplusplus
  #define COMMON_EXTERN_C_BEGIN extern "C" {
  #define COMMON_EXTERN_C_END }
  #else
  #define COMMON_EXTERN_C_BEGIN
  #define COMMON_EXTERN_C_END
#endif

#endif
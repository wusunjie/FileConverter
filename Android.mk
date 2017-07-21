LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_MODULE := libFileConverter
LOCAL_SRC_FILES := ConverterLib/FileConverter.cpp
LOCAL_CPPFLAGS := -g -fno-rtti -fno-exceptions

LOCAL_C_INCLUDES := $(LOCAL_PATH)/Includes

include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_MODULE := FileConverter.HexToBin
LOCAL_MODULE_PATH := $(TARGET_OUT)/lib/plugin
LOCAL_SRC_FILES := \
	ConverterPlugin/FileHandler.cpp \
	ConverterPlugin/HexToBin/HexToBinConverter.cpp

LOCAL_CPPFLAGS := -DFILE_CONVERTER_DLL -DFILE_CONVERTER_DLL_EXPORTS -DUNIX_FILE_SYSTEM -g -fno-rtti -fno-exceptions

LOCAL_C_INCLUDES := $(LOCAL_PATH)/Includes

include $(BUILD_SHARED_LIBRARY)
#ifndef CreateJavaOutputStream_DEFINED
#define CreateJavaOutputStream_DEFINED

//#include <android_runtime/AndroidRuntime.h>
#include "jni.h"
#include "SkStream.h"

SkStream* CreateJavaInputStreamAdaptor(JNIEnv* env, jobject stream,
                                       jbyteArray storage);
SkWStream* CreateJavaOutputStreamAdaptor(JNIEnv* env, jobject stream,
                                         jbyteArray storage);

#endif
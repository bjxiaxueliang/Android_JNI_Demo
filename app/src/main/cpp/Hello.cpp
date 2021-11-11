

# include "Hello.h"

JNIEXPORT jstring JNICALL Java_com_xiaxl_demo_Hello_sayHello
        (JNIEnv *env, jclass jclass1) {

    LOGE("JNICALL Java_com_xiaxl_demo_Hello_sayHello");

    return env->NewStringUTF("native Hello");
}
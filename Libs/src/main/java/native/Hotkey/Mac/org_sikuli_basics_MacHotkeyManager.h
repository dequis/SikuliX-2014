/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_sikuli_basics_MacHotkeyManager */

#ifndef _Included_org_sikuli_basics_MacHotkeyManager
#define _Included_org_sikuli_basics_MacHotkeyManager
#ifdef __cplusplus
extern "C" {
#endif
#undef org_sikuli_basics_MacHotkeyManager_CARBON_MASK_CMD
#define org_sikuli_basics_MacHotkeyManager_CARBON_MASK_CMD 256L
#undef org_sikuli_basics_MacHotkeyManager_CARBON_MASK_SHIFT
#define org_sikuli_basics_MacHotkeyManager_CARBON_MASK_SHIFT 512L
#undef org_sikuli_basics_MacHotkeyManager_CARBON_MASK_OPT
#define org_sikuli_basics_MacHotkeyManager_CARBON_MASK_OPT 2048L
#undef org_sikuli_basics_MacHotkeyManager_CARBON_MASK_CTRL
#define org_sikuli_basics_MacHotkeyManager_CARBON_MASK_CTRL 4096L
/*
 * Class:     org_sikuli_basics_MacHotkeyManager
 * Method:    installGlobalHotkey
 * Signature: (IIIILorg/sikuli/basics/HotkeyListener;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sikuli_basics_MacHotkeyManager_installGlobalHotkey
  (JNIEnv *, jobject, jint, jint, jint, jint, jobject);

/*
 * Class:     org_sikuli_basics_MacHotkeyManager
 * Method:    uninstallGlobalHotkey
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_sikuli_basics_MacHotkeyManager_uninstallGlobalHotkey
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_sikuli_basics_MacHotkeyManager
 * Method:    cleanUp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_sikuli_basics_MacHotkeyManager_cleanUp
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
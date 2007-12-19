/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sf_sevenzip_InArchive */

#ifndef _Included_net_sf_sevenzip_InArchive
#define _Included_net_sf_sevenzip_InArchive
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeClose
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeClose
  (JNIEnv *, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeExtract
 * Signature: ([IILnet/sf/sevenzip/IArchiveExtractCallback;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeExtract
  (JNIEnv *, jobject, jintArray, jint, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetArchiveProperty
 * Signature: (JLnet/sf/sevenzip/PropVariant;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetArchiveProperty
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetArchivePropertyInfo
 * Signature: (ILnet/sf/sevenzip/PropertyInfo;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetArchivePropertyInfo
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetNumberOfArchiveProperties
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetNumberOfArchiveProperties
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetNumberOfItems
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetNumberOfItems
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetNumberOfProperties
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetNumberOfProperties
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetProperty
 * Signature: (IJLnet/sf/sevenzip/PropVariant;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetProperty
  (JNIEnv *, jobject, jint, jlong, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeGetPropertyInfo
 * Signature: (ILnet/sf/sevenzip/PropertyInfo;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeGetPropertyInfo
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     net_sf_sevenzip_InArchive
 * Method:    nativeOpen
 * Signature: (Lnet/sf/sevenzip/IInStream;[JLnet/sf/sevenzip/IArchiveOpenCallback;)I
 */
JNIEXPORT jint JNICALL Java_net_sf_sevenzip_InArchive_nativeOpen
  (JNIEnv *, jobject, jobject, jlongArray, jobject);

#ifdef __cplusplus
}
#endif
#endif
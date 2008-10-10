/*	Copyright 2008  Edwin Stang (edwinstang@gmail.com), 
 *
 *  This file is part of JXGrabKey.
 *
 *  JXGrabKey is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  JXGrabKey is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with JXGrabKey.  If not, see <http://www.gnu.org/licenses/>.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jxgrabkey_JXGrabKey */

#ifndef _Included_jxgrabkey_JXGrabKey
#define _Included_jxgrabkey_JXGrabKey
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jxgrabkey_JXGrabKey
 * Method:    clean
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jxgrabkey_JXGrabKey_clean
  (JNIEnv *, jobject);

/*
 * Class:     jxgrabkey_JXGrabKey
 * Method:    registerHotkey
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_jxgrabkey_JXGrabKey_registerHotkey__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     jxgrabkey_JXGrabKey
 * Method:    unregisterHotKey
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jxgrabkey_JXGrabKey_unregisterHotKey
  (JNIEnv *, jobject, jint);

/*
 * Class:     jxgrabkey_JXGrabKey
 * Method:    listen
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jxgrabkey_JXGrabKey_listen
  (JNIEnv *, jobject);

/*
 * Class:     jxgrabkey_JXGrabKey
 * Method:    setDebug
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jxgrabkey_JXGrabKey_setDebug
  (JNIEnv *, jobject, jboolean);

const char* getErrorString(int);

#ifdef __cplusplus
}
#endif
#endif

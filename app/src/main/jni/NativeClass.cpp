//
// Created by Pappu on 11/6/17.
//

#include "pappu_com_ndkproject_NativeClass.h"

JNIEXPORT jstring JNICALL Java_pappu_com_ndkproject_NativeClass_getName
  (JNIEnv *env, jobject){
     return (env)->NewStringUTF( "Native Class!");
  }
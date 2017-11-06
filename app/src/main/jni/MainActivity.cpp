//
// Created by Pappu on 11/6/17.
//

#include "pappu_com_ndkproject_MainActivity.h"

JNIEXPORT jstring JNICALL Java_pappu_com_ndkproject_MainActivity_messageFromNativeCode
  (JNIEnv *env, jobject){
    return (env)->NewStringUTF( "Hello World!");
  }
  JNIEXPORT jint JNICALL Java_pappu_com_ndkproject_MainActivity_getAverage
    (JNIEnv *env, jobject ob, jint num){

        int res = 0;
        for(int i = 0;i<=num;i++){
          res+=i;
        }
        res/=num;

        return res;
    }
package com.xiaxl.demo;

public class Hello {

    static {
        System.loadLibrary("hello");
    }

    public static native String sayHello();
}

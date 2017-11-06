package pappu.com.ndkproject;

/**
 * Created by pappu on 11/6/17.
 */

public class NativeClass {

    public native String getName();
    static
    {
        System.loadLibrary("MainActivity");
    }
}

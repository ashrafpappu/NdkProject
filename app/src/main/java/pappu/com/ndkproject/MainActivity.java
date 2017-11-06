package pappu.com.ndkproject;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        NativeClass nativeClass = new NativeClass();
        Log.d("MainActivity",""+messageFromNativeCode()+"   "+nativeClass.getName() +"  "+getAverage(5));
    }
    public native String messageFromNativeCode();

    public native int getAverage(int num);

    static
    {
        System.loadLibrary("MainActivity");
    }
}

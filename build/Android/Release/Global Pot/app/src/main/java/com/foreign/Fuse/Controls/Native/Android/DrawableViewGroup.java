package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class DrawableViewGroup
{
    static void debug_log(Object message)
    {
        android.util.Log.d("GlobalPot", (message==null ? "null" : message.toString()));
    }

    public static void AddView110(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.addView(childView);
    }
    
    public static void AddView1111(final Object parentHandle,final Object childHandle,final int index)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.addView(childView, index);
    }
    
    public static Object Create112()
    {
        android.widget.FrameLayout frameLayout = new com.fuse.android.views.ViewGroup(com.fuse.Activity.getRootActivity());
        			frameLayout.setFocusable(true);
        			frameLayout.setFocusableInTouchMode(true);
        			frameLayout.setClipToPadding(false);
        			frameLayout.setClipChildren(false);
        			frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return frameLayout;
    }
    
    public static void HideOffscreenParent113(final Object handle)
    {
        android.view.View view = (android.view.View)handle;
        			view.setTranslationX(java.lang.Integer.MAX_VALUE / 2);
        			view.setTranslationY(java.lang.Integer.MAX_VALUE / 2);
    }
    
    public static void RemoveView114(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.removeView(childView);
    }
    
    public static void SetClipToBounds115(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        			viewGroup.setClipChildren(clipToBounds);
        			viewGroup.setClipToPadding(clipToBounds);
    }
    
    public static void UpdateChildRect116(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.fuse.android.views.ViewGroup.UpdateChildRect((android.view.View)handle, x, y, w, h);
    }
    
}

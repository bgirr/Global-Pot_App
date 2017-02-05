package com.Bindings;

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
public class ExternedBlockHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("GlobalPot", (message==null ? "null" : message.toString()));
    }
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(final Object jarr,long jarrPtr);
    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.boolArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(final Object jarr,long jarrPtr);
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.byteArrayToUnoArrayPtr(arr);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(final UnoObject array);
    public static Object copyBoolArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyBoolArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(final UnoObject array);
    public static Object copyByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyByteArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(final UnoObject array);
    public static Object copyCharArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyCharArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(final UnoObject array);
    public static Object copyDoubleArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyDoubleArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(final UnoObject array);
    public static Object copyFloatArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyFloatArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(final UnoObject array);
    public static Object copyIntArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyIntArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(final UnoObject array);
    public static Object copyLongArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyLongArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(final UnoObject array);
    public static Object copyObjectArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyObjectArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(final UnoObject array);
    public static Object copyShortArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyShortArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(final UnoObject array);
    public static Object copyStringArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyStringArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(final UnoObject array);
    public static Object copyUByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyUByteArray(array);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(final Object jarr,long jarrPtr);
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.doubleArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(final Object jarr,long jarrPtr);
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.floatArrayToUnoArrayPtr(arr);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(final UnoObject array,final int index);
    public static boolean getBool(final UnoObject array,final int index)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getBool(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(final UnoObject array,final int index);
    public static byte getByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getByte(array,index);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(final UnoObject array,final int index);
    public static char getChar(final UnoObject array,final int index)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getChar(array,index);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(final UnoObject array,final int index);
    public static double getDouble(final UnoObject array,final int index)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getDouble(array,index);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(final UnoObject array,final int index);
    public static float getFloat(final UnoObject array,final int index)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getFloat(array,index);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(final UnoObject array,final int index);
    public static int getInt(final UnoObject array,final int index)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getInt(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(final UnoObject array,final int index);
    public static long getLong(final UnoObject array,final int index)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getLong(array,index);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(final UnoObject array,final int index);
    public static UnoObject getObject(final UnoObject array,final int index)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getObject(array,index);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(final UnoObject array,final int index);
    public static short getShort(final UnoObject array,final int index)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getShort(array,index);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(final UnoObject array,final int index);
    public static String getString(final UnoObject array,final int index)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getString(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(final UnoObject array,final int index);
    public static byte getUByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getUByte(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(final Object jarr,long jarrPtr);
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.intArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(final Object jarr,long jarrPtr);
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.longArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(final int length);
    public static long newBoolArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newBoolArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(final int length,final boolean unoIsUnsigned);
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newByteArrayPtr(length,unoIsUnsigned);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(final int length);
    public static long newCharArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newCharArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(final int length);
    public static long newDoubleArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newDoubleArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(final int length);
    public static long newFloatArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newFloatArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(final int length);
    public static long newIntArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newIntArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(final int length);
    public static long newLongArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newLongArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(final int length);
    public static long newObjectArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newObjectArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(final int length);
    public static long newShortArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newShortArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(final int length);
    public static long newStringArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newStringArrayPtr(length);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(final UnoObject array,final int index,final boolean val);
    public static boolean setBool(final UnoObject array,final int index,final boolean val)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setBool(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(final UnoObject array,final int index,final byte val);
    public static byte setByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setByte(array,index,val);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(final UnoObject array,final int index,final char val);
    public static char setChar(final UnoObject array,final int index,final char val)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setChar(array,index,val);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(final UnoObject array,final int index,final double val);
    public static double setDouble(final UnoObject array,final int index,final double val)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setDouble(array,index,val);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(final UnoObject array,final int index,final float val);
    public static float setFloat(final UnoObject array,final int index,final float val)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setFloat(array,index,val);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(final UnoObject array,final int index,final int val);
    public static int setInt(final UnoObject array,final int index,final int val)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setInt(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(final UnoObject array,final int index,final long val);
    public static long setLong(final UnoObject array,final int index,final long val)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setLong(array,index,val);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(final UnoObject array,final int index,final UnoObject val);
    public static UnoObject setObject(final UnoObject array,final int index,final UnoObject val)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setObject(array,index,val);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(final UnoObject array,final int index,final short val);
    public static short setShort(final UnoObject array,final int index,final short val)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setShort(array,index,val);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(final UnoObject array,final int index,final String val);
    public static String setString(final UnoObject array,final int index,final String val)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setString(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(final UnoObject array,final int index,final byte val);
    public static byte setUByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setUByte(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(final Object jarr,long jarrPtr);
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.shortArrayToUnoArrayPtr(arr);
    }
    
    public static float _getDensity50()
    {
        return (float) com.foreign.Uno.Platform.AndroidDisplay._getDensity50();
    }
    
    public static native boolean callUno_Uno_Platform_AndroidDisplay__initializedGet52();
    public static native void callUno_Uno_Platform_AndroidDisplay__initializedSet52(final boolean setVal);
    public static native void callUno_Uno_Platform_AndroidDisplay_OnFrameCallback53(final UnoObject jthis,final double currentTime,final double deltaTime);
    public static void JavaEnableTicks51(final UnoObject _this)
    {
        com.foreign.Uno.Platform.AndroidDisplay.JavaEnableTicks51(_this);
    }
    
    public static void Quit54()
    {
        com.foreign.Uno.Runtime.Implementation.Internal.Unsafe.Quit54();
    }
    
    public static native void callUno_Uno_Collections_List_lt_string_gt__Add56(final UnoObject jthis,final String item);
    public static boolean JavaGetLocalAddresses55(final UnoObject addresses)
    {
        return (boolean) com.foreign.Uno.Net.Dns.JavaGetLocalAddresses55(addresses);
    }
    
    public static Object GetActivityClassInner57()
    {
        return (Object) com.foreign.Android.Base.JNI.GetActivityClassInner57();
    }
    
    public static Object GetActivityObjectInner58()
    {
        return (Object) com.foreign.Android.Base.JNI.GetActivityObjectInner58();
    }
    
    public static int GetID59(final String path)
    {
        return (int) com.foreign.Android.Resources.GetID59(path);
    }
    
    public static native Object callUno_Fuse_Platform_SystemUI_layoutAttachedToGet61();
    public static native void callUno_Fuse_Platform_SystemUI_layoutAttachedToSet61(final Object setVal,long setValPtr);
    public static native Object callUno_Fuse_Platform_SystemUI__keyboardListenerGet62();
    public static void Attach60(final Object _layout)
    {
        com.foreign.Fuse.Platform.SystemUI.Attach60(_layout);
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_realWidthSet64(final int setVal);
    public static native void callUno_Fuse_Platform_SystemUI_realHeightSet65(final int setVal);
    public static native Object callUno_Fuse_Platform_SystemUI_SuperLayoutGet66();
    public static native int callUno_Fuse_Platform_SystemUI_realHeightGet65();
    public static native int callUno_Fuse_Platform_SystemUI_realWidthGet64();
    public static void CalcRealSizes63()
    {
        com.foreign.Fuse.Platform.SystemUI.CalcRealSizes63();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_SuperLayoutSet66(final Object setVal,long setValPtr);
    public static native void callUno_Fuse_Platform_SystemUI_RootLayoutSet68(final Object setVal,long setValPtr);
    public static native Object callUno_Fuse_Platform_SystemUI_RootLayoutGet68();
    public static native int callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight71();
    public static native void callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI72();
    public static void CreateLayouts67()
    {
        com.foreign.Fuse.Platform.SystemUI.CreateLayouts67();
    }
    
    public static void Detach73()
    {
        com.foreign.Fuse.Platform.SystemUI.Detach73();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI__systemUIStateSet75(final int setVal);
    public static native void callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged78(final int height);
    public static void EnterFullscreen74()
    {
        com.foreign.Fuse.Platform.SystemUI.EnterFullscreen74();
    }
    
    public static float GetDensity79()
    {
        return (float) com.foreign.Fuse.Platform.SystemUI.GetDensity79();
    }
    
    public static Object GetDisplayMetrics80()
    {
        return (Object) com.foreign.Fuse.Platform.SystemUI.GetDisplayMetrics80();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI__systemUIStateGet75();
    public static native boolean callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet82();
    public static native int callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet83();
    public static native void callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet82(final boolean setVal);
    public static native void callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet83(final int setVal);
    public static float GetStatusBarHeight81()
    {
        return (float) com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight81();
    }
    
    public static int GetSuperLayoutHeight84()
    {
        return (int) com.foreign.Fuse.Platform.SystemUI.GetSuperLayoutHeight84();
    }
    
    public static void HideActionBar77()
    {
        com.foreign.Fuse.Platform.SystemUI.HideActionBar77();
    }
    
    public static void HideStatusBar76()
    {
        com.foreign.Fuse.Platform.SystemUI.HideStatusBar76();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_OnDestroy88();
    public static native void callUno_Fuse_Platform_SystemUI_OnConfigChanged89();
    public static void HookOntoRawActivityEvents85()
    {
        com.foreign.Fuse.Platform.SystemUI.HookOntoRawActivityEvents85();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth90();
    public static native void callUno_Fuse_Platform_SystemUI_cppOnConfigChanged91();
    public static native void callUno_Fuse_Platform_SystemUI_ResendFrameSizes92();
    public static Object MakePostV11LayoutChangeListener69()
    {
        return (Object) com.foreign.Fuse.Platform.SystemUI.MakePostV11LayoutChangeListener69();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI__keyboardListenerSet62(final Object setVal,long setValPtr);
    public static void OnCreate93()
    {
        com.foreign.Fuse.Platform.SystemUI.OnCreate93();
    }
    
    public static void OnPause86()
    {
        com.foreign.Fuse.Platform.SystemUI.OnPause86();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_UpdateStatusBar95();
    public static void OnResume87()
    {
        com.foreign.Fuse.Platform.SystemUI.OnResume87();
    }
    
    public static void SetAsRootView96(final Object view)
    {
        com.foreign.Fuse.Platform.SystemUI.SetAsRootView96(view);
    }
    
    public static void SetFrame70(final Object view,final int originX,final int originY,final int height)
    {
        com.foreign.Fuse.Platform.SystemUI.SetFrame70(view,originX,originY,height);
    }
    
    public static void ShowStatusBar97()
    {
        com.foreign.Fuse.Platform.SystemUI.ShowStatusBar97();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet98();
    public static native boolean callUno_Fuse_Platform_SystemUI_firstSizingGet99();
    public static native void callUno_Fuse_Platform_SystemUI_onHideKeyboard100(final int keyboardHeight,final boolean force);
    public static native void callUno_Fuse_Platform_SystemUI_onShowKeyboard101(final int keyboardHeight,final boolean force);
    public static native void callUno_Fuse_Platform_SystemUI_firstSizingSet99(final boolean setVal);
    public static void unoOnGlobalLayout94()
    {
        com.foreign.Fuse.Platform.SystemUI.unoOnGlobalLayout94();
    }
    
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFamily103(final String name,final String language,final String variant);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFont104(final String path,final int index,final int weight,final boolean isItalic);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddAlias105(final String name,final String to,final int weight);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_ThrowUno106(final String message);
    public static void AddFonts102()
    {
        com.foreign.Fuse.Internal.AndroidSystemFont.AddFonts102();
    }
    
    public static Object Create107()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Button.Create107();
    }
    
    public static void SetText108(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.Button.SetText108(handle,text);
    }
    
    public static void UpdateShapeDrawable1109(final UnoObject _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        com.foreign.Fuse.Controls.Native.Android.Circle.UpdateShapeDrawable1109(_this, handle,useAngle,width,height,startAngle,endAngle);
    }
    
    public static void AddView110(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView110(parentHandle,childHandle);
    }
    
    public static void AddView1111(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView1111(parentHandle,childHandle,index);
    }
    
    public static Object Create112()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.Create112();
    }
    
    public static void HideOffscreenParent113(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.HideOffscreenParent113(handle);
    }
    
    public static void RemoveView114(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.RemoveView114(parentHandle,childHandle);
    }
    
    public static void SetClipToBounds115(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetClipToBounds115(handle,clipToBounds);
    }
    
    public static void UpdateChildRect116(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.UpdateChildRect116(handle,x,y,w,h);
    }
    
    public static void UpdateShapeDrawable1117(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Ellipse.UpdateShapeDrawable1117(_this, handle);
    }
    
    public static void ClearListener118(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.ClearListener118(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange120(final UnoObject jthis,final boolean hasFocus);
    public static Object Create119(final UnoObject _this)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.Create119(_this);
    }
    
    public static void SetListener121(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.SetListener121(viewHandle,listenerHandle);
    }
    
    public static Object GetContext122(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetContext122(viewHandle);
    }
    
    public static Object GetWindowToken123(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetWindowToken123(viewHandle);
    }
    
    public static boolean HasFocus124(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.FocusManager.HasFocus124(viewHandle);
    }
    
    public static void RequestRootViewFocus125(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusManager.RequestRootViewFocus125(viewHandle);
    }
    
    public static native void callUno_Action_Object(final com.foreign.Uno.Action_Object theDelegate,final Object arg,long argPtr);
    public static native void callUno_Action_String(final com.foreign.Uno.Action_String theDelegate,final String arg);
    public static void LoadAsync126(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        com.foreign.Fuse.Controls.Native.Android.HttpImageLoader.LoadAsync126(urlString,success,error);
    }
    
    public static void ClearBitmap127(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.ClearBitmap127(handle);
    }
    
    public static Object Create128(final Object container)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.Create128(container);
    }
    
    public static Object CreateContainer129()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.CreateContainer129();
    }
    
    public static void GetImageSize130(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.GetImageSize130(handle,wh);
    }
    
    public static void SetBitmap131(final Object handle,final Object bitmapHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetBitmap131(handle,bitmapHandle);
    }
    
    public static void SetImageMatrix132(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageMatrix132(handle,x,y,scaleX,scaleY);
    }
    
    public static void SetImageSize1133(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageSize1133(handle,wh);
    }
    
    public static void SetTint134(final Object handle,final int rgba)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetTint134(handle,rgba);
    }
    
    public static void ClearOnTouchListener135(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.ClearOnTouchListener135(viewHandle);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch137(final Object view,final Object motionEvent,long viewPtr,long motionEventPtr);
    public static Object CreateTouchListener136()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.InputDispatch.CreateTouchListener136();
    }
    
    public static void SetOnTouchListener138(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.SetOnTouchListener138(viewHandle,listenerHandle);
    }
    
    public static boolean ContainsKey1139(final Object handle,final Object key)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.JavaMap.ContainsKey1139(handle,key);
    }
    
    public static Object Create140()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.JavaMap.Create140();
    }
    
    public static UnoObject Get1141(final Object handle,final Object key)
    {
        return (UnoObject) com.foreign.Fuse.Controls.Native.Android.JavaMap.Get1141(handle,key);
    }
    
    public static void Put142(final Object handle,final Object key,final UnoObject value)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Put142(handle,key,value);
    }
    
    public static void Remove1143(final Object handle,final Object key)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Remove1143(handle,key);
    }
    
    public static int GetMeasuredHeight144(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredHeight144(handle);
    }
    
    public static int GetMeasuredWidth145(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredWidth145(handle);
    }
    
    public static void Measure146(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        com.foreign.Fuse.Controls.Native.Android.LeafView.Measure146(handle,w,h,hasX,hasY);
    }
    
    public static boolean Compare147(final Object handle1,final Object handle2)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.MotionEvent.Compare147(handle1,handle2);
    }
    
    public static int GetAction148(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetAction148(_this, handle);
    }
    
    public static int GetActionMasked149(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetActionMasked149(_this, handle);
    }
    
    public static long GetEventTime150(final UnoObject _this, final Object handle)
    {
        return (long) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetEventTime150(_this, handle);
    }
    
    public static int GetLocationOnScreenX151(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenX151(_this, viewHandle);
    }
    
    public static int GetLocationOnScreenY152(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenY152(_this, viewHandle);
    }
    
    public static int GetPointerCount153(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerCount153(_this, handle);
    }
    
    public static int GetPointerId1154(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerId1154(_this, handle,pointerIndex);
    }
    
    public static int GetPointerIndexMask155()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexMask155();
    }
    
    public static int GetPointerIndexShift156()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexShift156();
    }
    
    public static float GetX157(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetX157(_this, handle,pointerIndex);
    }
    
    public static float GetXPrecision158(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetXPrecision158(_this, handle);
    }
    
    public static float GetY159(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetY159(_this, handle,pointerIndex);
    }
    
    public static float GetYPrecision160(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetYPrecision160(_this, handle);
    }
    
    public static Object CreateBitmap161(final int w,final int h)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.CreateBitmap161(w,h);
    }
    
    public static void DisposeBitmap162(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.DisposeBitmap162(bitmap);
    }
    
    public static void Upload163(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.Upload163(viewHandle,bitmapHandle,reuse,w,h);
    }
    
    public static void UpdateShapeDrawable1164(final UnoObject _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        com.foreign.Fuse.Controls.Native.Android.Rectangle.UpdateShapeDrawable1164(_this, handle,x,y,z,w);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged166(final UnoObject jthis,final int x,final int y,final int oldx,final int oldy);
    public static Object AddCallback165(final UnoObject _this, final Object handle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.AddCallback165(_this, handle);
    }
    
    public static Object Create167()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.Create167();
    }
    
    public static void SetClipToBounds168(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetClipToBounds168(handle,clipToBounds);
    }
    
    public static void SetContent169(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetContent169(parentHandle,childHandle);
    }
    
    public static void SetScrollPosition170(final Object handle,final int x,final int y)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetScrollPosition170(handle,x,y);
    }
    
    public static void UpdateChildRect171(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.UpdateChildRect171(handle,x,y,w,h);
    }
    
    public static Object Create172()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.Create172();
    }
    
    public static Object CreateShapeDrawable173()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.CreateShapeDrawable173();
    }
    
    public static Object GetLayer174(final Object handle,final int layer)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.GetLayer174(handle,layer);
    }
    
    public static Object MakeLayerDrawable175(final Object handle,final int layerCount)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.MakeLayerDrawable175(handle,layerCount);
    }
    
    public static void SetShapeDrawableColor176(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableColor176(shapeDrawable,r,g,b,a,opacity);
    }
    
    public static void SetShapeDrawableLinearGradient177(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableLinearGradient177(shapeDrawable,startX,startY,endX,endY,colors,positions);
    }
    
    public static void SetShapeDrawableStrokeWidth178(final Object shapeDrawable,final float width)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableStrokeWidth178(shapeDrawable,width);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged180(final UnoObject jthis,final double newProgress);
    public static void AddChangedCallback179(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.AddChangedCallback179(_this, handle);
    }
    
    public static Object Create181()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Slider.Create181();
    }
    
    public static void SetProgress182(final Object handle,final double progress)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.SetProgress182(handle,progress);
    }
    
    public static void HideKeyboard183(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.HideKeyboard183(hideKeyboardContext,hideKeyboardWindowToken);
    }
    
    public static void ShowKeyboard184(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.ShowKeyboard184(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded186(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged187(final UnoObject jthis,final Object holder,final int f,final int w,final int h,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated188(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed189(final UnoObject jthis,final Object holder,long holderPtr);
    public static void AddCallback185(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.SurfaceView.AddCallback185(_this, handle);
    }
    
    public static Object Create190()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.Create190();
    }
    
    public static Object GetSurface191(final Object holder)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.GetSurface191(holder);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged193(final UnoObject jthis,final boolean value);
    public static void AddCallback192(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.AddCallback192(_this, handle);
    }
    
    public static Object Create194()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Switch.Create194();
    }
    
    public static void SetValue195(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.SetValue195(handle,value);
    }
    
    public static void MakeItPlain196(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEdit.MakeItPlain196(handle);
    }
    
    public static void CopyState197(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CopyState197(container,sourceHandle,targetHandle);
    }
    
    public static Object CreateContainer198()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateContainer198();
    }
    
    public static Object CreateTextEdit199()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateTextEdit199();
    }
    
    public static void AddView200(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.AddView200(parentHandle,childHandle);
    }
    
    public static Object Create201()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.Create201();
    }
    
    public static void RemoveView202(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.RemoveView202(parentHandle,childHandle);
    }
    
    public static void UpdateChildRect203(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.UpdateChildRect203(handle,x,y,w,h);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction205(final UnoObject jthis,final int actionCode);
    public static void AddEditorActionListener204(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddEditorActionListener204(_this, handle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged207(final UnoObject jthis,final String value);
    public static void AddTextChangedListener206(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddTextChangedListener206(_this, handle);
    }
    
    public static void ClearFocus208(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.ClearFocus208(handle);
    }
    
    public static Object Create1209()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextInput.Create1209();
    }
    
    public static boolean HasFocus210(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.TextInput.HasFocus210(viewHandle);
    }
    
    public static void RequestFocus211(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.RequestFocus211(viewHandle);
    }
    
    public static void SetCursorDrawableColor212(final UnoObject _this, final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetCursorDrawableColor212(_this, handle,color);
    }
    
    public static void SetImeOptions213(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetImeOptions213(handle,value);
    }
    
    public static void SetInputType214(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetInputType214(handle,value);
    }
    
    public static void SetPlaceholderColor215(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderColor215(handle,value);
    }
    
    public static void SetPlaceholderText216(final Object handle,final String value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderText216(handle,value);
    }
    
    public static void SetSelectionColor217(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetSelectionColor217(handle,color);
    }
    
    public static Object Create218()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextView.Create218();
    }
    
    public static void SetFont219(final Object handle,final Object fontHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFont219(handle,fontHandle);
    }
    
    public static void SetFontSize220(final Object handle,final float size)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFontSize220(handle,size);
    }
    
    public static void SetLineSpacing221(final Object handle,final float spacing)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetLineSpacing221(handle,spacing);
    }
    
    public static void SetMaxLength222(final Object handle,final int maxLength)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetMaxLength222(handle,maxLength);
    }
    
    public static void SetText223(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetText223(handle,text);
    }
    
    public static void SetTextAlignment224(final Object handle,final int alignment)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextAlignment224(handle,alignment);
    }
    
    public static void SetTextColor225(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextColor225(handle,color);
    }
    
    public static void SetTextWrapping226(final Object handle,final boolean wrap)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextWrapping226(handle,wrap);
    }
    
    public static Object CreateFromBundleFile227(final String bundlePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromBundleFile227(bundlePath);
    }
    
    public static Object CreateFromFileImpl228(final String path)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromFileImpl228(path);
    }
    
    public static Object GetDefault229()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.GetDefault229();
    }
    
    public static void BringToFront1230(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.View.BringToFront1230(handle);
    }
    
    public static void SetBackground231(final Object handle,final int argb)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetBackground231(handle,argb);
    }
    
    public static void SetEnabled232(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetEnabled232(handle,value);
    }
    
    public static void SetOpacity233(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetOpacity233(handle,value);
    }
    
    public static void SetPivotXY234(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetPivotXY234(handle,x,y);
    }
    
    public static void SetRotation235(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotation235(handle,value);
    }
    
    public static void SetRotationX236(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationX236(handle,value);
    }
    
    public static void SetRotationY237(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationY237(handle,value);
    }
    
    public static void SetScaleXY238(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetScaleXY238(handle,x,y);
    }
    
    public static void SetTranslation239(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetTranslation239(handle,x,y);
    }
    
    public static void SetVisible240(final Object handle,final boolean isVisible)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetVisible240(handle,isVisible);
    }
    
    public static void AddView241(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView241(parentHandle,childHandle);
    }
    
    public static void AddView1242(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView1242(parentHandle,childHandle,index);
    }
    
    public static Object Create243()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ViewGroup.Create243();
    }
    
    public static native boolean callUno_Func_Object(final com.foreign.Uno.Func_Object theDelegate,final Object arg,long argPtr);
    public static void InstallTouchInterceptCallback244(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.InstallTouchInterceptCallback244(handle,callback);
    }
    
    public static void RemoveView245(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.RemoveView245(parentHandle,childHandle);
    }
    
    public static void SetClipToBounds246(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetClipToBounds246(handle,clipToBounds);
    }
    
    public static void UpdateChildRect247(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.UpdateChildRect247(handle,x,y,w,h);
    }
    
    public static Object Download1248(final String url)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.ImageHandlePromise.Download1248(url);
    }
    
    public static Object LoadFile249(final String filePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadFile249(filePath);
    }
    
    public static Object LoadUri250(final String uri)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadUri250(uri);
    }
    
    public static void Release251(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.ImageLoader.Release251(bitmap);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared253(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion254(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError255(final UnoObject jthis,final int what,final int extra);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer256(final UnoObject jthis,final int percent);
    public static Object CreateMediaPlayer252(final UnoObject _this, final Object surfaceHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateMediaPlayer252(_this, surfaceHandle);
    }
    
    public static Object CreateSurface257(final UnoObject _this, final Object surfaceTexture)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurface257(_this, surfaceTexture);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable259(final UnoObject jthis);
    public static Object CreateSurfaceTexture258(final UnoObject _this, final int glHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurfaceTexture258(_this, glHandle);
    }
    
    public static void Dispose1260(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Dispose1260(mediaplayerHandle,surfaceHandle,surfaceTextureHandle);
    }
    
    public static int GetCurrentPosition261(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetCurrentPosition261(handle);
    }
    
    public static int GetDuration262(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetDuration262(handle);
    }
    
    public static int GetHeight263(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetHeight263(handle);
    }
    
    public static int GetOrientation264(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetOrientation264(handle);
    }
    
    public static int GetWidth265(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetWidth265(handle);
    }
    
    public static boolean IsHardwareAccelerated266()
    {
        return (boolean) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.IsHardwareAccelerated266();
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred268(final UnoObject jthis,final String msg);
    public static void LoadAsyncAsset267(final UnoObject _this, final Object handle,final String assetName)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncAsset267(_this, handle,assetName);
    }
    
    public static void LoadAsyncUrl269(final UnoObject _this, final Object handle,final String url)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncUrl269(_this, handle,url);
    }
    
    public static void Pause1270(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Pause1270(handle);
    }
    
    public static void Play1271(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Play1271(handle);
    }
    
    public static void SeekTo272(final Object handle,final int position)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SeekTo272(handle,position);
    }
    
    public static void SetVolume273(final Object handle,final float left,final float right)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SetVolume273(handle,left,right);
    }
    
    public static void UpdateTexture1274(final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.UpdateTexture1274(surfaceTextureHandle);
    }
    
    public static Object Create275(final String text)
    {
        return (Object) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.Create275(text);
    }
    
    public static int GetBaseLevel276(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetBaseLevel276(handle);
    }
    
    public static int GetRunCount277(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunCount277(handle);
    }
    
    public static int GetRunLevel278(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLevel278(handle,run);
    }
    
    public static int GetRunLimit279(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLimit279(handle,run);
    }
    
    public static int GetRunStart280(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunStart280(handle,run);
    }
    
    public static void AddJavascriptInterface281(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.AddJavascriptInterface281(handle,name,resultHandler);
    }
    
    public static boolean CanGoBack282(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoBack282(handle);
    }
    
    public static boolean CanGoForward283(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoForward283(handle);
    }
    
    public static native void callUno_Action_int(final com.foreign.Uno.Action_int theDelegate,final int arg);
    public static Object CreateAndSetWebChromeClient284(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebChromeClient284(webViewHandle,onProgress);
    }
    
    public static native void callUno_Action(final com.foreign.Uno.Action theDelegate);
    public static Object CreateAndSetWebViewClient285(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebViewClient285(webViewHandle,loaded,started,changed);
    }
    
    public static Object CreateWebView286(final boolean zoomEnabled)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateWebView286(zoomEnabled);
    }
    
    public static double GetProgress287(final Object handle)
    {
        return (double) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetProgress287(handle);
    }
    
    public static String GetTitle288(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetTitle288(handle);
    }
    
    public static String GetUrl289(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetUrl289(handle);
    }
    
    public static void GoBack290(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoBack290(handle);
    }
    
    public static void GoForward291(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoForward291(handle);
    }
    
    public static void LoadHtml292(final Object handle,final String html,final String baseUrl)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadHtml292(handle,html,baseUrl);
    }
    
    public static void LoadUrl293(final Object handle,final String url)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadUrl293(handle,url);
    }
    
    public static void Reload294(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.Reload294(handle);
    }
    
    public static void StopLoading295(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.StopLoading295(handle);
    }
    
    public static void ClearRootView296(final Object handle)
    {
        com.foreign.Fuse.Android.AppRoot.ClearRootView296(handle);
    }
    
    public static native void callUno_Fuse_Android_AppRoot_OnTouchEvent__298(final Object motionEvent,long motionEventPtr);
    public static Object CreateRootView297()
    {
        return (Object) com.foreign.Fuse.Android.AppRoot.CreateRootView297();
    }
    
    public static void SetRootView299(final Object handle,final Object rootHandle)
    {
        com.foreign.Fuse.Android.AppRoot.SetRootView299(handle,rootHandle);
    }
    
    public static void UpdateChildRect1300(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Android.AppRoot.UpdateChildRect1300(handle,x,y,w,h);
    }
    
    public static Object CreateBitmapARGB8888Impl301(final int width,final int height)
    {
        return (Object) com.foreign.Fuse.Android.Bitmap.CreateBitmapARGB8888Impl301(width,height);
    }
    
    public static void EraseColor1302(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.Bitmap.EraseColor1302(handle,color);
    }
    
    public static void Recycle1303(final Object handle)
    {
        com.foreign.Fuse.Android.Bitmap.Recycle1303(handle);
    }
    
    public static Object Create304(final Object bitmapHandle)
    {
        return (Object) com.foreign.Fuse.Android.Canvas.Create304(bitmapHandle);
    }
    
    public static void Translate1305(final Object handle,final float dx,final float dy)
    {
        com.foreign.Fuse.Android.Canvas.Translate1305(handle,dx,dy);
    }
    
    public static void TexImage2D306(final int target,final int level,final Object bitmap,final int border)
    {
        com.foreign.Fuse.Android.GLUtils.TexImage2D306(target,level,bitmap,border);
    }
    
    public static Object Create307(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create307(text,bufStart,bufEnd,paintHandle,outerWidth,align,spacingMult,spacingAdd,includePad,truncateAt,ellipsizedWith);
    }
    
    public static Object Create1308(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create1308(text,paintHandle,width,align,spacingMult,spacingAdd,includePad);
    }
    
    public static void Draw1309(final Object layoutHandle,final Object canvasHandle)
    {
        com.foreign.Fuse.Android.StaticLayout.Draw1309(layoutHandle,canvasHandle);
    }
    
    public static float GetDesiredWidthImpl310(final String text,final Object paintHandle)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetDesiredWidthImpl310(text,paintHandle);
    }
    
    public static int GetEllipsizedWidth311(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetEllipsizedWidth311(handle);
    }
    
    public static int GetHeight312(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetHeight312(handle);
    }
    
    public static int GetLineBaseline1313(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineBaseline1313(handle,line);
    }
    
    public static int GetLineCount314(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineCount314(handle);
    }
    
    public static int GetLineEnd1315(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineEnd1315(handle,line);
    }
    
    public static float GetLineLeft1316(final Object handle,final int line)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetLineLeft1316(handle,line);
    }
    
    public static int GetLineStart1317(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineStart1317(handle,line);
    }
    
    public static int GetWidth318(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetWidth318(handle);
    }
    
    public static int GetStatusBarColor319()
    {
        return (int) com.foreign.Fuse.Android.StatusBarHelper.GetStatusBarColor319();
    }
    
    public static native void callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar321();
    public static void InstallGlobalListener320()
    {
        com.foreign.Fuse.Android.StatusBarHelper.InstallGlobalListener320();
    }
    
    public static void SetStatusBarColor322(final int color)
    {
        com.foreign.Fuse.Android.StatusBarHelper.SetStatusBarColor322(color);
    }
    
    public static Object Create323()
    {
        return (Object) com.foreign.Fuse.Android.TextPaint.Create323();
    }
    
    public static void GetTextBounds324(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        com.foreign.Fuse.Android.TextPaint.GetTextBounds324(handle,text,start,end,r);
    }
    
    public static void SetAntiAlias325(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Android.TextPaint.SetAntiAlias325(handle,value);
    }
    
    public static void SetColor326(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.TextPaint.SetColor326(handle,color);
    }
    
    public static void SetTextSize327(final Object handle,final float textSize)
    {
        com.foreign.Fuse.Android.TextPaint.SetTextSize327(handle,textSize);
    }
    
    public static void SetTypeface328(final Object paintHandle,final Object typefaceHandle)
    {
        com.foreign.Fuse.Android.TextPaint.SetTypeface328(paintHandle,typefaceHandle);
    }
    
    public static String GetCacheDirectory329()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetCacheDirectory329();
    }
    
    public static String GetExternalCacheDirectory330()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalCacheDirectory330();
    }
    
    public static String GetExternalFilesDirectory331()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalFilesDirectory331();
    }
    
    public static String GetFilesDirectory332()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetFilesDirectory332();
    }
    
    public static String GetCacheDirectory333()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetCacheDirectory333();
    }
    
    public static String GetDataDirectory334()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetDataDirectory334();
    }
    
    public static int GetBuildVersion335()
    {
        return (int) com.foreign.Fuse.AndroidProperties.GetBuildVersion335();
    }
    
    public static String GetReleaseVersion336()
    {
        return (String) com.foreign.Fuse.AndroidProperties.GetReleaseVersion336();
    }
    
    public static native Object callUno_Neovisionaries_WebSocketClient__webSocketGet338(final UnoObject jthis);
    public static void Close337(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Close337(_this);
    }
    
    public static void Connect339(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Connect339(_this);
    }
    
    public static native void callUno_Action_ByteArray(final com.foreign.Uno.Action_ByteArray theDelegate,final com.uno.ByteArray arg);
    public static native void callUno_Neovisionaries_WebSocketClient__webSocketSet338(final UnoObject jthis,final Object setVal,long setValPtr);
    public static void Create340(final UnoObject _this, final String url,final com.uno.StringArray protocols,final com.foreign.Uno.Action open,final com.foreign.Uno.Action close,final com.foreign.Uno.Action_String error,final com.foreign.Uno.Action_String receiveMessageHandler,final com.foreign.Uno.Action_ByteArray receiveDataHandler)
    {
        com.foreign.Neovisionaries.WebSocketClient.Create340(_this, url,protocols,open,close,error,receiveMessageHandler,receiveDataHandler);
    }
    
    public static void Send341(final UnoObject _this, final com.uno.ByteArray data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send341(_this, data);
    }
    
    public static void Send1342(final UnoObject _this, final String data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send1342(_this, data);
    }
    
    public static void SetHeader343(final UnoObject _this, final String key,final String value)
    {
        com.foreign.Neovisionaries.WebSocketClient.SetHeader343(_this, key,value);
    }
    
}

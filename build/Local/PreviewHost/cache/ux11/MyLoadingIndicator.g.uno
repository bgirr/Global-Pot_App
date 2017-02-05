[Uno.Compiler.UxGenerated]
public partial class MyLoadingIndicator: Fuse.Controls.Panel
{
    float4 _field_ThemeColor;
    [global::Uno.UX.UXOriginSetter("SetThemeColor")]
    public float4 ThemeColor
    {
        get { return _field_ThemeColor; }
        set { SetThemeColor(value, null); }
    }
    public void SetThemeColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ThemeColor)
        {
            _field_ThemeColor = value;
            OnPropertyChanged("ThemeColor", origin);
        }
    }
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> this_ThemeColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<double> myTimeline_TargetProgress_inst;
    internal Fuse.Controls.Circle rotatingStroke;
    internal Fuse.Triggers.Timeline myTimeline;
    static MyLoadingIndicator()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyLoadingIndicator()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Drawing.Stroke();
        temp_Color_inst = new GlobalPot_FuseDrawingStroke_Color_Property(temp, __selector0);
        this_ThemeColor_inst = new GlobalPot_MyLoadingIndicator_ThemeColor_Property(this, __selector1);
        var temp1 = new Fuse.Controls.Circle();
        temp1_Color_inst = new GlobalPot_FuseControlsShape_Color_Property(temp1, __selector0);
        myTimeline = new Fuse.Triggers.Timeline();
        myTimeline_TargetProgress_inst = new GlobalPot_FuseTriggersTimeline_TargetProgress_Property(myTimeline, __selector2);
        rotatingStroke = new Fuse.Controls.Circle();
        var temp2 = new Fuse.Reactive.ReadPropertyBinding(temp_Color_inst, this_ThemeColor_inst);
        var temp3 = new Fuse.Animations.Scale();
        var temp4 = new Fuse.Animations.Scale();
        var temp5 = new Fuse.Reactive.ReadPropertyBinding(temp1_Color_inst, this_ThemeColor_inst);
        var temp6 = new Fuse.Triggers.WhileFalse();
        var temp7 = new Fuse.Animations.Cycle<double>(myTimeline_TargetProgress_inst);
        var temp8 = new Fuse.Animations.Spin();
        this.ThemeColor = float4(0.08235294f, 0.3960784f, 0.7529412f, 1f);
        rotatingStroke.StartAngleDegrees = -45f;
        rotatingStroke.EndAngleDegrees = 45f;
        rotatingStroke.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        rotatingStroke.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        rotatingStroke.Name = __selector3;
        rotatingStroke.Strokes.Add(temp);
        rotatingStroke.Bindings.Add(temp2);
        temp.Width = 2f;
        temp1.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp1.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(myTimeline);
        temp1.Bindings.Add(temp5);
        myTimeline.Name = __selector4;
        myTimeline.Animators.Add(temp3);
        myTimeline.Animators.Add(temp4);
        temp3.Factor = 0.5f;
        temp3.Duration = 0.25;
        temp3.Easing = Fuse.Animations.Easing.CircularOut;
        temp3.EasingBack = Fuse.Animations.Easing.CircularIn;
        temp4.Factor = 2f;
        temp4.Duration = 0.25;
        temp4.Delay = 0.25;
        temp4.Easing = Fuse.Animations.Easing.BounceOut;
        temp4.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp6.Animators.Add(temp7);
        temp6.Animators.Add(temp8);
        temp7.Low = 0f;
        temp7.High = 1f;
        temp7.Frequency = 0.5;
        temp8.Frequency = 1;
        temp8.Target = rotatingStroke;
        this.Children.Add(rotatingStroke);
        this.Children.Add(temp1);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "ThemeColor";
    static global::Uno.UX.Selector __selector2 = "TargetProgress";
    static global::Uno.UX.Selector __selector3 = "rotatingStroke";
    static global::Uno.UX.Selector __selector4 = "myTimeline";
}

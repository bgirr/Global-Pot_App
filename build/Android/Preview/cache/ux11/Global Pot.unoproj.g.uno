sealed class GlobalPot_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public GlobalPot_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get() { return _obj.Items; }
    public override void Set(object v, global::Uno.UX.IPropertyListener origin) { _obj.Items = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class GlobalPot_UnoUXStringConcatOperator_Right_Property: Uno.UX.Property<string>
{
    readonly Uno.UX.StringConcatOperator _obj;
    public GlobalPot_UnoUXStringConcatOperator_Right_Property(Uno.UX.StringConcatOperator obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Right; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Right = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class GlobalPot_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public GlobalPot_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class GlobalPot_FuseControlsImage_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public GlobalPot_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Url; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Url = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}

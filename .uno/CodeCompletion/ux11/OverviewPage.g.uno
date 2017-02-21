[Uno.Compiler.UxGenerated]
public partial class OverviewPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OverviewPage __parent;
        [Uno.WeakReference] internal readonly OverviewPage __parentInstance;
        public Template(OverviewPage parent, OverviewPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template1(Template parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "recipeName");
                var temp3 = new Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
                temp1.MaxWidth = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
                temp1.Alignment = Fuse.Elements.Alignment.Left;
                temp1.Margin = float4(0f, 10f, 0f, 0f);
                temp1.Opacity = 0.8f;
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
                temp1.Background = temp3;
                temp1.Children.Add(temp);
                temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
                temp.FontSize = 20f;
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Alignment = Fuse.Elements.Alignment.TopLeft;
                temp.Margin = float4(10f, 10f, 10f, 10f);
                temp.Font = global::MainView.Patua;
                temp.Bindings.Add(temp2);
                self.Children.Add(temp1);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template2: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template2(Template parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen7_Right_inst;
            internal Uno.UX.StringConcatOperator __gen7;
            static Template2()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen7 = new Uno.UX.StringConcatOperator();
                __gen7_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen7, __selector1);
                var temp = new Fuse.Triggers.WhileBusy();
                var temp1 = new Fuse.Controls.Rectangle();
                var temp2 = new Fuse.Drawing.Stroke();
                var temp3 = new Fuse.Reactive.DataBinding<string>(__gen7_Right_inst, "imageUrl");
                self.Margin = float4(0f, 0f, 0f, 5f);
                self.Name = __selector2;
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Left);
                temp.Nodes.Add(temp1);
                temp1.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
                temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
                temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
                temp1.Strokes.Add(temp2);
                temp2.Color = float4(0.8f, 0.8f, 0.8f, 1f);
                temp2.Width = 1f;
                __gen7.Left = "http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
                __gen7.Target = self_Url_inst;
                self.Children.Add(temp);
                self.Bindings.Add(temp3);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "__gen6";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        internal Fuse.Reactive.EventBinding temp_eb3;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.StackPanel();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Panel();
            var temp2 = new Template1(this, self);
            var __gen6 = new Template2(this, self);
            var temp3 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "images");
            var temp_eb3 = new Fuse.Reactive.EventBinding("recipe_clicked");
            global::Fuse.Gestures.Clicked.AddHandler(temp1, temp_eb3.OnEvent);
            temp1.Children.Add(temp);
            temp1.Bindings.Add(temp_eb3);
            temp.Templates.Add(temp2);
            temp.Templates.Add(__gen6);
            temp.Bindings.Add(temp3);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static OverviewPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public OverviewPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new Fuse.iOS.StatusBarConfig();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.Panel();
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new Fuse.Controls.DockPanel();
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Controls.Text();
        var temp9 = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp11 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp12 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp13 = new Fuse.Controls.ScrollView();
        var temp14 = new Fuse.Controls.DockPanel();
        var temp15 = new Fuse.Controls.StackPanel();
        var temp16 = new Fuse.Controls.StackPanel();
        var temp17 = new Template(this, this);
        var temp18 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipes");
        var temp19 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp20 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp1.IsVisible = false;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp12);
        temp2.Children.Add(temp13);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp3.Children.Add(temp4);
        temp4.Background = temp11;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.LineNumber = 2;
        temp5.FileName = "TopBar_Blank.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipes_API.js"));
        temp6.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Top);
        temp6.Background = temp10;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp9);
        temp7.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Children.Add(temp8);
        temp8.Value = "Global Pot";
        temp8.FontSize = 30f;
        temp8.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp8.Font = global::MainView.Patua;
        temp9.Alignment = Fuse.Elements.Alignment.Left;
        temp12.LineNumber = 8;
        temp12.FileName = "Overview.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipes_API.js"));
        temp13.Children.Add(temp14);
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        temp14.Background = temp19;
        temp14.Children.Add(temp15);
        temp15.Margin = float4(0f, 0f, 0f, 0f);
        temp15.Opacity = 10f;
        temp15.Children.Add(temp16);
        temp16.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp16.Children.Add(temp);
        temp.Templates.Add(temp17);
        temp.Bindings.Add(temp18);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp20;
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}

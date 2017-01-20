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
        global::Uno.UX.Property<string> self_Text_inst;
        internal Fuse.Reactive.EventBinding temp_eb3;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Button();
            self_Text_inst = new GlobalPot_FuseControlsButtonBase_Text_Property(self, __selector0);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Text_inst, "");
            var temp_eb3 = new Fuse.Reactive.EventBinding("foo");
            global::Fuse.Gestures.Clicked.AddHandler(self, temp_eb3.OnEvent);
            self.Bindings.Add(temp);
            self.Bindings.Add(temp_eb3);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OverviewPage __parent;
        [Uno.WeakReference] internal readonly OverviewPage __parentInstance;
        public Template1(OverviewPage parent, OverviewPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> self_Value_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Text();
            self_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(self, __selector0);
            var temp = new Fuse.Reactive.DataBinding<string>(self_Value_inst, "recipe.id");
            self.Visibility = Fuse.Elements.Visibility.Hidden;
            self.Bindings.Add(temp);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OverviewPage __parent;
        [Uno.WeakReference] internal readonly OverviewPage __parentInstance;
        public Template2(OverviewPage parent, OverviewPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template3: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template3(Template2 parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            static Template3()
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
                temp1.Margin = float4(0f, 20f, 0f, 0f);
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
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template4(Template2 parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen1_Right_inst;
            internal Uno.UX.StringConcatOperator __gen1;
            static Template4()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen1 = new Uno.UX.StringConcatOperator();
                __gen1_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
                var temp = new Fuse.Reactive.DataBinding<string>(__gen1_Right_inst, "imageUrl");
                self.Margin = float4(0f, 10f, 0f, 0f);
                self.Name = __selector2;
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Left);
                __gen1.Left = "http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
                __gen1.Target = self_Url_inst;
                self.Bindings.Add(temp);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "__gen0";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        internal Fuse.Reactive.EventBinding temp_eb4;
        static Template2()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.StackPanel();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Panel();
            var temp2 = new Template3(this, self);
            var __gen0 = new Template4(this, self);
            var temp3 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "images");
            var temp_eb4 = new Fuse.Reactive.EventBinding("recipe_clicked");
            global::Fuse.Gestures.Clicked.AddHandler(temp1, temp_eb4.OnEvent);
            temp1.Children.Add(temp);
            temp1.Bindings.Add(temp_eb4);
            temp.Templates.Add(temp2);
            temp.Templates.Add(__gen0);
            temp.Bindings.Add(temp3);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Reactive.EventBinding temp_eb2;
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
        var temp1 = new Fuse.Reactive.Each();
        temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector0);
        var temp2 = new Fuse.iOS.StatusBarConfig();
        var temp3 = new Fuse.Controls.DockPanel();
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new Fuse.Controls.DockPanel();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp12 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp13 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp14 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new Fuse.Controls.ScrollView();
        var temp16 = new Fuse.Controls.DockPanel();
        var temp17 = new Fuse.Controls.StackPanel();
        var temp18 = new Fuse.Controls.StackPanel();
        var temp19 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("foo");
        var temp20 = new Template(this, this);
        var temp21 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "items");
        var temp22 = new Template1(this, this);
        var temp23 = new Template2(this, this);
        var temp24 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "recipes");
        var temp25 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp26 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp2.IsVisible = false;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp14);
        temp3.Children.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Children.Add(temp5);
        temp5.Background = temp13;
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp6.LineNumber = 2;
        temp6.FileName = "TopBar.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Login.js"));
        temp7.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Top);
        temp7.Background = temp12;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp10);
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.Children.Add(temp9);
        temp9.Value = "Global Pot";
        temp9.FontSize = 30f;
        temp9.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp9.Font = global::MainView.Patua;
        temp10.Alignment = Fuse.Elements.Alignment.Left;
        temp10.Children.Add(temp11);
        temp11.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb1.OnEvent);
        temp11.Bindings.Add(temp_eb1);
        temp14.LineNumber = 9;
        temp14.FileName = "Overview.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp15.Children.Add(temp16);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Top);
        temp16.Background = temp25;
        temp16.Children.Add(temp17);
        temp17.Margin = float4(0f, 10f, 0f, 0f);
        temp17.Opacity = 10f;
        temp17.Children.Add(temp18);
        temp18.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp);
        temp18.Children.Add(temp1);
        temp19.Text = "D";
        global::Fuse.Gestures.Clicked.AddHandler(temp19, temp_eb2.OnEvent);
        temp19.Bindings.Add(temp_eb2);
        temp.Templates.Add(temp20);
        temp.Bindings.Add(temp21);
        temp1.Templates.Add(temp22);
        temp1.Templates.Add(temp23);
        temp1.Bindings.Add(temp24);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp26;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}

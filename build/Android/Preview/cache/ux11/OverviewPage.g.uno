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
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen1_Right_inst;
            internal Uno.UX.StringConcatOperator __gen1;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen1 = new Uno.UX.StringConcatOperator();
                __gen1_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
                var temp = new Fuse.Reactive.DataBinding<string>(__gen1_Right_inst, "imageUrl");
                self.Margin = float4(5f, 0f, 0f, 0f);
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
        global::Uno.UX.Property<string> temp1_Value_inst;
        internal Fuse.Reactive.EventBinding temp_eb2;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.StackPanel();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Text();
            temp1_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp2 = new Fuse.Controls.Panel();
            var temp3 = new Fuse.Controls.DockPanel();
            var __gen0 = new Template1(this, self);
            var temp4 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "images");
            var temp_eb2 = new Fuse.Reactive.EventBinding("recipe_clicked");
            var temp5 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "recipeName");
            global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb2.OnEvent);
            temp2.Children.Add(temp3);
            temp2.Bindings.Add(temp_eb2);
            temp3.Children.Add(temp);
            temp.Templates.Add(__gen0);
            temp.Bindings.Add(temp4);
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.Color = float4(1f, 1f, 1f, 1f);
            temp1.Alignment = Fuse.Elements.Alignment.BottomCenter;
            temp1.Margin = float4(10f, 10f, 10f, 10f);
            temp1.Font = global::MainView.Roboto;
            temp1.Bindings.Add(temp5);
            self.Children.Add(temp2);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb1;
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
        var temp10 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp11 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp12 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp13 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp14 = new Fuse.Controls.ScrollView();
        var temp15 = new Fuse.Controls.DockPanel();
        var temp16 = new Fuse.Controls.StackPanel();
        var temp17 = new Fuse.Controls.Text();
        var temp18 = new Fuse.Controls.StackPanel();
        var temp19 = new Template(this, this);
        var temp20 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipes");
        var temp21 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp1.IsVisible = false;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp13);
        temp2.Children.Add(temp14);
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        temp3.Children.Add(temp4);
        temp4.Background = temp12;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.LineNumber = 2;
        temp5.FileName = "TopBar.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Login.js"));
        temp6.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Top);
        temp6.Background = temp11;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp9);
        temp7.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Children.Add(temp8);
        temp8.Value = "Global Pot";
        temp8.FontSize = 30f;
        temp8.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp8.Font = global::MainView.Patua;
        temp9.Alignment = Fuse.Elements.Alignment.Left;
        temp9.Children.Add(temp10);
        temp10.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb1.OnEvent);
        temp10.Bindings.Add(temp_eb1);
        temp13.LineNumber = 8;
        temp13.FileName = "Overview.ux";
        temp13.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp14.Children.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        temp15.Background = temp21;
        temp15.Children.Add(temp16);
        temp16.Margin = float4(0f, 50f, 0f, 0f);
        temp16.Opacity = 10f;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp17.Value = "Rezepte";
        temp17.Color = float4(1f, 1f, 1f, 1f);
        temp17.Margin = float4(5f, 0f, 0f, 10f);
        temp17.Font = global::MainView.Patua;
        temp18.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp18.Children.Add(temp);
        temp.Templates.Add(temp19);
        temp.Bindings.Add(temp20);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}

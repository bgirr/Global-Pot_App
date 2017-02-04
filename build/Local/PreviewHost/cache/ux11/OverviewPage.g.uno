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
        global::Uno.UX.Property<string> self_Value_inst;
        static Template()
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
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OverviewPage __parent;
        [Uno.WeakReference] internal readonly OverviewPage __parentInstance;
        public Template1(OverviewPage parent, OverviewPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template2: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template1 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template2(Template1 parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            static Template2()
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
        public partial class Template3: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template1 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.StackPanel __parentInstance;
            public Template3(Template1 parent, Fuse.Controls.StackPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen1_Right_inst;
            internal Uno.UX.StringConcatOperator __gen1;
            static Template3()
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
        internal Fuse.Reactive.EventBinding temp_eb2;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.StackPanel();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Panel();
            var temp2 = new Template2(this, self);
            var __gen0 = new Template3(this, self);
            var temp3 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "images");
            var temp_eb2 = new Fuse.Reactive.EventBinding("recipe_clicked");
            global::Fuse.Gestures.Clicked.AddHandler(temp1, temp_eb2.OnEvent);
            temp1.Children.Add(temp);
            temp1.Bindings.Add(temp_eb2);
            temp.Templates.Add(temp2);
            temp.Templates.Add(__gen0);
            temp.Bindings.Add(temp3);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
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
            [Uno.WeakReference] internal readonly Fuse.Controls.Panel __parentInstance;
            public Template3(Template2 parent, Fuse.Controls.Panel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen3_Right_inst;
            internal Uno.UX.StringConcatOperator __gen3;
            static Template3()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen3 = new Uno.UX.StringConcatOperator();
                __gen3_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen3, __selector1);
                var temp = new Fuse.Reactive.DataBinding<string>(__gen3_Right_inst, "imageUrl");
                self.Margin = float4(0f, 10f, 0f, 0f);
                self.Name = __selector2;
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Left);
                __gen3.Left = "http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
                __gen3.Target = self_Url_inst;
                self.Bindings.Add(temp);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "__gen2";
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Panel();
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new Fuse.Reactive.Each();
            temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector1);
            var temp2 = new Fuse.Controls.DockPanel();
            var temp3 = new Fuse.Controls.Panel();
            var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "recipeName");
            var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0.2f, 0.2f, 0.2f, 1f));
            var __gen2 = new Template3(this, self);
            var temp6 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "images");
            temp2.Children.Add(temp3);
            temp3.MaxWidth = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            temp3.Alignment = Fuse.Elements.Alignment.Left;
            temp3.Margin = float4(0f, 20f, 0f, 0f);
            temp3.Opacity = 0.8f;
            global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
            temp3.Background = temp5;
            temp3.Children.Add(temp);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.FontSize = 20f;
            temp.Color = float4(1f, 1f, 1f, 1f);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(10f, 10f, 10f, 10f);
            temp.Font = global::MainView.Patua;
            temp.Bindings.Add(temp4);
            temp1.Templates.Add(__gen2);
            temp1.Bindings.Add(temp6);
            self.Children.Add(temp2);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Items";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp1_Visibility_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> temp3_Visibility_inst;
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
        var temp1 = new Fuse.Controls.StackPanel();
        temp1_Visibility_inst = new GlobalPot_FuseElementsElement_Visibility_Property(temp1, __selector1);
        var temp2 = new Fuse.Reactive.Each();
        temp2_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp2, __selector0);
        var temp3 = new Fuse.Controls.StackPanel();
        temp3_Visibility_inst = new GlobalPot_FuseElementsElement_Visibility_Property(temp3, __selector1);
        var temp4 = new Fuse.iOS.StatusBarConfig();
        var temp5 = new Fuse.Controls.DockPanel();
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new Fuse.Controls.DockPanel();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp14 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp16 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new Fuse.Controls.ScrollView();
        var temp18 = new Fuse.Controls.DockPanel();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Template(this, this);
        var temp21 = new Template1(this, this);
        var temp22 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipes");
        var temp23 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp1_Visibility_inst, "Overview");
        var temp24 = new Template2(this, this);
        var temp25 = new Fuse.Reactive.DataBinding<object>(temp2_Items_inst, "Rezept");
        var temp26 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp3_Visibility_inst, "RecipeView");
        var temp27 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp28 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp4.IsVisible = false;
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp16);
        temp5.Children.Add(temp17);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Top);
        temp6.Children.Add(temp7);
        temp7.Background = temp15;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp9);
        temp8.LineNumber = 2;
        temp8.FileName = "TopBar.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp9.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Background = temp14;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp12);
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp10.Children.Add(temp11);
        temp11.Value = "Global Pot";
        temp11.FontSize = 30f;
        temp11.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp11.Font = global::MainView.Patua;
        temp12.Alignment = Fuse.Elements.Alignment.Left;
        temp12.Children.Add(temp13);
        temp13.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb1.OnEvent);
        temp13.Bindings.Add(temp_eb1);
        temp16.LineNumber = 8;
        temp16.FileName = "Overview.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp17.Children.Add(temp18);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        temp18.Background = temp27;
        temp18.Children.Add(temp1);
        temp18.Children.Add(temp3);
        temp1.Margin = float4(0f, 10f, 0f, 0f);
        temp1.Opacity = 10f;
        temp1.Children.Add(temp19);
        temp1.Bindings.Add(temp23);
        temp19.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp19.Children.Add(temp);
        temp.Templates.Add(temp20);
        temp.Templates.Add(temp21);
        temp.Bindings.Add(temp22);
        temp3.Margin = float4(0f, 10f, 0f, 0f);
        temp3.Opacity = 10f;
        temp3.Children.Add(temp2);
        temp3.Bindings.Add(temp26);
        temp2.Templates.Add(temp24);
        temp2.Bindings.Add(temp25);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp28;
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Visibility";
}

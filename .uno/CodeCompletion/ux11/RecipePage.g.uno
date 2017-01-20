[Uno.Compiler.UxGenerated]
public partial class RecipePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Panel __parentInstance;
            public Template1(Template parent, Fuse.Controls.Panel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> self_Url_inst;
            global::Uno.UX.Property<string> __gen3_Right_inst;
            internal Uno.UX.StringConcatOperator __gen3;
            static Template1()
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
        static Template()
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
            var __gen2 = new Template1(this, self);
            var temp6 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "data.images");
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
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template1(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __gen4_Value_inst;
        global::Uno.UX.Property<string> __gen5_Right_inst;
        global::Uno.UX.Property<string> __gen5_Left_inst;
        global::Uno.UX.Property<string> __gen6_Right_inst;
        global::Uno.UX.Property<string> __gen7_Url_inst;
        global::Uno.UX.Property<string> __gen8_Right_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal Fuse.Controls.Text __gen4;
        internal Uno.UX.StringConcatOperator __gen5;
        internal Uno.UX.StringConcatOperator __gen6;
        internal Fuse.Controls.Image __gen7;
        internal Uno.UX.StringConcatOperator __gen8;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Grid();
            var __gen4 = new Fuse.Controls.Text();
            __gen4_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(__gen4, __selector0);
            var __gen5 = new Uno.UX.StringConcatOperator();
            __gen5_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen5, __selector1);
            __gen5_Left_inst = new GlobalPot_UnoUXStringConcatOperator_Left_Property(__gen5, __selector2);
            var __gen6 = new Uno.UX.StringConcatOperator();
            __gen6_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen6, __selector1);
            var __gen7 = new Fuse.Controls.Image();
            __gen7_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen7, __selector3);
            var __gen8 = new Uno.UX.StringConcatOperator();
            __gen8_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen8, __selector1);
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Rectangle();
            var temp2 = new Fuse.Controls.DockPanel();
            var temp3 = new Fuse.Controls.Panel();
            var temp4 = new Fuse.Reactive.DataBinding<string>(__gen5_Left_inst, "totalAmount");
            var temp5 = new Fuse.Reactive.DataBinding<string>(__gen6_Right_inst, "selectedMeasuringUnit.nameEn");
            var temp6 = new Fuse.Controls.Panel();
            var temp7 = new Fuse.Reactive.DataBinding<string>(__gen8_Right_inst, "ingredient.iconUrl");
            var temp8 = new Fuse.Controls.Panel();
            var temp9 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
            self.Rows = "auto";
            self.ColumnCount = 4;
            temp1.Children.Add(temp2);
            temp2.Children.Add(temp3);
            temp2.Children.Add(temp6);
            temp2.Children.Add(temp8);
            temp3.MinWidth = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp3.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp3.Margin = float4(15f, 15f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp3, 3);
            temp3.Children.Add(__gen4);
            __gen4.Color = float4(1f, 1f, 1f, 1f);
            __gen4.Margin = float4(5f, 0f, 0f, 0f);
            __gen4.Name = __selector4;
            __gen4.Font = global::MainView.Roboto;
            __gen4.Bindings.Add(temp4);
            __gen4.Bindings.Add(temp5);
            __gen5.Target = __gen4_Value_inst;
            __gen6.Left = " ";
            __gen6.Target = __gen5_Right_inst;
            temp6.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp6.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp6.Margin = float4(10f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp6, 2);
            temp6.Children.Add(__gen7);
            __gen7.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen7.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen7.Margin = float4(5f, 0f, 0f, 0f);
            __gen7.Name = __selector5;
            global::Fuse.Controls.DockPanel.SetDock(__gen7, Fuse.Layouts.Dock.Left);
            __gen7.Bindings.Add(temp7);
            __gen8.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
            __gen8.Target = __gen7_Url_inst;
            temp8.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp8.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp8.Margin = float4(40f, 15f, 0f, 0f);
            global::Fuse.Controls.Grid.SetColumn(temp8, 1);
            temp8.Children.Add(temp);
            temp.Color = float4(1f, 1f, 1f, 1f);
            temp.Margin = float4(5f, 0f, 0f, 0f);
            temp.Font = global::MainView.Roboto;
            temp.Bindings.Add(temp9);
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Right";
        static global::Uno.UX.Selector __selector2 = "Left";
        static global::Uno.UX.Selector __selector3 = "Url";
        static global::Uno.UX.Selector __selector4 = "__gen4";
        static global::Uno.UX.Selector __selector5 = "__gen7";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template2(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Rectangle();
            var temp = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            self.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
            self.Margin = float4(5f, 0f, 0f, 10f);
            self.Opacity = 0.2f;
            self.Name = __selector0;
            self.Fill = temp;
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "middleRectangle";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static RecipePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public RecipePage(
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
        temp_eb3 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp12 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp13 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp14 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new Fuse.Controls.ScrollView();
        var temp16 = new Fuse.Controls.DockPanel();
        var temp17 = new Fuse.Controls.StackPanel();
        var temp18 = new Template(this, this);
        var temp19 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "data");
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Template1(this, this);
        var middleRectangle = new Template2(this, this);
        var temp22 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "data.selectedIngredients");
        var temp23 = new Fuse.Controls.Text();
        var temp24 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp25 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
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
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Login.js"));
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
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb3.OnEvent);
        temp11.Bindings.Add(temp_eb3);
        temp14.LineNumber = 8;
        temp14.FileName = "RecipePage.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipes_API.js"));
        temp15.Children.Add(temp16);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Top);
        temp16.Background = temp24;
        temp16.Children.Add(temp17);
        temp17.Margin = float4(0f, 10f, 0f, 0f);
        temp17.Opacity = 10f;
        temp17.Children.Add(temp);
        temp17.Children.Add(temp20);
        temp17.Children.Add(temp1);
        temp17.Children.Add(temp23);
        temp.Templates.Add(temp18);
        temp.Bindings.Add(temp19);
        temp20.Value = "Zutaten";
        temp20.Color = float4(1f, 1f, 1f, 1f);
        temp20.Margin = float4(5f, 10f, 0f, 0f);
        temp20.Font = global::MainView.Patua;
        temp1.Templates.Add(temp21);
        temp1.Templates.Add(middleRectangle);
        temp1.Bindings.Add(temp22);
        temp23.Value = "Zubereitung";
        temp23.Color = float4(1f, 1f, 1f, 1f);
        temp23.Margin = float4(5f, 10f, 0f, 0f);
        temp23.Font = global::MainView.Patua;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp25;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}

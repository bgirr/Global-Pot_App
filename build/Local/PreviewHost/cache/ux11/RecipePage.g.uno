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
            global::Uno.UX.Property<string> __gen5_Right_inst;
            internal Uno.UX.StringConcatOperator __gen5;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen5 = new Uno.UX.StringConcatOperator();
                __gen5_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen5, __selector1);
                var temp = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "imageUrl");
                self.Margin = float4(0f, 10f, 0f, 0f);
                self.Name = __selector2;
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Left);
                __gen5.Left = "http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
                __gen5.Target = self_Url_inst;
                self.Bindings.Add(temp);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "__gen4";
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
            var __gen4 = new Template1(this, self);
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
            temp1.Templates.Add(__gen4);
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
        global::Uno.UX.Property<string> __gen6_Value_inst;
        global::Uno.UX.Property<string> __gen7_Right_inst;
        global::Uno.UX.Property<string> __gen7_Left_inst;
        global::Uno.UX.Property<string> __gen8_Right_inst;
        global::Uno.UX.Property<string> __gen9_Url_inst;
        global::Uno.UX.Property<string> __gen10_Right_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal Fuse.Controls.Text __gen6;
        internal Uno.UX.StringConcatOperator __gen7;
        internal Uno.UX.StringConcatOperator __gen8;
        internal Fuse.Controls.Image __gen9;
        internal Uno.UX.StringConcatOperator __gen10;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Grid();
            var __gen6 = new Fuse.Controls.Text();
            __gen6_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(__gen6, __selector0);
            var __gen7 = new Uno.UX.StringConcatOperator();
            __gen7_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen7, __selector1);
            __gen7_Left_inst = new GlobalPot_UnoUXStringConcatOperator_Left_Property(__gen7, __selector2);
            var __gen8 = new Uno.UX.StringConcatOperator();
            __gen8_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen8, __selector1);
            var __gen9 = new Fuse.Controls.Image();
            __gen9_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen9, __selector3);
            var __gen10 = new Uno.UX.StringConcatOperator();
            __gen10_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen10, __selector1);
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Rectangle();
            var temp2 = new Fuse.Controls.DockPanel();
            var temp3 = new Fuse.Controls.Panel();
            var temp4 = new Fuse.Reactive.DataBinding<string>(__gen7_Left_inst, "totalAmount");
            var temp5 = new Fuse.Reactive.DataBinding<string>(__gen8_Right_inst, "selectedMeasuringUnit.nameEn");
            var temp6 = new Fuse.Controls.Panel();
            var temp7 = new Fuse.Reactive.DataBinding<string>(__gen10_Right_inst, "ingredient.iconUrl");
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
            temp3.Children.Add(__gen6);
            __gen6.Color = float4(1f, 1f, 1f, 1f);
            __gen6.Margin = float4(5f, 0f, 0f, 0f);
            __gen6.Name = __selector4;
            __gen6.Font = global::MainView.Roboto;
            __gen6.Bindings.Add(temp4);
            __gen6.Bindings.Add(temp5);
            __gen7.Target = __gen6_Value_inst;
            __gen8.Left = " ";
            __gen8.Target = __gen7_Right_inst;
            temp6.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp6.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp6.Margin = float4(10f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp6, 2);
            temp6.Children.Add(__gen9);
            __gen9.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen9.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen9.Margin = float4(5f, 0f, 0f, 0f);
            __gen9.Name = __selector5;
            global::Fuse.Controls.DockPanel.SetDock(__gen9, Fuse.Layouts.Dock.Left);
            __gen9.Bindings.Add(temp7);
            __gen10.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
            __gen10.Target = __gen9_Url_inst;
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
        static global::Uno.UX.Selector __selector4 = "__gen6";
        static global::Uno.UX.Selector __selector5 = "__gen9";
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
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template3(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template3 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Grid __parentInstance;
            public Template4(Template3 parent, Fuse.Controls.Grid parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            static Template4()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Panel();
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp1 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Top);
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Margin = float4(5f, 0f, 0f, 0f);
                temp.Font = global::MainView.Roboto;
                temp.Bindings.Add(temp1);
                self.Children.Add(temp);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template5: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template3 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Grid __parentInstance;
            public Template5(Template3 parent, Fuse.Controls.Grid parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            global::Uno.UX.Property<string> temp1_Value_inst;
            static Template5()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Panel();
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp1 = new Fuse.Controls.Text();
                temp1_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp1, __selector0);
                var temp2 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredients[id]");
                var temp3 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "usedStepLocalId");
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Top);
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Margin = float4(5f, 0f, 0f, 0f);
                temp.Font = global::MainView.Roboto;
                temp.Bindings.Add(temp2);
                temp1.Color = float4(1f, 1f, 1f, 1f);
                temp1.Margin = float4(5f, 0f, 0f, 0f);
                temp1.Font = global::MainView.Roboto;
                temp1.Bindings.Add(temp3);
                self.Children.Add(temp);
                self.Children.Add(temp1);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<object> temp3_Items_inst;
        global::Uno.UX.Property<string> temp4_Value_inst;
        static Template3()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Grid();
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new Fuse.Reactive.Each();
            temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector1);
            var temp2 = new Fuse.Controls.Text();
            temp2_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp3 = new Fuse.Reactive.Each();
            temp3_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp3, __selector1);
            var temp4 = new Fuse.Controls.Text();
            temp4_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp4, __selector0);
            var temp5 = new Fuse.Controls.Rectangle();
            var temp6 = new Fuse.Controls.DockPanel();
            var temp7 = new Fuse.Controls.Panel();
            var temp8 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "localId");
            var temp9 = new Fuse.Controls.Panel();
            var temp10 = new Fuse.Controls.DockPanel();
            var temp11 = new Template4(this, self);
            var temp12 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "usedIngs");
            var temp13 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "ingredient.nameDe");
            var temp14 = new Template5(this, self);
            var temp15 = new Fuse.Reactive.DataBinding<object>(temp3_Items_inst, "usedResults");
            var temp16 = new Fuse.Controls.Panel();
            var temp17 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "procedure.nameDe");
            self.Rows = "auto";
            self.ColumnCount = 4;
            temp5.Children.Add(temp6);
            temp6.Children.Add(temp7);
            temp6.Children.Add(temp9);
            temp7.MinWidth = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp7.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp7.Margin = float4(15f, 15f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp7, 3);
            temp7.Children.Add(temp);
            temp.Color = float4(1f, 1f, 1f, 1f);
            temp.Margin = float4(5f, 0f, 0f, 0f);
            temp.Font = global::MainView.Roboto;
            temp.Bindings.Add(temp8);
            temp9.MinWidth = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp9.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp9.Margin = float4(15f, 15f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp9, 2);
            temp9.Children.Add(temp10);
            temp9.Children.Add(temp16);
            temp10.Children.Add(temp1);
            temp10.Children.Add(temp2);
            temp10.Children.Add(temp3);
            temp1.Templates.Add(temp11);
            temp1.Bindings.Add(temp12);
            temp2.Color = float4(1f, 1f, 1f, 1f);
            temp2.Margin = float4(5f, 0f, 0f, 0f);
            temp2.Font = global::MainView.Roboto;
            temp2.Bindings.Add(temp13);
            temp3.Templates.Add(temp14);
            temp3.Bindings.Add(temp15);
            temp16.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp16.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp16.Margin = float4(40f, 15f, 0f, 0f);
            global::Fuse.Controls.Grid.SetColumn(temp16, 1);
            temp16.Children.Add(temp4);
            temp4.Color = float4(1f, 1f, 1f, 1f);
            temp4.Margin = float4(100f, 0f, 0f, 0f);
            temp4.Font = global::MainView.Roboto;
            temp4.Bindings.Add(temp17);
            self.Children.Add(temp5);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Items";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template4(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
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
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<object> temp5_Items_inst;
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
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp2 = new Fuse.Reactive.Each();
        temp2_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp2, __selector0);
        var temp3 = new Fuse.Controls.Text();
        temp3_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp3, __selector1);
        var temp4 = new Fuse.Controls.Text();
        temp4_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp4, __selector1);
        var temp5 = new Fuse.Reactive.Each();
        temp5_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp5, __selector0);
        var temp6 = new Fuse.iOS.StatusBarConfig();
        var temp7 = new Fuse.Controls.DockPanel();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new Fuse.Controls.DockPanel();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new Fuse.Controls.Panel();
        var temp15 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp17 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp18 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp19 = new Fuse.Controls.ScrollView();
        var temp20 = new Fuse.Controls.DockPanel();
        var temp21 = new Fuse.Controls.StackPanel();
        var temp22 = new Template(this, this);
        var temp23 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "data");
        var temp24 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "Rezept.recipeName");
        var temp25 = new Template1(this, this);
        var middleRectangle = new Template2(this, this);
        var temp26 = new Fuse.Reactive.DataBinding<object>(temp2_Items_inst, "Rezept.selectedIngredients");
        var temp27 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "userId");
        var temp28 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "Rezept.steps[0].usedIngs[0].ingredient[0].nameDe");
        var temp29 = new Template3(this, this);
        var middleRectangle1 = new Template4(this, this);
        var temp30 = new Fuse.Reactive.DataBinding<object>(temp5_Items_inst, "Rezept.steps");
        var temp31 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp32 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp6.IsVisible = false;
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp18);
        temp7.Children.Add(temp19);
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        temp8.Children.Add(temp9);
        temp9.Background = temp17;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp10.LineNumber = 2;
        temp10.FileName = "TopBar.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp11.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp11.Background = temp16;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp14);
        temp12.Alignment = Fuse.Elements.Alignment.Center;
        temp12.Children.Add(temp13);
        temp13.Value = "Global Pot";
        temp13.FontSize = 30f;
        temp13.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp13.Font = global::MainView.Patua;
        temp14.Alignment = Fuse.Elements.Alignment.Left;
        temp14.Children.Add(temp15);
        temp15.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb3.OnEvent);
        temp15.Bindings.Add(temp_eb3);
        temp18.LineNumber = 9;
        temp18.FileName = "RecipePage.ux";
        temp18.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipe_API.js"));
        temp19.Children.Add(temp20);
        global::Fuse.Controls.DockPanel.SetDock(temp20, Fuse.Layouts.Dock.Top);
        temp20.Background = temp31;
        temp20.Children.Add(temp21);
        temp21.Margin = float4(0f, 10f, 0f, 0f);
        temp21.Opacity = 10f;
        temp21.Children.Add(temp);
        temp21.Children.Add(temp1);
        temp21.Children.Add(temp2);
        temp21.Children.Add(temp3);
        temp21.Children.Add(temp4);
        temp21.Children.Add(temp5);
        temp.Templates.Add(temp22);
        temp.Bindings.Add(temp23);
        temp1.Color = float4(1f, 1f, 1f, 1f);
        temp1.Margin = float4(5f, 10f, 0f, 0f);
        temp1.Font = global::MainView.Patua;
        temp1.Bindings.Add(temp24);
        temp2.Templates.Add(temp25);
        temp2.Templates.Add(middleRectangle);
        temp2.Bindings.Add(temp26);
        temp3.Color = float4(1f, 1f, 1f, 1f);
        temp3.Margin = float4(5f, 10f, 0f, 0f);
        temp3.Font = global::MainView.Patua;
        temp3.Bindings.Add(temp27);
        temp4.Color = float4(1f, 1f, 1f, 1f);
        temp4.Margin = float4(5f, 0f, 0f, 0f);
        temp4.Font = global::MainView.Roboto;
        temp4.Bindings.Add(temp28);
        temp5.Templates.Add(temp29);
        temp5.Templates.Add(middleRectangle1);
        temp5.Bindings.Add(temp30);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp32;
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
}

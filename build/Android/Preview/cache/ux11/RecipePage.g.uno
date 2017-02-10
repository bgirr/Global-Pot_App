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
            global::Uno.UX.Property<string> __gen9_Right_inst;
            internal Uno.UX.StringConcatOperator __gen9;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.Image();
                self_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(self, __selector0);
                var __gen9 = new Uno.UX.StringConcatOperator();
                __gen9_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen9, __selector1);
                var temp = new Fuse.Reactive.DataBinding<string>(__gen9_Right_inst, "imageUrl");
                self.Margin = float4(0f, 0f, 0f, 0f);
                self.Name = __selector2;
                global::Fuse.Controls.DockPanel.SetDock(self, Fuse.Layouts.Dock.Left);
                __gen9.Left = "http://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
                __gen9.Target = self_Url_inst;
                self.Bindings.Add(temp);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "__gen8";
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
            var __gen8 = new Template1(this, self);
            var temp6 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "images");
            temp2.Margin = float4(0f, 10f, 0f, 0f);
            temp2.Children.Add(temp3);
            temp3.MaxWidth = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            temp3.Alignment = Fuse.Elements.Alignment.Left;
            temp3.Margin = float4(0f, 0f, 0f, 0f);
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
            temp1.Templates.Add(__gen8);
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
        global::Uno.UX.Property<string> __gen10_Value_inst;
        global::Uno.UX.Property<string> __gen11_Right_inst;
        global::Uno.UX.Property<string> __gen11_Left_inst;
        global::Uno.UX.Property<string> __gen12_Right_inst;
        global::Uno.UX.Property<string> __gen13_Url_inst;
        global::Uno.UX.Property<string> __gen14_Right_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        internal Fuse.Controls.Text __gen10;
        internal Uno.UX.StringConcatOperator __gen11;
        internal Uno.UX.StringConcatOperator __gen12;
        internal Fuse.Controls.Image __gen13;
        internal Uno.UX.StringConcatOperator __gen14;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Grid();
            var __gen10 = new Fuse.Controls.Text();
            __gen10_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(__gen10, __selector0);
            var __gen11 = new Uno.UX.StringConcatOperator();
            __gen11_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen11, __selector1);
            __gen11_Left_inst = new GlobalPot_UnoUXStringConcatOperator_Left_Property(__gen11, __selector2);
            var __gen12 = new Uno.UX.StringConcatOperator();
            __gen12_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen12, __selector1);
            var __gen13 = new Fuse.Controls.Image();
            __gen13_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen13, __selector3);
            var __gen14 = new Uno.UX.StringConcatOperator();
            __gen14_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen14, __selector1);
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp1 = new Fuse.Controls.Rectangle();
            var temp2 = new Fuse.Controls.DockPanel();
            var temp3 = new Fuse.Controls.Panel();
            var temp4 = new Fuse.Reactive.DataBinding<string>(__gen11_Left_inst, "totalAmount");
            var temp5 = new Fuse.Reactive.DataBinding<string>(__gen12_Right_inst, "selectedMeasuringUnit.nameEn");
            var temp6 = new Fuse.Controls.Panel();
            var temp7 = new Fuse.Reactive.DataBinding<string>(__gen14_Right_inst, "ingredient.iconUrl");
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
            temp3.Children.Add(__gen10);
            __gen10.Color = float4(1f, 1f, 1f, 1f);
            __gen10.Margin = float4(5f, 0f, 0f, 0f);
            __gen10.Name = __selector4;
            __gen10.Font = global::MainView.Roboto;
            __gen10.Bindings.Add(temp4);
            __gen10.Bindings.Add(temp5);
            __gen11.Target = __gen10_Value_inst;
            __gen12.Left = " ";
            __gen12.Target = __gen11_Right_inst;
            temp6.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            temp6.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp6.Margin = float4(10f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp6, 2);
            temp6.Children.Add(__gen13);
            __gen13.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen13.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __gen13.Margin = float4(5f, 0f, 0f, 0f);
            __gen13.Name = __selector5;
            global::Fuse.Controls.DockPanel.SetDock(__gen13, Fuse.Layouts.Dock.Left);
            __gen13.Bindings.Add(temp7);
            __gen14.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
            __gen14.Target = __gen13_Url_inst;
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
        static global::Uno.UX.Selector __selector4 = "__gen10";
        static global::Uno.UX.Selector __selector5 = "__gen13";
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
            [Uno.WeakReference] internal readonly Fuse.Controls.Rectangle __parentInstance;
            public Template4(Template3 parent, Fuse.Controls.Rectangle parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __gen15_Url_inst;
            global::Uno.UX.Property<string> __gen16_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen15;
            internal Uno.UX.StringConcatOperator __gen16;
            static Template4()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen15 = new Fuse.Controls.Image();
                __gen15_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen15, __selector0);
                var __gen16 = new Uno.UX.StringConcatOperator();
                __gen16_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen16, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Reactive.DataBinding<string>(__gen16_Right_inst, "ingredient.iconUrl");
                var temp3 = new Fuse.Controls.Panel();
                var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen15);
                __gen15.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen15.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen15.Margin = float4(5f, 0f, 0f, 0f);
                __gen15.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen15, Fuse.Layouts.Dock.Left);
                __gen15.Bindings.Add(temp2);
                __gen16.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen16.Target = __gen15_Url_inst;
                temp3.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp3.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp3.Margin = float4(40f, 15f, 0f, 0f);
                global::Fuse.Controls.Grid.SetColumn(temp3, 1);
                temp3.Children.Add(temp);
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Margin = float4(0f, 0f, 0f, 0f);
                temp.Font = global::MainView.Roboto;
                temp.Bindings.Add(temp4);
                self.Background = temp5;
                self.Children.Add(temp1);
                self.Children.Add(temp3);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "Value";
            static global::Uno.UX.Selector __selector3 = "__gen15";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template5: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template3 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Rectangle __parentInstance;
            public Template5(Template3 parent, Fuse.Controls.Rectangle parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __gen17_Url_inst;
            global::Uno.UX.Property<string> __gen18_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen17;
            internal Uno.UX.StringConcatOperator __gen18;
            static Template5()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen17 = new Fuse.Controls.Image();
                __gen17_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen17, __selector0);
                var __gen18 = new Uno.UX.StringConcatOperator();
                __gen18_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen18, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Triggers.WhileBusy();
                var temp3 = new Fuse.Controls.Rectangle();
                var temp4 = new Fuse.Drawing.Stroke();
                var temp5 = new Fuse.Reactive.DataBinding<string>(__gen18_Right_inst, "ingredient.iconUrl");
                var temp6 = new Fuse.Controls.Panel();
                var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "usedStepLocalId");
                var temp8 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen17);
                __gen17.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen17.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen17.Margin = float4(5f, 0f, 0f, 0f);
                __gen17.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen17, Fuse.Layouts.Dock.Left);
                __gen17.Children.Add(temp2);
                __gen17.Bindings.Add(temp5);
                temp2.Nodes.Add(temp3);
                temp3.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
                temp3.Strokes.Add(temp4);
                temp4.Color = float4(0.8f, 0.8f, 0.8f, 1f);
                temp4.Width = 1f;
                __gen18.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen18.Target = __gen17_Url_inst;
                temp6.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp6.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp6.Margin = float4(40f, 0f, 0f, 0f);
                global::Fuse.Controls.Grid.SetColumn(temp6, 1);
                temp6.Children.Add(temp);
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Margin = float4(0f, 0f, 0f, 0f);
                temp.Font = global::MainView.Roboto;
                temp.Bindings.Add(temp7);
                self.Background = temp8;
                self.Children.Add(temp1);
                self.Children.Add(temp6);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Right";
            static global::Uno.UX.Selector __selector2 = "Value";
            static global::Uno.UX.Selector __selector3 = "__gen17";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        static Template3()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Rectangle();
            var temp = new Fuse.Reactive.Each();
            temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp1 = new Fuse.Reactive.Each();
            temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector0);
            var temp2 = new Fuse.Controls.Text();
            temp2_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp3 = new Fuse.Controls.StackPanel();
            var temp4 = new Template4(this, self);
            var temp5 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "usedIngs");
            var temp6 = new Template5(this, self);
            var temp7 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "usedResults");
            var temp8 = new Fuse.Controls.Panel();
            var temp9 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "procedure.nameDe");
            var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0.6313726f, 0.8196079f, 0.9137255f, 1f));
            var temp11 = new Fuse.Drawing.StaticSolidColor(float4(0.8941177f, 0.3921569f, 0.04313726f, 1f));
            temp3.ItemSpacing = 0f;
            temp3.Children.Add(temp);
            temp3.Children.Add(temp1);
            temp3.Children.Add(temp8);
            temp.Templates.Add(temp4);
            temp.Bindings.Add(temp5);
            temp1.Templates.Add(temp6);
            temp1.Bindings.Add(temp7);
            temp8.MinWidth = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp8.Margin = float4(0f, 0f, 0f, 0f);
            global::Fuse.Controls.Grid.SetColumn(temp8, 3);
            temp8.Background = temp10;
            temp8.Children.Add(temp2);
            temp2.Margin = float4(95f, 0f, 0f, 0f);
            temp2.Font = global::MainView.Roboto;
            temp2.Bindings.Add(temp9);
            self.Fill = temp11;
            self.Children.Add(temp3);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
        static global::Uno.UX.Selector __selector1 = "Value";
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
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb4;
    internal Fuse.Reactive.EventBinding temp_eb5;
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
        this_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp, __selector1);
        var temp1 = new Fuse.Reactive.Each();
        temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp2, __selector2);
        var temp3 = new Fuse.Reactive.Each();
        temp3_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp3, __selector1);
        var temp4 = new Fuse.iOS.StatusBarConfig();
        var temp5 = new Fuse.Navigation.EnteringAnimation();
        var temp6 = new Fuse.Animations.Move();
        var temp7 = new Fuse.Animations.Scale();
        var temp8 = new Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp9 = new Fuse.Controls.DockPanel();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Controls.Panel();
        var temp12 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp13 = new Fuse.Controls.DockPanel();
        var temp14 = new Fuse.Controls.Panel();
        var temp15 = new Fuse.Controls.Text();
        var temp16 = new Fuse.Controls.Panel();
        var temp17 = new Fuse.Controls.Image();
        var temp18 = new Fuse.Gestures.Tapped();
        var temp19 = new Fuse.Animations.Scale();
        var temp20 = new Fuse.Animations.Move();
        temp_eb4 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp21 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp22 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp23 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp24 = new Fuse.Controls.ScrollView();
        var temp25 = new Fuse.Controls.DockPanel();
        var temp26 = new Fuse.Controls.StackPanel();
        var temp27 = new Template(this, this);
        var temp28 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipe");
        var temp29 = new Fuse.Controls.Text();
        var temp30 = new Template1(this, this);
        var middleRectangle = new Template2(this, this);
        var temp31 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "recipe.selectedIngredients");
        var temp32 = new Fuse.Controls.Text();
        var temp33 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
        var temp34 = new Template3(this, this);
        var middleRectangle1 = new Template4(this, this);
        var temp35 = new Fuse.Reactive.DataBinding<object>(temp3_Items_inst, "recipe.steps");
        var temp36 = new Fuse.Controls.Panel();
        var temp37 = new Fuse.Controls.Text();
        var temp38 = new Fuse.Controls.Rectangle();
        var temp39 = new Fuse.Drawing.Stroke();
        var temp40 = new Fuse.Gestures.Tapped();
        var temp41 = new Fuse.Animations.Scale();
        temp_eb5 = new Fuse.Reactive.EventBinding("cooking_clicked");
        var temp42 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp43 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp4.IsVisible = false;
        temp5.Animators.Add(temp6);
        temp5.Animators.Add(temp7);
        temp5.Animators.Add(temp8);
        temp6.X = -1f;
        temp6.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp7.Factor = 0.75f;
        temp8.Value = 0.7f;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp23);
        temp9.Children.Add(temp24);
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Top);
        temp10.Children.Add(temp11);
        temp11.Background = temp22;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp13);
        temp12.LineNumber = 2;
        temp12.FileName = "TopBar.ux";
        temp12.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp13.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Top);
        temp13.Background = temp21;
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp16);
        temp14.Alignment = Fuse.Elements.Alignment.Center;
        temp14.Children.Add(temp15);
        temp15.Value = "Global Pot";
        temp15.FontSize = 30f;
        temp15.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp15.Font = global::MainView.Patua;
        temp16.Alignment = Fuse.Elements.Alignment.Left;
        temp16.Children.Add(temp17);
        temp17.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp17.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(10f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb4.OnEvent);
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../images/left-arrow.png"));
        temp17.Children.Add(temp18);
        temp17.Bindings.Add(temp_eb4);
        temp18.Animators.Add(temp19);
        temp18.Animators.Add(temp20);
        temp19.Factor = 1f;
        temp19.Duration = 0.8;
        temp20.X = -3f;
        temp20.Duration = 0.3;
        temp20.RelativeTo = Fuse.TranslationModes.Size;
        temp20.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp23.LineNumber = 14;
        temp23.FileName = "RecipePage.ux";
        temp23.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipe_API.js"));
        temp24.Children.Add(temp25);
        global::Fuse.Controls.DockPanel.SetDock(temp25, Fuse.Layouts.Dock.Top);
        temp25.Background = temp42;
        temp25.Children.Add(temp26);
        temp26.Margin = float4(0f, 0f, 0f, 0f);
        temp26.Opacity = 10f;
        temp26.Children.Add(temp);
        temp26.Children.Add(temp29);
        temp26.Children.Add(temp1);
        temp26.Children.Add(temp32);
        temp26.Children.Add(temp2);
        temp26.Children.Add(temp3);
        temp26.Children.Add(temp36);
        temp.Templates.Add(temp27);
        temp.Bindings.Add(temp28);
        temp29.Value = "Zutaten";
        temp29.Color = float4(1f, 1f, 1f, 1f);
        temp29.Margin = float4(5f, 10f, 0f, 0f);
        temp29.Font = global::MainView.Patua;
        temp1.Templates.Add(temp30);
        temp1.Templates.Add(middleRectangle);
        temp1.Bindings.Add(temp31);
        temp32.Value = "Zubereitung";
        temp32.Color = float4(1f, 1f, 1f, 1f);
        temp32.Margin = float4(5f, 10f, 0f, 0f);
        temp32.Font = global::MainView.Patua;
        temp2.Color = float4(1f, 1f, 1f, 1f);
        temp2.Margin = float4(5f, 0f, 0f, 0f);
        temp2.Font = global::MainView.Roboto;
        temp2.Bindings.Add(temp33);
        temp3.Templates.Add(temp34);
        temp3.Templates.Add(middleRectangle1);
        temp3.Bindings.Add(temp35);
        temp36.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp36.Margin = float4(50f, 0f, 50f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp36, temp_eb5.OnEvent);
        temp36.Children.Add(temp37);
        temp36.Children.Add(temp38);
        temp36.Bindings.Add(temp_eb5);
        temp37.Value = "Let's cook!";
        temp37.Color = Fuse.Drawing.Colors.White;
        temp37.Alignment = Fuse.Elements.Alignment.Center;
        temp37.Font = global::MainView.Patua;
        temp38.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp38.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp38.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp38.Margin = float4(0f, 0f, 0f, 0f);
        temp38.Strokes.Add(temp39);
        temp38.Children.Add(temp40);
        temp39.Color = Fuse.Drawing.Colors.White;
        temp39.Width = 3f;
        temp39.Offset = 4f;
        temp40.Animators.Add(temp41);
        temp41.Factor = 0.8f;
        temp41.Duration = 0.3;
        temp41.Easing = Fuse.Animations.Easing.QuadraticInOut;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp43;
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "Value";
}

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
                self.Margin = float4(0f, 0f, 0f, 0f);
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
            global::Uno.UX.Property<string> __gen9_Url_inst;
            global::Uno.UX.Property<string> __gen10_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen9;
            internal Uno.UX.StringConcatOperator __gen10;
            static Template4()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen9 = new Fuse.Controls.Image();
                __gen9_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen9, __selector0);
                var __gen10 = new Uno.UX.StringConcatOperator();
                __gen10_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen10, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Reactive.DataBinding<string>(__gen10_Right_inst, "ingredient.iconUrl");
                var temp3 = new Fuse.Controls.Panel();
                var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen9);
                __gen9.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen9.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen9.Margin = float4(5f, 0f, 0f, 0f);
                __gen9.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen9, Fuse.Layouts.Dock.Left);
                __gen9.Bindings.Add(temp2);
                __gen10.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen10.Target = __gen9_Url_inst;
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
            static global::Uno.UX.Selector __selector3 = "__gen9";
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
            global::Uno.UX.Property<string> __gen11_Url_inst;
            global::Uno.UX.Property<string> __gen12_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen11;
            internal Uno.UX.StringConcatOperator __gen12;
            static Template5()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen11 = new Fuse.Controls.Image();
                __gen11_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen11, __selector0);
                var __gen12 = new Uno.UX.StringConcatOperator();
                __gen12_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen12, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Triggers.WhileBusy();
                var temp3 = new Fuse.Controls.Rectangle();
                var temp4 = new Fuse.Drawing.Stroke();
                var temp5 = new Fuse.Reactive.DataBinding<string>(__gen12_Right_inst, "ingredient.iconUrl");
                var temp6 = new Fuse.Controls.Panel();
                var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "usedStepLocalId");
                var temp8 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen11);
                __gen11.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen11.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen11.Margin = float4(5f, 0f, 0f, 0f);
                __gen11.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen11, Fuse.Layouts.Dock.Left);
                __gen11.Children.Add(temp2);
                __gen11.Bindings.Add(temp5);
                temp2.Nodes.Add(temp3);
                temp3.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
                temp3.Strokes.Add(temp4);
                temp4.Color = float4(0.8f, 0.8f, 0.8f, 1f);
                temp4.Width = 1f;
                __gen12.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen12.Target = __gen11_Url_inst;
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
            static global::Uno.UX.Selector __selector3 = "__gen11";
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
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    internal Fuse.Reactive.EventBinding temp_eb2;
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
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp3 = new Fuse.Reactive.Each();
        temp3_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp3, __selector0);
        var temp4 = new Fuse.iOS.StatusBarConfig();
        var temp5 = new Fuse.Controls.DockPanel();
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new Fuse.Controls.DockPanel();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.Image();
        temp_eb2 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp14 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp16 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new Fuse.Controls.ScrollView();
        var temp18 = new Fuse.Controls.DockPanel();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Template(this, this);
        var temp21 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipe");
        var temp22 = new Fuse.Controls.Text();
        var temp23 = new Template1(this, this);
        var middleRectangle = new Template2(this, this);
        var temp24 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "recipe.selectedIngredients");
        var temp25 = new Fuse.Controls.Text();
        var temp26 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
        var temp27 = new Template3(this, this);
        var middleRectangle1 = new Template4(this, this);
        var temp28 = new Fuse.Reactive.DataBinding<object>(temp3_Items_inst, "recipe.steps");
        var temp29 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp30 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
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
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipes_API.js"));
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
        temp13.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp13.Margin = float4(10f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb2.OnEvent);
        temp13.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../images/left-arrow.png"));
        temp13.Bindings.Add(temp_eb2);
        temp16.LineNumber = 9;
        temp16.FileName = "RecipePage.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipe_API.js"));
        temp17.Children.Add(temp18);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        temp18.Background = temp29;
        temp18.Children.Add(temp19);
        temp19.Margin = float4(0f, 0f, 0f, 0f);
        temp19.Opacity = 10f;
        temp19.Children.Add(temp);
        temp19.Children.Add(temp22);
        temp19.Children.Add(temp1);
        temp19.Children.Add(temp25);
        temp19.Children.Add(temp2);
        temp19.Children.Add(temp3);
        temp.Templates.Add(temp20);
        temp.Bindings.Add(temp21);
        temp22.Value = "Zutaten";
        temp22.Color = float4(1f, 1f, 1f, 1f);
        temp22.Margin = float4(5f, 10f, 0f, 0f);
        temp22.Font = global::MainView.Patua;
        temp1.Templates.Add(temp23);
        temp1.Templates.Add(middleRectangle);
        temp1.Bindings.Add(temp24);
        temp25.Value = "Zubereitung";
        temp25.Color = float4(1f, 1f, 1f, 1f);
        temp25.Margin = float4(5f, 10f, 0f, 0f);
        temp25.Font = global::MainView.Patua;
        temp2.Color = float4(1f, 1f, 1f, 1f);
        temp2.Margin = float4(5f, 0f, 0f, 0f);
        temp2.Font = global::MainView.Roboto;
        temp2.Bindings.Add(temp26);
        temp3.Templates.Add(temp27);
        temp3.Templates.Add(middleRectangle1);
        temp3.Bindings.Add(temp28);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp30;
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
}

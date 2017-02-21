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
            self.Columns = "auto";
            self.ColumnCount = 3;
            temp1.Children.Add(temp2);
            temp2.Children.Add(temp3);
            temp2.Children.Add(temp6);
            temp2.Children.Add(temp8);
            temp3.MinWidth = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp3.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp3.Margin = float4(15f, 15f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Left);
            global::Fuse.Controls.Grid.SetColumn(temp3, 1);
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
            temp8.MinWidth = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp8.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp8.MaxWidth = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp8.Margin = float4(40f, 15f, 0f, 0f);
            global::Fuse.Controls.Grid.SetColumn(temp8, 3);
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
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly RecipePage __parent;
        [Uno.WeakReference] internal readonly RecipePage __parentInstance;
        public Template5(RecipePage parent, RecipePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template6: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template5 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Panel __parentInstance;
            public Template6(Template5 parent, Fuse.Controls.Panel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            [Uno.Compiler.UxGenerated]
            public partial class Template7: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template6 __parent;
                [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                public Template7(Template6 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                global::Uno.UX.Property<string> __gen15_Url_inst;
                global::Uno.UX.Property<string> __gen16_Right_inst;
                global::Uno.UX.Property<string> temp_Value_inst;
                internal Fuse.Controls.Image __gen15;
                internal Uno.UX.StringConcatOperator __gen16;
                static Template7()
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
                    var temp2 = new Fuse.Reactive.DataBinding<string>(__gen16_Right_inst, "iconUrl");
                    var temp3 = new Fuse.Controls.Panel();
                    var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "nameDe");
                    var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7411765f, 0.7411765f, 1f));
                    self.MaxWidth = new Uno.UX.Size(99f, Uno.UX.Unit.Percent);
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
                    temp3.Margin = float4(40f, 0f, 0f, 0f);
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
            global::Uno.UX.Property<object> self_Items_inst;
            static Template6()
            {
            }
            public override object New()
            {
                var self = new Fuse.Reactive.Each();
                self_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(self, __selector0);
                var temp = new Template7(this, self);
                var temp1 = new Fuse.Reactive.DataBinding<object>(self_Items_inst, "ingredients");
                self.Templates.Add(temp);
                self.Bindings.Add(temp1);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Items";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template7: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template5 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Panel __parentInstance;
            public Template7(Template5 parent, Fuse.Controls.Panel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __gen17_Url_inst;
            global::Uno.UX.Property<string> __gen18_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen17;
            internal Uno.UX.StringConcatOperator __gen18;
            static Template7()
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
                var temp2 = new Fuse.Reactive.DataBinding<string>(__gen18_Right_inst, "ingredient.iconUrl");
                var temp3 = new Fuse.Controls.Panel();
                var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                self.MaxWidth = new Uno.UX.Size(99f, Uno.UX.Unit.Percent);
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 5f, 5f, 5f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen17);
                __gen17.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen17.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen17.Margin = float4(5f, 0f, 0f, 0f);
                __gen17.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen17, Fuse.Layouts.Dock.Left);
                __gen17.Bindings.Add(temp2);
                __gen18.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen18.Target = __gen17_Url_inst;
                temp3.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp3.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp3.Margin = float4(40f, 0f, 0f, 0f);
                global::Fuse.Controls.Grid.SetColumn(temp3, 1);
                temp3.Children.Add(temp);
                temp.Color = float4(1f, 1f, 1f, 1f);
                temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
                temp.Margin = float4(0f, 5f, 0f, 0f);
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
            static global::Uno.UX.Selector __selector3 = "__gen17";
        }
        global::Uno.UX.Property<float> temp_Degrees_inst;
        global::Uno.UX.Property<string> __gen13_Value_inst;
        global::Uno.UX.Property<string> __gen14_Right_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.Property<object> temp2_Items_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        global::Uno.UX.Property<Uno.UX.FileSource> temp4_File_inst;
        global::Uno.UX.Property<float> visited_Opacity_inst;
        global::Uno.UX.Property<float> visitedOverlay_Opacity_inst;
        global::Uno.UX.Property<float> shadow_Distance_inst;
        global::Uno.UX.Property<float> shadow_Size_inst;
        internal Fuse.Controls.Text __gen13;
        internal Uno.UX.StringConcatOperator __gen14;
        internal Fuse.Controls.Image visited;
        internal Fuse.Effects.DropShadow shadow;
        internal Fuse.Controls.Image notVisited;
        internal Fuse.Controls.Image visitedOverlay;
        internal Fuse.Controls.Image notVisitedOverlay;
        static Template5()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Panel();
            var temp = new Fuse.Rotation();
            temp_Degrees_inst = new GlobalPot_FuseRotation_Degrees_Property(temp, __selector0);
            var __gen13 = new Fuse.Controls.Text();
            __gen13_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(__gen13, __selector1);
            var __gen14 = new Uno.UX.StringConcatOperator();
            __gen14_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen14, __selector2);
            var temp1 = new Fuse.Reactive.Each();
            temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector3);
            var temp2 = new Fuse.Reactive.Each();
            temp2_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp2, __selector3);
            var temp3 = new Fuse.Controls.Text();
            temp3_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp3, __selector1);
            var temp4 = new Fuse.Controls.Image();
            temp4_File_inst = new GlobalPot_FuseControlsImage_File_Property(temp4, __selector4);
            var visited = new Fuse.Controls.Image();
            visited_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(visited, __selector5);
            var visitedOverlay = new Fuse.Controls.Image();
            visitedOverlay_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(visitedOverlay, __selector5);
            var shadow = new Fuse.Effects.DropShadow();
            shadow_Distance_inst = new GlobalPot_FuseEffectsDropShadow_Distance_Property(shadow, __selector6);
            shadow_Size_inst = new GlobalPot_FuseEffectsDropShadow_Size_Property(shadow, __selector7);
            var temp5 = new Fuse.Controls.Rectangle();
            var temp6 = new Fuse.Reactive.DataBinding<float>(temp_Degrees_inst, "degrees");
            var temp7 = new Fuse.Controls.StackPanel();
            var temp8 = new Fuse.Controls.Panel();
            var temp9 = new Fuse.Controls.Rectangle();
            var temp10 = new Fuse.Reactive.DataBinding<string>(__gen14_Right_inst, "localId");
            var temp11 = new Fuse.Drawing.Stroke();
            var temp12 = new Fuse.Controls.StackPanel();
            var temp13 = new Template6(this, self);
            var temp14 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "usedResults");
            var temp15 = new Template7(this, self);
            var temp16 = new Fuse.Reactive.DataBinding<object>(temp2_Items_inst, "usedIngs");
            var temp17 = new Fuse.Controls.Panel();
            var temp18 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "procedure.nameDe");
            var temp19 = new Fuse.Drawing.StaticSolidColor(float4(0.6313726f, 0.8196079f, 0.9137255f, 1f));
            var notVisited = new Fuse.Controls.Image();
            var notVisitedOverlay = new Fuse.Controls.Image();
            var temp20 = new Fuse.Reactive.DataBinding<Uno.UX.FileSource>(temp4_File_inst, "imageKey");
            var temp21 = new Fuse.Controls.Panel();
            var temp22 = new Fuse.Drawing.StaticSolidColor(float4(0.9254902f, 0.9411765f, 0.9607843f, 1f));
            var temp23 = new Fuse.Physics.InForceFieldAnimation();
            var temp24 = new Fuse.Animations.Change<float>(visited_Opacity_inst);
            var temp25 = new Fuse.Animations.Change<float>(visitedOverlay_Opacity_inst);
            var temp26 = new Fuse.Physics.InForceFieldAnimation();
            var temp27 = new Fuse.Animations.Rotate();
            var temp28 = new Fuse.Physics.InForceFieldAnimation();
            var temp29 = new Fuse.Animations.Change<float>(visited_Opacity_inst);
            var temp30 = new Fuse.Animations.Change<float>(visitedOverlay_Opacity_inst);
            var temp31 = new Fuse.Physics.InForceFieldAnimation();
            var temp32 = new Fuse.Animations.Rotate();
            var temp33 = new Fuse.Physics.Draggable();
            var temp34 = new Fuse.Physics.WhileDragging();
            var temp35 = new Fuse.Triggers.Actions.BringToFront();
            var temp36 = new Fuse.Animations.Scale();
            var temp37 = new Fuse.Animations.Change<float>(shadow_Distance_inst);
            var temp38 = new Fuse.Animations.Change<float>(shadow_Size_inst);
            self.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
            self.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Percent);
            self.Alignment = Fuse.Elements.Alignment.BottomCenter;
            self.Margin = float4(0f, 0f, 0f, 0f);
            temp5.Children.Add(temp);
            temp5.Children.Add(temp7);
            temp5.Children.Add(temp21);
            temp5.Children.Add(temp23);
            temp5.Children.Add(temp26);
            temp5.Children.Add(temp28);
            temp5.Children.Add(temp31);
            temp5.Children.Add(temp33);
            temp5.Children.Add(temp34);
            temp.Bindings.Add(temp6);
            temp7.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp7.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp7.Children.Add(temp8);
            temp7.Children.Add(temp12);
            temp7.Children.Add(notVisited);
            temp7.Children.Add(visitedOverlay);
            temp7.Children.Add(notVisitedOverlay);
            temp7.Children.Add(temp4);
            temp8.Children.Add(temp9);
            temp9.Strokes.Add(temp11);
            temp9.Children.Add(__gen13);
            temp9.Children.Add(visited);
            __gen13.FontSize = 30f;
            __gen13.Alignment = Fuse.Elements.Alignment.Center;
            __gen13.Margin = float4(0f, 0f, 20f, 0f);
            __gen13.Name = __selector8;
            __gen13.Font = global::MainView.Patua;
            __gen13.Bindings.Add(temp10);
            __gen14.Left = "Schritt ";
            __gen14.Target = __gen13_Value_inst;
            visited.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            visited.Alignment = Fuse.Elements.Alignment.TopLeft;
            visited.Margin = float4(10f, 0f, 10f, 0f);
            visited.Opacity = 0f;
            visited.Name = __selector9;
            visited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Emblems/visited.png"));
            temp11.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
            temp11.Width = 3f;
            temp12.Color = float4(0.9254902f, 0.9411765f, 0.9607843f, 1f);
            temp12.MinWidth = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp12.MinHeight = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp12.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp12.Margin = float4(0f, 0f, 0f, 10f);
            temp12.Children.Add(temp1);
            temp12.Children.Add(temp2);
            temp12.Children.Add(temp17);
            temp12.Children.Add(shadow);
            temp1.Templates.Add(temp13);
            temp1.Bindings.Add(temp14);
            temp2.Templates.Add(temp15);
            temp2.Bindings.Add(temp16);
            temp17.MinWidth = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp17.Margin = float4(0f, 0f, 0f, 0f);
            global::Fuse.Controls.Grid.SetColumn(temp17, 3);
            temp17.Background = temp19;
            temp17.Children.Add(temp3);
            temp3.Margin = float4(95f, 0f, 0f, 0f);
            temp3.Font = global::MainView.Roboto;
            temp3.Bindings.Add(temp18);
            shadow.Size = 2f;
            shadow.Distance = 0f;
            shadow.Name = __selector10;
            notVisited.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            notVisited.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            notVisited.Margin = float4(10f, 0f, 10f, 0f);
            notVisited.Opacity = 0f;
            notVisited.Name = __selector11;
            notVisited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Emblems/visited.png"));
            visitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            visitedOverlay.Opacity = 0f;
            visitedOverlay.Name = __selector12;
            global::Fuse.Controls.DockPanel.SetDock(visitedOverlay, Fuse.Layouts.Dock.Fill);
            visitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Emblems/VisitedOverlay.png"));
            notVisitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            notVisitedOverlay.Opacity = 0f;
            notVisitedOverlay.Name = __selector13;
            global::Fuse.Controls.DockPanel.SetDock(notVisitedOverlay, Fuse.Layouts.Dock.Fill);
            notVisitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Emblems/VisitedOverlay.png"));
            temp4.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            temp4.Margin = float4(0f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Fill);
            temp4.Bindings.Add(temp20);
            temp21.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp21.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp21.Margin = float4(0f, 0f, 0f, 0f);
            temp21.Background = temp22;
            temp23.From = 0.1f;
            temp23.To = 0.3f;
            temp23.ForceField = __parent.visitedAttractor;
            temp23.Animators.Add(temp24);
            temp23.Animators.Add(temp25);
            temp24.Value = 1f;
            temp24.Duration = 1;
            temp25.Value = 1f;
            temp25.Duration = 1;
            temp26.ForceField = __parent.visitedAttractor;
            temp26.Animators.Add(temp27);
            temp27.Degrees = -8f;
            temp28.From = 0.1f;
            temp28.To = 0.3f;
            temp28.ForceField = __parent.notVisitedAttractor;
            temp28.Animators.Add(temp29);
            temp28.Animators.Add(temp30);
            temp29.Value = 1f;
            temp29.Duration = 1;
            temp30.Value = 1f;
            temp30.Duration = 1;
            temp31.ForceField = __parent.notVisitedAttractor;
            temp31.Animators.Add(temp32);
            temp32.Degrees = 8f;
            temp34.Animators.Add(temp36);
            temp34.Animators.Add(temp37);
            temp34.Animators.Add(temp38);
            temp34.Actions.Add(temp35);
            temp36.Factor = 1.1f;
            temp36.Duration = 0.5;
            temp36.Easing = Fuse.Animations.Easing.BackOut;
            temp37.Value = 20f;
            temp37.Duration = 0.5;
            temp37.Easing = Fuse.Animations.Easing.BackOut;
            temp38.Value = 20f;
            temp38.Duration = 0.5;
            temp38.Easing = Fuse.Animations.Easing.BackOut;
            self.Children.Add(temp5);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Degrees";
        static global::Uno.UX.Selector __selector1 = "Value";
        static global::Uno.UX.Selector __selector2 = "Right";
        static global::Uno.UX.Selector __selector3 = "Items";
        static global::Uno.UX.Selector __selector4 = "File";
        static global::Uno.UX.Selector __selector5 = "Opacity";
        static global::Uno.UX.Selector __selector6 = "Distance";
        static global::Uno.UX.Selector __selector7 = "Size";
        static global::Uno.UX.Selector __selector8 = "__gen13";
        static global::Uno.UX.Selector __selector9 = "visited";
        static global::Uno.UX.Selector __selector10 = "shadow";
        static global::Uno.UX.Selector __selector11 = "notVisited";
        static global::Uno.UX.Selector __selector12 = "visitedOverlay";
        static global::Uno.UX.Selector __selector13 = "notVisitedOverlay";
    }
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.Property<object> temp4_Items_inst;
    global::Uno.UX.Property<float> centerAttractor_Radius_inst;
    global::Uno.UX.Property<float> centerAttractor_Strength_inst;
    global::Uno.UX.Property<bool> temp5_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Physics.PointAttractor centerAttractor;
    internal Fuse.Physics.PointAttractor notVisitedAttractor;
    internal Fuse.Physics.PointAttractor visitedAttractor;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "centerAttractor",
        "notVisitedAttractor",
        "visitedAttractor"
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
        var temp4 = new Fuse.Reactive.Each();
        temp4_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp4, __selector1);
        centerAttractor = new Fuse.Physics.PointAttractor();
        centerAttractor_Radius_inst = new GlobalPot_FusePhysicsPointAttractor_Radius_Property(centerAttractor, __selector3);
        centerAttractor_Strength_inst = new GlobalPot_FusePhysicsPointAttractor_Strength_Property(centerAttractor, __selector4);
        var temp5 = new Fuse.Triggers.WhileTrue();
        temp5_Value_inst = new GlobalPot_FuseTriggersWhileBool_Value_Property(temp5, __selector2);
        var temp6 = new Fuse.iOS.StatusBarConfig();
        var temp7 = new Fuse.Navigation.EnteringAnimation();
        var temp8 = new Fuse.Animations.Move();
        var temp9 = new Fuse.Animations.Scale();
        var temp10 = new Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp11 = new Fuse.Controls.DockPanel();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Controls.Panel();
        var temp14 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new Fuse.Controls.DockPanel();
        var temp16 = new Fuse.Controls.Panel();
        var temp17 = new Fuse.Controls.Text();
        var temp18 = new Fuse.Controls.Panel();
        var temp19 = new Fuse.Controls.Image();
        var temp20 = new Fuse.Gestures.Tapped();
        var temp21 = new Fuse.Animations.Scale();
        var temp22 = new Fuse.Animations.Move();
        temp_eb2 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp23 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp24 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp25 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp26 = new Fuse.Controls.ScrollView();
        var temp27 = new Fuse.Controls.DockPanel();
        var temp28 = new Fuse.Controls.StackPanel();
        var temp29 = new Template(this, this);
        var temp30 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "Rezept");
        var temp31 = new Fuse.Controls.Text();
        var temp32 = new Template1(this, this);
        var middleRectangle = new Template2(this, this);
        var temp33 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "Rezept.selectedIngredients");
        var temp34 = new Fuse.Controls.Text();
        var temp35 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "recipe.steps[0].usedIngs[0].ingredient[0].nameDe");
        var temp36 = new Template3(this, this);
        var middleRectangle1 = new Template4(this, this);
        var temp37 = new Fuse.Reactive.DataBinding<object>(temp3_Items_inst, "recipe.steps");
        var temp38 = new Fuse.Controls.Panel();
        var temp39 = new Fuse.Controls.Page();
        var temp40 = new Fuse.iOS.StatusBarConfig();
        var temp41 = new Fuse.Controls.DockPanel();
        var temp42 = new Fuse.Controls.Panel();
        var temp43 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp44 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp45 = new Fuse.Controls.Panel();
        var temp46 = new Fuse.iOS.StatusBarConfig();
        var temp47 = new Template5(this, this);
        var temp48 = new Fuse.Reactive.DataBinding<object>(temp4_Items_inst, "Rezept.steps");
        notVisitedAttractor = new Fuse.Physics.PointAttractor();
        visitedAttractor = new Fuse.Physics.PointAttractor();
        var temp49 = new Fuse.Animations.Change<float>(centerAttractor_Radius_inst);
        var temp50 = new Fuse.Animations.Change<float>(centerAttractor_Strength_inst);
        var temp51 = new Fuse.Reactive.DataBinding<bool>(temp5_Value_inst, "resetting");
        var temp52 = new Fuse.Controls.DockPanel();
        var temp53 = new Fuse.Controls.Image();
        temp_eb3 = new Fuse.Reactive.EventBinding("reset");
        var temp54 = new Fuse.Controls.Text();
        var temp55 = new Fuse.Controls.Image();
        var temp56 = new Fuse.Drawing.StaticSolidColor(float4(0.9254902f, 0.9411765f, 0.9607843f, 1f));
        var temp57 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp58 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp6.IsVisible = false;
        temp7.Animators.Add(temp8);
        temp7.Animators.Add(temp9);
        temp7.Animators.Add(temp10);
        temp8.X = -1f;
        temp8.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp9.Factor = 0.75f;
        temp10.Value = 0.7f;
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp25);
        temp11.Children.Add(temp26);
        global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
        temp12.Children.Add(temp13);
        temp13.Background = temp24;
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp14.LineNumber = 2;
        temp14.FileName = "TopBar.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Recipes_API.js"));
        temp15.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(0f, 28f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        temp15.Background = temp23;
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp18);
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.Children.Add(temp17);
        temp17.Value = "Global Pot";
        temp17.FontSize = 30f;
        temp17.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp17.Font = global::MainView.Patua;
        temp18.Alignment = Fuse.Elements.Alignment.Left;
        temp18.Children.Add(temp19);
        temp19.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp19.Margin = float4(10f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp19, temp_eb2.OnEvent);
        temp19.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../images/left-arrow.png"));
        temp19.Children.Add(temp20);
        temp19.Bindings.Add(temp_eb2);
        temp20.Animators.Add(temp21);
        temp20.Animators.Add(temp22);
        temp21.Factor = 1f;
        temp21.Duration = 0.8;
        temp22.X = -3f;
        temp22.Duration = 0.3;
        temp22.RelativeTo = Fuse.TranslationModes.Size;
        temp22.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp25.LineNumber = 14;
        temp25.FileName = "RecipePage.ux";
        temp25.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Recipe_API.js"));
        temp26.Children.Add(temp27);
        global::Fuse.Controls.DockPanel.SetDock(temp27, Fuse.Layouts.Dock.Top);
        temp27.Background = temp57;
        temp27.Children.Add(temp28);
        temp28.Margin = float4(0f, 0f, 0f, 0f);
        temp28.Opacity = 10f;
        temp28.Children.Add(temp);
        temp28.Children.Add(temp31);
        temp28.Children.Add(temp1);
        temp28.Children.Add(temp34);
        temp28.Children.Add(temp2);
        temp28.Children.Add(temp3);
        temp28.Children.Add(temp38);
        temp.Templates.Add(temp29);
        temp.Bindings.Add(temp30);
        temp31.Value = "Zutaten";
        temp31.Color = float4(1f, 1f, 1f, 1f);
        temp31.Margin = float4(5f, 10f, 0f, 0f);
        temp31.Font = global::MainView.Patua;
        temp1.Templates.Add(temp32);
        temp1.Templates.Add(middleRectangle);
        temp1.Bindings.Add(temp33);
        temp34.Value = "Zubereitung";
        temp34.Color = float4(1f, 1f, 1f, 1f);
        temp34.Margin = float4(5f, 10f, 0f, 0f);
        temp34.Font = global::MainView.Patua;
        temp2.Color = float4(1f, 1f, 1f, 1f);
        temp2.Margin = float4(5f, 0f, 0f, 0f);
        temp2.Font = global::MainView.Roboto;
        temp2.Bindings.Add(temp35);
        temp3.Templates.Add(temp36);
        temp3.Templates.Add(middleRectangle1);
        temp3.Bindings.Add(temp37);
        temp38.Children.Add(temp39);
        temp39.Background = temp56;
        temp39.Children.Add(temp40);
        temp39.Children.Add(temp41);
        temp40.IsVisible = false;
        temp41.Children.Add(temp42);
        temp41.Children.Add(temp43);
        temp41.Children.Add(temp44);
        temp41.Children.Add(temp45);
        temp41.Children.Add(temp52);
        global::Fuse.Controls.DockPanel.SetDock(temp42, Fuse.Layouts.Dock.Top);
        temp43.LineNumber = 8;
        temp43.FileName = "CookingPage.ux";
        temp43.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Recipe_API.js"));
        temp44.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar resetting = Observable(false);\n\t\t\t            \t\t\n\t\t\tfunction reset(x) {\n\t\t\t\tresetting.value = true;\n\t\t\t\tsetTimeout(backToNormal, 300);\n\t\t\t}\n\n\t\t\tfunction backToNormal() {\n\t\t\t\tresetting.value = false;\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\t\t\t    reset: reset,\n\t\t\t\tresetting: resetting\n\t\t\t\t\n\t\t\t};\n\n\t\t\treset();";
        temp44.LineNumber = 9;
        temp44.FileName = "CookingPage.ux";
        temp45.Children.Add(temp46);
        temp45.Children.Add(temp4);
        temp45.Children.Add(centerAttractor);
        temp45.Children.Add(notVisitedAttractor);
        temp45.Children.Add(visitedAttractor);
        temp45.Children.Add(temp5);
        temp46.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp4.Templates.Add(temp47);
        temp4.Bindings.Add(temp48);
        centerAttractor.Radius = 800f;
        centerAttractor.Strength = 250f;
        centerAttractor.Name = __selector5;
        notVisitedAttractor.Offset = float3(-400f, 0f, 0f);
        notVisitedAttractor.Radius = 380f;
        notVisitedAttractor.Strength = 600f;
        notVisitedAttractor.Name = __selector6;
        visitedAttractor.Offset = float3(400f, 0f, 0f);
        visitedAttractor.Radius = 380f;
        visitedAttractor.Strength = 600f;
        visitedAttractor.Name = __selector7;
        temp5.Animators.Add(temp49);
        temp5.Animators.Add(temp50);
        temp5.Bindings.Add(temp51);
        temp49.Value = 8000f;
        temp50.Value = 10000f;
        temp52.Children.Add(temp53);
        temp52.Children.Add(temp54);
        temp52.Children.Add(temp55);
        temp53.Width = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp53.Height = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp53.Margin = float4(70f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp53, temp_eb3.OnEvent);
        temp53.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Icons/Refresh.png"));
        temp53.Bindings.Add(temp_eb3);
        temp54.Value = "Guten Appetit!";
        temp54.FontSize = 30f;
        temp54.Color = Fuse.Drawing.Colors.White;
        temp54.Alignment = Fuse.Elements.Alignment.Center;
        temp54.Margin = float4(0f, 140f, 0f, 0f);
        temp54.Font = global::MainView.Patua;
        temp55.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp55.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../images/logo_v02.png"));
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(centerAttractor);
        __g_nametable.Objects.Add(notVisitedAttractor);
        __g_nametable.Objects.Add(visitedAttractor);
        this.Background = temp58;
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Radius";
    static global::Uno.UX.Selector __selector4 = "Strength";
    static global::Uno.UX.Selector __selector5 = "centerAttractor";
    static global::Uno.UX.Selector __selector6 = "notVisitedAttractor";
    static global::Uno.UX.Selector __selector7 = "visitedAttractor";
}

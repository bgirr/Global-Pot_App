[Uno.Compiler.UxGenerated]
public partial class CookingPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly CookingPage __parent;
        [Uno.WeakReference] internal readonly CookingPage __parentInstance;
        public Template(CookingPage parent, CookingPage parentInstance): base(null, false)
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
            [Uno.Compiler.UxGenerated]
            public partial class Template2: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template1 __parent;
                [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
                public Template2(Template1 parent, Fuse.Reactive.Each parentInstance): base(null, false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                global::Uno.UX.Property<string> __gen2_Url_inst;
                global::Uno.UX.Property<string> __gen3_Right_inst;
                global::Uno.UX.Property<string> temp_Value_inst;
                internal Fuse.Controls.Image __gen2;
                internal Uno.UX.StringConcatOperator __gen3;
                static Template2()
                {
                }
                public override object New()
                {
                    var self = new Fuse.Controls.DockPanel();
                    var __gen2 = new Fuse.Controls.Image();
                    __gen2_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen2, __selector0);
                    var __gen3 = new Uno.UX.StringConcatOperator();
                    __gen3_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen3, __selector1);
                    var temp = new Fuse.Controls.Text();
                    temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                    var temp1 = new Fuse.Controls.Panel();
                    var temp2 = new Fuse.Reactive.DataBinding<string>(__gen3_Right_inst, "iconUrl");
                    var temp3 = new Fuse.Controls.Panel();
                    var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "nameDe");
                    var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7411765f, 0.7411765f, 1f));
                    self.MaxWidth = new Uno.UX.Size(99f, Uno.UX.Unit.Percent);
                    temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                    temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                    temp1.Margin = float4(10f, 0f, 0f, 0f);
                    global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                    global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                    temp1.Children.Add(__gen2);
                    __gen2.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                    __gen2.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                    __gen2.Margin = float4(5f, 0f, 0f, 0f);
                    __gen2.Name = __selector3;
                    global::Fuse.Controls.DockPanel.SetDock(__gen2, Fuse.Layouts.Dock.Left);
                    __gen2.Bindings.Add(temp2);
                    __gen3.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                    __gen3.Target = __gen2_Url_inst;
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
                static global::Uno.UX.Selector __selector3 = "__gen2";
            }
            global::Uno.UX.Property<object> self_Items_inst;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Reactive.Each();
                self_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(self, __selector0);
                var temp = new Template2(this, self);
                var temp1 = new Fuse.Reactive.DataBinding<object>(self_Items_inst, "ingredients");
                self.Templates.Add(temp);
                self.Bindings.Add(temp1);
                return self;
            }
            static global::Uno.UX.Selector __selector0 = "Items";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template2: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.Panel __parentInstance;
            public Template2(Template parent, Fuse.Controls.Panel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __gen4_Url_inst;
            global::Uno.UX.Property<string> __gen5_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen4;
            internal Uno.UX.StringConcatOperator __gen5;
            static Template2()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen4 = new Fuse.Controls.Image();
                __gen4_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen4, __selector0);
                var __gen5 = new Uno.UX.StringConcatOperator();
                __gen5_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen5, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "ingredient.iconUrl");
                var temp3 = new Fuse.Controls.Panel();
                var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                self.MaxWidth = new Uno.UX.Size(99f, Uno.UX.Unit.Percent);
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 5f, 5f, 5f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen4);
                __gen4.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen4.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen4.Margin = float4(5f, 0f, 0f, 0f);
                __gen4.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen4, Fuse.Layouts.Dock.Left);
                __gen4.Bindings.Add(temp2);
                __gen5.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen5.Target = __gen4_Url_inst;
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
            static global::Uno.UX.Selector __selector3 = "__gen4";
        }
        global::Uno.UX.Property<float> temp_Degrees_inst;
        global::Uno.UX.Property<string> __gen0_Value_inst;
        global::Uno.UX.Property<string> __gen1_Right_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.Property<object> temp2_Items_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        global::Uno.UX.Property<Uno.UX.FileSource> temp4_File_inst;
        global::Uno.UX.Property<float> visited_Opacity_inst;
        global::Uno.UX.Property<float> visitedOverlay_Opacity_inst;
        global::Uno.UX.Property<float> shadow_Distance_inst;
        global::Uno.UX.Property<float> shadow_Size_inst;
        internal Fuse.Controls.Text __gen0;
        internal Uno.UX.StringConcatOperator __gen1;
        internal Fuse.Controls.Image visited;
        internal Fuse.Effects.DropShadow shadow;
        internal Fuse.Controls.Image notVisited;
        internal Fuse.Controls.Image visitedOverlay;
        internal Fuse.Controls.Image notVisitedOverlay;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Panel();
            var temp = new Fuse.Rotation();
            temp_Degrees_inst = new GlobalPot_FuseRotation_Degrees_Property(temp, __selector0);
            var __gen0 = new Fuse.Controls.Text();
            __gen0_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(__gen0, __selector1);
            var __gen1 = new Uno.UX.StringConcatOperator();
            __gen1_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen1, __selector2);
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
            var temp10 = new Fuse.Reactive.DataBinding<string>(__gen1_Right_inst, "localId");
            var temp11 = new Fuse.Drawing.Stroke();
            var temp12 = new Fuse.Controls.StackPanel();
            var temp13 = new Template1(this, self);
            var temp14 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "usedResults");
            var temp15 = new Template2(this, self);
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
            temp9.Children.Add(__gen0);
            temp9.Children.Add(visited);
            __gen0.FontSize = 30f;
            __gen0.Alignment = Fuse.Elements.Alignment.Center;
            __gen0.Margin = float4(0f, 0f, 20f, 0f);
            __gen0.Name = __selector8;
            __gen0.Font = global::MainView.Patua;
            __gen0.Bindings.Add(temp10);
            __gen1.Left = "Schritt ";
            __gen1.Target = __gen0_Value_inst;
            visited.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            visited.Alignment = Fuse.Elements.Alignment.TopLeft;
            visited.Margin = float4(10f, 0f, 10f, 0f);
            visited.Opacity = 0f;
            visited.Name = __selector9;
            visited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Emblems/visited.png"));
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
            notVisited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Emblems/visited.png"));
            visitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            visitedOverlay.Opacity = 0f;
            visitedOverlay.Name = __selector12;
            global::Fuse.Controls.DockPanel.SetDock(visitedOverlay, Fuse.Layouts.Dock.Fill);
            visitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Emblems/VisitedOverlay.png"));
            notVisitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            notVisitedOverlay.Opacity = 0f;
            notVisitedOverlay.Name = __selector13;
            global::Fuse.Controls.DockPanel.SetDock(notVisitedOverlay, Fuse.Layouts.Dock.Fill);
            notVisitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Emblems/VisitedOverlay.png"));
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
        static global::Uno.UX.Selector __selector8 = "__gen0";
        static global::Uno.UX.Selector __selector9 = "visited";
        static global::Uno.UX.Selector __selector10 = "shadow";
        static global::Uno.UX.Selector __selector11 = "notVisited";
        static global::Uno.UX.Selector __selector12 = "visitedOverlay";
        static global::Uno.UX.Selector __selector13 = "notVisitedOverlay";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float> centerAttractor_Radius_inst;
    global::Uno.UX.Property<float> centerAttractor_Strength_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Physics.PointAttractor centerAttractor;
    internal Fuse.Physics.PointAttractor notVisitedAttractor;
    internal Fuse.Physics.PointAttractor visitedAttractor;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "centerAttractor",
        "notVisitedAttractor",
        "visitedAttractor"
    };
    static CookingPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CookingPage(
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
        centerAttractor = new Fuse.Physics.PointAttractor();
        centerAttractor_Radius_inst = new GlobalPot_FusePhysicsPointAttractor_Radius_Property(centerAttractor, __selector1);
        centerAttractor_Strength_inst = new GlobalPot_FusePhysicsPointAttractor_Strength_Property(centerAttractor, __selector2);
        var temp1 = new Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new GlobalPot_FuseTriggersWhileBool_Value_Property(temp1, __selector3);
        var temp2 = new Fuse.iOS.StatusBarConfig();
        var temp3 = new Fuse.Controls.DockPanel();
        var temp4 = new Fuse.Controls.Panel();
        var temp5 = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new Fuse.Controls.DockPanel();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Controls.Image();
        var temp12 = new Fuse.Gestures.Tapped();
        var temp13 = new Fuse.Animations.Scale();
        var temp14 = new Fuse.Animations.Move();
        temp_eb0 = new Fuse.Reactive.EventBinding("overview_clicked");
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp17 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp19 = new Fuse.Controls.Panel();
        var temp20 = new Fuse.iOS.StatusBarConfig();
        var temp21 = new Template(this, this);
        var temp22 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "Rezept2.steps");
        notVisitedAttractor = new Fuse.Physics.PointAttractor();
        visitedAttractor = new Fuse.Physics.PointAttractor();
        var temp23 = new Fuse.Animations.Change<float>(centerAttractor_Radius_inst);
        var temp24 = new Fuse.Animations.Change<float>(centerAttractor_Strength_inst);
        var temp25 = new Fuse.Reactive.DataBinding<bool>(temp1_Value_inst, "resetting");
        var temp26 = new Fuse.Controls.DockPanel();
        var temp27 = new Fuse.Controls.Image();
        temp_eb1 = new Fuse.Reactive.EventBinding("reset");
        var temp28 = new Fuse.Controls.Text();
        var temp29 = new Fuse.Controls.Image();
        var temp30 = new Fuse.Drawing.StaticSolidColor(float4(0.9254902f, 0.9411765f, 0.9607843f, 1f));
        temp2.IsVisible = false;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp17);
        temp3.Children.Add(temp18);
        temp3.Children.Add(temp19);
        temp3.Children.Add(temp26);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Children.Add(temp5);
        temp5.Background = temp16;
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp6.LineNumber = 2;
        temp6.FileName = "TopBar.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipes_API.js"));
        temp7.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp7.Margin = float4(0f, 10f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Top);
        temp7.Background = temp15;
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
        temp11.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp11.Margin = float4(10f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb0.OnEvent);
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../images/left-arrow.png"));
        temp11.Children.Add(temp12);
        temp11.Bindings.Add(temp_eb0);
        temp12.Animators.Add(temp13);
        temp12.Animators.Add(temp14);
        temp13.Factor = 1f;
        temp13.Duration = 0.8;
        temp14.X = -3f;
        temp14.Duration = 0.3;
        temp14.RelativeTo = Fuse.TranslationModes.Size;
        temp14.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp17.LineNumber = 8;
        temp17.FileName = "CookingPage.ux";
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Recipe_API.js"));
        temp18.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar resetting = Observable(false);\n\t\t\t            \t\t\n\t\t\tfunction reset(x) {\n\t\t\t\tresetting.value = true;\n\t\t\t\tsetTimeout(backToNormal, 300);\n\t\t\t}\n\n\t\t\tfunction backToNormal() {\n\t\t\t\tresetting.value = false;\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\t\t\t    reset: reset,\n\t\t\t\tresetting: resetting\n\t\t\t\t\n\t\t\t};\n\n\t\t\treset();";
        temp18.LineNumber = 9;
        temp18.FileName = "CookingPage.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp);
        temp19.Children.Add(centerAttractor);
        temp19.Children.Add(notVisitedAttractor);
        temp19.Children.Add(visitedAttractor);
        temp19.Children.Add(temp1);
        temp20.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp.Templates.Add(temp21);
        temp.Bindings.Add(temp22);
        centerAttractor.Radius = 800f;
        centerAttractor.Strength = 250f;
        centerAttractor.Name = __selector4;
        notVisitedAttractor.Offset = float3(-400f, 0f, 0f);
        notVisitedAttractor.Radius = 380f;
        notVisitedAttractor.Strength = 600f;
        notVisitedAttractor.Name = __selector5;
        visitedAttractor.Offset = float3(400f, 0f, 0f);
        visitedAttractor.Radius = 380f;
        visitedAttractor.Strength = 600f;
        visitedAttractor.Name = __selector6;
        temp1.Animators.Add(temp23);
        temp1.Animators.Add(temp24);
        temp1.Bindings.Add(temp25);
        temp23.Value = 8000f;
        temp24.Value = 10000f;
        temp26.Children.Add(temp27);
        temp26.Children.Add(temp28);
        temp26.Children.Add(temp29);
        temp27.Width = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp27.Height = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp27.Margin = float4(70f, 0f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp27, temp_eb1.OnEvent);
        temp27.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/Refresh.png"));
        temp27.Bindings.Add(temp_eb1);
        temp28.Value = "Guten Appetit!";
        temp28.FontSize = 30f;
        temp28.Color = Fuse.Drawing.Colors.White;
        temp28.Alignment = Fuse.Elements.Alignment.Center;
        temp28.Margin = float4(0f, 140f, 0f, 0f);
        temp28.Font = global::MainView.Patua;
        temp29.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp29.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../images/logo_v02.png"));
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(centerAttractor);
        __g_nametable.Objects.Add(notVisitedAttractor);
        __g_nametable.Objects.Add(visitedAttractor);
        this.Background = temp30;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Radius";
    static global::Uno.UX.Selector __selector2 = "Strength";
    static global::Uno.UX.Selector __selector3 = "Value";
    static global::Uno.UX.Selector __selector4 = "centerAttractor";
    static global::Uno.UX.Selector __selector5 = "notVisitedAttractor";
    static global::Uno.UX.Selector __selector6 = "visitedAttractor";
}

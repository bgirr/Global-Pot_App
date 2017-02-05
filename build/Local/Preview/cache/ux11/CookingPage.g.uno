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
            global::Uno.UX.Property<string> __gen0_Url_inst;
            global::Uno.UX.Property<string> __gen1_Right_inst;
            global::Uno.UX.Property<string> temp_Value_inst;
            internal Fuse.Controls.Image __gen0;
            internal Uno.UX.StringConcatOperator __gen1;
            static Template1()
            {
            }
            public override object New()
            {
                var self = new Fuse.Controls.DockPanel();
                var __gen0 = new Fuse.Controls.Image();
                __gen0_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen0, __selector0);
                var __gen1 = new Uno.UX.StringConcatOperator();
                __gen1_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen1, __selector1);
                var temp = new Fuse.Controls.Text();
                temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector2);
                var temp1 = new Fuse.Controls.Panel();
                var temp2 = new Fuse.Reactive.DataBinding<string>(__gen1_Right_inst, "ingredient.iconUrl");
                var temp3 = new Fuse.Controls.Panel();
                var temp4 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
                var temp5 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
                temp1.MinWidth = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp1.MinHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                temp1.Margin = float4(10f, 0f, 0f, 0f);
                global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Left);
                global::Fuse.Controls.Grid.SetColumn(temp1, 2);
                temp1.Children.Add(__gen0);
                __gen0.MaxWidth = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen0.MaxHeight = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
                __gen0.Margin = float4(5f, 0f, 0f, 0f);
                __gen0.Name = __selector3;
                global::Fuse.Controls.DockPanel.SetDock(__gen0, Fuse.Layouts.Dock.Left);
                __gen0.Bindings.Add(temp2);
                __gen1.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
                __gen1.Target = __gen0_Url_inst;
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
            static global::Uno.UX.Selector __selector3 = "__gen0";
        }
        global::Uno.UX.Property<float> temp_Degrees_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.Property<Uno.UX.FileSource> temp2_File_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        global::Uno.UX.Property<string> temp4_Value_inst;
        global::Uno.UX.Property<float> visited_Opacity_inst;
        global::Uno.UX.Property<float> visitedOverlay_Opacity_inst;
        global::Uno.UX.Property<float> notVisited_Opacity_inst;
        global::Uno.UX.Property<float> notVisitedOverlay_Opacity_inst;
        global::Uno.UX.Property<float> shadow_Distance_inst;
        global::Uno.UX.Property<float> shadow_Size_inst;
        internal Fuse.Controls.Image visited;
        internal Fuse.Controls.Image notVisited;
        internal Fuse.Controls.Image visitedOverlay;
        internal Fuse.Controls.Image notVisitedOverlay;
        internal Fuse.Effects.DropShadow shadow;
        internal Fuse.Reactive.EventBinding temp_eb0;
        internal Fuse.Reactive.EventBinding temp_eb1;
        internal Fuse.Reactive.EventBinding temp_eb2;
        internal Fuse.Reactive.EventBinding temp_eb3;
        internal Fuse.Reactive.EventBinding temp_eb4;
        internal Fuse.Reactive.EventBinding temp_eb5;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Panel();
            var temp = new Fuse.Rotation();
            temp_Degrees_inst = new GlobalPot_FuseRotation_Degrees_Property(temp, __selector0);
            var temp1 = new Fuse.Reactive.Each();
            temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector1);
            var temp2 = new Fuse.Controls.Image();
            temp2_File_inst = new GlobalPot_FuseControlsImage_File_Property(temp2, __selector2);
            var temp3 = new Fuse.Controls.Text();
            temp3_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp3, __selector3);
            var temp4 = new Fuse.Controls.Text();
            temp4_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp4, __selector3);
            var visited = new Fuse.Controls.Image();
            visited_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(visited, __selector4);
            var visitedOverlay = new Fuse.Controls.Image();
            visitedOverlay_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(visitedOverlay, __selector4);
            var notVisited = new Fuse.Controls.Image();
            notVisited_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(notVisited, __selector4);
            var notVisitedOverlay = new Fuse.Controls.Image();
            notVisitedOverlay_Opacity_inst = new GlobalPot_FuseElementsElement_Opacity_Property(notVisitedOverlay, __selector4);
            var shadow = new Fuse.Effects.DropShadow();
            shadow_Distance_inst = new GlobalPot_FuseEffectsDropShadow_Distance_Property(shadow, __selector5);
            shadow_Size_inst = new GlobalPot_FuseEffectsDropShadow_Size_Property(shadow, __selector6);
            var temp5 = new Fuse.Reactive.DataBinding<float>(temp_Degrees_inst, "degrees");
            var temp6 = new Fuse.Controls.DockPanel();
            var temp7 = new Fuse.Controls.Grid();
            var temp8 = new Fuse.Controls.StackPanel();
            var temp9 = new Template1(this, self);
            var temp10 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "usedIngs");
            var temp11 = new Fuse.Reactive.DataBinding<Uno.UX.FileSource>(temp2_File_inst, "imageKey");
            var temp12 = new Fuse.Controls.Grid();
            var temp13 = new Fuse.Controls.StackPanel();
            var temp14 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "visitors");
            var temp15 = new Fuse.Controls.Text();
            var temp16 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp17 = new Fuse.Controls.StackPanel();
            var temp18 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "visitors");
            var temp19 = new Fuse.Controls.Text();
            var temp20 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp21 = new Fuse.Drawing.StaticSolidColor(float4(0.8980392f, 0.8980392f, 0.8980392f, 1f));
            var temp22 = new Fuse.Controls.Panel();
            var temp23 = new Fuse.Physics.InForceFieldAnimation();
            var temp24 = new Fuse.Animations.Change<float>(visited_Opacity_inst);
            var temp25 = new Fuse.Animations.Change<float>(visitedOverlay_Opacity_inst);
            var temp26 = new Fuse.Physics.InForceFieldAnimation();
            var temp27 = new Fuse.Animations.Rotate();
            var temp28 = new Fuse.Physics.InForceFieldAnimation();
            var temp29 = new Fuse.Animations.Change<float>(notVisited_Opacity_inst);
            var temp30 = new Fuse.Animations.Change<float>(notVisitedOverlay_Opacity_inst);
            var temp31 = new Fuse.Physics.InForceFieldAnimation();
            var temp32 = new Fuse.Animations.Rotate();
            var temp33 = new Fuse.Physics.EnteredForceField();
            var temp_eb0 = new Fuse.Reactive.EventBinding("visited");
            var temp34 = new Fuse.Physics.EnteredForceField();
            var temp_eb1 = new Fuse.Reactive.EventBinding("notVisited");
            var temp35 = new Fuse.Physics.EnteredForceField();
            var temp_eb2 = new Fuse.Reactive.EventBinding("addVisitor");
            var temp36 = new Fuse.Physics.ExitedForceField();
            var temp_eb3 = new Fuse.Reactive.EventBinding("removeVisitor");
            var temp37 = new Fuse.Physics.EnteredForceField();
            var temp_eb4 = new Fuse.Reactive.EventBinding("addVisitor");
            var temp38 = new Fuse.Physics.ExitedForceField();
            var temp_eb5 = new Fuse.Reactive.EventBinding("removeVisitor");
            var temp39 = new Fuse.Physics.Draggable();
            var temp40 = new Fuse.Physics.WhileDragging();
            var temp41 = new Fuse.Triggers.Actions.BringToFront();
            var temp42 = new Fuse.Animations.Scale();
            var temp43 = new Fuse.Animations.Change<float>(shadow_Distance_inst);
            var temp44 = new Fuse.Animations.Change<float>(shadow_Size_inst);
            self.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
            self.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Percent);
            self.Margin = float4(0f, 0f, 0f, 0f);
            temp.Bindings.Add(temp5);
            temp6.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp6.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp6.Margin = float4(0f, 0f, 0f, 0f);
            temp6.Children.Add(temp7);
            temp6.Children.Add(visitedOverlay);
            temp6.Children.Add(notVisitedOverlay);
            temp6.Children.Add(temp2);
            temp6.Children.Add(temp12);
            temp7.Columns = "auto,1*,auto";
            temp7.Margin = float4(0f, 14f, 0f, 5f);
            global::Fuse.Controls.DockPanel.SetDock(temp7, Fuse.Layouts.Dock.Top);
            temp7.Children.Add(visited);
            temp7.Children.Add(temp8);
            temp7.Children.Add(notVisited);
            visited.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            visited.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            visited.Margin = float4(10f, 0f, 10f, 0f);
            visited.Opacity = 0f;
            visited.Name = __selector7;
            visited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Emblems/visited.png"));
            temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp8.Children.Add(temp1);
            temp1.Templates.Add(temp9);
            temp1.Bindings.Add(temp10);
            notVisited.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            notVisited.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            notVisited.Margin = float4(10f, 0f, 10f, 0f);
            notVisited.Opacity = 0f;
            notVisited.Name = __selector8;
            notVisited.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Emblems/visited.png"));
            visitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            visitedOverlay.Opacity = 0f;
            visitedOverlay.Name = __selector9;
            global::Fuse.Controls.DockPanel.SetDock(visitedOverlay, Fuse.Layouts.Dock.Fill);
            visitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Emblems/VisitedOverlay.png"));
            notVisitedOverlay.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            notVisitedOverlay.Opacity = 0f;
            notVisitedOverlay.Name = __selector10;
            global::Fuse.Controls.DockPanel.SetDock(notVisitedOverlay, Fuse.Layouts.Dock.Fill);
            notVisitedOverlay.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Emblems/VisitedOverlay.png"));
            temp2.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Fill);
            temp2.Bindings.Add(temp11);
            temp12.ColumnCount = 2;
            temp12.Height = new Uno.UX.Size(55f, Uno.UX.Unit.Unspecified);
            temp12.Margin = float4(0f, 0f, 0f, 0f);
            global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Bottom);
            temp12.Background = temp21;
            temp12.Children.Add(temp13);
            temp12.Children.Add(temp17);
            temp13.Margin = float4(0f, 0f, 1f, 0f);
            temp13.Padding = float4(0f, 5f, 1f, 5f);
            temp13.Background = temp16;
            temp13.Children.Add(temp3);
            temp13.Children.Add(temp15);
            temp3.FontSize = 22f;
            temp3.Alignment = Fuse.Elements.Alignment.Center;
            temp3.Font = global::MainView.Patua;
            temp3.Bindings.Add(temp14);
            temp15.Value = "HAVE BEEN HERE";
            temp15.FontSize = 12f;
            temp15.Color = float4(0.7686275f, 0.7686275f, 0.7686275f, 1f);
            temp15.Alignment = Fuse.Elements.Alignment.Center;
            temp15.Font = global::MainView.Patua;
            temp17.Padding = float4(0f, 5f, 0f, 5f);
            temp17.Background = temp20;
            temp17.Children.Add(temp4);
            temp17.Children.Add(temp19);
            temp4.FontSize = 22f;
            temp4.Alignment = Fuse.Elements.Alignment.Center;
            temp4.Font = global::MainView.Patua;
            temp4.Bindings.Add(temp18);
            temp19.Value = "HAVEN'T VISITED";
            temp19.FontSize = 12f;
            temp19.Color = float4(0.7686275f, 0.7686275f, 0.7686275f, 1f);
            temp19.Alignment = Fuse.Elements.Alignment.Center;
            temp19.Font = global::MainView.Patua;
            temp22.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp22.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp22.Margin = float4(0f, 0f, 0f, 0f);
            temp22.Background = Fuse.Drawing.Brushes.White;
            temp22.Children.Add(shadow);
            shadow.Size = 2f;
            shadow.Distance = 0f;
            shadow.Name = __selector11;
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
            temp33.Threshold = 0.9f;
            temp33.Handler += temp_eb0.OnEvent;
            temp33.ForceField = __parent.visitedAttractor;
            temp33.Bindings.Add(temp_eb0);
            temp34.Threshold = 0.9f;
            temp34.Handler += temp_eb1.OnEvent;
            temp34.ForceField = __parent.notVisitedAttractor;
            temp34.Bindings.Add(temp_eb1);
            temp35.Threshold = 0.05f;
            temp35.Handler += temp_eb2.OnEvent;
            temp35.ForceField = __parent.visitedAttractor;
            temp35.Bindings.Add(temp_eb2);
            temp36.Threshold = 0.05f;
            temp36.Handler += temp_eb3.OnEvent;
            temp36.ForceField = __parent.visitedAttractor;
            temp36.Bindings.Add(temp_eb3);
            temp37.Threshold = 0.05f;
            temp37.Handler += temp_eb4.OnEvent;
            temp37.ForceField = __parent.notVisitedAttractor;
            temp37.Bindings.Add(temp_eb4);
            temp38.Threshold = 0.05f;
            temp38.Handler += temp_eb5.OnEvent;
            temp38.ForceField = __parent.notVisitedAttractor;
            temp38.Bindings.Add(temp_eb5);
            temp40.Animators.Add(temp42);
            temp40.Animators.Add(temp43);
            temp40.Animators.Add(temp44);
            temp40.Actions.Add(temp41);
            temp42.Factor = 1.1f;
            temp42.Duration = 0.5;
            temp42.Easing = Fuse.Animations.Easing.BackOut;
            temp43.Value = 20f;
            temp43.Duration = 0.5;
            temp43.Easing = Fuse.Animations.Easing.BackOut;
            temp44.Value = 20f;
            temp44.Duration = 0.5;
            temp44.Easing = Fuse.Animations.Easing.BackOut;
            self.Children.Add(temp);
            self.Children.Add(temp6);
            self.Children.Add(temp22);
            self.Children.Add(temp23);
            self.Children.Add(temp26);
            self.Children.Add(temp28);
            self.Children.Add(temp31);
            self.Children.Add(temp33);
            self.Children.Add(temp34);
            self.Children.Add(temp35);
            self.Children.Add(temp36);
            self.Children.Add(temp37);
            self.Children.Add(temp38);
            self.Children.Add(temp39);
            self.Children.Add(temp40);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Degrees";
        static global::Uno.UX.Selector __selector1 = "Items";
        static global::Uno.UX.Selector __selector2 = "File";
        static global::Uno.UX.Selector __selector3 = "Value";
        static global::Uno.UX.Selector __selector4 = "Opacity";
        static global::Uno.UX.Selector __selector5 = "Distance";
        static global::Uno.UX.Selector __selector6 = "Size";
        static global::Uno.UX.Selector __selector7 = "visited";
        static global::Uno.UX.Selector __selector8 = "notVisited";
        static global::Uno.UX.Selector __selector9 = "visitedOverlay";
        static global::Uno.UX.Selector __selector10 = "notVisitedOverlay";
        static global::Uno.UX.Selector __selector11 = "shadow";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float> centerAttractor_Radius_inst;
    global::Uno.UX.Property<float> centerAttractor_Strength_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    internal Fuse.Physics.PointAttractor centerAttractor;
    internal Fuse.Physics.PointAttractor notVisitedAttractor;
    internal Fuse.Physics.PointAttractor visitedAttractor;
    internal Fuse.Reactive.EventBinding temp_eb6;
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
        var temp3 = new Fuse.Controls.Panel();
        var temp4 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.iOS.StatusBarConfig();
        var temp8 = new Template(this, this);
        var temp9 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "recipe.steps");
        notVisitedAttractor = new Fuse.Physics.PointAttractor();
        visitedAttractor = new Fuse.Physics.PointAttractor();
        var temp10 = new Fuse.Animations.Change<float>(centerAttractor_Radius_inst);
        var temp11 = new Fuse.Animations.Change<float>(centerAttractor_Strength_inst);
        var temp12 = new Fuse.Reactive.DataBinding<bool>(temp1_Value_inst, "resetting");
        var temp13 = new Fuse.Controls.Panel();
        var temp14 = new Fuse.Controls.Image();
        temp_eb6 = new Fuse.Reactive.EventBinding("reset");
        var temp15 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp2.IsVisible = false;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp3.Children.Add(temp6);
        temp3.Children.Add(temp13);
        temp4.LineNumber = 5;
        temp4.FileName = "CookingPage.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipe_API.js"));
        temp5.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar resetting = Observable(false);\n\n\t\t\tfunction City(name, imageKey, country, visitors, nonVisitors)\n\t\t\t{\n\t\t\t\tthis.name = name;\n\t\t\t\tthis.imageKey = imageKey;\n\t\t\t\tthis.country = country;\n\t\t\t\tthis.visitors = Observable(visitors);\n\t\t\t\tthis.nonVisitors = Observable(nonVisitors);\n\t\t\t\tthis.degrees = -4 + (8 * Math.random());\n\t\t\t}\n\n\t\t\tfunction reset(x) {\n\t\t\t\tresetting.value = true;\n\t\t\t\tsetTimeout(backToNormal, 300);\n\t\t\t}\n\n\t\t\tfunction backToNormal() {\n\t\t\t\tresetting.value = false;\n\t\t\t}\n\n\t\t\tmodule.exports = {\n\t\t\t    cities : [\n\t\t\t\t\tnew City(\"Oslo\", \"Assets/Cities/Oslo.jpg\", \"NORWAY\", 3127, 3943),\n\t\t\t\t\tnew City(\"Paris\", \"Assets/Cities/Paris.jpg\", \"FRANCE\", 10250, 400),\n\t\t\t\t\tnew City(\"San Francisco\", \"Assets/Cities/San Francisco.jpg\", \"USA\", 6700, 5421),\n\t\t\t\t\tnew City(\"Seoul\", \"Assets/Cities/Seoul.jpg\", \"KOREA\", 5713, 4702),\n\t\t\t\t\tnew City(\"Tokyo\", \"Assets/Cities/Tokyo.jpg\", \"JAPAN\", 4512, 657)\n\t\t\t\t],\n\t\t\t\tvisited: function(x)\n\t\t\t\t{\n\t\t\t\t\tdebug_log(\"Visited \" + x.data.name);\n\t\t\t\t},\n\t\t\t\tnotVisited: function(x)\n\t\t\t\t{\n\t\t\t\t\tdebug_log(\"Not visited \" + x.data.name);\n\t\t\t\t},\n\t\t\t\taddVisitor: function(x)\n\t\t\t\t{\n\t\t\t\t\tx.data.visitors.value = x.data.visitors.value + 1;\n\t\t\t\t},\n\t\t\t\tremoveVisitor: function(x)\n\t\t\t\t{\n\t\t\t\t\tx.data.visitors.value = x.data.visitors.value - 1;\n\t\t\t\t},\n\t\t\t\taddNonVisitor: function(x)\n\t\t\t\t{\n\t\t\t\t\tx.data.nonVisitors.value = x.data.nonVisitors.value + 1;\n\t\t\t\t},\n\t\t\t\tremoveNonVisitor: function(x) {\n\t\t\t\t\tx.data.nonVisitors.value = x.data.nonVisitors.value - 1;\n\t\t\t\t},\n\t\t\t\treset: reset,\n\t\t\t\tresetting: resetting\n\t\t\t};\n\n\t\t\treset();";
        temp5.LineNumber = 6;
        temp5.FileName = "CookingPage.ux";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp);
        temp6.Children.Add(centerAttractor);
        temp6.Children.Add(notVisitedAttractor);
        temp6.Children.Add(visitedAttractor);
        temp6.Children.Add(temp1);
        temp7.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
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
        temp1.Animators.Add(temp10);
        temp1.Animators.Add(temp11);
        temp1.Bindings.Add(temp12);
        temp10.Value = 8000f;
        temp11.Value = 10000f;
        temp13.Children.Add(temp14);
        temp14.Width = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        temp14.Height = new Uno.UX.Size(64f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb6.OnEvent);
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Refresh.png"));
        temp14.Bindings.Add(temp_eb6);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(centerAttractor);
        __g_nametable.Objects.Add(notVisitedAttractor);
        __g_nametable.Objects.Add(visitedAttractor);
        this.Background = temp15;
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

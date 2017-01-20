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
        global::Uno.UX.Property<string> __gen2_Url_inst;
        global::Uno.UX.Property<string> __gen3_Right_inst;
        internal Fuse.Controls.Image __gen2;
        internal Uno.UX.StringConcatOperator __gen3;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.DockPanel();
            var __gen2 = new Fuse.Controls.Image();
            __gen2_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen2, __selector0);
            var __gen3 = new Uno.UX.StringConcatOperator();
            __gen3_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen3, __selector1);
            var temp = new Fuse.Reactive.DataBinding<string>(__gen3_Right_inst, "imageUrl");
            __gen2.Margin = float4(5f, 0f, 0f, 0f);
            __gen2.Name = __selector2;
            global::Fuse.Controls.DockPanel.SetDock(__gen2, Fuse.Layouts.Dock.Left);
            __gen2.Bindings.Add(temp);
            __gen3.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/recipeImages/";
            __gen3.Target = __gen2_Url_inst;
            self.Children.Add(__gen2);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Url";
        static global::Uno.UX.Selector __selector1 = "Right";
        static global::Uno.UX.Selector __selector2 = "__gen2";
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
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __gen4_Url_inst;
        global::Uno.UX.Property<string> __gen5_Right_inst;
        internal Fuse.Controls.Image __gen4;
        internal Uno.UX.StringConcatOperator __gen5;
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Grid();
            var temp = new Fuse.Controls.Text();
            temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
            var __gen4 = new Fuse.Controls.Image();
            __gen4_Url_inst = new GlobalPot_FuseControlsImage_Url_Property(__gen4, __selector1);
            var __gen5 = new Uno.UX.StringConcatOperator();
            __gen5_Right_inst = new GlobalPot_UnoUXStringConcatOperator_Right_Property(__gen5, __selector2);
            var temp1 = new Fuse.Controls.DockPanel();
            var temp2 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "ingredient.nameDe");
            var temp3 = new Fuse.Reactive.DataBinding<string>(__gen5_Right_inst, "ingredient.iconUrl");
            self.ColumnCount = 2;
            temp1.Children.Add(temp);
            temp1.Children.Add(__gen4);
            temp.Color = float4(1f, 1f, 1f, 1f);
            temp.Margin = float4(5f, 0f, 0f, 0f);
            temp.Font = global::MainView.Roboto;
            temp.Bindings.Add(temp2);
            __gen4.MaxWidth = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
            __gen4.MaxHeight = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
            __gen4.Margin = float4(5f, 0f, 0f, 0f);
            __gen4.Name = __selector3;
            global::Fuse.Controls.DockPanel.SetDock(__gen4, Fuse.Layouts.Dock.Left);
            __gen4.Bindings.Add(temp3);
            __gen5.Left = "https://cookingtest-cookingtest.rhcloud.com/static/resource/img/icon/";
            __gen5.Target = __gen4_Url_inst;
            self.Children.Add(temp1);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Url";
        static global::Uno.UX.Selector __selector2 = "Right";
        static global::Uno.UX.Selector __selector3 = "__gen4";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
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
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new GlobalPot_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Reactive.Each();
        temp1_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp2 = new Fuse.Reactive.Each();
        temp2_Items_inst = new GlobalPot_FuseReactiveEach_Items_Property(temp2, __selector1);
        var temp3 = new Fuse.iOS.StatusBarConfig();
        var temp4 = new Fuse.Controls.DockPanel();
        var temp5 = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new Fuse.Controls.DockPanel();
        var temp9 = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Panel();
        var temp12 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp13 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp14 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp15 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp16 = new Fuse.Controls.DockPanel();
        var temp17 = new Fuse.Controls.ScrollView();
        var temp18 = new Fuse.Controls.StackPanel();
        var temp19 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "data.recipeName");
        var temp20 = new Fuse.Controls.StackPanel();
        var temp21 = new Template(this, this);
        var temp22 = new Fuse.Reactive.DataBinding<object>(temp1_Items_inst, "data.images");
        var temp23 = new Fuse.Controls.Text();
        var temp24 = new Template1(this, this);
        var temp25 = new Fuse.Reactive.DataBinding<object>(temp2_Items_inst, "data.selectedIngredients");
        var temp26 = new Fuse.Controls.Text();
        var temp27 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        var temp28 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.2313726f, 0.3490196f, 1f));
        temp3.IsVisible = false;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp15);
        temp4.Children.Add(temp16);
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        temp5.Children.Add(temp6);
        temp6.Background = temp14;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp7.LineNumber = 2;
        temp7.FileName = "TopBar.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Login.js"));
        temp8.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        temp8.Background = temp13;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp11);
        temp9.Alignment = Fuse.Elements.Alignment.Center;
        temp9.Children.Add(temp10);
        temp10.Value = "Global Pot";
        temp10.FontSize = 30f;
        temp10.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp10.Font = global::MainView.Patua;
        temp11.Alignment = Fuse.Elements.Alignment.Left;
        temp11.Children.Add(temp12);
        temp12.Text = "Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb3.OnEvent);
        temp12.Bindings.Add(temp_eb3);
        temp15.LineNumber = 8;
        temp15.FileName = "RecipePage.ux";
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipe_API.js"));
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Top);
        temp16.Background = temp27;
        temp16.Children.Add(temp17);
        temp17.AllowedScrollDirections = Fuse.Controls.ScrollDirections.Vertical;
        temp17.ClipToBounds = true;
        temp17.Children.Add(temp18);
        temp18.Margin = float4(0f, 50f, 0f, 0f);
        temp18.Opacity = 10f;
        temp18.Children.Add(temp);
        temp18.Children.Add(temp20);
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Margin = float4(5f, 0f, 0f, 0f);
        temp.Font = global::MainView.Patua;
        temp.Bindings.Add(temp19);
        temp20.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp20.Children.Add(temp1);
        temp20.Children.Add(temp23);
        temp20.Children.Add(temp2);
        temp20.Children.Add(temp26);
        temp1.Templates.Add(temp21);
        temp1.Bindings.Add(temp22);
        temp23.Value = "Zutaten";
        temp23.Color = float4(1f, 1f, 1f, 1f);
        temp23.Margin = float4(5f, 10f, 0f, 0f);
        temp23.Font = global::MainView.Patua;
        temp2.Templates.Add(temp24);
        temp2.Bindings.Add(temp25);
        temp26.Value = "Rating, Nährwerte, etc.";
        temp26.Color = float4(1f, 1f, 1f, 1f);
        temp26.Margin = float4(5f, 10f, 0f, 0f);
        temp26.Font = global::MainView.Patua;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Background = temp28;
        this.Children.Add(temp3);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
}

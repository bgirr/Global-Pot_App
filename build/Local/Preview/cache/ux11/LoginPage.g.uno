[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static LoginPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoginPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.iOS.StatusBarConfig();
        var temp1 = new Fuse.Controls.DockPanel();
        var temp2 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new Fuse.Controls.Grid();
        var temp5 = new Fuse.Controls.StackPanel();
        var temp6 = new Fuse.Controls.Image();
        var temp7 = new Fuse.Gestures.WhilePressed();
        var temp8 = new Fuse.Animations.Rotate();
        var temp9 = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Rectangle();
        var temp12 = new Fuse.Drawing.Stroke();
        var temp13 = new Fuse.Gestures.Tapped();
        var temp14 = new Fuse.Animations.Scale();
        temp_eb7 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp15 = new Fuse.Controls.StatusBarBackground();
        var temp16 = new Fuse.Controls.BottomBarBackground();
        temp.IsVisible = false;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp4);
        temp1.Children.Add(temp15);
        temp1.Children.Add(temp16);
        temp2.LineNumber = 5;
        temp2.FileName = "LoginPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Login.js"));
        temp3.LineNumber = 6;
        temp3.FileName = "LoginPage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Recipes_API.js"));
        temp4.Rows = "1*,1*";
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp9);
        temp5.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp6.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp6.Margin = float4(50f, 200f, 50f, 0f);
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../images/logo_v02.png"));
        temp7.Animators.Add(temp8);
        temp8.Degrees = 100f;
        temp8.Duration = 2;
        temp8.Easing = Fuse.Animations.Easing.BounceOut;
        temp8.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp9.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp9.Margin = float4(50f, 0f, 50f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb7.OnEvent);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp9.Bindings.Add(temp_eb7);
        temp10.Value = "Let's cook!";
        temp10.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp10.Font = global::MainView.Patua;
        temp11.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp11.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp11.Margin = float4(0f, 0f, 0f, 0f);
        temp11.Strokes.Add(temp12);
        temp11.Children.Add(temp13);
        temp12.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp12.Width = 3f;
        temp12.Offset = 4f;
        temp13.Animators.Add(temp14);
        temp14.Factor = 0.8f;
        temp14.Duration = 0.3;
        temp14.Easing = Fuse.Animations.Easing.QuadraticInOut;
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}

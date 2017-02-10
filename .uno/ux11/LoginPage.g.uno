[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb3;
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
        var temp3 = new Fuse.Controls.Grid();
        var temp4 = new Fuse.Controls.StackPanel();
        var temp5 = new Fuse.Controls.Image();
        var temp6 = new Fuse.Gestures.WhilePressed();
        var temp7 = new Fuse.Animations.Rotate();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new Fuse.Controls.Rectangle();
        var temp11 = new Fuse.Drawing.Stroke();
        var temp12 = new Fuse.Gestures.Tapped();
        var temp13 = new Fuse.Animations.Scale();
        temp_eb3 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp14 = new Fuse.Controls.StatusBarBackground();
        var temp15 = new Fuse.Controls.BottomBarBackground();
        temp.IsVisible = false;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp14);
        temp1.Children.Add(temp15);
        temp2.LineNumber = 5;
        temp2.FileName = "LoginPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Login.js"));
        temp3.Rows = "1*,1*";
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp8);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp5.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp5.Margin = float4(50f, 200f, 50f, 0f);
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../images/logo_v02.png"));
        temp6.Animators.Add(temp7);
        temp7.Degrees = 100f;
        temp7.Duration = 2;
        temp7.Easing = Fuse.Animations.Easing.BounceOut;
        temp7.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Margin = float4(50f, 0f, 50f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb3.OnEvent);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp8.Bindings.Add(temp_eb3);
        temp9.Value = "Let's cook!";
        temp9.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp9.Alignment = Fuse.Elements.Alignment.Center;
        temp9.Font = global::MainView.Patua;
        temp10.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp10.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp10.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp10.Margin = float4(0f, 0f, 0f, 0f);
        temp10.Strokes.Add(temp11);
        temp10.Children.Add(temp12);
        temp11.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp11.Width = 3f;
        temp11.Offset = 4f;
        temp12.Animators.Add(temp13);
        temp13.Factor = 0.8f;
        temp13.Duration = 0.3;
        temp13.Easing = Fuse.Animations.Easing.QuadraticInOut;
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}

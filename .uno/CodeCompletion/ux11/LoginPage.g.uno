[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb0;
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
        var temp6 = new Fuse.Controls.Panel();
        var temp7 = new Fuse.Controls.Text();
        var temp8 = new Fuse.Controls.Rectangle();
        var temp9 = new Fuse.Drawing.Stroke();
        temp_eb0 = new Fuse.Reactive.EventBinding("login_clicked");
        var temp10 = new Fuse.Controls.StatusBarBackground();
        var temp11 = new Fuse.Controls.BottomBarBackground();
        temp.IsVisible = false;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp1.Children.Add(temp10);
        temp1.Children.Add(temp11);
        temp2.LineNumber = 5;
        temp2.FileName = "LoginPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Login.js"));
        temp3.Rows = "1*,1*";
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp6);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp5);
        temp5.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp5.Margin = float4(50f, 200f, 50f, 0f);
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../images/logo_v02.png"));
        temp6.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp6.Margin = float4(50f, 0f, 50f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Bindings.Add(temp_eb0);
        temp7.Value = "Let's cook!";
        temp7.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp7.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Font = global::MainView.Patua;
        temp8.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp8.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp8.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp8.Margin = float4(0f, 0f, 0f, 0f);
        temp8.Strokes.Add(temp9);
        temp9.Color = float4(0f, 0.2313726f, 0.3490196f, 1f);
        temp9.Width = 3f;
        temp9.Offset = 4f;
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Bottom);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}

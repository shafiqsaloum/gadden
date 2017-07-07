[Uno.Compiler.UxGenerated]
public partial class Profile: Fuse.Controls.StackPanel
{
    static Profile()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Profile()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Image();
        this.ItemSpacing = 3f;
        this.ContentAlignment = Fuse.Elements.Alignment.Center;
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Width = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        temp.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Percent);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../assets/ProfileIcon.png"));
        this.Children.Add(temp);
    }
}

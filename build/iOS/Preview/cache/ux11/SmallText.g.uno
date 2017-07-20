[Uno.Compiler.UxGenerated]
public partial class SmallText: Fuse.Controls.Text
{
    static SmallText()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SmallText()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 14f;
        this.TextColor = float4(1f, 1f, 1f, 1f);
        this.Font = global::MainView.Raleway;
    }
}

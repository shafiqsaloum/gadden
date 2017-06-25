[Uno.Compiler.UxGenerated]
public partial class Title: Fuse.Controls.Text
{
    static Title()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Title()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(1f, 1f, 1f, 1f);
        this.Alignment = Fuse.Elements.Alignment.BottomLeft;
        this.Margin = float4(20f, 0f, 0f, 20f);
        this.Font = global::MainView.TitleFont;
    }
}

[Uno.Compiler.UxGenerated]
public partial class TitleBig: Fuse.Controls.Text
{
    static TitleBig()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TitleBig()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.FontSize = 34f;
        this.Color = float4(1f, 1f, 1f, 1f);
        this.Alignment = Fuse.Elements.Alignment.TopCenter;
        this.Font = global::MainView.TitleFont;
    }
}

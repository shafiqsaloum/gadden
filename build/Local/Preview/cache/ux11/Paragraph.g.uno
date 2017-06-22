[Uno.Compiler.UxGenerated]
public partial class Paragraph: Fuse.Controls.Text
{
    static Paragraph()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Paragraph()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.FontSize = 25f;
        this.Color = float4(1f, 1f, 1f, 1f);
        this.Alignment = Fuse.Elements.Alignment.Left;
        this.Font = global::MainView.Raleway;
    }
}

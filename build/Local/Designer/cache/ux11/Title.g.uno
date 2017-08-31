[Uno.Compiler.UxGenerated]
public partial class Title: Fuse.Controls.TextView
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
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 24f;
        this.TextColor = float4(1f, 1f, 1f, 1f);
        this.IsReadOnly = true;
        this.Alignment = Fuse.Elements.Alignment.BottomLeft;
        this.Margin = float4(20f, 0f, 0f, 0f);
        this.Font = global::MainView.TitleFont;
    }
}

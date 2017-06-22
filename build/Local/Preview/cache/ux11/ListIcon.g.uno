[Uno.Compiler.UxGenerated]
public partial class ListIcon: Fuse.Controls.Rectangle
{
    static ListIcon()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ListIcon()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.CornerRadius = float4(2f, 2f, 2f, 2f);
        this.Color = Fuse.Drawing.Colors.Blue;
        this.Aspect = 1f;
        this.Margin = float4(3f, 3f, 3f, 3f);
        this.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
    }
}

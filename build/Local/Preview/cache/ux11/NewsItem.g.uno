[Uno.Compiler.UxGenerated]
public partial class NewsItem: Fuse.Controls.Panel
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static NewsItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NewsItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("title");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Controls.StackPanel();
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp4 = new global::Fuse.Controls.Rectangle();
        temp2.ItemSpacing = 10f;
        temp2.Margin = float4(15f, 15f, 15f, 15f);
        temp2.Children.Add(temp);
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.FontSize = 20f;
        temp.Bindings.Add(temp3);
        temp4.Color = float4(1f, 1f, 1f, 1f);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}

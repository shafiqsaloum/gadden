[Uno.Compiler.UxGenerated]
public partial class NavIcon: Fuse.Controls.StackPanel
{
    string _field_Title;
    [global::Uno.UX.UXOriginSetter("SetTitle")]
    public string Title
    {
        get { return _field_Title; }
        set { SetTitle(value, null); }
    }
    public void SetTitle(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Title)
        {
            _field_Title = value;
            OnPropertyChanged("Title", origin);
        }
    }
    Uno.UX.FileSource _field_File;
    [global::Uno.UX.UXOriginSetter("SetFile")]
    public Uno.UX.FileSource File
    {
        get { return _field_File; }
        set { SetFile(value, null); }
    }
    public void SetFile(Uno.UX.FileSource value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_File)
        {
            _field_File = value;
            OnPropertyChanged("File", origin);
        }
    }
    global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> this_Title_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> this_File_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static NavIcon()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NavIcon()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Image();
        temp_File_inst = new gadden_FuseControlsImage_File_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Property(temp2, gadden_accessor_NavIcon_File.Singleton);
        this_Title_inst = new gadden_NavIcon_Title_Property(this, __selector1);
        this_File_inst = new gadden_NavIcon_File_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.This();
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp1, __selector2);
        var temp5 = new global::Fuse.Reactive.Property(temp4, gadden_accessor_NavIcon_Title.Singleton);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Read);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp.Color = float4(0.4f, 0.4f, 0.5f, 1f);
        temp.StretchMode = Fuse.Elements.StretchMode.PointPrecise;
        temp.Bindings.Add(temp6);
        temp1.FontSize = 14f;
        temp1.Margin = float4(0f, 3f, 0f, 0f);
        temp1.Bindings.Add(temp7);
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Title_inst);
        __g_nametable.Properties.Add(this_File_inst);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "File";
    static global::Uno.UX.Selector __selector1 = "Title";
    static global::Uno.UX.Selector __selector2 = "Value";
}

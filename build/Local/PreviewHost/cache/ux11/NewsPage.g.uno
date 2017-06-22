[Uno.Compiler.UxGenerated]
public partial class NewsPage: Fuse.Controls.Page
{
    string _field_Label;
    [global::Uno.UX.UXOriginSetter("SetLabel")]
    public string Label
    {
        get { return _field_Label; }
        set { SetLabel(value, null); }
    }
    public void SetLabel(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Label)
        {
            _field_Label = value;
            OnPropertyChanged("Label", origin);
        }
    }
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> this_Label_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb19"
    };
    static NewsPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NewsPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Label_inst = new gadden_NewsPage_Label_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("loginClicked");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Button();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        this.Name = __selector1;
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/News/NewsPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/News/NewsPage.js"));
        temp2.Text = "Login";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb19.OnEvent);
        temp2.Bindings.Add(temp_eb19);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb19);
        __g_nametable.Properties.Add(this_Label_inst);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "Label";
    static global::Uno.UX.Selector __selector1 = "news";
}

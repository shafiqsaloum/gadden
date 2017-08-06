[Uno.Compiler.UxGenerated]
public partial class LoginButton: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    static LoginButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoginButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::LoginButton();
        this.Color = float4(1f, 1f, 1f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Margin = float4(4f, 4f, 4f, 4f);
        temp.Color = Fuse.Drawing.Colors.Black;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.Text = "LOGGA IN / REGISTRERA";
        this.Children.Add(temp);
    }
}

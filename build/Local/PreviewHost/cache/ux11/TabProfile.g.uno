[Uno.Compiler.UxGenerated]
public partial class TabProfile: Fuse.Controls.Panel
{
    string _field_TextProfile;
    [global::Uno.UX.UXOriginSetter("SetTextProfile")]
    public string TextProfile
    {
        get { return _field_TextProfile; }
        set { SetTextProfile(value, null); }
    }
    public void SetTextProfile(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextProfile)
        {
            _field_TextProfile = value;
            OnPropertyChanged("TextProfile", origin);
        }
    }
    static TabProfile()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TabProfile()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Alignment = Fuse.Elements.Alignment.Right;
        this.Margin = float4(0f, 0f, 20f, 0f);
        this.ClipToBounds = false;
    }
}

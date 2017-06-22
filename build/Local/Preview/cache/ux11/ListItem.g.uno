[Uno.Compiler.UxGenerated]
public partial class ListItem: Fuse.Controls.Panel
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ListItem __parent;
        [Uno.WeakReference] internal readonly ListItem __parentInstance;
        public Template(ListItem parent, ListItem parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float> __self_Opacity_inst;
        global::Uno.UX.Property<string> temp_Url_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "imageHolder"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            __self_Opacity_inst = new gadden_FuseElementsElement_Opacity_Property(__self, __selector0);
            var temp = new global::Fuse.Drawing.ImageFill();
            temp_Url_inst = new gadden_FuseDrawingImageFill_Url_Property(temp, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("image");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Triggers.AddingAnimation();
            var temp3 = new global::Fuse.Animations.Change<float>(__self_Opacity_inst);
            var temp4 = new global::Fuse.Reactive.DataBinding(temp_Url_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Opacity = 1f;
            __self.Name = __selector2;
            temp2.Animators.Add(temp3);
            temp3.Value = 0f;
            temp3.Duration = 0.32;
            temp3.Delay = 0.16;
            temp.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
            temp.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            temp.MemoryPolicy = Fuse.Resources.MemoryPolicy.UnloadUnused;
            __g_nametable.Objects.Add(__self);
            __self.Fills.Add(temp);
            __self.Children.Add(temp2);
            __self.Bindings.Add(temp4);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Url";
        static global::Uno.UX.Selector __selector2 = "imageHolder";
    }
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static ListItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ListItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Title();
        var temp1 = new global::Fuse.Deferred();
        var imageHolder = new Template(this, this);
        var temp2 = new global::Fuse.Controls.Rectangle();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        this.Height = new Uno.UX.Size(204f, Uno.UX.Unit.Unspecified);
        temp.Value = "NY FÖRELÄSNING! HANNA OCH AMANDA";
        temp1.Templates.Add(imageHolder);
        temp2.Color = float4(0f, 0f, 0f, 1f);
        __g_nametable.This = this;
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}

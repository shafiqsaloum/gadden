[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("login", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        internal global::Fuse.Reactive.EventBinding temp_eb3;
        internal global::Fuse.Reactive.EventBinding temp_eb4;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb3",
            "temp_eb4",
            "login"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp = new global::Fuse.Reactive.Data("login");
            var temp1 = new global::Fuse.Reactive.Data("quickLogin");
            var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp3 = new global::Fuse.Controls.StackPanel();
            var temp4 = new global::Fuse.Controls.Rectangle();
            var temp5 = new global::Fuse.Effects.DropShadow();
            var temp6 = new global::Fuse.Drawing.Stroke();
            var temp7 = new global::Fuse.Controls.Text();
            var temp8 = new global::Fuse.Controls.Button();
            var temp_eb3 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
            var temp9 = new global::Fuse.Controls.Button();
            var temp_eb4 = new global::Fuse.Reactive.EventBinding(temp1, __g_nametable);
            var temp10 = new global::Fuse.Triggers.RemovingAnimation();
            var temp11 = new global::Fuse.Animations.Scale();
            __self.Color = float4(0.9333333f, 1f, 0.8666667f, 1f);
            __self.Name = __selector0;
            global::Fuse.Controls.NavigationControl.SetTransition(__self, Fuse.Controls.NavigationControlTransition.None);
            temp2.Code = "\n\t\tvar state = require(\"App/state.js\")\n\n\t\texports.login = function() {\n\t\t\tstate.setLoading(true)\n\t\t\tsetTimeout( function() {\n\t\t\t\t\tstate.setLogin( { name: \"einstein\" } )\n\t\t\t\t\tstate.setLoading(false)\n\t\t\t\t\trouter.goto(\"home\",{})\n\t\t\t\t}, 1000)\n\t\t}\n\n\t\texports.quickLogin = function() {\n\t\t\tstate.setLogin( { name: \"feynmann\" } )\n\t\t\trouter.goto(\"home\", {})\n\t\t}\n\t";
            temp2.LineNumber = 2;
            temp2.FileName = "Login.ux";
            temp3.Alignment = Fuse.Elements.Alignment.Center;
            temp3.Padding = float4(10f, 10f, 10f, 10f);
            temp3.Children.Add(temp4);
            temp3.Children.Add(temp7);
            temp3.Children.Add(temp8);
            temp3.Children.Add(temp9);
            temp4.CornerRadius = float4(5f, 5f, 5f, 5f);
            temp4.Color = float4(1f, 1f, 1f, 1f);
            temp4.Layer = Fuse.Layer.Background;
            temp4.Strokes.Add(temp6);
            temp4.Children.Add(temp5);
            temp6.Color = float4(0f, 0f, 0f, 1f);
            temp6.Width = 1f;
            temp7.Value = "Please log in";
            temp8.Text = "Log in";
            global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb3.OnEvent);
            temp8.Bindings.Add(temp_eb3);
            temp9.Text = "Quick";
            global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb4.OnEvent);
            temp9.Bindings.Add(temp_eb4);
            temp10.Animators.Add(temp11);
            temp11.Factor = 0.5f;
            temp11.Duration = 0.6;
            temp11.Easing = Fuse.Animations.Easing.QuadraticOut;
            __g_nametable.Objects.Add(temp_eb3);
            __g_nametable.Objects.Add(temp_eb4);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp2);
            __self.Children.Add(temp3);
            __self.Children.Add(temp10);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "login";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("chat", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        internal global::Fuse.Reactive.EventBinding temp_eb6;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb5",
            "temp_eb6",
            "chat"
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp3 = new global::Fuse.Reactive.Data("leave");
            var temp4 = new global::Fuse.Reactive.Data("viewProfile");
            var temp5 = new global::Fuse.Reactive.Data("contact");
            var temp = new global::Label();
            temp_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp6 = new global::Fuse.Reactive.Member(temp5, "name");
            var temp7 = new global::Fuse.Reactive.Data("contact");
            var temp1 = new global::Fuse.Controls.Rectangle();
            temp1_Color_inst = new gadden_FuseControlsShape_Color_Property(temp1, __selector1);
            var temp8 = new global::Fuse.Reactive.Member(temp7, "color");
            var temp9 = new global::Fuse.Reactive.Data("contact");
            var temp2 = new global::Label();
            temp2_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp10 = new global::Fuse.Reactive.Member(temp9, "name");
            var temp11 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp12 = new global::TitleBar();
            var temp13 = new global::Fuse.Controls.Button();
            var temp_eb5 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
            var temp14 = new global::Fuse.Controls.Panel();
            var temp15 = new global::Fuse.Controls.Text();
            var temp16 = new global::Fuse.Controls.Circle();
            var temp_eb6 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
            var temp17 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Controls.StackPanel();
            var temp19 = new global::Label();
            var temp20 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp21 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp22 = new global::Label();
            var temp23 = new global::Fuse.Controls.Grid();
            var temp24 = new global::Fuse.Controls.TextInput();
            var temp25 = new global::Fuse.Controls.Image();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector2;
            temp11.LineNumber = 2;
            temp11.FileName = "Chat.ux";
            temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Chat.js"));
            global::Fuse.Controls.DockPanel.SetDock(temp12, Fuse.Layouts.Dock.Top);
            temp12.Children.Add(temp13);
            temp12.Children.Add(temp14);
            temp12.Children.Add(temp);
            temp13.Text = "Back";
            temp13.Alignment = Fuse.Elements.Alignment.Left;
            global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb5.OnEvent);
            temp13.Bindings.Add(temp_eb5);
            temp14.Alignment = Fuse.Elements.Alignment.Right;
            global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb6.OnEvent);
            temp14.Children.Add(temp15);
            temp14.Children.Add(temp16);
            temp14.Bindings.Add(temp_eb6);
            temp15.Value = "Profile";
            temp15.FontSize = 12f;
            temp16.Color = float4(0.6666667f, 1f, 1f, 1f);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Bindings.Add(temp17);
            temp18.Alignment = Fuse.Elements.Alignment.Bottom;
            temp18.Children.Add(temp19);
            temp18.Children.Add(temp1);
            temp18.Children.Add(temp2);
            temp18.Children.Add(temp22);
            temp19.Value = "Chatting";
            temp19.Alignment = Fuse.Elements.Alignment.Center;
            temp1.Height = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
            temp1.Bindings.Add(temp20);
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.Bindings.Add(temp21);
            temp22.Value = "blah blah blah";
            temp22.Alignment = Fuse.Elements.Alignment.Right;
            temp23.Columns = "1*,auto";
            temp23.Color = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
            temp23.Padding = float4(4f, 4f, 4f, 4f);
            global::Fuse.Controls.DockPanel.SetDock(temp23, Fuse.Layouts.Dock.Bottom);
            temp23.Children.Add(temp24);
            temp23.Children.Add(temp25);
            temp25.Color = float4(0.98f, 0.99f, 1f, 1f);
            temp25.StretchMode = Fuse.Elements.StretchMode.PointPrecise;
            temp25.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/play.png"));
            __g_nametable.Objects.Add(temp_eb5);
            __g_nametable.Objects.Add(temp_eb6);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp11);
            __self.Children.Add(temp12);
            __self.Children.Add(temp18);
            __self.Children.Add(temp23);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "chat";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("home", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template3: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.DockPanel __parentInstance;
            public Template3(Template2 parent, Fuse.Controls.DockPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<float4> temp_Color_inst;
            global::Uno.UX.Property<string> temp1_Value_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb7;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
                "temp_eb7"
            };
            static Template3()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.StackPanel();
                var temp = new global::ListIcon();
                temp_Color_inst = new gadden_FuseControlsShape_Color_Property(temp, __selector0);
                var temp2 = new global::Fuse.Reactive.Data("color");
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                var temp1 = new global::Label();
                temp1_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp1, __selector1);
                var temp3 = new global::Fuse.Reactive.Data("name");
                var temp4 = new global::Fuse.Reactive.Data("view");
                var temp5 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp6 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp_eb7 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
                __self.Orientation = Fuse.Layouts.Orientation.Horizontal;
                __self.Padding = float4(10f, 10f, 10f, 10f);
                global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb7.OnEvent);
                temp.Bindings.Add(temp5);
                temp1.Bindings.Add(temp6);
                __g_nametable.Objects.Add(temp_eb7);
                __self.Children.Add(temp);
                __self.Children.Add(temp1);
                __self.Bindings.Add(temp_eb7);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Color";
            static global::Uno.UX.Selector __selector1 = "Value";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.DockPanel __parentInstance;
            public Template4(Template2 parent, Fuse.Controls.DockPanel parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> __self_Text_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb9;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
                "temp_eb9"
            };
            static Template4()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Button();
                __self_Text_inst = new gadden_FuseControlsButtonBase_Text_Property(__self, __selector0);
                var temp = new global::Fuse.Reactive.Data("");
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                var temp1 = new global::Fuse.Reactive.Data("goChat");
                var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp_eb9 = new global::Fuse.Reactive.EventBinding(temp1, __g_nametable);
                global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb9.OnEvent);
                __g_nametable.Objects.Add(temp_eb9);
                __self.Bindings.Add(temp2);
                __self.Bindings.Add(temp_eb9);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Text";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template5: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.DockPanel __parentInstance;
            public Template5(Template2 parent, Fuse.Controls.DockPanel parentInstance): base("list", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            [Uno.Compiler.UxGenerated]
            public partial class Template6: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template5 __parent;
                [Uno.WeakReference] internal readonly Fuse.Controls.Page __parentInstance;
                public Template6(Template5 parent, Fuse.Controls.Page parentInstance): base(null, false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                global::Uno.UX.Property<float4> temp_Color_inst;
                global::Uno.UX.Property<string> temp1_Value_inst;
                internal global::Fuse.Reactive.EventBinding temp_eb10;
                internal global::Fuse.Reactive.EventBinding temp_eb11;
                global::Uno.UX.NameTable __g_nametable;
                static string[] __g_static_nametable = new string[] {
                    "temp_eb10",
                    "temp_eb11"
                };
                static Template6()
                {
                }
                public override object New()
                {
                    var __self = new global::Fuse.Controls.DockPanel();
                    var temp2 = new global::Fuse.Reactive.Data("openChat");
                    __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                    var temp = new global::ListIcon();
                    temp_Color_inst = new gadden_FuseControlsShape_Color_Property(temp, __selector0);
                    var temp3 = new global::Fuse.Reactive.Data("color");
                    var temp1 = new global::Label();
                    temp1_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp1, __selector1);
                    var temp4 = new global::Fuse.Reactive.Data("name");
                    var temp5 = new global::Fuse.Reactive.Data("view");
                    var temp6 = new global::Fuse.Controls.Panel();
                    var temp_eb10 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
                    var temp7 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
                    var temp8 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
                    var temp9 = new global::Fuse.Controls.Image();
                    var temp_eb11 = new global::Fuse.Reactive.EventBinding(temp5, __g_nametable);
                    __self.Padding = float4(10f, 10f, 10f, 10f);
                    temp6.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
                    temp6.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
                    temp6.Layer = Fuse.Layer.Background;
                    global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb10.OnEvent);
                    temp6.Bindings.Add(temp_eb10);
                    temp.HitTestMode = Fuse.Elements.HitTestMode.None;
                    global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Left);
                    temp.Bindings.Add(temp7);
                    temp1.HitTestMode = Fuse.Elements.HitTestMode.None;
                    temp1.Bindings.Add(temp8);
                    temp9.Color = float4(0.8f, 0.8f, 0.8f, 1f);
                    temp9.Aspect = 1f;
                    temp9.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
                    global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Right);
                    global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb11.OnEvent);
                    temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/info.png"));
                    temp9.Bindings.Add(temp_eb11);
                    __g_nametable.Objects.Add(temp_eb10);
                    __g_nametable.Objects.Add(temp_eb11);
                    __self.Children.Add(temp6);
                    __self.Children.Add(temp);
                    __self.Children.Add(temp1);
                    __self.Children.Add(temp9);
                    return __self;
                }
                static global::Uno.UX.Selector __selector0 = "Color";
                static global::Uno.UX.Selector __selector1 = "Value";
            }
            global::Uno.UX.Property<object> temp_Items_inst;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
                "list"
            };
            static Template5()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Page();
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                var temp = new global::Fuse.Reactive.Each();
                temp_Items_inst = new gadden_FuseReactiveEach_Items_Property(temp, __selector0);
                var temp1 = new global::Fuse.Reactive.Data("contacts");
                var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
                var temp3 = new global::Fuse.Controls.StackPanel();
                var temp4 = new Template6(this, __self);
                var temp5 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
                __self.Name = __selector1;
                temp2.LineNumber = 2;
                temp2.FileName = "Contact/List.ux";
                temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Contact/list.js"));
                temp3.ItemSpacing = 10f;
                temp3.Margin = float4(10f, 10f, 10f, 10f);
                temp3.Children.Add(temp);
                temp.Templates.Add(temp4);
                temp.Bindings.Add(temp5);
                __g_nametable.Objects.Add(__self);
                __self.Children.Add(temp2);
                __self.Children.Add(temp3);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Items";
            static global::Uno.UX.Selector __selector1 = "list";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template6: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template2 __parent;
            [Uno.WeakReference] internal readonly Fuse.Controls.DockPanel __parentInstance;
            public Template6(Template2 parent, Fuse.Controls.DockPanel parentInstance): base("view", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Value_inst;
            global::Uno.UX.Property<float4> temp1_Color_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb12;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
                "temp_eb12",
                "view"
            };
            static Template6()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.DockPanel();
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                var temp2 = new global::Fuse.Reactive.Data("contact");
                var temp = new global::Label();
                temp_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp, __selector0);
                var temp3 = new global::Fuse.Reactive.Member(temp2, "name");
                var temp4 = new global::Fuse.Reactive.Data("contact");
                var temp1 = new global::Fuse.Controls.Circle();
                temp1_Color_inst = new gadden_FuseControlsShape_Color_Property(temp1, __selector1);
                var temp5 = new global::Fuse.Reactive.Member(temp4, "color");
                var temp6 = new global::Fuse.Reactive.Data("goBack");
                var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
                var temp8 = new global::Fuse.Controls.StackPanel();
                var temp9 = new global::Fuse.Controls.Panel();
                var temp10 = new global::Fuse.Controls.StackPanel();
                var temp11 = new global::Fuse.Controls.Text();
                var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp14 = new global::Fuse.Controls.Panel();
                var temp15 = new global::Fuse.Controls.Button();
                var temp_eb12 = new global::Fuse.Reactive.EventBinding(temp6, __g_nametable);
                __self.Name = __selector2;
                temp7.LineNumber = 2;
                temp7.FileName = "Contact/View.ux";
                temp7.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Contact/View.js"));
                temp8.Alignment = Fuse.Elements.Alignment.Center;
                temp8.Children.Add(temp9);
                temp8.Children.Add(temp14);
                temp8.Children.Add(temp15);
                temp9.Children.Add(temp10);
                temp9.Children.Add(temp1);
                temp10.Alignment = Fuse.Elements.Alignment.Center;
                temp10.Children.Add(temp11);
                temp10.Children.Add(temp);
                temp11.Value = "Profile View";
                temp.Bindings.Add(temp12);
                temp1.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
                temp1.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
                temp1.Alignment = Fuse.Elements.Alignment.Center;
                temp1.Bindings.Add(temp13);
                temp14.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
                temp15.Text = "Dismiss";
                global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb12.OnEvent);
                temp15.Bindings.Add(temp_eb12);
                __g_nametable.Objects.Add(temp_eb12);
                __g_nametable.Objects.Add(__self);
                __self.Children.Add(temp7);
                __self.Children.Add(temp8);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
            static global::Uno.UX.Selector __selector1 = "Color";
            static global::Uno.UX.Selector __selector2 = "view";
        }
        global::Uno.UX.Property<float> __self_Opacity_inst;
        global::Uno.UX.Property<object> temp_Items_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<object> temp2_Items_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        internal global::Fuse.Controls.Page channels;
        internal global::Fuse.Controls.Page list;
        internal global::Fuse.Controls.DockPanel channelView;
        internal global::Fuse.Reactive.EventBinding temp_eb8;
        internal global::Fuse.Controls.Page contacts;
        internal global::Fuse.Controls.Page settings;
        internal global::Fuse.Reactive.EventBinding temp_eb13;
        internal global::Fuse.Reactive.EventBinding temp_eb14;
        internal global::Fuse.Reactive.EventBinding temp_eb15;
        internal global::Fuse.Reactive.EventBinding temp_eb16;
        internal global::Fuse.Reactive.EventBinding temp_eb17;
        internal global::Fuse.Reactive.EventBinding temp_eb18;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "channels",
            "list",
            "channelView",
            "temp_eb8",
            "contacts",
            "settings",
            "temp_eb13",
            "temp_eb14",
            "temp_eb15",
            "temp_eb16",
            "temp_eb17",
            "temp_eb18",
            "home"
        };
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            __self_Opacity_inst = new gadden_FuseElementsElement_Opacity_Property(__self, __selector0);
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp = new global::Fuse.Reactive.Each();
            temp_Items_inst = new gadden_FuseReactiveEach_Items_Property(temp, __selector1);
            var temp4 = new global::Fuse.Reactive.Data("channels");
            var temp5 = new global::Fuse.Reactive.Data("channel");
            var temp1 = new global::Label();
            temp1_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp1, __selector2);
            var temp6 = new global::Fuse.Reactive.Member(temp5, "name");
            var temp7 = new global::Fuse.Reactive.Data("goBack");
            var temp8 = new global::Fuse.Reactive.Data("channel");
            var temp2 = new global::Fuse.Reactive.Each();
            temp2_Items_inst = new gadden_FuseReactiveEach_Items_Property(temp2, __selector1);
            var temp9 = new global::Fuse.Reactive.Member(temp8, "members");
            var temp10 = new global::Fuse.Reactive.Data("loginUser");
            var temp3 = new global::Fuse.Controls.Text();
            temp3_Value_inst = new gadden_FuseControlsTextControl_Value_Property(temp3, __selector2);
            var temp11 = new global::Fuse.Reactive.Member(temp10, "name");
            var temp12 = new global::Fuse.Reactive.Data("logout");
            var temp13 = new global::Fuse.Reactive.Data("goBack");
            var temp14 = new global::Fuse.Reactive.Data("openMenu");
            var temp15 = new global::Fuse.Reactive.Data("goChannels");
            var temp16 = new global::Fuse.Reactive.Data("goContacts");
            var temp17 = new global::Fuse.Reactive.Data("goSettings");
            var temp18 = new global::Fuse.Navigation.EnteringAnimation();
            var temp19 = new global::Fuse.Animations.Move();
            var temp20 = new global::Fuse.Navigation.ExitingAnimation();
            var temp21 = new global::Fuse.Animations.Scale();
            var temp22 = new global::Fuse.Animations.Move();
            var temp23 = new global::Fuse.Triggers.RemovingAnimation();
            var temp24 = new global::Fuse.Animations.Scale();
            var temp25 = new global::Fuse.Animations.Change<float>(__self_Opacity_inst);
            var temp26 = new global::Fuse.Controls.PageControl();
            var channels = new global::Fuse.Controls.Page();
            var temp27 = new global::Fuse.Controls.PageControl();
            var list = new global::Fuse.Controls.Page();
            var temp28 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp29 = new global::Fuse.Controls.StackPanel();
            var temp30 = new Template3(this, __self);
            var temp31 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var channelView = new global::Fuse.Controls.DockPanel();
            var temp32 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp33 = new global::Fuse.Controls.StackPanel();
            var temp34 = new global::Fuse.Controls.Text();
            var temp35 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp36 = new global::Fuse.Controls.Button();
            var temp_eb8 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
            var temp37 = new global::Fuse.Controls.StackPanel();
            var temp38 = new global::Fuse.Controls.Text();
            var temp39 = new Template4(this, __self);
            var temp40 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var contacts = new global::Fuse.Controls.Page();
            var temp41 = new global::Fuse.Controls.Navigator();
            var list1 = new Template5(this, __self);
            var view = new Template6(this, __self);
            var settings = new global::Fuse.Controls.Page();
            var temp42 = new global::Fuse.Controls.Panel();
            var temp43 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp44 = new global::Fuse.Controls.StackPanel();
            var temp45 = new global::Fuse.Controls.Text();
            var temp46 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp47 = new global::Fuse.Controls.Button();
            var temp_eb13 = new global::Fuse.Reactive.EventBinding(temp12, __g_nametable);
            var temp48 = new global::TitleBar();
            var temp49 = new global::Fuse.Navigation.WhileCanGoBack();
            var temp50 = new global::Fuse.Controls.Button();
            var temp_eb14 = new global::Fuse.Reactive.EventBinding(temp13, __g_nametable);
            var temp51 = new global::Fuse.Navigation.WhileCanGoBack();
            var temp52 = new global::Fuse.Controls.Image();
            var temp_eb15 = new global::Fuse.Reactive.EventBinding(temp14, __g_nametable);
            var temp53 = new global::Label();
            var temp54 = new global::Fuse.Controls.Grid();
            var temp55 = new global::NavIcon();
            var temp_eb16 = new global::Fuse.Reactive.EventBinding(temp15, __g_nametable);
            var temp56 = new global::NavIcon();
            var temp_eb17 = new global::Fuse.Reactive.EventBinding(temp16, __g_nametable);
            var temp57 = new global::NavIcon();
            var temp_eb18 = new global::Fuse.Reactive.EventBinding(temp17, __g_nametable);
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.ClipToBounds = true;
            __self.Name = __selector3;
            global::Fuse.Controls.NavigationControl.SetTransition(__self, Fuse.Controls.NavigationControlTransition.None);
            temp18.Animators.Add(temp19);
            temp19.X = 1f;
            temp19.Duration = 0.3;
            temp19.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp19.Easing = Fuse.Animations.Easing.CubicOut;
            temp20.Animators.Add(temp21);
            temp20.Animators.Add(temp22);
            temp21.Factor = 0.8f;
            temp21.Duration = 0.1;
            temp22.X = -1f;
            temp22.Duration = 0.4;
            temp22.RelativeTo = Fuse.TranslationModes.ParentSize;
            temp22.Easing = Fuse.Animations.Easing.CubicIn;
            temp23.Animators.Add(temp24);
            temp23.Animators.Add(temp25);
            temp24.Factor = 2f;
            temp24.Duration = 0.2;
            temp25.Value = 0f;
            temp25.Duration = 0.4;
            temp26.Children.Add(channels);
            temp26.Children.Add(contacts);
            temp26.Children.Add(settings);
            channels.Name = __selector4;
            channels.Children.Add(temp27);
            temp27.Interaction = Fuse.Controls.NavigationControlInteraction.None;
            temp27.Children.Add(list);
            temp27.Children.Add(channelView);
            list.Name = __selector5;
            list.Children.Add(temp28);
            list.Children.Add(temp29);
            temp28.LineNumber = 2;
            temp28.FileName = "Channel/List.ux";
            temp28.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Channel/List.js"));
            temp29.ItemSpacing = 10f;
            temp29.Children.Add(temp);
            temp.Templates.Add(temp30);
            temp.Bindings.Add(temp31);
            channelView.Name = __selector6;
            channelView.Children.Add(temp32);
            channelView.Children.Add(temp33);
            channelView.Children.Add(temp37);
            temp32.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\")\n\t\tvar channels = require(\"App/channels.js\")\n\n\t\texports.channel = channelView.Parameter.flatMap( function(param) {\n\t\t\tvar newChannel = Observable({});\n\t\t\tchannels.lookupChannel(param, function(channel) {\n\t\t\t\tnewChannel.value = channel\n\t\t\t});\n\t\t\treturn newChannel;\n\t\t});\n\n\t\texports.goChat = function(args) {\n\t\t\trouter.push( \"chat\",  args.data )\n\t\t}\n\t";
            temp32.LineNumber = 2;
            temp32.FileName = "Channel/View.ux";
            temp33.Alignment = Fuse.Elements.Alignment.Center;
            temp33.Children.Add(temp34);
            temp33.Children.Add(temp1);
            temp33.Children.Add(temp36);
            temp34.Value = "Now in channel: ";
            temp1.Bindings.Add(temp35);
            temp36.Text = "Leave";
            global::Fuse.Gestures.Clicked.AddHandler(temp36, temp_eb8.OnEvent);
            temp36.Bindings.Add(temp_eb8);
            temp37.Color = float4(0.8f, 0.8f, 0.8f, 1f);
            temp37.Padding = float4(10f, 10f, 10f, 10f);
            global::Fuse.Controls.DockPanel.SetDock(temp37, Fuse.Layouts.Dock.Right);
            temp37.Children.Add(temp38);
            temp37.Children.Add(temp2);
            temp38.Value = "In Channel:";
            temp2.Templates.Add(temp39);
            temp2.Bindings.Add(temp40);
            contacts.Name = __selector7;
            contacts.Children.Add(temp41);
            temp41.Templates.Add(list1);
            temp41.Templates.Add(view);
            settings.Name = __selector8;
            settings.Children.Add(temp42);
            temp42.Children.Add(temp43);
            temp42.Children.Add(temp44);
            temp43.Code = "\n\t\tvar state = require(\"App/state.js\")\n\n\t\texports.logout = function(e) {\n\t\t\tstate.logout()\n\t\t\trouter.goto(\"login\");\n\t\t}\n\t\texports.loginUser = state.loginUser\n\t";
            temp43.LineNumber = 2;
            temp43.FileName = "Settings.ux";
            temp44.Children.Add(temp45);
            temp44.Children.Add(temp3);
            temp44.Children.Add(temp47);
            temp45.Value = "Welcome home";
            temp3.Bindings.Add(temp46);
            temp47.Text = "Log out";
            global::Fuse.Gestures.Clicked.AddHandler(temp47, temp_eb13.OnEvent);
            temp47.Bindings.Add(temp_eb13);
            temp48.Color = float4(0.6666667f, 0.9333333f, 0.9333333f, 1f);
            temp48.Padding = float4(4f, 4f, 4f, 4f);
            global::Fuse.Controls.DockPanel.SetDock(temp48, Fuse.Layouts.Dock.Top);
            global::Fuse.Navigation.Navigation.SetNavigationNavigation(temp48, __parent.router);
            temp48.Children.Add(temp49);
            temp48.Children.Add(temp51);
            temp48.Children.Add(temp53);
            temp49.Nodes.Add(temp50);
            temp50.Text = "Back";
            temp50.Alignment = Fuse.Elements.Alignment.Left;
            global::Fuse.Gestures.Clicked.AddHandler(temp50, temp_eb14.OnEvent);
            temp50.Bindings.Add(temp_eb14);
            temp51.Invert = true;
            temp51.Nodes.Add(temp52);
            temp52.Color = float4(0.4f, 0.4f, 0.5f, 1f);
            temp52.Alignment = Fuse.Elements.Alignment.Left;
            global::Fuse.Gestures.Clicked.AddHandler(temp52, temp_eb15.OnEvent);
            temp52.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/menu.png"));
            temp52.Bindings.Add(temp_eb15);
            temp53.Value = "Navigator Demo";
            temp53.Alignment = Fuse.Elements.Alignment.Center;
            temp54.RowCount = 1;
            temp54.ColumnCount = 3;
            temp54.Color = float4(0.6666667f, 0.9333333f, 0.9333333f, 1f);
            temp54.Padding = float4(4f, 4f, 4f, 4f);
            global::Fuse.Controls.DockPanel.SetDock(temp54, Fuse.Layouts.Dock.Bottom);
            temp54.Children.Add(temp55);
            temp54.Children.Add(temp56);
            temp54.Children.Add(temp57);
            temp55.Title = "Channels";
            global::Fuse.Gestures.Clicked.AddHandler(temp55, temp_eb16.OnEvent);
            temp55.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/calendar.png"));
            temp55.Bindings.Add(temp_eb16);
            temp56.Title = "Contacts";
            global::Fuse.Gestures.Clicked.AddHandler(temp56, temp_eb17.OnEvent);
            temp56.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/user.png"));
            temp56.Bindings.Add(temp_eb17);
            temp57.Title = "Settings";
            global::Fuse.Gestures.Clicked.AddHandler(temp57, temp_eb18.OnEvent);
            temp57.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/settings.png"));
            temp57.Bindings.Add(temp_eb18);
            __g_nametable.Objects.Add(channels);
            __g_nametable.Objects.Add(list);
            __g_nametable.Objects.Add(channelView);
            __g_nametable.Objects.Add(temp_eb8);
            __g_nametable.Objects.Add(contacts);
            __g_nametable.Objects.Add(settings);
            __g_nametable.Objects.Add(temp_eb13);
            __g_nametable.Objects.Add(temp_eb14);
            __g_nametable.Objects.Add(temp_eb15);
            __g_nametable.Objects.Add(temp_eb16);
            __g_nametable.Objects.Add(temp_eb17);
            __g_nametable.Objects.Add(temp_eb18);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp18);
            __self.Children.Add(temp20);
            __self.Children.Add(temp23);
            __self.Children.Add(temp26);
            __self.Children.Add(temp48);
            __self.Children.Add(temp54);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Items";
        static global::Uno.UX.Selector __selector2 = "Value";
        static global::Uno.UX.Selector __selector3 = "home";
        static global::Uno.UX.Selector __selector4 = "channels";
        static global::Uno.UX.Selector __selector5 = "list";
        static global::Uno.UX.Selector __selector6 = "view";
        static global::Uno.UX.Selector __selector7 = "contacts";
        static global::Uno.UX.Selector __selector8 = "settings";
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<float> MainNavPanel_Opacity_inst;
    internal global::Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Panel BlockPanel;
    internal global::Fuse.Controls.EdgeNavigator TheEdge;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Controls.Panel MainNavPanel;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "BlockPanel",
        "TheEdge",
        "temp_eb0",
        "temp_eb1",
        "temp_eb2",
        "MainNavPanel"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp3 = new global::Fuse.Reactive.FuseJS.Http();
        var temp4 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp5 = new global::Fuse.Drawing.BrushConverter();
        var temp6 = new global::Fuse.Triggers.BusyTaskModule();
        var temp7 = new global::Fuse.FileSystem.FileSystemModule();
        var temp8 = new global::Fuse.Storage.StorageModule();
        var temp9 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp10 = new global::Polyfills.Window.WindowModule();
        var temp11 = new global::FuseJS.Globals();
        var temp12 = new global::FuseJS.Lifecycle();
        var temp13 = new global::FuseJS.Environment();
        var temp14 = new global::FuseJS.Base64();
        var temp15 = new global::FuseJS.Bundle();
        var temp16 = new global::FuseJS.FileReaderImpl();
        var temp17 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new gadden_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp18 = new global::Fuse.Reactive.Data("loading");
        var temp19 = new global::Fuse.Reactive.Data("goChannels");
        var temp20 = new global::Fuse.Reactive.Data("goContacts");
        var temp21 = new global::Fuse.Reactive.Data("goSettings");
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new gadden_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
        var temp22 = new global::Fuse.Reactive.Data("login");
        MainNavPanel = new global::Fuse.Controls.Panel();
        MainNavPanel_Opacity_inst = new gadden_FuseElementsElement_Opacity_Property(MainNavPanel, __selector1);
        router = new global::Fuse.Navigation.Router();
        var temp23 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp24 = new global::Fuse.Controls.ClientPanel();
        BlockPanel = new global::Fuse.Controls.Panel();
        var temp25 = new global::Fuse.Controls.Circle();
        var temp26 = new global::Fuse.Drawing.Stroke();
        var temp27 = new global::Fuse.Triggers.WhileVisible();
        var temp28 = new global::Fuse.Animations.Spin();
        var temp29 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp18, __g_nametable, Fuse.Reactive.BindingMode.Default);
        TheEdge = new global::Fuse.Controls.EdgeNavigator();
        var temp30 = new global::Fuse.Controls.StackPanel();
        var temp31 = new global::Fuse.Controls.Image();
        var temp32 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp19, __g_nametable);
        var temp33 = new global::Fuse.Controls.Button();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp20, __g_nametable);
        var temp34 = new global::Fuse.Controls.Button();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp21, __g_nametable);
        var temp35 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp22, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp36 = new global::Fuse.Navigation.DeactivatingAnimation();
        var temp37 = new global::Fuse.Animations.Change<float>(MainNavPanel_Opacity_inst);
        var temp38 = new global::Fuse.Animations.Scale();
        var temp39 = new global::Fuse.Animations.Move();
        var temp40 = new global::Fuse.Controls.Navigator();
        var login = new Template(this, this);
        var chat = new Template1(this, this);
        var home = new Template2(this, this);
        router.Name = __selector2;
        temp23.Code = "\n\t\tvar state = require(\"App/state.js\")\n\t\texports.loading = state.loading\n\t\texports.login = state.login\n\n\t\texports.goBack = function() {\n\t\t\trouter.goBack()\n\t\t}\n\t\texports.goChannels = function() {\n\t\t\trouter.goto( \"home\", {}, \"channels\", {}, \"list\", {} )\n\t\t\tTheEdge.dismiss()\n\t\t}\n\t\texports.goContacts = function() {\n\t\t\trouter.goto( \"home\", {}, \"contacts\", {}, \"list\", {} )\n\t\t\tTheEdge.dismiss()\n\t\t}\n\t\texports.goSettings = function() {\n\t\t\trouter.goto( \"home\", {}, \"settings\", {} )\n\t\t\tTheEdge.dismiss()\n\t\t}\n\n\t\texports.openMenu = function() {\n\t\t\tconsole.log( \"Goto Menu\" )\n\t\t\tTheEdge.open( \"Left\" )\n\t\t}\n\n\t\t//never true in this demo, but shows how to navigate to login if the user hasn't done so yet.\n\t\tif (exports.login.value == false) {\n\t\t\trouter.goto( \"login\", {} )\n\t\t}\n\t";
        temp23.LineNumber = 10;
        temp23.FileName = "MainView.ux";
        temp24.Children.Add(temp);
        temp24.Children.Add(TheEdge);
        temp.Nodes.Add(BlockPanel);
        temp.Bindings.Add(temp29);
        BlockPanel.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        BlockPanel.Layer = Fuse.Layer.Overlay;
        BlockPanel.Name = __selector3;
        BlockPanel.Children.Add(temp25);
        temp25.StartAngleDegrees = 0f;
        temp25.LengthAngleDegrees = 90f;
        temp25.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp25.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp25.Alignment = Fuse.Elements.Alignment.Center;
        temp25.Strokes.Add(temp26);
        temp25.Children.Add(temp27);
        temp26.Color = float4(0.5f, 0.55f, 0.65f, 1f);
        temp26.Width = 10f;
        temp27.Animators.Add(temp28);
        temp28.Frequency = 0.5;
        TheEdge.Name = __selector4;
        TheEdge.Children.Add(temp1);
        TheEdge.Children.Add(MainNavPanel);
        temp1.Nodes.Add(temp30);
        temp1.Bindings.Add(temp35);
        temp30.ItemSpacing = 10f;
        temp30.Color = float4(0.7333333f, 0.6666667f, 0.8f, 1f);
        temp30.Padding = float4(20f, 20f, 20f, 20f);
        global::Fuse.Navigation.EdgeNavigation.SetEdge(temp30, Fuse.Navigation.NavigationEdge.Left);
        temp30.Children.Add(temp31);
        temp30.Children.Add(temp32);
        temp30.Children.Add(temp33);
        temp30.Children.Add(temp34);
        temp31.StretchSizing = Fuse.Elements.StretchSizing.Zero;
        temp31.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/zen.png"));
        temp32.Text = "Channels";
        global::Fuse.Gestures.Clicked.AddHandler(temp32, temp_eb0.OnEvent);
        temp32.Bindings.Add(temp_eb0);
        temp33.Text = "Contacts";
        global::Fuse.Gestures.Clicked.AddHandler(temp33, temp_eb1.OnEvent);
        temp33.Bindings.Add(temp_eb1);
        temp34.Text = "Settings";
        global::Fuse.Gestures.Clicked.AddHandler(temp34, temp_eb2.OnEvent);
        temp34.Bindings.Add(temp_eb2);
        MainNavPanel.Name = __selector5;
        MainNavPanel.Children.Add(temp36);
        MainNavPanel.Children.Add(temp40);
        temp36.Animators.Add(temp37);
        temp36.Animators.Add(temp38);
        temp36.Animators.Add(temp39);
        temp37.Value = 0.5f;
        temp38.Factor = 0.8f;
        temp39.X = 0.1f;
        temp39.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp40.DefaultPath = "home";
        temp40.Templates.Add(login);
        temp40.Templates.Add(chat);
        temp40.Templates.Add(home);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(BlockPanel);
        __g_nametable.Objects.Add(TheEdge);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(MainNavPanel);
        this.Children.Add(router);
        this.Children.Add(temp23);
        this.Children.Add(temp24);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "router";
    static global::Uno.UX.Selector __selector3 = "BlockPanel";
    static global::Uno.UX.Selector __selector4 = "TheEdge";
    static global::Uno.UX.Selector __selector5 = "MainNavPanel";
}
